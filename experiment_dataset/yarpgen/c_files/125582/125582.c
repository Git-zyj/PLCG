/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125582
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 11326;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_0] [i_0] = (((var_1 ^ -107) ? (((var_1 ? (arr_2 [i_1]) : (arr_8 [i_0] [i_0] [i_0] [i_0])))) : 18446744073709551615));
                    arr_10 [i_2] [4] &= ((-107 ? var_9 : (((var_12 ? (arr_6 [i_0] [i_0]) : 23362)))));

                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        var_18 -= (arr_1 [4]);

                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            var_19 = (min(var_19, 3));
                            arr_16 [i_0] [i_0] [i_0] [1] [i_1] = var_13;
                        }
                        for (int i_5 = 0; i_5 < 0;i_5 += 1)
                        {
                            arr_19 [i_5 + 1] [i_2] [i_0] [i_2] [i_0] |= 17;
                            arr_20 [i_1] = (((var_16 << 4) ? -121 : (arr_8 [i_0] [7] [i_3] [i_1])));
                            var_20 = arr_7 [i_0] [i_2] [i_3] [i_5];
                        }
                        for (int i_6 = 2; i_6 < 14;i_6 += 1)
                        {
                            var_21 = (max(var_21, (((((arr_15 [i_1]) ? 31 : (arr_0 [i_0])))))));
                            var_22 += var_0;
                            arr_23 [i_0] [i_1] [i_1] [i_0] [i_3 + 1] [i_0] [4] = ((var_10 < (arr_0 [i_0])));
                            var_23 = ((((((arr_8 [i_0] [i_0] [3] [i_0]) | -7158198817242893179))) ? ((((arr_13 [9] [i_1] [14] [i_1] [i_1]) == 2147483647))) : (arr_4 [i_3])));
                        }
                    }
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        var_24 = (max(var_24, (!5661493319530075749)));
                        var_25 = 13994422220257584785;
                    }
                    for (int i_8 = 1; i_8 < 15;i_8 += 1)
                    {

                        for (int i_9 = 1; i_9 < 14;i_9 += 1)
                        {
                            var_26 = (((arr_18 [i_0] [i_0] [i_0] [9] [12] [i_0] [4]) ? ((var_11 ? (arr_25 [i_8 + 1] [i_2] [i_1]) : (arr_18 [i_0] [i_0] [i_0] [12] [i_0] [6] [i_0]))) : (((arr_22 [i_0] [i_1] [13] [15] [i_9]) ? -1312346222 : (arr_8 [i_0] [i_0] [i_0] [1])))));
                            var_27 = ((1818698816 ? (arr_0 [i_9 + 2]) : var_5));
                        }
                        var_28 = (((arr_8 [i_0] [i_0] [i_0] [i_0]) ? (arr_12 [i_0] [i_0] [i_0] [i_0]) : (arr_12 [14] [i_1] [i_2] [i_8])));
                        arr_30 [i_0] [i_1] [i_2] [i_8] = var_5;
                        var_29 = (min(var_29, 45546));
                    }
                }
            }
        }
        var_30 &= (((((40983 ? (arr_27 [i_0] [i_0]) : var_4))) ? ((49 | (arr_25 [12] [i_0] [i_0]))) : (arr_29 [1] [i_0] [i_0] [i_0] [0] [1])));
        var_31 = var_7;
        arr_31 [i_0] = ((((~(arr_0 [0])))) ? ((((arr_26 [i_0] [i_0] [i_0] [i_0]) ? 65535 : (arr_25 [i_0] [i_0] [i_0])))) : (((arr_5 [i_0]) ? 35513 : (arr_27 [i_0] [i_0]))));

        for (int i_10 = 0; i_10 < 16;i_10 += 1)
        {
            arr_34 [i_10] [i_0] [i_0] = 0;
            var_32 = 9223372036854775807;
            var_33 = (((((~(arr_27 [i_0] [i_0])))) ? (arr_1 [i_10]) : (arr_21 [i_0] [i_0] [i_10] [2])));
            var_34 = (arr_15 [9]);
            /* LoopNest 2 */
            for (int i_11 = 2; i_11 < 13;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 16;i_12 += 1)
                {
                    {
                        arr_40 [i_0] [10] [i_10] [i_10] [i_11] [i_12] = ((~(arr_6 [i_0] [i_11 + 3])));
                        arr_41 [0] [i_10] [i_11] [i_12] = 65472;

                        for (int i_13 = 0; i_13 < 16;i_13 += 1)
                        {
                            var_35 ^= ((-9013830716505059066 ? 64 : 1));
                            var_36 = 1245868280;
                        }
                        var_37 *= ((((((arr_29 [6] [i_12] [i_12] [i_12] [i_12] [i_12]) ^ (arr_14 [i_0] [i_0] [i_0] [i_0])))) ? (((arr_32 [4]) ? var_10 : var_14)) : ((var_8 ? var_14 : 65472))));
                        arr_44 [i_10] [i_10] [12] = ((15906 <= (arr_17 [i_12])));
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_14 = 2; i_14 < 14;i_14 += 1)
    {
        for (int i_15 = 0; i_15 < 16;i_15 += 1)
        {
            for (int i_16 = 2; i_16 < 14;i_16 += 1)
            {
                {
                    var_38 -= var_15;
                    var_39 = var_9;
                    var_40 = max((~31), (max(((107 ? (arr_3 [i_16 + 1]) : (arr_0 [1]))), (arr_8 [i_16 + 1] [i_16 - 2] [i_16] [i_16]))));
                }
            }
        }
    }
    var_41 = (max(var_41, ((min(var_11, var_9)))));
    #pragma endscop
}
