/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124325
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
    var_17 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned int) var_14)), (var_10))) | (((/* implicit */unsigned int) ((int) var_4)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_8), (((/* implicit */short) var_15)))))) : (var_5)))));
    var_18 = ((/* implicit */short) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((var_11) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (unsigned short)31964)))))))), (max((var_2), (((/* implicit */unsigned int) max(((unsigned short)47708), (((/* implicit */unsigned short) var_8)))))))));
}
