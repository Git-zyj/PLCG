/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170368
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_15 = (arr_7 [i_0] [i_1] [i_2] [i_3]);

                            for (int i_4 = 2; i_4 < 19;i_4 += 1)
                            {
                                var_16 = (min(var_16, 171251270));
                                arr_14 [1] [i_1] [i_2] [i_1 - 1] [i_1 - 1] [i_1] [i_0] = (arr_12 [i_1 - 1] [i_1 - 1]);
                                var_17 = (max(var_17, ((((((var_10 % (arr_1 [i_2])))) ? (var_14 > var_1) : (arr_10 [i_0] [i_1] [i_2]))))));
                                var_18 += ((-((1 ? 11 : -1404286994))));
                            }
                            for (int i_5 = 0; i_5 < 1;i_5 += 1)
                            {
                                var_19 += ((arr_3 [i_5]) ? (min((var_0 - 1), ((var_3 ? 0 : var_10)))) : var_3);
                                var_20 = (max(var_20, (arr_0 [i_1 - 1] [i_5])));
                                var_21 = (min(1647993064894440905, 0));
                            }

                            for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                            {
                                var_22 = ((5156888553130785914 ? 18446744073709551615 : 1));
                                arr_20 [i_0] [i_1] [i_1] [20] [i_1] [i_6] [i_6] = (2147483647 ^ 115);
                            }
                            for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                            {
                                var_23 = 1;
                                arr_25 [9] [9] [i_2] [i_2] [11] [i_1] [i_2] = ((var_0 ? (arr_10 [i_0] [i_1] [11]) : (min((arr_7 [i_7] [i_1] [i_3] [i_7]), (arr_18 [i_0] [i_1] [i_2] [i_3] [i_7])))));
                            }
                            for (int i_8 = 0; i_8 < 21;i_8 += 1)
                            {
                                var_24 = (arr_21 [i_8] [i_0] [i_2] [i_0] [i_0]);
                                arr_28 [i_0] [i_1] [i_1] [i_2] [i_1] [i_8] = (((((1 >= 0) ^ 13915)) >> 1));
                                var_25 = (arr_15 [i_0] [i_1] [i_1] [i_3] [i_8] [i_8]);
                                arr_29 [i_0] [i_0] [i_1] [i_0] [i_0] = (min(((min(1, 65535))), ((var_9 ? var_11 : -24883))));
                            }
                            arr_30 [i_2] [i_1] [i_0] = (((((((max(var_6, (arr_24 [i_0] [i_1] [i_2] [i_3] [i_3])))) >> (24502 - 24472)))) ? var_7 : (((((-38 ? 11 : 11))) ? (arr_27 [i_1] [i_1 - 1]) : (arr_11 [i_0] [i_0] [i_0])))));
                        }
                    }
                }
                var_26 = (((var_2 ? (max(0, 1)) : (max(var_5, var_0)))));

                for (int i_9 = 1; i_9 < 17;i_9 += 1)
                {
                    var_27 = 1;
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 21;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 21;i_11 += 1)
                        {
                            {
                                var_28 = 12413320103557213533;
                                var_29 = ((-((var_8 | ((15360 ? var_11 : var_14))))));
                                var_30 = (arr_24 [i_0] [0] [0] [0] [0]);
                                var_31 = (((1 ? 0 : 1)) < ((-((min((arr_12 [i_0] [i_0]), (arr_12 [i_10] [i_0])))))));
                            }
                        }
                    }
                    var_32 += (((((arr_2 [1]) ? (arr_2 [0]) : (1 && 521779390837532999))) * (!var_8)));

                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        arr_39 [i_0] [i_1 - 1] [i_1 - 1] [14] [i_12] [i_12] &= ((~((min(1, (1 && 1002848224))))));
                        var_33 += 16;
                    }
                    for (int i_13 = 1; i_13 < 18;i_13 += 1)
                    {
                        var_34 = ((((!(arr_24 [i_0] [i_1 - 1] [i_9] [i_0] [i_13 - 1]))) ? (((arr_15 [1] [i_1] [i_1 - 1] [i_1] [i_13 + 1] [1]) ? var_9 : var_11)) : ((1 ? 18446744073709551615 : (((21667 ? -38 : 1)))))));
                        var_35 = 4421131007104032422;
                    }
                    var_36 += 1;
                }
                /* vectorizable */
                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {
                    var_37 = ((!(arr_11 [i_1] [i_1 - 1] [i_14])));
                    var_38 *= (((arr_13 [i_0] [i_0] [i_0] [1] [i_0]) ? 51 : var_0));
                    var_39 = (min(var_39, 18446744073709551615));
                }
                var_40 += (min((min((9657 || 12630), (arr_31 [i_1] [i_1 - 1] [5] [i_0]))), (arr_7 [14] [2] [i_0] [2])));
            }
        }
    }
    var_41 = var_13;
    #pragma endscop
}
