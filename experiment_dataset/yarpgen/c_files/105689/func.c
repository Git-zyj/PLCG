/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105689
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
    var_19 = ((/* implicit */unsigned long long int) var_11);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 15; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_1 + 2] [i_1] = ((/* implicit */unsigned long long int) min((max((-6868291007960905652LL), (8149987954413515000LL))), (((/* implicit */long long int) var_6))));
                    var_20 = ((/* implicit */_Bool) var_9);
                    arr_9 [i_1] = ((/* implicit */signed char) arr_1 [i_1]);
                    var_21 = ((/* implicit */signed char) max((arr_5 [i_1 + 3] [i_2] [i_2]), (((((/* implicit */_Bool) arr_3 [i_1 + 3] [i_2])) ? (arr_3 [i_1 - 1] [i_2]) : (arr_3 [i_1 + 3] [i_1 + 1])))));
                    var_22 = ((/* implicit */short) max((8149987954413514999LL), (((/* implicit */long long int) -1815186497))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) var_18);
}
