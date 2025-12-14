/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12419
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, (((-var_4 * ((max((min(143, 143)), 1))))))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 8;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = arr_1 [i_0 + 2];
        var_13 *= ((-3550277573871842223 / (arr_1 [i_0 + 1])));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {
                        var_14 = (((arr_4 [i_0 + 4]) ^ (((arr_1 [i_3]) ? var_10 : (arr_5 [i_1])))));

                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            arr_15 [i_1] [i_1] [i_1] [i_4] = ((~((90 ? -52 : 32011))));
                            var_15 ^= (((arr_10 [i_4]) ? (arr_10 [i_4]) : (arr_10 [i_4])));
                            var_16 += 62806811312241124;
                            var_17 |= ((-1338807491 ? (((arr_2 [i_3]) / (arr_11 [i_1] [i_1] [i_1] [i_4] [6] [i_1] [i_2]))) : (((arr_2 [i_1]) / 1238991123))));
                        }
                        for (int i_5 = 3; i_5 < 11;i_5 += 1)
                        {
                            var_18 |= var_8;
                            arr_19 [i_5] [i_1] [i_0 - 1] [i_0 - 1] [i_1] [i_0 - 1] = ((arr_1 [i_5 + 1]) / (arr_18 [i_0] [i_0 - 1] [i_5] [i_1] [i_5]));
                            var_19 &= (arr_4 [i_0 - 2]);
                        }
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            var_20 = (arr_21 [6] [i_6] [i_0 + 3] [i_0] [i_0] [i_0]);
                            var_21 = (arr_11 [i_6] [i_2] [3] [i_1] [i_0] [i_0 + 4] [i_0]);
                        }
                        var_22 = var_8;
                        var_23 = (min(var_23, (arr_14 [i_1] [11])));
                    }
                }
            }
        }
    }
    for (int i_7 = 2; i_7 < 8;i_7 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 12;i_9 += 1)
            {
                {
                    var_24 = (max(-11790, ((~(~var_8)))));
                    arr_30 [i_7] [i_7] [i_8] [i_7] = (arr_22 [i_9] [i_8] [i_9]);
                }
            }
        }
        arr_31 [i_7] [i_7] = (((-(arr_16 [i_7] [i_7]))));
        var_25 *= (((~(arr_22 [8] [i_7 + 3] [8]))));
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 9;i_11 += 1)
            {
                {
                    arr_36 [i_7 - 1] [i_10] [i_11] &= (max((min(((var_4 ? -1238991125 : var_5)), (((1 >> (var_4 + 32275)))))), (~51)));
                    arr_37 [i_10] [i_11] [i_11] [i_7 - 2] = var_6;
                    var_26 *= arr_8 [9] [8] [i_11 + 3];
                }
            }
        }
    }
    /* vectorizable */
    for (int i_12 = 2; i_12 < 8;i_12 += 1) /* same iter space */
    {

        for (int i_13 = 1; i_13 < 11;i_13 += 1)
        {
            var_27 += (((arr_22 [1] [i_13 + 1] [10]) ? (arr_22 [1] [i_13 + 1] [1]) : (arr_22 [4] [i_13 + 1] [4])));

            for (int i_14 = 0; i_14 < 12;i_14 += 1) /* same iter space */
            {
                arr_48 [i_12] [i_13 - 1] = 109;
                var_28 = var_7;
            }
            for (int i_15 = 0; i_15 < 12;i_15 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 1;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 1;i_17 += 1)
                    {
                        {
                            var_29 = (((((arr_24 [i_13 + 1]) ? (arr_38 [i_12]) : (arr_2 [i_16]))) ^ var_6));
                            var_30 = (max(var_30, (((arr_47 [i_12 + 1] [10] [i_13 - 1]) ? (arr_33 [i_12 + 1] [i_12 + 1] [i_13 - 1]) : (arr_33 [i_12 + 1] [i_13 - 1] [i_13 - 1])))));
                        }
                    }
                }
                var_31 += (var_1 * -4);
                /* LoopNest 2 */
                for (int i_18 = 1; i_18 < 11;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 1;i_19 += 1)
                    {
                        {
                            var_32 = arr_41 [i_12] [i_12];
                            var_33 ^= var_8;
                            var_34 = var_9;
                            var_35 = ((50 ? 62806811312241120 : (arr_38 [i_12])));
                        }
                    }
                }
                arr_62 [i_12] = (~var_4);
            }
            var_36 = (arr_27 [i_13] [i_12 + 1] [i_12 - 2] [9]);
            var_37 = 51;
        }
        for (int i_20 = 0; i_20 < 12;i_20 += 1)
        {
            arr_65 [i_12] [i_12] [i_20] = 31588;
            var_38 = (min(var_38, 68));
            /* LoopNest 3 */
            for (int i_21 = 1; i_21 < 11;i_21 += 1)
            {
                for (int i_22 = 1; i_22 < 10;i_22 += 1)
                {
                    for (int i_23 = 1; i_23 < 11;i_23 += 1)
                    {
                        {
                            var_39 = ((~(arr_28 [i_12] [i_12 - 2] [i_12 - 2])));
                            var_40 = ((1 + (arr_45 [i_22 - 1] [i_12] [i_22] [i_22])));
                            var_41 = (min(var_41, ((((~(arr_50 [i_21] [0])))))));
                        }
                    }
                }
            }
        }
        var_42 += (arr_23 [i_12]);
    }
    var_43 = (var_9 + var_10);
    #pragma endscop
}
