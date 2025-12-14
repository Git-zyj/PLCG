/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185822
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += ((~((((((var_6 ? var_6 : var_3)) + 2147483647)) << (!-18)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    var_11 = ((~(arr_1 [i_1])));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_10 [i_3] [i_3] [i_3 - 2] [i_3 + 1] [i_3] [i_3] [i_3 - 3] = (arr_7 [i_0] [i_4] [14] [i_0] [i_3]);
                                var_12 = (min(var_12, (-32767 - 1)));
                                var_13 = (max(var_13, var_5));
                            }
                        }
                    }
                }
            }
        }

        for (int i_5 = 3; i_5 < 12;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {

                for (int i_7 = 3; i_7 < 13;i_7 += 1)
                {
                    var_14 = (min(var_14, var_0));
                    var_15 &= (((arr_14 [i_5 + 1]) * (arr_1 [i_7 + 2])));
                    arr_18 [i_7] = var_1;
                    arr_19 [i_7] [i_6] = (arr_17 [i_0] [i_5] [i_7] [i_0]);
                }
                var_16 -= -var_3;
                var_17 ^= ((var_6 < (-32767 - 1)));
                var_18 = (arr_11 [i_0] [i_0] [i_6]);
                arr_20 [i_0] [i_6] [i_6] = (((arr_16 [i_6] [i_6] [i_6] [i_0]) ? (arr_0 [i_5 - 1]) : var_2));
            }
            var_19 = ((~(arr_3 [i_0] [i_0])));
            /* LoopNest 2 */
            for (int i_8 = 1; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    {
                        arr_25 [i_5] [i_5] [i_5] [i_9] = var_7;
                        arr_26 [8] [8] [i_8] = (-4470272696576375858 ^ 6);
                    }
                }
            }
            var_20 = ((2435123345758111630 ? -1 : 60));
        }
        for (int i_10 = 0; i_10 < 15;i_10 += 1)
        {
            /* LoopNest 3 */
            for (int i_11 = 0; i_11 < 15;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 15;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 15;i_13 += 1)
                    {
                        {
                            arr_37 [i_10] [i_10] [i_11] [i_12] [i_13] = ((var_9 ? var_7 : (var_4 == var_5)));
                            var_21 += (((((0 ? 231350646 : (arr_28 [i_11])))) ? var_6 : (var_8 & var_2)));
                        }
                    }
                }
            }
            var_22 = -var_3;

            for (int i_14 = 4; i_14 < 13;i_14 += 1) /* same iter space */
            {
                var_23 = (arr_3 [i_10] [i_10]);
                arr_41 [5] [i_10] = (0 ? 1 : 29059);
                arr_42 [i_0] [i_10] [i_0] [i_14] = ((var_1 ? var_4 : var_7));
            }
            for (int i_15 = 4; i_15 < 13;i_15 += 1) /* same iter space */
            {
                var_24 = var_5;
                var_25 = var_7;
                var_26 = (~var_7);
            }
            for (int i_16 = 4; i_16 < 13;i_16 += 1) /* same iter space */
            {
                arr_49 [i_0] [i_10] [i_10] [i_0] = (arr_11 [i_16 + 1] [i_16 - 4] [i_16 + 1]);
                var_27 = ((var_7 ? var_8 : var_5));
                var_28 = (var_0 - var_9);
                var_29 = (max(var_29, (((-60 ? ((var_5 ? var_8 : var_1)) : (arr_28 [i_16]))))));
            }
            for (int i_17 = 4; i_17 < 13;i_17 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 1;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 15;i_19 += 1)
                    {
                        {
                            var_30 = (min(var_30, (((var_8 ? var_0 : var_3)))));
                            var_31 -= var_2;
                            var_32 += ((~(arr_29 [i_17] [i_0] [i_17 - 1] [i_17 + 1])));
                            arr_59 [i_0] [i_10] [i_18] [i_18] [i_19] = (((arr_4 [i_10] [4] [4] [i_18]) ? (((arr_57 [i_0] [i_10] [i_17] [i_18] [i_10]) - var_2)) : var_1));
                        }
                    }
                }
                arr_60 [i_10] = -32745;
            }
            var_33 = (((var_5 + var_3) ? (((arr_53 [i_0] [i_0] [i_10]) ? 43803 : var_6)) : 60));
            var_34 = (((-48573 + 2147483647) << ((((var_5 ? var_1 : var_7)) - 42))));
        }
        /* LoopNest 2 */
        for (int i_20 = 3; i_20 < 14;i_20 += 1)
        {
            for (int i_21 = 0; i_21 < 15;i_21 += 1)
            {
                {
                    var_35 ^= var_0;
                    var_36 = (((arr_17 [i_0] [i_20 - 3] [i_20] [i_20]) != var_3));
                }
            }
        }
        var_37 = (var_7 > var_9);
        arr_65 [i_0] [i_0] = var_6;
    }
    for (int i_22 = 0; i_22 < 15;i_22 += 1) /* same iter space */
    {
        var_38 = (((!(!-2435123345758111634))) && (((arr_23 [i_22] [i_22] [i_22] [i_22]) || (var_3 || var_7))));
        var_39 = ((((-var_0 ? var_6 : 0)) << (((arr_13 [i_22]) + (arr_13 [i_22])))));
    }
    var_40 = ((((((var_6 && (~60))))) ^ (-9223372036854775807 - 1)));
    #pragma endscop
}
