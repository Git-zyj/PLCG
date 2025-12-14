/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181368
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
    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_5)) ? (1509602672U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)38)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) ((16777215U) < (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) << (((min((var_9), (((/* implicit */long long int) 2785364623U)))) - (2785364606LL)))))) : (var_4)));
    var_13 &= ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((var_9) - (((/* implicit */long long int) ((/* implicit */int) var_5)))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_2))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            {
                arr_7 [i_1] = ((/* implicit */short) 1509602672U);
                arr_8 [i_0 + 1] [i_0] [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) 1032192)) ? (((/* implicit */unsigned int) arr_6 [i_0] [i_0 + 1])) : (0U))) - (((/* implicit */unsigned int) arr_6 [(_Bool)1] [i_0 + 1]))));
                var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) && (min((arr_3 [i_0] [i_1 + 2] [i_0]), (((_Bool) arr_2 [i_0] [i_1])))))))));
            }
        } 
    } 
}
