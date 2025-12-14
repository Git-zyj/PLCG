/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171100
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_15 = 16065009580686734751;

                /* vectorizable */
                for (int i_2 = 1; i_2 < 23;i_2 += 1)
                {
                    var_16 = (min(var_16, (arr_1 [i_0 - 2] [i_0 - 1])));
                    arr_8 [i_0] [i_1] [i_2 - 1] = (2381734493022816878 + 2381734493022816878);
                    var_17 |= ((-var_10 <= (((var_9 ? (arr_7 [i_0 + 3]) : var_14)))));
                }
                for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
                {
                    arr_11 [i_0] [i_1] [i_3] |= (min(((((min(1069547520, 2564239291))) ? ((((arr_6 [i_0] [i_1]) ? (arr_5 [i_0] [i_0 + 2] [i_1] [i_3]) : (arr_10 [i_0] [i_3])))) : (arr_7 [i_3]))), 797362786));

                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        var_18 = (min(var_18, var_1));
                        arr_14 [i_1] [i_1] [i_1] |= arr_5 [i_0] [i_1] [i_3] [i_4];
                        arr_15 [i_0] [i_3] |= (((max((arr_10 [i_0 + 2] [i_0 - 2]), (arr_0 [i_0 - 1]))) ? ((((((arr_13 [i_0] [i_0] [i_1] [i_3] [i_4] [i_4]) < 4247723154)) ? ((var_3 ^ (arr_2 [i_0 + 3] [i_0 + 1]))) : ((~(arr_13 [6] [i_1] [i_1] [i_3] [i_4] [i_4])))))) : var_4));
                    }
                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 22;i_5 += 1)
                    {
                        var_19 ^= (((arr_5 [i_5] [21] [i_5 - 1] [i_5]) ^ (arr_3 [i_0 + 3] [i_5 + 2] [i_5 + 1])));
                        arr_18 [i_1] [i_3] [i_5] = (((arr_16 [19] [i_0] [19] [i_0 + 2] [i_5 + 2] [i_5]) ? ((-8317448049579831012 ? var_1 : -4443797465459037114)) : (((var_11 >> (arr_4 [i_0 - 1]))))));
                        arr_19 [i_0] [i_1] [i_1] [i_3] [i_3] [i_5 + 2] = var_13;
                        var_20 ^= (((arr_12 [i_0 + 3] [i_5 + 1] [i_5] [i_5] [i_5 + 1] [i_5]) * ((((arr_13 [10] [i_1] [i_1] [i_1] [i_1] [i_1]) > var_7)))));
                        var_21 = ((((var_0 != (arr_5 [i_0] [i_1] [i_3] [i_5]))) ? var_1 : var_11));
                    }
                    var_22 = 128;
                }
                for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
                {
                    var_23 = ((((((arr_13 [i_0 + 1] [i_0] [i_6] [i_0 + 1] [i_6] [i_6]) ? (arr_13 [i_6] [i_1] [i_1] [i_1] [6] [i_0]) : 2097151))) - (1364400259 - 36)));
                    var_24 |= arr_12 [i_0 - 1] [i_0 - 1] [i_6] [i_6] [i_6] [7];
                    arr_24 [i_0] [i_1] [i_6] = (arr_4 [i_0]);
                }
                arr_25 [i_1] = ((+(((arr_6 [i_0 + 3] [i_0 + 1]) ? (arr_6 [i_0 + 2] [i_0 + 1]) : (arr_6 [i_0 - 1] [i_0 + 3])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 23;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 23;i_8 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 23;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        {
                            arr_36 [i_7] [i_8] [i_9] [i_9] [i_10] |= var_1;
                            arr_37 [i_7] [i_7] [17] [i_9] [i_7] = (arr_32 [i_10] [i_8]);
                            var_25 = var_9;
                        }
                    }
                }
                arr_38 [i_7] [i_7] = ((((max((arr_12 [i_7] [i_8] [i_8] [i_7] [i_8] [i_8]), (((arr_23 [i_7] [i_7] [19]) ? (arr_13 [i_7] [i_7] [i_8] [18] [i_7] [i_7]) : (arr_7 [i_7])))))) | ((((var_8 << (239 - 239))) & (min((arr_29 [i_7]), (arr_3 [i_7] [7] [i_8])))))));
            }
        }
    }
    var_26 = (max((min(((var_14 ? var_10 : var_14)), (((var_13 ? var_8 : 4294967295))))), (((((var_13 ? 3822520530 : var_0))) ? var_11 : 2280038148))));

    for (int i_11 = 0; i_11 < 12;i_11 += 1)
    {
        var_27 = (min(var_27, (arr_26 [i_11] [3])));
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 12;i_13 += 1)
            {
                {
                    arr_46 [i_11] [i_11] [i_12] [i_13] = ((var_11 > ((-var_0 >> (var_3 - 79)))));
                    var_28 = (min(var_28, var_11));
                    var_29 |= ((((!((((arr_22 [i_13] [11]) ? var_14 : (arr_34 [i_11] [i_11]))))))) + ((-(arr_33 [i_11] [i_11]))));
                    var_30 = (min(var_30, (arr_12 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11])));
                }
            }
        }
        arr_47 [i_11] = (min(((((arr_42 [i_11] [i_11]) && var_6))), (min(-1162947922, ((16 ? var_2 : var_4))))));
        arr_48 [i_11] = var_6;
    }
    for (int i_14 = 0; i_14 < 11;i_14 += 1)
    {
        arr_51 [i_14] = (max((((arr_20 [i_14] [i_14] [i_14]) ? (arr_29 [i_14]) : (arr_20 [i_14] [i_14] [i_14]))), -23));
        arr_52 [i_14] = ((-(max(var_11, (arr_6 [i_14] [i_14])))));
    }
    /* vectorizable */
    for (int i_15 = 0; i_15 < 15;i_15 += 1)
    {
        var_31 = (min(var_31, (!var_11)));
        arr_56 [i_15] [i_15] = (((var_7 == var_6) ? (arr_1 [i_15] [i_15]) : ((197942211 ? var_13 : 18446744073709551615))));
    }
    #pragma endscop
}
