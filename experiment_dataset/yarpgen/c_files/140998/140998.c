/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140998
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= 24;
    var_11 &= (var_2 | 0);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {

                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        var_12 ^= (arr_7 [i_3 - 1] [i_3 + 1] [i_3 - 1]);

                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            var_13 = var_4;
                            var_14 = (((arr_2 [i_3 + 1]) + var_0));
                            var_15 = (((((arr_0 [i_0]) >= (arr_4 [i_4]))) ? ((65535 ? 4043135543309581088 : (arr_11 [i_1] [i_2] [i_3 + 1] [i_2]))) : ((((arr_14 [i_2] [i_0]) ^ (arr_8 [i_0] [i_1] [i_4]))))));
                            var_16 = arr_1 [i_0];
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_17 = ((arr_8 [i_0] [i_0] [i_0]) ? (arr_9 [i_5 + 1]) : (((((arr_15 [i_0] [i_1] [i_2] [i_5 + 1]) < (arr_11 [i_0] [i_1] [i_2] [i_2]))))));
                                var_18 = (((arr_13 [i_2]) ^ var_1));
                                arr_20 [i_0] [i_2] [i_2] [i_5 + 1] = (arr_15 [i_0] [i_0] [i_0] [i_0]);
                            }
                        }
                    }
                }
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {

                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        arr_25 [i_8] = (max((arr_23 [i_0] [i_0] [i_0] [i_0]), (((3596570958 != (max((arr_24 [i_0] [i_1] [i_7] [i_8]), var_5)))))));
                        var_19 = (arr_17 [i_0] [i_1] [i_7] [i_7] [i_8]);
                    }
                    for (int i_9 = 1; i_9 < 8;i_9 += 1) /* same iter space */
                    {
                        var_20 = (arr_23 [i_0] [i_1] [i_7] [i_9 + 4]);
                        var_21 = (max(2459816648, 3419480919));
                        var_22 = (max(var_22, var_2));
                    }
                    for (int i_10 = 1; i_10 < 8;i_10 += 1) /* same iter space */
                    {
                        var_23 = (((max((min((arr_14 [i_1] [i_1]), (arr_17 [i_0] [i_1] [i_1] [i_7] [i_10 + 3]))), var_9))) ? (((max(3596570958, 7391569916419099509)) / (((max((arr_14 [i_0] [i_1]), var_2)))))) : ((max(2147483647, (arr_0 [i_10 + 3])))));

                        for (int i_11 = 0; i_11 < 12;i_11 += 1)
                        {
                            arr_35 [i_7] [i_1] = (max((max((max(698396337, (arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))), ((max(var_1, (arr_12 [i_11] [i_1] [i_7] [i_10 + 1] [i_11])))))), (arr_21 [i_0] [i_1] [i_7] [i_11])));
                            arr_36 [i_10 + 4] [i_7] [i_1] [i_0] = (arr_31 [i_0] [i_0] [i_0] [i_0]);
                        }

                        for (int i_12 = 0; i_12 < 12;i_12 += 1)
                        {
                            var_24 = max(745079953, (min((-551085437 >= 119), (max(var_8, (arr_2 [i_10 + 1]))))));
                            arr_40 [i_0] [i_0] [i_0] [i_0] [i_0] = (max(2218367124826252967, ((min(var_8, -11)))));
                        }
                        for (int i_13 = 0; i_13 < 12;i_13 += 1)
                        {
                            var_25 = (~(((((arr_31 [i_0] [i_1] [i_7] [i_10 + 4]) ^ var_8)) ^ var_2)));
                            var_26 ^= 741562289;
                            var_27 = (min((arr_22 [i_13] [i_0]), (arr_15 [i_1] [i_1] [i_7] [i_10 + 1])));
                        }
                    }
                    /* vectorizable */
                    for (int i_14 = 0; i_14 < 12;i_14 += 1)
                    {
                        var_28 = arr_1 [i_7];
                        var_29 = (min(var_29, (((698396322 && (arr_45 [i_14] [i_7] [i_1] [i_0]))))));
                        var_30 = (arr_17 [i_0] [i_0] [i_0] [i_0] [i_0]);
                    }

                    for (int i_15 = 0; i_15 < 12;i_15 += 1)
                    {
                        arr_49 [i_0] &= (max(((((arr_19 [10] [i_1] [i_1] [i_7] [i_15]) ? 28 : var_7))), (min(2218367124826252975, (65505 | 114)))));
                        var_31 = (min(var_31, (max(var_7, (max((((639076194 - (arr_5 [i_0])))), (max(-4347162113452920753, (arr_24 [i_15] [i_7] [i_1] [i_0])))))))));
                        var_32 = (max(var_32, (arr_8 [i_0] [i_0] [i_0])));
                        arr_50 [i_1] [i_1] = var_3;
                    }
                    for (int i_16 = 1; i_16 < 9;i_16 += 1)
                    {
                        var_33 = var_8;
                        var_34 = (arr_52 [i_0] [i_0] [i_0] [i_0]);
                        arr_54 [i_0] [i_16 + 1] [i_7] [i_0] = arr_46 [i_0] [i_1] [i_7] [i_16 + 1];

                        for (int i_17 = 2; i_17 < 11;i_17 += 1)
                        {
                            var_35 = ((((max((arr_11 [i_16 + 2] [i_16 - 1] [i_17 + 1] [0]), (arr_11 [i_1] [i_16 + 3] [i_17 - 1] [2])))) || -84));
                            var_36 = var_8;
                            arr_57 [i_0] [i_1] [i_7] [i_16 + 1] [i_17 - 2] = (arr_22 [i_1] [i_1]);
                            arr_58 [i_0] [i_1] [i_7] [i_16 + 1] [i_17 + 1] = arr_27 [i_16 + 2] [i_1] [i_7] [i_16 + 2] [i_17 + 1] [i_1];
                            var_37 = 3419480893;
                        }
                        arr_59 [i_0] [i_1] [i_7] [i_16 - 1] = (((max((arr_56 [i_16 + 1] [i_16 - 1] [i_16 + 2] [i_16 + 3]), ((max((arr_29 [i_0] [i_1] [i_7] [i_16 - 1]), -9))))) == ((((max((arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), var_4)) / ((min((arr_21 [i_0] [i_1] [i_7] [i_16 + 3]), (arr_15 [i_0] [i_1] [i_7] [i_16 + 3])))))))));
                    }
                    /* vectorizable */
                    for (int i_18 = 0; i_18 < 12;i_18 += 1)
                    {
                        var_38 -= (((((arr_43 [i_0] [i_1] [i_1] [i_7] [i_18]) ? (arr_44 [i_0] [i_0] [i_7]) : var_8)) ^ (((arr_53 [i_0] [i_0] [i_0]) ? -5019834477061253242 : (arr_52 [i_7] [i_1] [i_7] [i_0])))));
                        arr_62 [i_0] [i_1] [i_1] [i_7] [i_18] |= var_7;
                        var_39 -= (arr_31 [i_18] [i_7] [i_1] [i_0]);
                    }
                }
                arr_63 [i_0] = ((arr_48 [i_1]) % (min((max((arr_30 [i_0]), 18014396361998336)), (var_0 - var_9))));
            }
        }
    }
    var_40 = var_8;
    #pragma endscop
}
