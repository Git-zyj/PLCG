/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128089
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_18 = ((/* implicit */unsigned char) var_3);
    var_19 = ((((/* implicit */long long int) min((((/* implicit */int) var_17)), (((((/* implicit */int) var_6)) + (((/* implicit */int) (_Bool)1))))))) / (max(((((_Bool)1) ? (((/* implicit */long long int) var_15)) : (32767LL))), (((/* implicit */long long int) (-(var_5)))))));
    var_20 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) (unsigned char)0))))));
    var_21 = ((/* implicit */unsigned int) max((var_21), (((((((/* implicit */_Bool) max((var_12), (((/* implicit */unsigned char) var_4))))) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) * (((var_1) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)65513))))) : (max((((/* implicit */unsigned int) var_1)), (4294967295U)))))))));
}
