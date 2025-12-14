/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105305
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, var_3));

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_12 *= (1 + 1);
                    var_13 = 0;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_16 [i_4 + 1] [i_3] [20] [i_0] = -28;
                                arr_17 [i_4] [i_2] [i_3] [i_2] [i_1] [i_1] [i_0] = ((~(!-32)));
                                var_14 = (min(var_14, ((~(((arr_3 [5] [i_0]) ? var_8 : -32))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_15 = (arr_4 [i_1] [i_5] [6]);
                                arr_22 [i_0 - 1] [i_1] [i_2] [i_5] [10] = var_8;
                                arr_23 [14] [i_0 - 2] [i_2] [i_5] [i_6 - 1] = -28;
                            }
                        }
                    }
                    var_16 = (min((min(((var_0 ? var_8 : (arr_14 [21] [i_1] [7] [i_1] [i_0 + 1] [i_0]))), (min(var_4, 31)))), (min((arr_14 [i_0] [i_0] [i_2] [i_2] [i_0] [i_2]), (~53)))));
                }
            }
        }
        var_17 = var_7;
        arr_24 [i_0] = -3989206384170682325;
        var_18 = ((-(((arr_18 [i_0] [i_0 - 2] [i_0] [i_0 + 1]) ? (arr_3 [i_0] [i_0]) : (arr_3 [i_0 + 1] [i_0 - 2])))));
    }
    for (int i_7 = 0; i_7 < 20;i_7 += 1)
    {
        var_19 -= (((((47 ? 53 : 211))) >= (arr_28 [i_7])));
        arr_29 [i_7] &= (((!(((var_6 ? (arr_6 [i_7] [i_7]) : var_1))))));
    }
    #pragma endscop
}
