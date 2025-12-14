/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189224
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
    var_11 = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_7) : (var_0)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) : (((unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) (~(((((/* implicit */long long int) var_9)) ^ (var_1))))))));
    var_12 = ((/* implicit */int) min((((/* implicit */long long int) min((((/* implicit */int) ((short) var_1))), (((((/* implicit */int) var_8)) * (((/* implicit */int) var_4))))))), (var_5)));
    var_13 = ((/* implicit */int) var_3);
    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) var_3))) ? (((/* implicit */long long int) var_7)) : (max((var_1), (((/* implicit */long long int) var_7))))));
    var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) var_1))));
}
