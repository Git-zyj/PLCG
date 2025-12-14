/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183219
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        var_17 -= (var_6 ? (var_5 / var_10) : var_5);
        var_18 |= (arr_1 [i_0 + 1] [i_0 - 3]);
        var_19 = ((~(arr_0 [i_0 - 1])));
        var_20 = (arr_0 [i_0]);
        arr_2 [i_0] = ((arr_0 [i_0]) ? (arr_0 [i_0 - 2]) : (arr_0 [i_0 + 1]));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_5 [i_1] = var_6;

        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 2; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        {
                            var_21 |= (((((var_14 ? 18446744073709551615 : (arr_15 [i_1] [8] [i_2] [i_3 + 1] [i_4] [i_4 + 1] [i_4])))) && (arr_11 [i_4 + 3] [i_4 + 2])));
                            arr_17 [i_1] [i_2] [i_2] [i_1] = ((4294967295 ? (arr_11 [i_2] [i_2]) : (arr_14 [16] [i_3] [i_1] [i_2] [i_5] [i_2])));
                        }
                    }
                }
            }
            var_22 = (((arr_12 [i_1] [i_1] [0] [i_1] [9]) ? (arr_4 [i_1]) : (arr_11 [i_1] [i_2])));
            var_23 = 10;
            var_24 |= (((-4 + 10) >> (((arr_6 [i_1]) + 24778))));
        }
        for (int i_6 = 1; i_6 < 13;i_6 += 1)
        {

            for (int i_7 = 2; i_7 < 14;i_7 += 1)
            {
                arr_22 [i_1] = (var_16 ? (((arr_19 [i_1] [i_1] [i_7]) * (arr_18 [i_7] [i_1]))) : (~var_11));
                var_25 = var_3;
                arr_23 [i_6] [i_7] |= -40022;
            }
            arr_24 [i_1] [i_6] = (((var_5 - var_1) ? 84 : var_13));
        }
        var_26 = ((~(arr_11 [i_1] [i_1])));

        for (int i_8 = 3; i_8 < 14;i_8 += 1)
        {

            for (int i_9 = 0; i_9 < 17;i_9 += 1)
            {
                var_27 = -20;
                arr_31 [i_1] [i_1] = -var_9;
                var_28 = (-18446744073709551615 ^ -55);
                arr_32 [i_1] = (((arr_10 [i_1] [i_1] [i_8] [i_9]) / (arr_10 [i_1] [5] [i_8 - 3] [i_1])));

                for (int i_10 = 2; i_10 < 16;i_10 += 1)
                {
                    var_29 = var_6;
                    var_30 = (min(var_30, ((((((arr_28 [i_9]) + 2147483647)) << (((((~25512) + 25535)) - 22)))))));
                    var_31 = (5 ? ((var_3 ? (arr_7 [i_1] [i_8 - 3] [i_1]) : -958549690)) : (~var_10));
                    arr_36 [i_1] [i_8] [i_1] [i_9] [9] = 14041;
                }
                for (int i_11 = 0; i_11 < 17;i_11 += 1)
                {

                    for (int i_12 = 1; i_12 < 16;i_12 += 1)
                    {
                        arr_41 [i_9] [i_8] [i_9] |= 6;
                        var_32 -= ((var_3 ? -34852710 : var_15));
                    }
                    for (int i_13 = 0; i_13 < 17;i_13 += 1)
                    {
                        arr_45 [i_13] [i_1] [14] [i_9] [i_8] [i_1] [i_1] = var_9;
                        arr_46 [i_1] [i_8] [i_9] [i_9] [0] |= (((arr_18 [i_8 - 2] [i_8 - 2]) == (arr_18 [i_8 - 2] [i_8 + 1])));
                    }
                    for (int i_14 = 1; i_14 < 16;i_14 += 1)
                    {
                        var_33 -= (((((~(arr_37 [i_1] [i_8] [i_9] [0] [i_9])))) && 11));
                        var_34 = (((arr_33 [i_14] [i_14 - 1] [i_14 - 1] [i_14 - 1] [i_8 + 2] [i_1]) ? 27436330 : (arr_20 [i_14 + 1] [i_14 + 1] [i_14 - 1])));
                        arr_49 [i_1] [i_1] [i_1] [i_11] [i_1] [2] [i_1] = -390063497472793663;
                    }
                    for (int i_15 = 0; i_15 < 17;i_15 += 1)
                    {
                        arr_52 [i_1] [i_8 - 2] [i_9] [i_8] [i_8 + 3] = var_9;
                        var_35 |= (((arr_16 [i_1] [i_8] [i_8] [i_8] [i_8] [i_9] [3]) == (arr_34 [i_8 - 3] [i_8 + 1] [i_8 + 2] [i_8 - 2])));
                    }
                    var_36 -= (arr_42 [4] [i_11] [i_9] [i_9] [i_9]);
                    var_37 = (arr_42 [i_8 - 1] [i_1] [i_9] [i_11] [i_8 - 1]);
                    arr_53 [i_8] [i_1] [3] [i_8] [i_8] = (arr_44 [i_8 + 3] [i_8] [i_8] [i_8 - 2] [i_8]);
                }
            }
            arr_54 [i_1] [0] [i_8] |= 1509031586;
            /* LoopNest 3 */
            for (int i_16 = 3; i_16 < 15;i_16 += 1)
            {
                for (int i_17 = 2; i_17 < 14;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 17;i_18 += 1)
                    {
                        {
                            var_38 = var_16;
                            var_39 = (((arr_27 [i_17 + 3] [9] [i_16] [i_1]) < (arr_27 [i_8] [i_8] [i_16 + 1] [i_16 + 1])));
                            var_40 = (var_9 ^ var_0);
                            var_41 = var_7;
                        }
                    }
                }
            }
            arr_61 [i_1] = (arr_35 [i_1] [i_1] [i_1] [i_1] [i_1]);
            arr_62 [i_8 + 2] [16] [i_8] |= -28027;
        }
    }
    /* LoopNest 2 */
    for (int i_19 = 0; i_19 < 20;i_19 += 1)
    {
        for (int i_20 = 1; i_20 < 18;i_20 += 1)
        {
            {
                var_42 -= (((var_1 ? (min((arr_65 [i_19] [i_19]), (arr_68 [i_20]))) : ((max(var_6, (arr_67 [i_19])))))));
                var_43 = (max(var_43, (((~(~var_0))))));
                var_44 = (min(1926017941, (-27 / 25505)));
            }
        }
    }
    #pragma endscop
}
