/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176136
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_11 = (~(min(515018110, 255)));
                            var_12 = arr_8 [i_0] [i_1] [i_2] [i_3] [i_0];
                            arr_9 [2] [i_0] [4] [i_2] [i_0] = ((max(((1 << (var_2 + 5464678462781829839))), ((max(var_5, (arr_4 [i_0])))))));
                            var_13 = var_6;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 10;i_5 += 1)
                    {
                        {
                            var_14 = (((((min((arr_10 [i_0] [i_0] [i_0] [2]), (arr_11 [i_1 + 1] [i_1] [i_1]))))) | (max(25, (arr_0 [i_1] [i_1 - 1])))));
                            var_15 = ((-50291 / ((max((arr_5 [i_5 + 1] [i_4] [i_1 + 3]), (arr_5 [i_0] [i_0] [i_0]))))));
                            var_16 = max(((+(((arr_2 [i_0]) ? var_1 : var_10)))), ((~(min(32, var_1)))));
                            arr_15 [i_0] [6] [i_0] [i_0] |= ((-(~var_5)));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 17;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 17;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 17;i_10 += 1)
                        {
                            {
                                arr_33 [i_10] |= var_0;
                                arr_34 [i_8] [i_9] [i_8] [i_7] [5] = (arr_16 [i_10]);
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_11 = 1; i_11 < 15;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        for (int i_13 = 1; i_13 < 14;i_13 += 1)
                        {
                            {
                                arr_45 [i_7] |= ((!(((~(arr_41 [6] [i_7] [i_13 + 2] [i_13 + 2] [i_13]))))));
                                var_17 = (arr_21 [i_6] [i_6]);
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_14 = 0; i_14 < 10;i_14 += 1)
    {
        for (int i_15 = 4; i_15 < 6;i_15 += 1)
        {
            for (int i_16 = 3; i_16 < 8;i_16 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 10;i_17 += 1)
                    {
                        for (int i_18 = 1; i_18 < 7;i_18 += 1)
                        {
                            {
                                var_18 = ((~((max((arr_25 [i_16]), (arr_3 [i_14] [i_17]))))));
                                arr_56 [i_18] [i_15] [i_15] [3] [i_15] = var_7;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_19 = 0; i_19 < 1;i_19 += 1)
                    {
                        for (int i_20 = 1; i_20 < 8;i_20 += 1)
                        {
                            {
                                arr_61 [i_14] [i_15 + 3] [i_16] [2] [i_14] |= ((((min((arr_58 [i_14] [4] [i_20 + 1] [i_19] [i_14] [i_14]), (arr_29 [i_14] [12] [i_20 + 2] [i_14] [i_16 - 2] [i_14])))) ? ((7479413785524530355 ? 2746 : 18589)) : ((-515018112 ? 8927 : 50291))));
                                var_19 = (-2147483647 - 1);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_21 = 0; i_21 < 1;i_21 += 1)
                    {
                        for (int i_22 = 0; i_22 < 1;i_22 += 1)
                        {
                            {
                                var_20 = (max(((~(arr_55 [i_15 + 2] [i_15 + 2] [i_15 + 2] [i_15] [i_15]))), (((var_1 >= ((var_6 ? 0 : var_10)))))));
                                var_21 = (max((arr_19 [i_16]), var_3));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
