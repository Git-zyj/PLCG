/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176457
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
    var_15 = ((/* implicit */unsigned int) var_0);
    var_16 &= ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */long long int) max((443007822U), (2047U)))) == (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) var_12)) : (var_3))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_9 [i_1] [2U] [i_2] [i_1] = ((/* implicit */unsigned int) arr_3 [i_0]);
                    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) arr_8 [i_0] [i_1]))));
                }
            } 
        } 
    } 
}
