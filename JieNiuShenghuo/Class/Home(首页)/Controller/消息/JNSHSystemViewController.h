//
//  JNSHSystemViewController.h
//  JieNiuShenghuo
//
//  Created by rongfeng on 2017/9/6.
//  Copyright © 2017年 China Zhou. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JNSHSystemMessageModel.h"

@interface JNSHSystemViewController : UIViewController

@property(nonatomic,strong)JNSHSystemMessageModel *model;

@property(nonatomic,strong)NSArray *messageList;

@end
