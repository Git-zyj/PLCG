/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100170
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (((((81 ? 1753053544 : 3493010184989077279)) * (max(-3493010184989077280, var_2)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_15 = ((7415 ? var_12 : 7415));
                            var_16 = var_2;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            arr_15 [i_0] [i_5] [i_4] [i_5] [i_5] [9] = (max(((var_11 ? 1 : var_5)), 127));
                            arr_16 [i_0] [i_0] [i_5] [i_5] [i_5] [i_5] = ((7107 ? (((((1 ? 1 : var_5)) >= (arr_13 [i_0] [i_4 + 2] [i_4] [i_4 + 2] [1])))) : (((~var_9) ? (arr_8 [i_4 + 3] [i_4 - 1] [i_4 - 1]) : var_12))));
                            arr_17 [i_0] [i_1] [i_0] [i_4] [i_1] [i_5] = (max(((((arr_6 [i_4 - 1] [i_1] [i_4 - 2] [i_5]) ? 2147483646 : var_14))), ((-118 ? 7415 : -3493010184989077279))));
                        }
                    }
                }
                var_17 = ((((~(arr_0 [i_0]))) >= ((-2147483630 ? (arr_14 [i_0] [i_0] [i_0] [i_1] [i_1]) : var_7))));
            }
        }
    }
    var_18 = (max(var_18, (((var_3 ? (((((4294967272 ? var_3 : var_8))) ? ((4198482508 ? var_6 : var_9)) : var_14)) : (max(var_14, (max(-2147483647, var_14)))))))));
    var_19 = (min(var_19, var_13));
    var_20 = var_3;

    /* vectorizable */
    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {
        var_21 = (((arr_12 [i_6] [i_6] [i_6] [i_6]) / var_4));
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 12;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 12;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 1;i_9 += 1)
                {
                    {
                        arr_28 [i_6] [i_7] [i_8] [i_6] [i_7] [i_6] = var_0;
                        arr_29 [i_6] [i_7] [i_8] [7] = (arr_25 [i_9 - 1] [i_9] [i_9 - 1] [i_9 - 1] [i_9] [i_9]);

                        for (int i_10 = 1; i_10 < 10;i_10 += 1)
                        {
                            arr_34 [5] [i_8] [i_7] [i_6] = (((arr_23 [i_10 - 1] [i_10]) ? (arr_20 [i_6] [i_7]) : (arr_6 [i_7] [i_7] [i_8] [i_9])));
                            var_22 = (((((var_4 ? var_5 : -3493010184989077280))) ? (arr_30 [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_9 - 1]) : (((arr_20 [i_8] [i_10 + 2]) ? 1 : var_12))));
                            arr_35 [i_6] [i_7] [i_7] [i_8] [i_9 - 1] [i_10 - 1] = (1 - var_2);
                            var_23 = (arr_21 [i_9 - 1]);
                            arr_36 [i_7] [i_8] [i_9 - 1] = (arr_23 [11] [i_7]);
                        }
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            var_24 += (((arr_22 [i_9 - 1] [i_9 - 1]) ? var_2 : (arr_22 [i_9 - 1] [i_9 - 1])));
                            arr_40 [i_6] [i_7] [i_8] [i_9] [i_11] = var_0;
                            arr_41 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = -1540337839327553390;
                            arr_42 [i_6] [i_7] [i_7] [i_8] [i_9] [i_11] = ((-756155665 <= (((var_0 ? (arr_18 [i_8]) : 2147483647)))));
                        }
                        for (int i_12 = 0; i_12 < 12;i_12 += 1)
                        {
                            arr_46 [i_6] [i_12] [i_8] [i_12] [i_8] = (((((3493010184989077286 / (arr_14 [i_6] [i_7] [i_8] [i_9] [i_9])))) ? (((~(arr_27 [i_6] [i_7] [i_7])))) : ((var_8 ? (arr_13 [i_6] [i_7] [i_6] [i_9 - 1] [i_12]) : 17912236649010895880))));
                            var_25 = (((arr_43 [i_6] [i_7] [i_9 - 1] [i_9 - 1] [i_9 - 1]) | 4095));
                            var_26 = (arr_8 [i_9] [i_9] [i_9 - 1]);
                            var_27 = ((~(arr_31 [i_9] [i_9 - 1] [i_9 - 1] [i_9])));
                            arr_47 [i_9] [i_7] [i_8] [i_12] [11] [i_9 - 1] [i_7] = 18446744073709551615;
                        }
                        for (int i_13 = 3; i_13 < 11;i_13 += 1)
                        {
                            arr_50 [i_6] [i_8] [i_6] [i_6] [i_6] &= arr_27 [i_9 - 1] [i_9] [i_9];
                            arr_51 [i_6] [i_13] = 24759;
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_14 = 1; i_14 < 15;i_14 += 1)
    {
        arr_54 [i_14] = (arr_1 [i_14 + 2]);
        arr_55 [4] [i_14] = var_2;
        var_28 = ((!(arr_3 [i_14 + 3])));
    }
    #pragma endscop
}
