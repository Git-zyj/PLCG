/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147037
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
    var_15 ^= ((/* implicit */unsigned int) var_7);
    var_16 = ((/* implicit */signed char) max((max((((/* implicit */unsigned int) ((signed char) var_12))), (((var_8) & (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))), (((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) var_12))) | (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)65529)) : (((/* implicit */int) var_14)))))))));
    var_17 ^= ((/* implicit */int) ((max(((!(((/* implicit */_Bool) (unsigned short)2047)))), (var_13))) ? (((/* implicit */unsigned long long int) ((var_9) ? (((/* implicit */int) var_2)) : (min((((/* implicit */int) var_6)), (var_3)))))) : (((unsigned long long int) (unsigned short)2047))));
    var_18 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned char) var_10)))));
}
