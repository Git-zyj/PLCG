/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14435
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
    var_13 &= ((((/* implicit */_Bool) var_2)) ? (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10))))), (((((/* implicit */_Bool) var_0)) ? (var_6) : (var_6))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))));
    var_14 ^= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) : (min((((/* implicit */unsigned int) var_11)), (var_12)))))) & (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (-9223372036854775792LL)))));
    var_15 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_11))));
}
