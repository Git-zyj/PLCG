/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126209
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 24;i_2 += 1)
            {
                {
                    var_10 = (max(((((((var_5 ? var_1 : var_7))) && ((max(var_6, var_3)))))), (arr_2 [i_1 - 1])));
                    var_11 = (max(var_11, var_3));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_11 [i_0] [19] [19] [i_3] = ((var_5 / ((-(arr_1 [i_0])))));
                        var_12 = (((((!(arr_7 [i_2 - 1] [2] [i_0])))) * (arr_0 [i_1])));
                        arr_12 [1] [1] [4] [i_3] = var_3;
                    }
                    var_13 = (max(2621363155, 667969732));
                }
            }
        }
    }

    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        var_14 = (((((max((arr_14 [i_4]), (arr_7 [i_4] [i_4] [i_4]))))) * (((arr_4 [i_4]) & (var_4 - var_1)))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                {
                    arr_22 [i_4] [i_5] [i_6] &= ((~(((((max(var_0, (arr_10 [i_4] [11] [11] [i_5] [i_6])))) > (arr_1 [i_5]))))));
                    var_15 = (arr_6 [i_4]);
                }
            }
        }
        var_16 = (arr_7 [i_4] [i_4] [13]);
        var_17 = (max(var_17, ((((((arr_16 [i_4]) + (max(var_9, var_4)))) - ((((max(var_6, var_4))) ? (arr_18 [i_4] [i_4] [i_4] [i_4]) : (arr_14 [i_4]))))))));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 20;i_7 += 1)
    {
        var_18 &= (((arr_7 [i_7] [i_7] [i_7]) * var_4));
        var_19 += (arr_23 [4]);
    }
    for (int i_8 = 0; i_8 < 0;i_8 += 1)
    {
        arr_29 [i_8] = (((((-(arr_28 [i_8 + 1])))) && (((-(arr_24 [i_8] [i_8 + 1]))))));
        var_20 = (max(var_20, (((var_5 * (((!var_4) & var_0)))))));
        var_21 = (arr_24 [i_8 + 1] [i_8]);
    }
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 15;i_9 += 1)
    {
        for (int i_10 = 2; i_10 < 12;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 15;i_11 += 1)
            {
                {
                    arr_39 [i_9] [i_10 + 2] [i_10 + 2] = (((max((arr_23 [i_10 + 2]), (arr_23 [i_10 + 1]))) ? (((((arr_0 [i_11]) ? (arr_9 [i_9]) : (arr_13 [i_11]))) | (arr_30 [i_10 - 1]))) : var_9));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 15;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 1;i_13 += 1)
                        {
                            {
                                arr_45 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] = (max((~var_4), ((((var_1 ? var_7 : (arr_38 [i_10] [i_10] [i_10] [11]))) * (var_8 <= var_4)))));
                                var_22 = (max(var_22, ((max((max(((((arr_17 [i_9] [i_9] [i_9]) | var_3))), var_8)), (-49 != -7800744903957789579))))));
                            }
                        }
                    }
                    arr_46 [i_9] [i_11] [i_11] = (min((max((((arr_10 [i_11] [i_11] [i_11] [i_11] [0]) / var_6)), (var_4 & var_3))), (((arr_33 [i_9]) ? var_2 : (arr_23 [i_9])))));
                }
            }
        }
    }
    #pragma endscop
}
