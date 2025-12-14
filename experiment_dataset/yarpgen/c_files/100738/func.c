/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100738
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
    var_16 = ((/* implicit */unsigned int) var_1);
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 24; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_1] [i_1] = ((/* implicit */long long int) arr_1 [i_0 + 1] [5LL]);
                arr_5 [i_1] [i_1] = ((/* implicit */long long int) arr_1 [9U] [11U]);
                arr_6 [i_0] [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_2 [i_0] [i_0 - 1] [22U])) ? (arr_2 [i_0] [i_0 + 1] [i_1]) : (arr_2 [i_0 + 1] [i_0 - 1] [13U]))) > (arr_2 [i_0] [i_0 + 1] [i_0 + 1])));
                arr_7 [i_0] [i_1] = ((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])) > (((arr_2 [i_0 + 1] [i_1] [i_1]) & (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0 + 1] [i_0])))));
            }
        } 
    } 
    var_17 &= ((/* implicit */long long int) var_9);
    var_18 = ((/* implicit */unsigned int) max((var_18), (((var_12) - (((/* implicit */unsigned int) var_5))))));
}
