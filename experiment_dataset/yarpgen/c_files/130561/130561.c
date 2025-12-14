/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130561
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_20 = ((-36916 ? ((65127 * (arr_4 [i_2]))) : var_18));
                                var_21 = (min(var_21, ((((((min((arr_5 [i_0]), 28647))) ? (~53934) : (arr_1 [i_4])))))));
                                arr_11 [i_0] [i_1] [i_2] [i_3] = 255;
                            }
                        }
                    }
                    var_22 += (min((((arr_6 [i_0] [i_0 + 3] [i_0] [i_1 + 1]) ? (arr_6 [i_0] [i_0 + 3] [i_2] [i_1 + 1]) : 7270778021715313804)), ((min((arr_6 [i_0] [i_0 + 1] [i_2] [i_1 - 2]), var_17)))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                {
                    arr_22 [i_6] [i_6] = ((((max((arr_18 [i_5] [i_5] [i_5]), (arr_18 [i_5] [i_5] [i_7])))) >> ((((4092 ^ (((65523 ^ (arr_16 [i_6])))))) - 28255))));
                    var_23 *= (((max((((arr_18 [i_7] [i_6] [i_5]) ? var_15 : var_15)), ((min(36911, var_19))))) << ((((64408 << (25 - 14))) - 131907573))));
                    var_24 = (min(var_24, (0 * var_11)));
                }
            }
        }
    }

    for (int i_8 = 2; i_8 < 18;i_8 += 1)
    {
        var_25 |= ((8330 ? 40735 : 2120));
        var_26 = ((((var_17 == (arr_23 [i_8]))) ? ((47999 ? (arr_25 [i_8]) : 128)) : (arr_25 [i_8 - 1])));
        var_27 &= (arr_24 [i_8]);
    }
    for (int i_9 = 2; i_9 < 11;i_9 += 1)
    {
        var_28 = (min(var_28, (((var_12 && (((var_1 ? (((arr_26 [i_9]) ? var_13 : (arr_19 [i_9] [i_9]))) : ((36 - (arr_18 [i_9] [i_9] [i_9])))))))))));
        var_29 += ((var_14 - (min((~65407), ((var_4 ? var_17 : 28644))))));
        arr_29 [i_9] = ((((((arr_27 [i_9] [i_9 + 1]) == 38898))) << (((arr_24 [i_9 - 1]) + 143))));
        /* LoopNest 2 */
        for (int i_10 = 1; i_10 < 14;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 15;i_11 += 1)
            {
                {

                    for (int i_12 = 0; i_12 < 15;i_12 += 1)
                    {
                        arr_39 [i_12] [i_11] [i_9] [i_10] [i_9] = arr_27 [i_9] [i_9];
                        var_30 = (min(var_30, (((-(((var_11 + 9223372036854775807) >> 14)))))));
                        var_31 = (((((arr_31 [i_9] [i_10 - 1] [i_9]) <= (arr_31 [i_9] [i_10 + 1] [i_9]))) ? (arr_31 [i_9] [i_10 + 1] [i_9]) : var_7));
                    }
                    for (int i_13 = 3; i_13 < 14;i_13 += 1)
                    {
                        arr_44 [i_9] [i_9] [i_9] [i_9] = min(8719, (65535 >= 8192));
                        var_32 += (arr_16 [i_9]);
                        var_33 *= 33090;
                    }
                    for (int i_14 = 0; i_14 < 15;i_14 += 1)
                    {

                        for (int i_15 = 0; i_15 < 15;i_15 += 1)
                        {
                            var_34 = (min(((~(arr_18 [i_10] [i_10 - 1] [i_10 - 1]))), (arr_30 [i_9] [i_9] [i_14])));
                            var_35 *= (max((max(((min(65535, 119))), ((var_16 ? 448 : 19590)))), (((arr_32 [i_9 - 1] [i_9 - 2] [i_15]) ? (~-70) : (arr_21 [i_9] [i_9 + 1] [i_10 + 1])))));
                            arr_51 [i_9] [i_10] [i_11] [i_11] [i_9] = (((((max(var_12, -126))) << (((var_5 & var_12) - 16764)))));
                            arr_52 [i_15] [i_9] [i_9] [i_9] [i_9] = ((((((arr_38 [i_9] [i_9] [i_9] [i_9]) ^ (arr_23 [i_9])))) | ((((((0 ? var_6 : var_0)) + 9223372036854775807)) << ((((var_3 ? 65520 : (arr_27 [i_9] [i_9]))) - 65520))))));
                        }
                        var_36 += 64092;
                    }
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 15;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 15;i_17 += 1)
                        {
                            {
                                var_37 ^= ((~((42906 ? ((var_6 ? 65088 : var_11)) : ((~(arr_48 [i_11] [i_16] [i_11] [i_9] [i_9])))))));
                                var_38 &= (arr_26 [i_11]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
