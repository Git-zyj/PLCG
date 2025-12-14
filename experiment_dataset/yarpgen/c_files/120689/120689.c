/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120689
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] |= (((var_9 | var_2) | (2235366732181435216 && -3469)));
                    var_10 ^= (((-((255 ? 3469 : var_9)))));
                    var_11 &= ((((arr_0 [i_0] [i_1]) ? (arr_5 [i_0] [i_1 - 1]) : (arr_7 [i_0] [17] [i_1 + 2]))));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_12 = (min(var_12, (((var_1 ? ((~(var_4 >= var_5))) : ((-1 * (arr_0 [i_1 - 1] [i_1 + 2]))))))));
                        arr_13 [i_3] [12] [i_1] [i_0] = min((((arr_3 [i_0]) / (((min(17, -3469)))))), ((6694 ? (arr_1 [i_1 + 1] [i_1 - 1]) : 9223372036854775807)));
                        arr_14 [i_3] = -1;
                    }
                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 18;i_4 += 1)
                    {
                        var_13 = (min(var_13, -134217216));
                        var_14 = (((~120) ^ var_9));
                        arr_18 [2] [2] [i_2] = var_1;
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 19;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 22;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 4; i_7 < 19;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        {
                            var_15 = arr_22 [i_6 - 1] [i_6] [i_7 - 4];
                            arr_31 [i_6] [i_6] [i_6] [i_6] = (max(((max((min(65535, 1480409780)), ((var_0 * (arr_21 [14] [0] [0])))))), (min((arr_29 [i_6] [i_6] [20] [i_6 - 1] [i_6] [i_7 - 4]), (arr_30 [i_7 + 3] [i_7 + 4] [i_7] [i_7 - 4] [i_7 - 4])))));
                        }
                    }
                }
                var_16 ^= var_9;

                for (int i_9 = 0; i_9 < 23;i_9 += 1)
                {

                    for (int i_10 = 2; i_10 < 22;i_10 += 1)
                    {
                        var_17 = (max((arr_19 [i_5 - 2]), (arr_36 [3] [i_9] [i_6] [i_10 + 1] [i_10] [4])));
                        arr_37 [i_9] [15] [i_9] [i_6] = (((((var_1 | (arr_29 [i_10] [i_6] [i_10] [i_10] [i_5 + 3] [i_10]))) % 17)));
                        var_18 = (min(var_18, (!var_8)));
                    }
                    for (int i_11 = 1; i_11 < 22;i_11 += 1)
                    {
                        var_19 = ((min(68, var_1)));
                        var_20 = ((~(!-109)));
                        var_21 = (max(((((arr_27 [i_6]) ? var_9 : (arr_27 [i_6])))), (~var_7)));
                        arr_41 [i_6] [i_6] [i_6] [i_11 + 1] = (((((var_0 ? (arr_39 [i_11] [i_6] [i_6] [i_5 + 3]) : var_3)) != ((((arr_30 [i_5] [i_5] [i_5] [i_5] [i_5 + 4]) ? (arr_26 [i_9]) : 6694))))));
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 2; i_12 < 20;i_12 += 1)
                    {
                        for (int i_13 = 1; i_13 < 21;i_13 += 1)
                        {
                            {
                                var_22 = var_0;
                                var_23 = (max((((!(arr_32 [20] [i_6 - 1] [i_6] [i_12 - 1])))), ((0 ? ((min(var_6, var_6))) : var_5))));
                            }
                        }
                    }
                    arr_46 [i_5] [i_5] [i_6] [i_5] = ((((-3469 ? (max(-1, -41)) : var_2))) * ((-var_6 % (((arr_28 [i_5] [16] [i_9]) ? (arr_23 [i_6]) : 0)))));
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 23;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 23;i_15 += 1)
                        {
                            {
                                var_24 = (((arr_23 [i_6]) || ((min((min((arr_19 [i_5]), var_4)), 3003470033)))));
                                var_25 = (max((((((arr_40 [i_14] [i_14] [i_9] [i_6 - 1]) + 2147483647)) << (var_5 - 18535))), ((~(arr_40 [i_6 + 1] [i_9] [i_6 + 1] [i_6 + 1])))));
                                var_26 = (min(var_26, 2047));
                            }
                        }
                    }
                    arr_52 [i_5] [i_6] [i_9] [i_6] = var_0;
                }
                arr_53 [i_6] = (arr_27 [i_6]);
                var_27 = (max(var_27, (((((((57 ? 86 : 6)) >= (var_3 <= -16))) ? -3468 : var_5)))));
            }
        }
    }
    var_28 = (((var_4 <= var_8) ? (((var_8 + 2147483647) >> (((max(var_0, var_9)) - 6399599673104762796)))) : var_0));
    #pragma endscop
}
