/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115638
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min((((-((7 >> (var_16 - 49578)))))), (((((var_10 ? 65534 : var_9))) ? (1 >= 65530) : ((var_10 ? 3071067093970129855 : var_16))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        var_18 = ((~(((arr_9 [i_0] [i_1] [i_2] [1]) % var_14))));

                        for (int i_4 = 2; i_4 < 13;i_4 += 1)
                        {
                            var_19 ^= var_8;
                            var_20 = 1254901640094093962;
                            var_21 = (((arr_10 [i_0 + 2] [i_4 + 1]) ? var_14 : 1688904747));
                        }
                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            var_22 |= -var_10;
                            var_23 = ((var_3 ? (arr_8 [i_2] [i_3] [13]) : (~7)));
                            var_24 = (arr_12 [i_0] [i_1] [6] [i_3] [i_1]);
                            var_25 = (arr_1 [i_0] [8]);
                        }
                        for (int i_6 = 4; i_6 < 13;i_6 += 1)
                        {
                            var_26 &= var_13;
                            arr_18 [i_6] [i_1] [i_1] [i_1] = (-1648421269 - 1920);
                        }
                        arr_19 [i_2] = (((((17 ? 1 : 11364))) * (arr_9 [i_0 + 2] [i_3] [i_3] [9])));
                        var_27 = (arr_9 [i_0 - 1] [i_0 + 3] [i_0 + 3] [i_0 + 3]);
                    }
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        arr_23 [i_0] [8] [i_0] [i_0] = (~1);
                        arr_24 [i_1] [9] [i_2] [i_7] = ((((max(((89 ? (arr_20 [i_7]) : var_12)), (max(var_1, (arr_11 [i_1] [i_2])))))) ? 32767 : (((var_4 ? ((min((arr_14 [9] [i_7] [i_2] [8] [9]), (arr_6 [i_7] [i_1] [5] [i_7])))) : (43145 & 0))))));
                    }
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        var_28 ^= -19;
                        var_29 ^= var_12;
                        var_30 = ((var_3 ? (((arr_0 [0] [i_8]) / (((arr_4 [i_0] [i_1]) ? var_16 : 0)))) : var_1));
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 2; i_9 < 14;i_9 += 1)
                    {
                        for (int i_10 = 2; i_10 < 14;i_10 += 1)
                        {
                            {
                                var_31 = 1;
                                var_32 = (min(var_32, ((-(!1)))));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_11 = 0; i_11 < 15;i_11 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_12 = 1; i_12 < 13;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 15;i_13 += 1)
                        {
                            {
                                var_33 *= (((arr_36 [i_0] [i_12 + 2] [i_11] [i_12] [i_13] [i_0 - 1] [i_0]) & ((-(arr_16 [i_0] [i_11] [1] [i_11] [i_12] [i_12] [i_13])))));
                                var_34 += (68 % 1254901640094093962);
                                var_35 = (max(var_35, var_9));
                            }
                        }
                    }
                    var_36 *= (arr_22 [i_0] [1] [i_1] [i_1] [1] [i_11]);
                    arr_38 [i_1] &= (arr_31 [i_1]);
                }
                /* vectorizable */
                for (int i_14 = 0; i_14 < 15;i_14 += 1) /* same iter space */
                {
                    var_37 *= -1221754821;
                    arr_43 [i_0] [i_1] [7] [i_0] = (arr_10 [i_0] [i_1]);
                }
                arr_44 [i_1] [i_1] [i_1] = var_14;

                for (int i_15 = 3; i_15 < 14;i_15 += 1)
                {
                    var_38 ^= -58788;
                    var_39 = (max(var_39, (arr_37 [i_15] [i_1] [i_15])));
                    arr_47 [i_1] [i_1] &= ((max(var_4, var_4)));
                    /* LoopNest 2 */
                    for (int i_16 = 1; i_16 < 1;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 0;i_17 += 1)
                        {
                            {
                                var_40 = (((arr_8 [i_0] [10] [i_16]) ? ((max((((arr_42 [i_0] [2]) | 50125)), (arr_25 [i_15])))) : var_7));
                                arr_54 [i_16] [i_15] = (min(var_7, var_13));
                                arr_55 [i_15] = (min(((min(1, (!var_12)))), ((1648421269 ? ((max(2157, 61047))) : (((arr_31 [i_15]) ? -92 : (arr_50 [i_15] [i_1] [i_15] [i_16] [i_16] [i_17])))))));
                                arr_56 [i_0] [i_15] [i_15] [i_16] [6] = (((~9727) ? (min(((min(127, (arr_20 [i_16])))), (arr_29 [i_0] [i_1] [i_15] [i_16] [i_17]))) : ((((min(44, (arr_45 [i_1] [i_15] [i_15] [i_17])))) ? ((min((arr_22 [i_17] [i_17] [i_16] [i_15] [0] [i_0]), (arr_12 [i_0] [i_1] [i_15] [2] [i_15])))) : ((var_16 ? (arr_40 [i_0] [7] [i_0] [i_0]) : (arr_53 [8] [i_1] [i_15] [i_15] [i_17])))))));
                            }
                        }
                    }
                }
                for (int i_18 = 1; i_18 < 14;i_18 += 1)
                {
                    var_41 = (max(var_41, ((((((((var_16 == (arr_14 [i_0] [11] [i_18] [i_0] [i_1]))) ? 375611809662024386 : var_1))) == (((arr_25 [i_1]) ? ((var_3 ? (arr_27 [i_0] [i_0] [i_1] [i_18]) : 5435899381726339822)) : ((((arr_3 [i_1]) + (arr_45 [i_0] [i_0] [i_1] [10])))))))))));
                    var_42 = ((~(arr_6 [i_0] [4] [12] [i_0])));
                }
                /* vectorizable */
                for (int i_19 = 0; i_19 < 15;i_19 += 1)
                {
                    var_43 = (max(var_43, (((0 % (arr_8 [i_0] [i_0 + 3] [i_0 - 1]))))));
                    var_44 = ((var_2 ? (arr_52 [i_0 - 1] [i_0 - 1] [i_0 - 2] [i_1]) : (arr_52 [i_0 + 2] [i_0 + 2] [i_0 + 3] [i_1])));
                    /* LoopNest 2 */
                    for (int i_20 = 0; i_20 < 1;i_20 += 1)
                    {
                        for (int i_21 = 0; i_21 < 15;i_21 += 1)
                        {
                            {
                                var_45 *= ((-((((arr_64 [i_21] [i_20] [i_0]) >= var_12)))));
                                arr_67 [i_20] [i_21] = var_5;
                                arr_68 [3] [i_20] [i_19] [i_1] [i_0] = (((~var_13) >= ((29766 ? (arr_10 [i_0] [i_1]) : 11421429629685659290))));
                            }
                        }
                    }

                    for (int i_22 = 0; i_22 < 15;i_22 += 1) /* same iter space */
                    {
                        var_46 = (((var_5 == var_2) == (~var_14)));
                        arr_71 [1] [7] [i_1] [i_19] [i_22] |= (-11364 >= 65528);
                        var_47 ^= 11364;
                    }
                    for (int i_23 = 0; i_23 < 15;i_23 += 1) /* same iter space */
                    {
                        var_48 = (max(var_48, (1 >= 1)));
                        var_49 = (min(var_49, -517190899));
                    }
                }
            }
        }
    }
    #pragma endscop
}
