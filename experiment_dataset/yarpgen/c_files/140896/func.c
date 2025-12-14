/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140896
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
    var_16 &= ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) var_4))))), (max((((/* implicit */long long int) max((var_13), (((/* implicit */unsigned int) var_9))))), (((((/* implicit */_Bool) var_3)) ? (var_1) : (((/* implicit */long long int) var_11))))))));
    var_17 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_12))))), (var_7)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (max((var_5), (min((var_11), (((/* implicit */unsigned int) var_2))))))));
}
