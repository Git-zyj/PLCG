/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103041
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((79 ? var_15 : var_11))) && (var_14 && var_4)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_7 [i_0 + 3] [i_1] [i_0] = 0;
                arr_8 [i_0] [i_1] = (1 * 1);
            }
        }
    }

    for (int i_2 = 1; i_2 < 12;i_2 += 1) /* same iter space */
    {
        var_17 = -9223372036854775803;
        arr_11 [i_2] = (-4205904074773895678 > 1);

        /* vectorizable */
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            var_18 ^= (arr_4 [3] [i_2]);
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 12;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        {
                            var_19 = 1;
                            arr_24 [9] [i_3] [2] [i_2] [9] = ((var_11 ^ (arr_3 [i_2])));
                        }
                    }
                }
            }
            arr_25 [i_2] [i_2] = var_7;
        }
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            arr_29 [i_2 - 1] [i_2] = 7823727120534813997;
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 13;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 13;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        {
                            arr_36 [i_8] [i_7] [i_2] [i_9] [i_7] = (((arr_17 [i_2 - 1] [i_2 - 1] [8]) ? 22 : ((((max(-32768, var_7))) ? (arr_4 [i_2] [i_10]) : ((max((arr_26 [i_2 - 1] [0] [0]), var_7)))))));
                            var_20 = -9223372036854775803;
                        }
                    }
                }
            }
        }
        for (int i_11 = 0; i_11 < 13;i_11 += 1)
        {
            arr_39 [i_2] = (max((~var_0), 1));
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 13;i_13 += 1)
                {
                    {

                        for (int i_14 = 1; i_14 < 12;i_14 += 1)
                        {
                            arr_48 [i_2 - 1] [i_2] [2] [i_2 - 1] = var_13;
                            var_21 ^= ((~(min(((-(arr_13 [i_2 - 1] [i_11] [1]))), 1))));
                        }
                        /* vectorizable */
                        for (int i_15 = 0; i_15 < 13;i_15 += 1)
                        {
                            arr_52 [i_2] [0] [i_12] [i_13] [i_2] = ((-372118485 ? 7823727120534813997 : 12));
                            var_22 += (((arr_6 [i_2 + 1]) <= var_9));
                            var_23 = ((((10623016953174737609 != (arr_35 [i_2] [i_11] [i_15]))) ? var_5 : (1 >> 1)));
                        }
                        var_24 -= min((((var_11 ? (-32758 | var_14) : var_12))), ((+((1 ? (arr_46 [i_13] [i_12] [i_2] [i_2] [6]) : 1)))));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_16 = 0; i_16 < 13;i_16 += 1)
            {
                for (int i_17 = 1; i_17 < 12;i_17 += 1)
                {
                    {

                        for (int i_18 = 0; i_18 < 13;i_18 += 1)
                        {
                            arr_61 [i_2] [i_11] [i_16] [6] [i_2] = (min((((((var_14 - 30786325577728) + 9223372036854775807)) >> (((var_15 < (arr_2 [i_17] [9])))))), ((max((7029989419741701411 >= var_8), var_6)))));
                            var_25 = var_13;
                            arr_62 [1] [i_11] [i_2] = ((16481428197154552157 ? 4 : 1));
                            var_26 = (-(((!(arr_18 [i_11] [i_11] [i_16] [i_2 - 1])))));
                        }
                        for (int i_19 = 0; i_19 < 13;i_19 += 1)
                        {
                            var_27 = var_0;
                            var_28 ^= ((var_1 && ((max(1, (max(9223372036854775807, var_1)))))));
                            var_29 += var_0;
                            var_30 += 70300024700928;
                        }
                        var_31 = (((~var_5) ? (((arr_64 [i_17 - 1] [i_17] [i_16] [i_2] [i_2] [i_2] [i_2]) ^ ((var_14 ? var_6 : var_3)))) : (((-var_4 ? ((min(1, (arr_45 [i_2] [i_2])))) : ((max(var_12, -45))))))));
                    }
                }
            }
        }
    }
    for (int i_20 = 1; i_20 < 12;i_20 += 1) /* same iter space */
    {
        var_32 = (arr_33 [i_20] [i_20] [i_20] [i_20 + 1]);
        /* LoopNest 2 */
        for (int i_21 = 0; i_21 < 13;i_21 += 1)
        {
            for (int i_22 = 2; i_22 < 10;i_22 += 1)
            {
                {
                    arr_73 [i_20 - 1] [i_20 - 1] [i_20] [i_22] = (((arr_3 [i_21]) & var_0));
                    arr_74 [i_20 + 1] [i_20 + 1] [i_20] [i_20] = (min((((arr_18 [i_20] [i_21] [i_22] [i_22]) ? (!-1) : (((arr_58 [i_20] [i_21] [i_20] [3] [i_21]) ? (arr_13 [i_20] [0] [0]) : var_10)))), ((((min(0, -45))) << (((arr_66 [i_22] [i_21]) - 161))))));
                    var_33 = 1965315876554999458;
                }
            }
        }
    }
    #pragma endscop
}
