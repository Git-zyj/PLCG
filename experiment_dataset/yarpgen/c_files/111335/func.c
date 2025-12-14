/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111335
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) 7U)) ? (((/* implicit */unsigned int) ((arr_7 [i_0] [i_1] [i_2]) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_2])) : (((/* implicit */int) arr_7 [i_0] [i_1] [17U]))))) : (max(((-(4294967295U))), (((/* implicit */unsigned int) max((((/* implicit */int) arr_7 [i_2] [i_1] [i_0])), (2147483647))))))));
                    var_20 ^= ((/* implicit */unsigned int) arr_5 [i_0] [(short)18] [i_0] [i_0]);
                    var_21 = ((/* implicit */unsigned int) min(((-(-2147483647))), (2147483647)));
                    arr_8 [i_0] [i_1] [i_1] = ((/* implicit */short) 2147483647);
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned int) var_0);
    var_23 = var_9;
}
