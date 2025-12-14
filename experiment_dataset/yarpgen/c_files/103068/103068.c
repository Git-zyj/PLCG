/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103068
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_8;
    var_19 = 61;
    var_20 = var_13;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                {
                    var_21 = (max(var_21, ((max((!99), var_12)))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_2 - 1] [i_3] [5] = -var_3;
                        arr_12 [0] [i_1] [i_2 - 1] [i_3] [i_3] |= (((arr_0 [6] [i_3]) ? var_7 : var_11));
                        arr_13 [i_0] [i_0] [i_1] [i_1] [i_3] = ((((((var_5 || (arr_0 [i_0] [9]))))) <= (((arr_4 [0]) ? 8878231534613340521 : 163910203241112436))));
                        arr_14 [i_1] [i_0] = (!-22773);
                    }

                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {

                        for (int i_5 = 3; i_5 < 10;i_5 += 1)
                        {
                            arr_19 [i_0] [i_4] [i_2] [i_4] [i_0] [i_4] = ((arr_2 [5] [i_0]) ? ((-32 ? (arr_4 [i_2 - 1]) : (arr_4 [i_2 - 3]))) : ((((!var_9) | (arr_15 [i_0] [i_1] [i_2 - 1])))));
                            var_22 = (min(var_22, (((((-((-2069406195 ? -7096925455619358627 : 0)))) >> (((((var_6 ? var_11 : var_9))) * (var_4 / var_10))))))));
                            arr_20 [i_0] [5] [i_0] = ((((((var_1 ? var_9 : 11772101746109682378)) ? (((((arr_15 [i_0] [i_1] [i_5]) > var_16)))) : ((var_9 ? (arr_4 [i_5]) : var_5))))));
                        }
                        for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
                        {
                            arr_24 [i_0] [i_0] [i_2] [i_4] [i_6] = (((~-8591) ? ((min((max(var_12, var_6)), 29972))) : (~9568512539096211104)));
                            var_23 *= ((!(((~(arr_7 [i_0] [i_0] [6]))))));
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
                        {
                            arr_29 [i_0] [i_1] [i_2] [i_0] [i_2] = ((-(arr_0 [i_0] [i_1])));
                            arr_30 [i_0] [i_0] [i_2 - 3] [i_0] [i_4] [i_0] [i_0] = ((-80 ? (~var_8) : var_7));
                            arr_31 [6] [i_0] [i_0] [i_7] = (arr_2 [i_2 - 1] [i_0]);
                            var_24 = -92;
                        }

                        for (int i_8 = 0; i_8 < 11;i_8 += 1)
                        {
                            arr_36 [i_0] = ((((min(((min((arr_6 [i_0]), (arr_6 [i_0])))), ((var_6 ? var_4 : (arr_26 [i_0] [1] [5] [i_4] [i_4] [i_8])))))) ? ((var_12 ? (((((arr_26 [i_0] [6] [1] [i_2 - 2] [i_4] [i_8]) <= 6967521912420088539)))) : (max(96, (arr_4 [i_0]))))) : (((var_12 ? var_3 : (arr_9 [i_2 - 1] [5] [i_0]))))));
                            var_25 = (min(var_25, var_15));
                            arr_37 [i_0] [i_0] [i_1] [i_2] [i_2] [i_4] [i_8] = (arr_23 [9]);
                        }
                    }
                    for (int i_9 = 1; i_9 < 8;i_9 += 1)
                    {
                        var_26 ^= var_6;
                        arr_41 [1] [i_2] [i_2] [i_0] [i_2] = ((((min(6674642327599869238, (arr_17 [i_0] [i_0] [i_0] [i_2] [3] [i_2] [i_9 + 2])))) ? ((((min(199, var_13))))) : (arr_10 [i_0] [i_1] [i_0] [i_9 + 1])));
                        var_27 = ((~(((arr_3 [i_9 + 1] [i_1] [9]) ? var_8 : (arr_3 [i_9 + 2] [i_9 + 3] [i_2 + 1])))));
                        arr_42 [i_0] [i_0] [i_1] [1] [i_0] [i_9 + 1] = (max((((((arr_23 [i_2]) ? var_4 : var_3)) >> var_16)), (((((min(var_7, var_13))) <= ((min(var_2, (arr_39 [i_0] [i_1] [6] [i_1] [i_0] [i_9])))))))));
                    }
                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        var_28 *= (((min(22, var_3))) ? (((arr_35 [i_10] [i_1] [i_2 - 1] [i_10] [i_2 - 2] [i_1] [i_0]) ? var_0 : var_0)) : var_4);
                        arr_45 [i_0] [i_0] [i_2] [7] [1] = (min((((~var_5) ? ((var_14 ? var_15 : 18446744073709551615)) : ((min(var_12, var_10))))), ((((-8591 ? 222 : var_7))))));
                        var_29 = ((var_8 ? var_11 : ((((!((min((arr_26 [i_0] [i_1] [i_1] [i_2] [i_2] [i_10]), var_13)))))))));
                        arr_46 [i_0] [i_0] [i_0] [1] [9] = var_12;
                        arr_47 [i_0] [i_0] = ((((((((arr_28 [4] [i_0]) ? var_16 : -1)) % var_14))) - (((((-(arr_39 [i_0] [i_1] [10] [i_2 - 3] [i_10] [9])))) + (min((-2147483647 - 1), (arr_32 [i_0])))))));
                    }
                    for (int i_11 = 0; i_11 < 11;i_11 += 1)
                    {
                        arr_51 [i_0] [i_1] [i_2] [7] [i_0] = ((~((((arr_23 [i_2 - 1]) > (((arr_7 [i_0] [i_1] [i_0]) & var_15)))))));
                        var_30 = (var_4 ? (((var_1 ? var_15 : (((var_10 ? 2016770441 : (arr_1 [i_1]))))))) : var_10);

                        /* vectorizable */
                        for (int i_12 = 0; i_12 < 11;i_12 += 1)
                        {
                            arr_54 [i_0] [i_1] = ((((var_1 <= (arr_18 [i_0] [i_1] [i_0] [8] [i_12])))));
                            var_31 = (min(var_31, var_14));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_13 = 1; i_13 < 16;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 17;i_14 += 1)
        {
            {
                var_32 = ((((((arr_58 [i_13 - 1]) & var_16))) ? ((var_0 ? var_4 : var_14)) : (arr_58 [i_13 + 1])));
                arr_60 [7] [7] [i_13] = (((arr_55 [i_13]) <= var_1));
            }
        }
    }
    #pragma endscop
}
