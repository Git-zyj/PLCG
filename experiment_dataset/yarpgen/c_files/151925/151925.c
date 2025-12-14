/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151925
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_8 [0] [i_2] [i_2] [i_0] &= (arr_6 [10] [i_2] [i_2]);
                            arr_9 [i_0] [i_0] [7] [i_3] = (((~var_3) ? ((var_7 ? (arr_5 [i_0 - 2] [i_2 + 2] [i_3 - 1] [i_0 - 1]) : var_4)) : ((~(arr_5 [10] [i_2 + 1] [i_3 + 1] [i_0 + 1])))));
                            var_17 = (((((max(125, 226)))) * var_6));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 3; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 16;i_6 += 1)
                        {
                            {
                                var_18 = (max(var_18, ((max(114, (max(((-(arr_13 [i_0 + 1] [17] [i_0 + 1]))), ((min((arr_15 [i_6] [i_1] [i_1] [i_0]), 195))))))))));
                                var_19 = (max(var_19, (max((arr_17 [i_6] [14] [14] [i_1 + 3]), (arr_17 [i_6] [18] [18] [i_1 + 3])))));
                                var_20 = (max(var_20, (((+(max((arr_6 [i_1] [16] [i_5 + 1]), var_12)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 20;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 19;i_8 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_9 = 3; i_9 < 20;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 19;i_10 += 1)
                    {
                        {
                            var_21 = (min(var_21, var_10));
                            var_22 = ((-((max((arr_22 [i_7]), (arr_22 [i_7]))))));
                            var_23 = (min(var_23, var_9));
                            var_24 += (+(min(((4252264619 ? (arr_20 [i_7]) : var_10)), (arr_26 [21] [i_8] [21]))));
                        }
                    }
                }
                arr_30 [i_7] [i_7] = (max((arr_29 [i_7] [i_8] [i_8 + 4]), (min((arr_27 [i_7] [i_8] [i_7] [i_8 + 4]), (arr_27 [i_7 + 1] [16] [i_7] [17])))));
                /* LoopNest 3 */
                for (int i_11 = 2; i_11 < 22;i_11 += 1)
                {
                    for (int i_12 = 2; i_12 < 21;i_12 += 1)
                    {
                        for (int i_13 = 1; i_13 < 22;i_13 += 1)
                        {
                            {
                                var_25 = var_1;
                                var_26 &= (min(((((~-100) * (((!(arr_38 [i_12]))))))), (((arr_25 [i_7 + 1] [i_13 - 1] [i_8 + 3]) >> (((~var_7) - 10278578314857398054))))));
                                var_27 -= arr_24 [i_12];
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_14 = 3; i_14 < 23;i_14 += 1)
    {
        for (int i_15 = 1; i_15 < 20;i_15 += 1)
        {
            for (int i_16 = 3; i_16 < 23;i_16 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_17 = 1; i_17 < 22;i_17 += 1)
                    {
                        for (int i_18 = 4; i_18 < 21;i_18 += 1)
                        {
                            {
                                var_28 = ((var_11 ^ (((!(arr_43 [i_16 - 2] [i_15 + 4] [i_15]))))));
                                var_29 = 2343576499;
                                arr_51 [i_14] [i_18] [i_14] [i_14] [18] [18] &= (~((255 & ((var_10 ? (arr_39 [1]) : var_7)))));
                                arr_52 [i_17 + 2] [i_15] [i_15] [i_14] = (arr_49 [10] [i_17] [i_16] [i_16] [10]);
                                arr_53 [i_15] [i_15] [12] [i_15] [i_15] [5] = (((arr_41 [i_14 + 1]) ? var_13 : (arr_43 [i_18] [4] [i_16])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_19 = 1; i_19 < 22;i_19 += 1)
                    {
                        for (int i_20 = 1; i_20 < 20;i_20 += 1)
                        {
                            {
                                arr_59 [i_15] = (max((((!(arr_54 [i_14] [i_16] [i_15] [i_19] [i_20] [i_20])))), (max((arr_54 [8] [i_15] [i_15] [21] [8] [i_19]), var_10))));
                                var_30 = (min(var_30, var_1));
                                var_31 -= ((-(arr_54 [i_16] [i_15 + 2] [2] [i_15 + 1] [i_20 + 2] [i_16])));
                            }
                        }
                    }
                    arr_60 [i_14] [i_15] = (((((arr_44 [i_15]) <= ((((arr_57 [i_14 - 2] [i_15] [1] [i_15] [i_14] [i_14] [4]) ? var_6 : 2343576499))))) || (~var_14)));
                    /* LoopNest 2 */
                    for (int i_21 = 3; i_21 < 23;i_21 += 1)
                    {
                        for (int i_22 = 1; i_22 < 23;i_22 += 1)
                        {
                            {
                                arr_68 [i_14] [i_14] [i_14] [i_14] [21] [i_15] [14] = var_12;
                                var_32 = (((!var_6) / 255));
                            }
                        }
                    }
                    arr_69 [i_15] = ((((((arr_40 [i_14 - 2]) ? (arr_40 [i_14 - 1]) : (arr_40 [i_14 - 1])))) ^ (max(var_16, (max(var_5, 4294967283))))));
                }
            }
        }
    }
    #pragma endscop
}
