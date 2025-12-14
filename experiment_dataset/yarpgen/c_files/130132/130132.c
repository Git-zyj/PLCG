/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130132
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_10 [i_1] [i_1] [i_1] [i_3] = var_10;
                            var_12 = (1 ? var_8 : ((((var_10 > var_8) != ((var_9 ? 1 : 57827))))));
                            arr_11 [i_0] [i_1] [i_2] [i_1] [i_1] [i_3] = ((~((((!(arr_2 [i_2] [i_1] [i_2]))) ? (arr_5 [2] [i_0 - 2] [i_2]) : (!57827)))));
                            arr_12 [i_0] [i_0] [i_2] [i_0] [i_1] = (arr_1 [i_3]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 0;i_4 += 1)
                {
                    for (int i_5 = 4; i_5 < 14;i_5 += 1)
                    {
                        {
                            arr_18 [i_1] [i_4 + 1] [i_4] [i_4] = (max((arr_15 [i_4] [i_5 - 4]), (arr_17 [i_1])));
                            var_13 = var_7;
                            arr_19 [i_1] = var_4;
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 19;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 18;i_9 += 1)
                    {
                        {
                            var_14 = (((((min(var_0, (arr_20 [i_6] [i_7])))) ? ((((arr_28 [i_9]) && 4493799857063804935))) : (arr_25 [i_7] [i_9 - 1] [i_9 - 1] [i_9]))));
                            var_15 = ((((-0 >> ((((-(arr_21 [i_7]))) - 2948010966)))) << (arr_27 [i_9 - 1] [6] [i_9 + 1] [i_9 - 1])));
                            arr_29 [i_6] [i_9] [i_6] [i_8] = (((((((((arr_22 [i_6]) * var_0))) ? (arr_28 [i_9 - 1]) : 738228330))) ? -1923693002518959269 : var_10));
                            var_16 = (!102);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_10 = 1; i_10 < 17;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 19;i_11 += 1)
                    {
                        {
                            var_17 = (arr_32 [1] [1] [i_10 + 1]);
                            arr_36 [i_7] [i_7] [i_10] [i_11] |= ((4493799857063804935 ? ((~((((arr_28 [i_10 - 1]) >= var_2))))) : -123));
                            var_18 = (min(var_18, var_2));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_12 = 1; i_12 < 13;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 17;i_13 += 1)
        {
            for (int i_14 = 1; i_14 < 16;i_14 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_15 = 1; i_15 < 14;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 1;i_16 += 1)
                        {
                            {
                                arr_50 [i_12 + 1] [i_12 + 2] [i_12 + 3] [i_12 + 2] [i_14] [i_12 + 2] [i_16] = (((((-(var_7 * var_8)))) ? (arr_25 [i_12] [i_13] [12] [1]) : ((((!var_2) || ((!(arr_30 [i_12] [14] [i_15] [i_15]))))))));
                                arr_51 [15] [i_13] = (((!(arr_49 [i_13] [i_13] [i_14 - 1] [i_13] [1]))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 17;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 17;i_18 += 1)
                        {
                            {
                                arr_56 [i_12] [i_18] [i_14 - 1] [i_14 + 1] [i_13] = (min(((var_11 ? (((var_10 ? 1 : 22725))) : (arr_20 [i_12 + 1] [i_12 + 1]))), var_2));
                                arr_57 [i_17] [i_18] [i_17] = ((var_10 >> ((-(arr_24 [i_13] [i_13] [i_13])))));
                                arr_58 [14] [i_13] [i_18] [i_17] [i_18] [i_17] [i_14 - 1] = (!(((var_4 ? (arr_22 [i_14 + 1]) : (arr_22 [i_14 + 1])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_19 = 0; i_19 < 17;i_19 += 1)
                    {
                        for (int i_20 = 0; i_20 < 17;i_20 += 1)
                        {
                            {
                                arr_64 [i_19] [i_13] [i_14] [i_13] [i_20] [i_13] = (arr_61 [i_20] [i_19] [i_14] [5] [i_12] [i_12]);
                                arr_65 [i_19] = ((!((max(var_8, (arr_24 [i_13] [i_14 + 1] [i_19]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_21 = 0; i_21 < 10;i_21 += 1)
    {
        for (int i_22 = 1; i_22 < 6;i_22 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_23 = 3; i_23 < 9;i_23 += 1)
                {
                    for (int i_24 = 3; i_24 < 6;i_24 += 1)
                    {
                        for (int i_25 = 0; i_25 < 1;i_25 += 1)
                        {
                            {
                                arr_79 [i_25] [i_22] [i_24] [7] [i_22] [i_21] = var_4;
                                var_19 = 1;
                                var_20 = ((~((var_10 << (-29 + 47)))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_26 = 1; i_26 < 1;i_26 += 1)
                {
                    for (int i_27 = 2; i_27 < 9;i_27 += 1)
                    {
                        {
                            var_21 *= 1742249051;
                            arr_88 [i_21] [i_21] [i_27] [i_21] &= (+((5779930240263564681 ? (arr_31 [i_22 + 1] [i_26] [i_26 - 1]) : var_11)));
                            var_22 = (((min(var_1, (((var_9 ? (arr_37 [i_22]) : (arr_32 [5] [5] [i_27]))))))) ? ((min((arr_17 [i_22]), (((arr_53 [i_21] [i_26] [i_27 + 1]) ? (-32767 - 1) : var_9))))) : (((var_10 ? var_2 : var_8))));
                            var_23 = ((~(((var_6 > (arr_84 [i_21] [i_22 + 2] [i_27 + 1] [i_27] [i_22 + 2]))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
