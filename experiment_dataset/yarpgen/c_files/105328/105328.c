/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105328
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_14 |= (((((~var_8) ? ((var_11 ? (arr_5 [i_2]) : (arr_8 [i_0] [i_0] [i_0]))) : (((~(arr_14 [i_0] [i_1] [i_2] [2] [i_3] [i_1])))))) - (((~(!-1302721022))))));
                                var_15 &= (min((((arr_10 [i_0] [i_1] [i_2] [i_3] [i_3] [i_3]) ? (arr_10 [5] [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_10 [9] [i_0] [i_1] [i_2] [7] [i_4]))), (arr_10 [i_3] [i_3] [11] [i_3] [i_4] [i_0])));
                            }
                        }
                    }
                    var_16 = (min((((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0]))), (((arr_2 [i_0]) * (arr_2 [i_2])))));
                    arr_15 [i_0] [i_0] [i_0] [i_0] &= (max((min(-1302721019, var_3)), (arr_4 [i_0] [i_0])));
                }
            }
        }
    }
    var_17 = (((((((var_11 ? var_0 : var_13))) ? ((max(var_0, var_2))) : var_1)) + (((var_2 - (min(var_10, var_0)))))));
    #pragma endscop
}
