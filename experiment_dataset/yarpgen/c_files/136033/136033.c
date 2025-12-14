/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136033
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((min((var_10 > var_6), (min(var_9, var_7))))) ? (max((min(var_3, var_7)), var_0)) : var_1));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    var_12 *= (((((~((10150 ? (arr_2 [2] [2] [i_0]) : var_8))))) ? (((arr_4 [i_2 + 3]) ? 44675 : 837503220)) : 1));
                    var_13 = (max(var_9, ((((!(arr_3 [i_1] [i_1]))) ? ((26658 ? (arr_2 [i_1] [i_1] [i_2]) : var_5)) : ((((var_6 < (arr_1 [i_0] [i_1])))))))));
                    arr_6 [i_1] = 1;
                    var_14 = (max((arr_4 [i_0]), ((((arr_0 [i_2 - 1]) - 4510)))));
                }
            }
        }
    }
    var_15 = var_1;
    var_16 = (((((((max(var_1, var_6))) ? var_7 : ((var_7 ? 7762354235923107585 : var_7))))) && ((max(-79, var_4)))));
    var_17 = (min((!79), var_4));
    #pragma endscop
}
