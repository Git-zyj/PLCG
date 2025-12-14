/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170516
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((-var_2 ? 8192 : (var_9 * 0)))) ? var_4 : var_7));
    var_12 = (min(var_3, -var_0));
    var_13 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_14 *= (((~18446744073709551609) ? (((~var_0) ? var_9 : (((min(1, 575)))))) : (arr_4 [i_4])));
                                var_15 = (max(var_15, var_8));
                                var_16 = var_2;
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        arr_17 [i_0] [i_0] [i_0] [i_2] [i_2] [12] = (arr_8 [i_0] [i_1 - 1] [i_0] [i_2] [i_1 - 1] [i_2]);
                        arr_18 [8] [i_2] = (((arr_15 [i_0] [i_1 + 1]) & (arr_15 [1] [i_1 + 1])));
                        arr_19 [i_5] [i_2] [i_1] [i_1] [i_0] = (((((-(max(var_2, var_10))))) ? (max((arr_9 [i_1 - 1] [i_1 - 1] [i_2] [i_2] [i_2] [i_1 - 1]), var_9)) : (1 >= 169)));
                    }

                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        arr_23 [i_0] [i_0] [i_1] [i_1] [i_2] [i_6] = (((arr_10 [i_0]) ? (arr_16 [i_0] [i_2]) : (arr_22 [i_0] [11] [i_2] [i_2] [i_6])));
                        var_17 = (((((~(arr_0 [i_0])))) ? ((65535 ? 403639200072773092 : 248)) : (arr_3 [14] [i_0])));
                        var_18 = ((((arr_22 [i_0] [i_6] [i_2] [1] [i_0]) > (((arr_14 [i_6] [9] [i_1] [i_0]) ? (arr_10 [i_2]) : var_9)))) ? -var_7 : ((max(((~(arr_1 [i_0]))), (arr_10 [i_2])))));
                    }
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        var_19 += ((-var_3 ? 122 : ((((arr_20 [i_1 - 1] [7] [i_1] [i_1] [i_1] [i_1 - 1]) <= (arr_22 [i_1 + 1] [i_1 - 1] [i_1 + 1] [4] [i_1 + 1]))))));
                        arr_26 [i_0] [7] [7] [i_0] [i_7] [i_7] = (max((((238 && (((var_1 ? (arr_10 [i_1]) : (arr_4 [i_7]))))))), ((var_7 | (max((arr_1 [i_1]), (arr_3 [i_7] [i_2])))))));
                        arr_27 [i_7] [i_2] = ((-(max(((~(arr_13 [i_7]))), var_0))));
                    }
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        arr_30 [6] [6] [6] [i_0] = (((125 ^ 10) || 2783660147));
                        arr_31 [i_0] [i_0] = ((((~((max(var_4, 63198))))) > var_6));
                    }
                    var_20 = (max(var_20, var_5));
                    arr_32 [i_0] [i_1] [i_0] [i_2] = ((((arr_22 [13] [i_1 + 1] [i_1 - 1] [i_1] [i_1]) <= var_3)) ? var_9 : (((((arr_1 [i_1 + 1]) <= (arr_1 [i_1 - 1]))))));
                }
            }
        }
    }
    #pragma endscop
}
