/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182384
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
    var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) var_11))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 23; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) max((((((/* implicit */int) (!(((/* implicit */_Bool) 4294967279U))))) >> (((((/* implicit */int) arr_6 [i_1 + 1] [i_1] [i_1])) + (26554))))), (((/* implicit */int) (!(((/* implicit */_Bool) 12U)))))));
                arr_8 [i_0] = ((var_9) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1 - 1] [i_1] [i_1 - 1]))) : (var_2));
                var_20 = ((/* implicit */unsigned long long int) (~(max((arr_4 [i_1 - 1] [i_1] [11U]), (((/* implicit */int) var_17))))));
                var_21 = ((/* implicit */short) (~((+(((/* implicit */int) var_0))))));
                var_22 = ((/* implicit */short) (~(max((((/* implicit */unsigned int) var_16)), (max((4294967283U), (((/* implicit */unsigned int) (_Bool)0))))))));
            }
        } 
    } 
}
