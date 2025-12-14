/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109862
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_20 = (min(var_20, (((-((max((arr_2 [i_1] [i_0]), (arr_2 [i_1] [i_1])))))))));

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {

                    for (int i_3 = 4; i_3 < 10;i_3 += 1)
                    {
                        var_21 = ((((((0 | 3293) ? (arr_2 [i_2] [i_2]) : (arr_10 [i_0] [i_1] [1] [8])))) ? (arr_7 [i_0] [i_0]) : (max(((max(43729, var_13))), (((arr_6 [9] [i_0] [i_0]) ? (arr_6 [6] [i_0] [i_0]) : var_2))))));

                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            arr_16 [i_0] [i_0] [i_0] [i_0] = (min((min(var_18, 127)), 121));
                            var_22 |= (((((-(arr_1 [i_3 + 1])))) ? 8967710195947193206 : 48047));
                        }
                    }
                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 10;i_5 += 1) /* same iter space */
                    {
                        var_23 = -104;
                        var_24 = (max(var_24, (((-(arr_18 [i_5] [i_1] [i_1] [i_0]))))));
                        var_25 = var_1;
                        arr_19 [i_0] [0] [0] = (arr_9 [i_2]);
                    }
                    /* vectorizable */
                    for (int i_6 = 1; i_6 < 10;i_6 += 1) /* same iter space */
                    {
                        var_26 = 63;
                        var_27 = (max(var_27, var_4));
                    }
                    for (int i_7 = 1; i_7 < 10;i_7 += 1) /* same iter space */
                    {
                        arr_24 [i_0] [7] [0] [7] [i_0] [i_0] = ((min(var_3, (((773272353 == (arr_21 [i_0] [i_2] [i_2] [i_1])))))));
                        arr_25 [8] [7] [i_1] [i_1] [i_0] [i_0] = ((var_16 << (((((((74 ? 914361839 : var_7))) ? (((914361838 << (var_2 - 3590894224)))) : ((438 ? (arr_15 [i_0] [1]) : 6104)))) - 4143972329))));
                    }
                    var_28 *= 55;
                }
                for (int i_8 = 1; i_8 < 9;i_8 += 1)
                {
                    arr_28 [i_0] [i_1] = ((((min((!59158), ((-(arr_4 [i_0])))))) ? (((arr_0 [i_1]) ? (arr_26 [i_8 + 2] [i_8 + 1] [i_8 + 2] [i_0]) : (arr_13 [1]))) : 3));
                    var_29 = ((-((var_3 ? var_5 : (arr_26 [i_8 - 1] [3] [6] [i_1])))));
                    var_30 = (arr_0 [i_0]);
                    var_31 = (((((((arr_11 [6] [6] [6] [i_0] [i_0]) * -110)))) ? ((-71 ? (arr_23 [i_0] [i_1] [i_8 - 1]) : (arr_10 [i_1] [i_1] [i_8] [i_8 - 1]))) : ((var_8 ? (arr_23 [i_8 + 2] [i_8 + 2] [i_8 + 2]) : (arr_23 [i_8 + 2] [i_8 + 2] [i_8 + 1])))));
                    arr_29 [i_0] [i_8] [i_0] [i_8] = (arr_17 [i_0] [i_1] [i_1] [i_1] [i_1]);
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 11;i_9 += 1) /* same iter space */
                {
                    var_32 = (max(var_32, (-31150 * var_11)));
                    var_33 = -71;
                    arr_33 [i_0] = var_16;
                    var_34 = var_1;
                }
                for (int i_10 = 0; i_10 < 11;i_10 += 1) /* same iter space */
                {
                    var_35 = 1764135931;

                    for (int i_11 = 0; i_11 < 11;i_11 += 1)
                    {
                        arr_40 [i_0] [i_0] [i_0] = (((((-((var_5 ? (arr_13 [8]) : 268435455))))) ? 10572008952274836205 : (min((arr_14 [i_0] [i_10] [i_0]), 12925))));

                        for (int i_12 = 0; i_12 < 11;i_12 += 1)
                        {
                            var_36 = (arr_10 [i_11] [i_11] [9] [i_0]);
                            var_37 = arr_31 [i_11];
                            arr_44 [i_1] [i_11] [5] = ((((arr_3 [i_12]) - var_14)));
                            arr_45 [i_0] [i_0] [i_0] [i_11] [i_11] [i_1] = ((-(arr_5 [i_11])));
                            var_38 *= (arr_32 [i_10]);
                        }
                        /* vectorizable */
                        for (int i_13 = 1; i_13 < 7;i_13 += 1) /* same iter space */
                        {
                            var_39 = ((933263463 - (arr_41 [i_0] [i_1] [i_0] [i_11] [i_13])));
                            var_40 = (((arr_39 [i_0] [i_0] [i_0] [i_11]) - (arr_23 [i_10] [i_1] [i_0])));
                            arr_50 [i_0] [i_0] [i_0] = ((+((((arr_49 [i_1] [i_1] [i_1]) != var_15)))));
                            var_41 += var_13;
                            arr_51 [i_13 + 3] [10] [10] = ((arr_20 [5] [8] [i_11] [i_11] [i_1] [8]) & 39);
                        }
                        for (int i_14 = 1; i_14 < 7;i_14 += 1) /* same iter space */
                        {
                            var_42 = ((!(((((var_14 ? (arr_23 [i_14 + 3] [i_11] [8]) : var_0)) % (((var_0 ? (arr_22 [i_0] [i_0] [i_11] [i_0] [6]) : 16))))))));
                            var_43 *= (arr_52 [i_0] [i_0] [i_10] [i_11] [i_11] [i_0] [i_14 - 1]);
                        }
                        /* vectorizable */
                        for (int i_15 = 1; i_15 < 7;i_15 += 1) /* same iter space */
                        {
                            var_44 = (max(var_44, (((39 ? (arr_55 [i_15] [i_15 + 1] [i_15 + 4]) : 9479033877762358410)))));
                            arr_59 [6] [i_15] [9] [i_11] [6] [i_0] [i_0] = var_8;
                        }
                        arr_60 [9] [i_10] [i_1] [4] [4] [4] = ((var_14 ? (((arr_49 [i_0] [i_11] [i_10]) ? (-9223372036854775807 - 1) : (arr_34 [i_11] [i_1] [i_1] [i_0]))) : ((((arr_49 [i_11] [9] [i_10]) - 14)))));

                        for (int i_16 = 0; i_16 < 11;i_16 += 1)
                        {
                            var_45 = (min(var_45, -2721030317812340972));
                            arr_64 [i_16] [i_10] [i_0] [i_0] = var_10;
                        }
                        /* vectorizable */
                        for (int i_17 = 2; i_17 < 10;i_17 += 1)
                        {
                            arr_69 [3] [i_0] = -var_15;
                            var_46 = (arr_41 [i_17] [10] [i_10] [4] [i_0]);
                            arr_70 [6] [i_10] [i_1] = (((((-25 ? var_12 : (arr_39 [i_17] [i_10] [i_10] [4])))) || (((arr_39 [i_0] [i_0] [i_0] [i_17 + 1]) == var_18))));
                        }
                        for (int i_18 = 0; i_18 < 11;i_18 += 1)
                        {
                            var_47 = ((((((((arr_67 [3]) ? 10267 : (arr_5 [i_11])))) ? (arr_53 [i_11] [i_10] [i_1]) : (~var_0))) >= (((max(10240, 40))))));
                            var_48 = 10245;
                        }
                    }
                    var_49 = ((var_9 && (((1 * ((max(33031, 31))))))));

                    for (int i_19 = 0; i_19 < 11;i_19 += 1)
                    {
                        var_50 ^= (var_14 * var_8);
                        var_51 = 3840;
                    }
                }
                /* LoopNest 3 */
                for (int i_20 = 0; i_20 < 11;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 11;i_21 += 1)
                    {
                        for (int i_22 = 0; i_22 < 11;i_22 += 1)
                        {
                            {
                                arr_85 [i_0] [i_1] [i_20] [i_21] [i_22] = ((((arr_11 [i_22] [i_21] [i_20] [i_0] [i_0]) + (arr_11 [i_22] [i_21] [i_20] [i_1] [i_0]))));
                                var_52 = (max(var_52, var_10));
                            }
                        }
                    }
                }
                var_53 = (((max((((arr_41 [i_0] [i_1] [i_0] [i_1] [i_1]) | var_0)), (arr_30 [i_1] [i_1] [i_1]))) / 31));
                arr_86 [i_0] = (arr_73 [i_1] [i_1] [i_1]);
            }
        }
    }
    var_54 = -127;
    var_55 &= 0;
    #pragma endscop
}
