/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176119
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            {
                var_19 ^= ((/* implicit */short) max((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_18)))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_15))))));
                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_0)))) ? (min((var_7), (((/* implicit */long long int) var_14)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_3)))))));
                var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_14))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_9))))) : (max((min((var_7), (((/* implicit */long long int) var_14)))), (((/* implicit */long long int) var_5))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) var_15);
}
