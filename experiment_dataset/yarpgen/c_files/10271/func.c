/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10271
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
    var_13 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_11) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)103)))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_7))))) : (var_11)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_3)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1))))) ? (max((((/* implicit */int) (_Bool)1)), (2147483647))) : ((+(((/* implicit */int) var_5))))))));
    var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) var_7))));
    var_15 *= ((((/* implicit */_Bool) var_0)) ? (min((((/* implicit */unsigned long long int) min((var_2), (var_9)))), (max((((/* implicit */unsigned long long int) (-2147483647 - 1))), (18446744073709551615ULL))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-27783)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_0))))) : (max((17440755011158291647ULL), (((/* implicit */unsigned long long int) var_2)))))));
}
