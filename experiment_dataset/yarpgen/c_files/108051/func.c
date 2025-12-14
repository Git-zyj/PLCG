/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108051
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
    var_19 |= ((int) var_9);
    var_20 = ((/* implicit */int) min((var_8), ((signed char)64)));
    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) ((unsigned short) var_9)))) ? (max((var_11), (((/* implicit */unsigned int) var_14)))) : (min((min((var_11), (((/* implicit */unsigned int) (_Bool)0)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_17)))))))));
    var_22 = ((/* implicit */long long int) min((var_5), (var_4)));
}
