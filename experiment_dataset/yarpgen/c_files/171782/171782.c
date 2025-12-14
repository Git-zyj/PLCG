/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171782
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = (((((var_6 ? var_7 : (arr_0 [3] [3])))) ? (var_15 - var_10) : ((((!(arr_2 [i_0 - 3])))))));
        arr_4 [18] = ((-((var_0 ? var_11 : var_9))));
        arr_5 [11] = ((2623099261 || 2623099261) && ((!(arr_0 [i_0] [i_0]))));
        var_17 = (((arr_0 [i_0] [i_0 - 4]) ? var_11 : var_7));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_10 [i_1] [i_1] = ((-((~((var_9 | (arr_8 [12] [12])))))));
        var_18 ^= ((((((~(arr_2 [i_1]))) + 2147483647)) >> (((arr_2 [i_1]) ^ (arr_2 [i_1])))));
        var_19 = ((((((~(arr_1 [i_1]))) + 2147483647)) << (((var_16 + 2147483647) >> (((arr_2 [i_1]) - 6466))))));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_20 = (max(var_20, ((((((~(arr_13 [i_2])))) ? ((~(arr_13 [i_2]))) : (((arr_13 [i_2]) & (arr_13 [i_2]))))))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 21;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    {
                        arr_20 [i_2] [i_3] [i_2] [i_5] = (((((var_9 - var_2) >= (arr_15 [i_4 + 2] [i_4 - 1] [i_4 + 1]))) ? ((((!(arr_15 [i_2] [i_4 - 1] [i_4]))))) : ((2623099261 ? 16722 : 1671868023))));
                        var_21 = var_7;

                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            arr_23 [i_2] [i_2] = (1671868035 < -375536151);
                            var_22 = ((~(arr_16 [i_2] [i_2] [i_2] [i_6])));
                            var_23 = (max(var_23, ((((((!(arr_14 [8] [12])) ? (((arr_15 [i_2] [i_2] [6]) ? (arr_22 [i_2] [i_3] [i_3] [i_5] [i_5] [i_6]) : (arr_14 [i_2] [i_2]))) : -59394)))))));
                            var_24 = (var_10 ? (arr_18 [i_2] [i_2] [i_4] [i_5] [i_6]) : (((var_15 ? (arr_13 [i_2]) : var_4))));
                        }
                        for (int i_7 = 2; i_7 < 20;i_7 += 1)
                        {
                            arr_26 [i_2] [i_5] [11] [i_3] [i_2] = (((arr_21 [i_4 + 2]) <= (((!(~var_5))))));
                            var_25 = (((arr_19 [i_4 - 1] [i_4 + 1] [i_4 + 1] [i_4 + 1]) ? ((var_0 & (arr_15 [i_4 - 1] [i_4 + 1] [i_4 + 1]))) : var_3));
                        }
                        for (int i_8 = 1; i_8 < 21;i_8 += 1)
                        {
                            arr_31 [i_8] [i_2] [i_4] [i_2] [i_2] = (((var_15 + var_11) ? (((var_10 ? (arr_30 [i_8 - 1] [i_8] [i_8] [i_8] [i_8]) : (arr_24 [i_8 - 1] [i_8] [22] [i_8 - 1] [i_8] [i_8 + 1])))) : ((-var_11 ? var_6 : ((-(arr_25 [i_8] [i_5] [8] [i_3] [i_2])))))));
                            arr_32 [i_2] [i_2] [15] [i_5] = ((-((((arr_28 [i_8 - 1] [i_8] [i_4 + 2] [i_4 - 1] [i_4 + 2] [i_4 - 1]) != (((arr_18 [i_2] [i_2] [i_2] [i_2] [i_2]) % (arr_13 [i_2]))))))));
                            var_26 ^= var_15;
                        }
                    }
                }
            }
        }
        var_27 = var_15;
    }
    for (int i_9 = 1; i_9 < 18;i_9 += 1)
    {
        /* LoopNest 3 */
        for (int i_10 = 4; i_10 < 19;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 19;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 21;i_12 += 1)
                {
                    {
                        var_28 = (((((var_6 >= (arr_7 [1] [i_11 - 1])))) | ((((var_13 >> (((arr_45 [i_9] [i_10] [i_10] [i_11] [i_11]) - 6909)))) + var_6))));
                        arr_48 [i_11] [i_12] = var_1;
                    }
                }
            }
        }
        arr_49 [i_9] = (arr_24 [i_9] [i_9] [i_9 + 1] [i_9] [i_9] [i_9]);

        /* vectorizable */
        for (int i_13 = 0; i_13 < 21;i_13 += 1)
        {
            arr_54 [i_9] [i_13] [i_9 + 3] = ((arr_15 [i_9] [i_9] [i_13]) ? ((var_14 ? (arr_39 [i_9] [i_13]) : (arr_38 [i_9] [i_9]))) : (arr_17 [i_9] [i_9]));

            for (int i_14 = 4; i_14 < 19;i_14 += 1)
            {
                var_29 = (arr_41 [i_14 + 1] [i_13] [i_14 + 1]);
                var_30 = (((-375536151 + 1073741824) + (arr_44 [i_14 - 4] [i_14] [i_14] [i_14 - 2])));
            }
            arr_58 [i_9] [i_13] [i_9] = (arr_2 [13]);
        }
        for (int i_15 = 0; i_15 < 1;i_15 += 1)
        {
            var_31 = ((arr_45 [i_9 - 1] [i_15] [i_9] [i_15] [i_15]) ? var_9 : (((arr_12 [i_9 - 1] [i_9 - 1]) / (arr_60 [i_9 - 1] [i_9 - 1]))));
            var_32 = (arr_22 [i_9 + 3] [9] [i_9] [i_9] [i_9] [i_9]);
        }
        arr_61 [i_9] [i_9] = (-(((arr_15 [12] [i_9 - 1] [i_9 + 2]) ? (arr_15 [i_9 - 1] [i_9 + 1] [i_9]) : (arr_15 [i_9 - 1] [i_9 + 1] [i_9]))));
    }
    var_33 = ((var_4 ? (((var_16 / var_7) / (var_9 / var_4))) : var_12));
    #pragma endscop
}
