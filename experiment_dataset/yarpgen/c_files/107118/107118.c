/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107118
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += 0;

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_16 *= 1;

            for (int i_2 = 4; i_2 < 12;i_2 += 1)
            {

                /* vectorizable */
                for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
                {
                    arr_11 [12] [4] [i_2 - 4] [i_2 - 4] [i_2] &= -32763;
                    var_17 = var_11;
                    var_18 = (min(var_18, -6344));
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
                {
                    arr_14 [i_4] [i_1] [i_1] [i_4] = 2374906874;
                    var_19 *= ((((((arr_4 [7] [i_1]) ^ 70))) ? (((arr_9 [i_4] [i_4]) ? 1 : var_8)) : -2643643878918311059));
                    var_20 = 0;
                }
                var_21 = 1;
                arr_15 [i_1] = ((((((!(arr_2 [i_1])))) << (-8616 + 8633))));
            }
        }
        for (int i_5 = 1; i_5 < 11;i_5 += 1)
        {
            var_22 = (max(var_22, (((var_4 ? (arr_8 [i_0] [i_0] [i_0] [i_0 + 1]) : ((-(((arr_18 [i_5]) ? -2643643878918311062 : (arr_8 [i_0] [i_0 - 3] [0] [i_0]))))))))));

            for (int i_6 = 1; i_6 < 1;i_6 += 1)
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        {
                            var_23 = (max(var_23, (((((arr_5 [i_7]) ? (arr_4 [i_0] [i_5 + 2]) : (arr_4 [i_0 + 1] [i_0 - 2])))))));
                            var_24 = (arr_16 [i_5] [i_5 - 1] [i_6 - 1]);
                            arr_27 [i_0] [i_5] [i_6] [i_7] [i_8] = (max((((arr_19 [i_0 + 1] [i_5 + 1] [i_6 - 1]) ? (arr_19 [i_0 - 1] [i_5 + 1] [i_6 - 1]) : (arr_19 [i_0 - 2] [i_5 + 2] [i_6 - 1]))), 1));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 13;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 13;i_10 += 1)
                    {
                        {
                            var_25 = (min(var_25, (((((((arr_24 [i_10] [i_6] [i_6 - 1] [i_6] [i_5 + 2]) - (arr_24 [i_10] [i_10] [i_6 - 1] [i_5] [i_5 + 2])))) ? (arr_23 [i_0] [i_0 + 1] [i_0] [i_6 - 1] [i_5 + 1] [i_6 - 1] [i_6]) : (((((arr_28 [i_10] [i_6] [i_0 + 1]) ? 127 : (arr_23 [i_10] [i_9] [i_0] [i_6] [i_5] [i_0] [i_0]))))))))));
                            var_26 ^= (((arr_33 [i_0] [i_5] [4] [i_6 - 1] [i_0] [i_9] [i_10]) | -9141));
                            var_27 = ((((((arr_4 [i_6 - 1] [i_6 - 1]) < (arr_4 [6] [i_6 - 1])))) != ((254 + (((var_7 && (arr_23 [i_0 + 1] [i_0 + 1] [i_0] [i_0] [i_0] [i_0 + 1] [i_0 + 1]))))))));
                        }
                    }
                }
            }
            /* vectorizable */
            for (int i_11 = 0; i_11 < 13;i_11 += 1)
            {
                var_28 = (((arr_36 [i_0 - 2] [i_0 + 1] [i_0 - 3]) ? (arr_36 [i_0 - 1] [i_0 - 2] [i_0 - 1]) : (arr_36 [i_0 - 3] [i_0 - 2] [i_0 - 2])));
                arr_37 [i_11] [i_11] [0] &= -255;
                var_29 = (arr_13 [i_0 + 1] [i_0 - 1] [i_5] [i_5] [i_5] [i_11]);
            }
            /* vectorizable */
            for (int i_12 = 0; i_12 < 13;i_12 += 1)
            {
                var_30 += ((arr_9 [i_0 - 1] [i_0 - 3]) <= (arr_9 [i_0 - 3] [i_0 - 1]));
                arr_40 [i_0] [i_5] [i_12] = ((!(arr_8 [i_0] [i_0] [i_12] [i_0])));
            }
        }
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 13;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 13;i_14 += 1)
            {
                {
                    var_31 = (max(1, 198));
                    var_32 = ((((var_14 ? -1061125080 : (arr_7 [i_0 - 3] [i_13] [i_0 - 3]))) | (arr_7 [i_14] [i_13] [i_0])));

                    for (int i_15 = 0; i_15 < 1;i_15 += 1)
                    {
                        var_33 *= (arr_6 [i_0] [i_0] [i_15]);
                        var_34 *= (((~(arr_38 [i_13] [i_13] [i_13]))));
                        arr_49 [i_0] [i_0] [i_0] = ((~((-((-(arr_16 [i_0 - 3] [i_13] [i_14])))))));

                        /* vectorizable */
                        for (int i_16 = 0; i_16 < 1;i_16 += 1)
                        {
                            var_35 = (arr_44 [i_0]);
                            var_36 ^= ((0 >> (27062 - 27043)));
                            arr_53 [3] [i_13] [i_13] [i_13] [i_13] = var_12;
                        }
                    }
                }
            }
        }
        arr_54 [i_0] [i_0] = -237;
    }
    /* vectorizable */
    for (int i_17 = 1; i_17 < 12;i_17 += 1)
    {
        var_37 += ((17832167008315286110 ? var_8 : ((~(arr_55 [4])))));
        /* LoopNest 2 */
        for (int i_18 = 0; i_18 < 14;i_18 += 1)
        {
            for (int i_19 = 0; i_19 < 14;i_19 += 1)
            {
                {
                    var_38 = ((-(~var_2)));
                    arr_64 [i_17 + 2] [i_19] = 141;
                }
            }
        }
        var_39 = (max(var_39, (((9 ? (arr_62 [i_17] [i_17] [i_17] [i_17]) : 469762048)))));
        var_40 = (max(var_40, ((18446744073709551610 + (arr_62 [0] [0] [i_17 + 1] [i_17 - 1])))));
        arr_65 [i_17] = ((1340813398 ? var_5 : (arr_61 [i_17])));
    }
    /* LoopNest 2 */
    for (int i_20 = 0; i_20 < 19;i_20 += 1)
    {
        for (int i_21 = 2; i_21 < 17;i_21 += 1)
        {
            {
                arr_71 [i_20] = ((127 <= (-32767 - 1)));
                var_41 = (!((((arr_70 [i_21 + 1] [i_21]) * (arr_70 [i_21 - 1] [i_21])))));
            }
        }
    }
    var_42 = ((((-9141 + 2147483647) << (2 - 2))));
    #pragma endscop
}
