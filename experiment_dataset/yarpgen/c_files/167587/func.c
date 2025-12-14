/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167587
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
    var_11 = ((/* implicit */unsigned int) ((unsigned char) max((((/* implicit */long long int) var_6)), (var_4))));
    var_12 *= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) max((var_9), (((/* implicit */unsigned short) (unsigned char)159)))))) != (var_1)));
    var_13 = ((/* implicit */unsigned char) min((((/* implicit */long long int) var_3)), (((var_4) + (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) var_1)) : (var_4)))))));
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-77)), ((unsigned char)199)))) > (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_3))))));
}
