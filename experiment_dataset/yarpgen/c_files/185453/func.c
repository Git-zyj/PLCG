/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185453
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
    var_19 = ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned short)65532)) : (16776192))))) ? (((var_17) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-80))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-78))));
    var_20 |= ((/* implicit */short) var_7);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((var_1) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-22))) : (((arr_0 [i_0 + 2]) - (max((arr_5 [i_0 + 3] [i_0 + 3]), (((/* implicit */long long int) var_14))))))));
                arr_7 [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) var_18))));
                var_21 += ((/* implicit */_Bool) ((long long int) 16776177));
            }
        } 
    } 
}
