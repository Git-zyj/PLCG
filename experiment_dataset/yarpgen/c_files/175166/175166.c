/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175166
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_14 [5] [5] [i_2] [i_3] [i_3] [0] = ((((((arr_4 [i_0] [i_1]) - -27827))) ? (24917 | 16814) : (((!(arr_4 [i_0] [i_3]))))));
                                var_15 = ((((((29 ? -34 : (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) + 2147483647)) >> ((((max((arr_12 [i_0] [i_1] [i_1] [i_2] [i_3] [i_3] [i_1]), 27034))) - 59654))));
                                var_16 += (((((951164145 ? -15 : -113))) ? (min(((((arr_6 [2] [2] [i_0] [i_3]) < var_1))), (((arr_11 [i_0] [i_1] [6] [6] [i_0]) ? 3049 : -112)))) : var_8));
                            }
                        }
                    }
                    arr_15 [i_1] [i_2] = 951164145;
                }
                /* vectorizable */
                for (int i_5 = 1; i_5 < 13;i_5 += 1)
                {
                    var_17 = ((((~(arr_4 [i_0] [i_1]))) / 1));
                    var_18 = (max(var_18, (((((((arr_17 [i_0] [i_1] [i_5]) < (arr_16 [i_0] [i_1])))) * (arr_11 [i_1] [i_5 - 1] [i_5] [i_5 + 1] [i_0]))))));
                    var_19 |= (((arr_16 [i_5 - 1] [i_5 - 1]) >> (!4087858341)));
                }
                var_20 = (min(var_20, ((max(2361, (arr_4 [i_0] [0]))))));

                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    arr_21 [i_0] [i_1] [i_6] = 33525;
                    var_21 -= ((((!((!(arr_8 [i_0] [i_0]))))) ? (arr_20 [8] [i_1] [8]) : ((min((arr_8 [i_0] [i_6]), (var_3 < var_5))))));
                    var_22 = (((((!(arr_9 [i_0] [i_0] [i_1] [i_0] [i_6])))) * ((-47 ? 31 : 15225))));
                }
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    var_23 = ((~((30 >> (arr_10 [i_0] [i_0] [i_1] [i_0] [i_7])))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 12;i_9 += 1)
                        {
                            {
                                var_24 = 30689;
                                var_25 = var_9;
                            }
                        }
                    }
                }
                for (int i_10 = 1; i_10 < 11;i_10 += 1)
                {

                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 14;i_11 += 1)
                    {

                        for (int i_12 = 3; i_12 < 13;i_12 += 1)
                        {
                            var_26 |= (arr_18 [i_10 + 2] [i_10 + 2]);
                            var_27 = (max(var_27, (arr_5 [i_0] [i_0] [i_0])));
                            var_28 ^= ((((((arr_1 [i_0]) / 38509))) ? (arr_8 [i_10 + 3] [i_10 + 3]) : (arr_2 [i_12 - 3])));
                            var_29 = (min(var_29, var_1));
                        }
                        arr_40 [i_0] [i_10] [i_10] [i_0] = (((20462 == 15225) << (((arr_3 [i_11]) - 29113))));
                        var_30 *= ((128 ? 50191 : 27025));
                    }
                    /* vectorizable */
                    for (int i_13 = 0; i_13 < 14;i_13 += 1)
                    {
                        arr_44 [i_10] [i_1] [i_10 + 1] [i_13] = (((arr_12 [i_0] [i_0] [i_0] [6] [6] [i_0] [i_0]) ? ((var_2 ? -11637 : 27027)) : 258290809));
                        arr_45 [i_0] [i_1] [i_10 + 2] [i_10] = (arr_11 [i_10] [i_10] [i_10] [i_10 + 3] [i_10]);
                        var_31 = ((var_10 ? (arr_12 [i_13] [i_13] [i_13] [i_0] [11] [i_1] [i_0]) : (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                    }
                    for (int i_14 = 1; i_14 < 1;i_14 += 1)
                    {
                        var_32 += (max(((((arr_30 [i_10 + 1] [i_10]) > 27025))), (min((arr_30 [i_10 + 1] [i_10 + 1]), (arr_30 [i_10 + 1] [i_10 + 2])))));
                        arr_48 [i_0] [i_0] [i_0] [i_1] [6] [i_10] = (!20328);
                        var_33 = (min(var_33, ((((((var_7 << (((((-951164145 + 2147483647) >> var_6)) - 1196319499))))) ? 59558 : 18551)))));
                    }
                    var_34 = ((-81 ? (~55562) : -50));
                    var_35 = ((0 ? var_3 : (arr_17 [i_0] [i_0] [i_0])));
                }
            }
        }
    }

    for (int i_15 = 0; i_15 < 21;i_15 += 1)
    {
        var_36 = (max(var_36, (arr_51 [i_15])));
        var_37 -= (arr_51 [8]);
    }
    /* vectorizable */
    for (int i_16 = 0; i_16 < 24;i_16 += 1)
    {
        arr_54 [i_16] = (57507 ? 5150 : 67);
        arr_55 [8] [i_16] = var_7;
    }
    #pragma endscop
}
