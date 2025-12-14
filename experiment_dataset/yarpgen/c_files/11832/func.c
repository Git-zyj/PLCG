/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11832
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
    var_19 = ((/* implicit */_Bool) var_13);
    var_20 = ((/* implicit */unsigned int) var_11);
    var_21 = ((/* implicit */unsigned long long int) var_8);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned int i_1 = 4; i_1 < 22; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    var_22 *= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned int) arr_8 [i_0] [13U] [i_1] [i_2])), (0U))) != (((/* implicit */unsigned int) ((int) 1116290937)))))), (min((arr_6 [i_0] [i_1 + 1] [i_2]), (((/* implicit */unsigned long long int) 0U))))));
                    arr_12 [i_0] [i_0] [i_1] [(short)0] &= ((/* implicit */int) min((16264369723806622690ULL), (min((((/* implicit */unsigned long long int) var_15)), (((unsigned long long int) var_2))))));
                }
            } 
        } 
    } 
}
