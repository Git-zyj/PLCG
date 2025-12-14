/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120158
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
    var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) (_Bool)1))));
    var_17 &= ((/* implicit */signed char) var_9);
    var_18 -= ((/* implicit */signed char) ((((((((/* implicit */_Bool) ((var_1) / (((/* implicit */long long int) var_0))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) var_15)), (var_10))))) : (max((var_1), (((/* implicit */long long int) (_Bool)1)))))) + (9223372036854775807LL))) << (((/* implicit */int) var_15))));
    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) ((signed char) var_6))) : (((/* implicit */int) var_15))))) ? ((~(((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)0)), (var_12)))))) : (((((/* implicit */_Bool) var_12)) ? (min((-190760316), (-1142036366))) : (((/* implicit */int) var_14)))))))));
    var_20 ^= ((/* implicit */_Bool) var_2);
}
