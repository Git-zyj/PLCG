/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168173
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 *= 4294967295;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        var_17 -= (arr_8 [i_3] [i_3] [i_3] [i_3]);
                        arr_12 [i_0] [i_0] [i_1] [i_2] [i_2] [i_3] = (arr_8 [i_0] [i_1] [i_2] [i_3]);
                        arr_13 [i_0] = (1 >= var_0);
                        var_18 = (max(var_18, -24491));
                    }
                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {
                        arr_16 [i_0] [i_2] [i_4] = (arr_8 [i_0] [i_1] [i_2] [i_4]);
                        var_19 = 96;
                        var_20 = ((0 ? (max(250, 4294967284)) : (((~(-32767 - 1))))));
                        var_21 &= ((((max(((min(1, var_10))), -27084))) ? (((max(24491, 54)))) : ((-(arr_1 [i_4 - 1] [i_4 - 1])))));
                    }
                    arr_17 [i_1] = (max(((~(arr_1 [i_1] [i_1]))), ((min((arr_9 [i_2] [i_1] [i_0]), -33)))));
                }
            }
        }
        var_22 = (min((2147483647 < 33), (arr_3 [i_0] [i_0])));
    }
    var_23 = max(129, ((-(1 ^ 1))));

    for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
    {
        arr_20 [i_5] = (min((arr_19 [i_5]), (min(((1 ? (-9223372036854775807 - 1) : (arr_19 [i_5]))), (arr_18 [i_5])))));

        for (int i_6 = 2; i_6 < 20;i_6 += 1)
        {
            arr_23 [i_6] = ((~(((!(((-6 ? (arr_22 [i_5] [i_6]) : 4294967295))))))));
            var_24 ^= (min(((max((((-21444 > (arr_21 [i_5] [i_5])))), (arr_18 [i_5])))), (~-24491)));
            arr_24 [i_6] [i_6] [i_5] = (min((max(255, var_6)), 1));
            var_25 = (arr_21 [i_5] [i_5]);
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 22;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 22;i_9 += 1)
                {
                    {
                        arr_34 [i_5] [i_5] [i_7] [i_8] [i_9] = (((((arr_30 [i_7] [i_7] [i_7]) ? (arr_28 [i_5] [i_5] [i_5]) : var_11))) ? 5 : 114);
                        var_26 = ((~(((!(arr_28 [i_7] [i_8] [i_9]))))));
                    }
                }
            }
            var_27 = (arr_32 [i_5] [i_7] [i_7] [i_7]);
        }
    }
    for (int i_10 = 0; i_10 < 22;i_10 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 22;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 22;i_12 += 1)
            {
                {
                    var_28 = (((((~(!73)))) ? (min(((1 ? 21444 : var_1)), (arr_31 [i_12] [i_12]))) : (-6 | -21444)));

                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        var_29 = (min(var_29, (arr_44 [i_13])));
                        arr_48 [i_10] [i_11] [i_12] [i_13] = ((min((((0 >> (((arr_42 [i_11]) - 108))))), (((-9223372036854775807 - 1) / 2797)))) > (arr_37 [i_10]));
                    }
                    for (int i_14 = 0; i_14 < 22;i_14 += 1)
                    {
                        arr_52 [i_10] [i_10] = ((131071 ? (((((!(arr_32 [i_14] [i_12] [i_11] [i_10])))))) : (min(14536432645284995453, (arr_49 [i_14] [i_12] [i_11] [i_10])))));
                        var_30 = ((min(((0 ? (arr_47 [i_10] [i_10] [i_10] [i_10]) : 122)), (arr_49 [i_10] [i_11] [i_12] [i_14]))) != (arr_30 [i_10] [i_10] [i_10]));

                        /* vectorizable */
                        for (int i_15 = 0; i_15 < 1;i_15 += 1) /* same iter space */
                        {
                            var_31 += ((((-2801 >= (arr_27 [i_10] [i_11] [i_14]))) ? var_15 : ((~(arr_54 [i_10] [i_10] [i_10] [i_11] [i_10])))));
                            var_32 = ((716925875 ? (arr_49 [i_10] [i_10] [i_10] [i_10]) : (arr_49 [i_10] [i_10] [i_10] [i_10])));
                            arr_55 [i_10] [i_11] [i_15] [i_14] [i_15] = (arr_40 [i_12] [i_14] [i_15]);
                        }
                        for (int i_16 = 0; i_16 < 1;i_16 += 1) /* same iter space */
                        {
                            arr_58 [i_14] [i_11] [i_11] [i_14] [i_14] = (((((min((arr_39 [i_10]), 11519287321272640680)) - (arr_42 [i_11]))) + (((min((min(27083, (arr_31 [i_14] [i_10]))), ((((arr_31 [i_10] [i_10]) || var_13)))))))));
                            arr_59 [i_10] [i_11] [i_12] [i_14] [i_16] = (~-5070533233577144297);
                            arr_60 [i_14] = var_11;
                            var_33 = (2 >= 1);
                        }
                    }
                }
            }
        }
        var_34 = ((~((~(arr_54 [i_10] [4] [i_10] [4] [i_10])))));
    }
    #pragma endscop
}
