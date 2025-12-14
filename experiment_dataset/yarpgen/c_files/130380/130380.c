/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130380
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 23;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_13 [18] [i_1] = (arr_1 [i_4 + 1]);
                                arr_14 [16] [i_3] [i_1] [1] [i_1] [i_1] [15] = (arr_9 [i_4] [7] [i_0] [i_1] [i_0]);
                                arr_15 [i_4 + 2] [i_2] [i_2] [i_2] [4] &= (max((arr_3 [i_2 + 1] [i_2]), (min((arr_3 [i_2 - 2] [i_2]), (arr_3 [i_2 + 1] [i_2])))));
                                var_16 = (max((((arr_6 [i_2] [23] [i_2 - 2] [i_2]) << (27 - 5))), ((-(arr_4 [i_2 + 1] [i_2 + 1] [i_2 - 2] [i_1])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                arr_21 [i_0] [i_1] [i_2] [i_5] [i_5] [i_6] = (arr_9 [i_0] [1] [i_2] [i_5] [i_6]);
                                arr_22 [i_0] [i_1] [i_0] [i_5] [6] [i_6] &= (((((~var_14) ? ((((arr_20 [2] [i_2] [i_0] [10] [i_2] [i_2] [i_0]) && (arr_11 [i_2 + 1] [i_2] [i_2] [i_5] [i_6])))) : (arr_11 [i_0] [i_6] [i_5 - 1] [i_6] [i_6]))) << (((arr_20 [i_0] [i_1] [i_2 + 1] [i_1] [i_5] [i_6] [i_6]) - 66))));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_7 = 1; i_7 < 23;i_7 += 1)
                {
                    var_17 &= ((var_6 && (arr_5 [i_0] [i_7 - 1] [i_7])));
                    arr_25 [i_0] [i_0] [20] &= ((-var_11 ? ((((!(arr_4 [i_0] [i_1] [i_7] [6]))))) : (arr_0 [i_7 - 1])));
                    arr_26 [i_0] [i_1] [i_1] = (((arr_18 [i_7] [i_7] [i_7] [i_7 + 1] [i_7 - 1]) ? (arr_9 [i_0] [19] [i_0] [i_0] [i_0]) : 112));
                }
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 24;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 24;i_9 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_10 = 1; i_10 < 22;i_10 += 1)
                            {
                                arr_33 [i_1] [i_1] [i_8] [17] [i_10] = ((~(arr_24 [i_10 + 2] [i_10 + 2] [i_10 + 1])));
                                var_18 = (max(var_18, ((((arr_20 [i_1] [i_1] [i_1] [i_1] [i_10] [10] [i_10 - 1]) <= 29790)))));
                                var_19 = (~87);
                                var_20 &= (((arr_20 [i_10] [i_10 + 2] [i_10 + 1] [i_10] [i_10] [20] [10]) + (((var_13 < (arr_30 [14] [i_1] [i_1] [i_1] [18]))))));
                            }
                            arr_34 [19] [i_1] [i_0] = var_3;

                            for (int i_11 = 1; i_11 < 20;i_11 += 1)
                            {
                                var_21 = 1;
                                arr_38 [i_9] [i_1] = (((((((arr_27 [i_8] [i_1] [i_0]) && 702869095)))) ? ((min((!17565), (arr_32 [i_0] [i_1] [i_0] [i_9] [i_11 + 2] [5] [i_0])))) : (((!(arr_27 [i_0] [i_1] [i_1]))))));
                            }
                            for (int i_12 = 1; i_12 < 22;i_12 += 1)
                            {
                                var_22 = arr_12 [i_12 + 1] [i_12 + 1] [i_8] [i_9] [i_12];
                                arr_41 [i_1] [i_1] [i_12 + 2] [i_9] [i_1] = min(1020, -7281);
                                arr_42 [i_1] [22] [i_8] [i_9] [i_12] = (max((max(var_12, (arr_36 [i_0] [6] [i_0] [i_12 + 2] [i_12 + 1] [i_0]))), (arr_12 [i_0] [i_1] [i_1] [i_1] [i_9])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
