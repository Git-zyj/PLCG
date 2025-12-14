/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179759
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_10 [i_0 - 1] [i_1] [i_2] [i_2] [i_1] [i_3] = (max((arr_5 [i_2] [i_2] [i_0]), (max((arr_6 [i_0 - 1] [i_1] [1]), (arr_3 [i_0 - 2])))));
                            arr_11 [i_0 + 2] [i_1] [19] [19] [i_3] [i_1] = (max(1924447607, 1));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                arr_20 [i_4] [i_1] [i_4] [i_5] [i_4] = (max(((max((arr_5 [i_0 + 2] [i_0 + 2] [i_4]), (arr_5 [i_0 + 2] [i_1] [i_4])))), (((~(arr_1 [i_5]))))));
                                arr_21 [i_0] [i_1] [i_4] [i_0] [i_0] = ((((arr_15 [i_0] [i_0] [i_4] [i_0 - 1]) ? (arr_5 [i_0 - 1] [i_0 - 1] [i_4]) : (((arr_17 [i_0] [i_1] [1] [1]) ? (arr_7 [i_0] [i_0]) : (arr_16 [i_6] [i_4]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 24;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 24;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 24;i_11 += 1)
                        {
                            {
                                var_20 = (max(var_20, ((max((arr_32 [i_7] [i_8]), (arr_22 [i_7]))))));
                                var_21 = (((((1616960671 ? 23 : (arr_27 [i_7] [i_7])))) ? (arr_29 [i_7] [i_8] [i_9]) : (arr_36 [i_7] [i_8] [i_8] [i_10] [i_11])));
                                arr_37 [1] [23] [i_9] [23] = ((((max((arr_36 [i_7] [i_7] [i_9] [i_10] [i_11]), (arr_36 [16] [i_8] [i_9] [i_10] [i_11])))) ? (((arr_36 [i_7] [i_7] [i_9] [i_9] [i_8]) ? (arr_36 [i_7] [i_8] [i_9] [i_10] [i_8]) : (arr_36 [i_7] [i_8] [i_9] [i_9] [i_11]))) : (arr_36 [i_9] [i_9] [i_9] [i_8] [i_7])));
                                arr_38 [i_7] [i_7] [i_7] [i_7] = (arr_34 [i_10] [i_8] [i_10] [i_10] [22] [0]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 24;i_13 += 1)
                        {
                            {
                                var_22 = ((max(1616960653, 1616960671)));
                                var_23 -= (arr_23 [5]);
                                arr_44 [i_7] [i_8] [i_12] [i_13] = max((arr_23 [i_7]), (arr_31 [i_13] [i_9] [i_8] [i_7]));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 24;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 24;i_15 += 1)
                        {
                            {
                                arr_49 [i_8] [i_8] [i_14] [i_8] = arr_24 [i_15];
                                arr_50 [i_7] [13] [i_8] [i_14] [i_15] = max((arr_22 [i_7]), (arr_47 [i_7] [i_8] [i_8] [i_9] [i_14] [5]));
                                var_24 = (max((arr_48 [i_7] [i_8] [i_9] [i_14] [i_15]), (arr_34 [i_7] [i_7] [i_9] [i_14] [17] [i_8])));
                                var_25 = (max((arr_47 [i_7] [i_8] [i_8] [i_8] [i_15] [i_8]), (arr_47 [i_7] [i_7] [i_9] [i_14] [i_15] [i_8])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
