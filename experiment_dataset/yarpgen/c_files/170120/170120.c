/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170120
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                var_15 ^= 511;

                for (int i_2 = 3; i_2 < 12;i_2 += 1)
                {
                    arr_8 [i_0] [i_1] [i_2] = 65535;
                    var_16 = (!16);
                }
                for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
                {
                    arr_11 [i_0] [i_0] [i_0] [i_3] = (max(-30552, (30552 && 0)));
                    var_17 = (min(var_17, ((((min((((-(arr_5 [i_1])))), (((arr_3 [i_0]) << (var_4 + 97))))) / (arr_4 [i_3] [i_1 + 3] [i_3]))))));
                }
                for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
                {
                    arr_15 [i_0] [i_1] [i_0] = ((-(((var_3 && (arr_6 [i_0] [i_0] [i_0] [i_0]))))));
                    var_18 = ((!(((30547 >= 1534390462) && 0))));

                    for (int i_5 = 3; i_5 < 11;i_5 += 1)
                    {

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            var_19 = (min(var_19, -63078));
                            arr_22 [i_0 + 1] [1] [i_0] [i_0] [i_0 + 1] [i_0] = var_6;
                        }
                        for (int i_7 = 3; i_7 < 12;i_7 += 1)
                        {
                            arr_26 [i_0] [i_4] [i_1] [i_0] = (max(0, 1));
                            arr_27 [i_0] [6] [i_4] [i_5 - 2] [i_7] = (((~(((!(arr_21 [i_0] [i_1] [i_4] [i_1])))))));
                            var_20 = ((var_6 > (~151)));
                        }
                        var_21 = var_2;
                        var_22 = (!30569);
                        var_23 -= ((!((!(arr_10 [i_0 + 1] [i_1 - 1] [i_4] [12])))));

                        for (int i_8 = 0; i_8 < 13;i_8 += 1) /* same iter space */
                        {
                            var_24 |= (arr_5 [i_1]);
                            arr_31 [i_0] = (var_6 * (min(var_14, var_11)));
                            var_25 = (min(var_9, ((min((arr_5 [i_0]), (arr_5 [i_0]))))));
                        }
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 13;i_9 += 1) /* same iter space */
                        {
                            var_26 += -30569;
                            var_27 -= (-(arr_29 [i_4] [i_4] [0] [i_4] [i_9] [i_9] [0]));
                        }
                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 13;i_10 += 1) /* same iter space */
                        {
                            var_28 -= 20397;
                            var_29 -= (~255);
                            arr_37 [12] [6] [i_0] [i_4] [i_0] [i_5 - 3] [i_10] = (arr_32 [i_5] [i_5 - 3] [i_5 - 3] [i_5 - 2] [i_5 + 2]);
                        }
                        for (int i_11 = 2; i_11 < 12;i_11 += 1)
                        {
                            arr_40 [i_0] [i_4] [i_0] [i_0] [i_5] = (i_0 % 2 == 0) ? ((((((0 << (((arr_29 [i_0] [i_0 + 1] [i_0] [1] [i_5 + 1] [i_11] [i_11 - 1]) - 6466))))) <= (((arr_23 [i_1 + 1] [i_0 + 1] [i_0]) << (((arr_29 [i_0] [i_0 + 1] [i_4] [i_5] [i_5 + 2] [i_0 + 1] [i_11 + 1]) - 6464))))))) : ((((((0 << (((((arr_29 [i_0] [i_0 + 1] [i_0] [1] [i_5 + 1] [i_11] [i_11 - 1]) - 6466)) + 7916))))) <= (((arr_23 [i_1 + 1] [i_0 + 1] [i_0]) << (((((arr_29 [i_0] [i_0 + 1] [i_4] [i_5] [i_5 + 2] [i_0 + 1] [i_11 + 1]) - 6464)) + 7935)))))));
                            arr_41 [i_1] [i_1] [i_4] [i_5 + 2] [i_11] |= var_1;
                            var_30 = ((((((arr_24 [i_0] [i_5] [i_4] [i_0] [i_0]) > (arr_13 [i_0 + 1] [i_1 + 1] [i_5 - 1] [i_0])))) * (((var_14 <= (arr_34 [i_0]))))));
                            arr_42 [i_0] [i_0] [i_4] [12] [1] [i_11 + 1] = (max(((-(min(var_1, var_1)))), ((((arr_24 [i_0] [1] [i_0] [i_5] [i_5 + 1]) == ((max(1, 0))))))));
                        }
                    }
                    for (int i_12 = 0; i_12 < 13;i_12 += 1) /* same iter space */
                    {
                        arr_46 [i_0] [i_0] = (-(arr_21 [i_0] [i_0 + 1] [i_0] [i_0]));

                        /* vectorizable */
                        for (int i_13 = 0; i_13 < 13;i_13 += 1)
                        {
                            var_31 = (63078 >= 65535);
                            arr_49 [i_0] [i_0] [i_0] [i_0] = (var_3 == (arr_36 [i_0]));
                        }
                        var_32 = (max(var_32, (((((min(3742246463783669, (arr_7 [i_0] [i_1]))) / -94))))));

                        /* vectorizable */
                        for (int i_14 = 0; i_14 < 1;i_14 += 1)
                        {
                            arr_52 [i_0] [i_0] [i_0] = var_11;
                            var_33 = (((arr_10 [i_0] [i_0] [i_0] [i_1 - 1]) >= var_10));
                            arr_53 [i_0] = ((2639204290 * 0) < (arr_13 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0]));
                            var_34 = var_3;
                            var_35 = (~-4025);
                        }
                        arr_54 [i_0] [i_1] [i_4] [i_12] = (min((arr_24 [i_0] [i_0] [i_0] [i_0 + 1] [i_1 - 1]), ((max(255, 1)))));
                    }
                    /* vectorizable */
                    for (int i_15 = 0; i_15 < 13;i_15 += 1) /* same iter space */
                    {
                        var_36 = ((!(arr_20 [i_0 + 1] [i_1 + 2] [i_0] [i_1 + 2] [i_1 + 1])));
                        var_37 = (((arr_3 [i_0 + 1]) >> (arr_30 [i_0 + 1] [i_0 + 1])));
                        arr_59 [i_0 + 1] [i_1] [i_4] [i_0] = var_0;
                        var_38 = 1;
                    }
                    arr_60 [i_0] [i_0] [i_0] = var_4;
                    arr_61 [i_0] [i_1] [i_1] = (-32767 - 1);
                }
                /* vectorizable */
                for (int i_16 = 0; i_16 < 13;i_16 += 1) /* same iter space */
                {
                    arr_64 [i_0] = (((var_4 + 9223372036854775807) || (arr_28 [i_0 + 1] [i_0 + 1] [i_1 - 2])));
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 13;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 13;i_18 += 1)
                        {
                            {
                                arr_70 [i_18] [i_0] [i_0] [i_0 + 1] = (2639204290 + -1880843980912320774);
                                arr_71 [i_0] [i_0] [i_0] [i_17] [i_18] = var_9;
                                arr_72 [i_1] [i_0] [i_16] [i_0] [i_18] [i_0] = (((arr_21 [i_0] [7] [i_16] [i_0 + 1]) >> (2007667046 - 2007667024)));
                                arr_73 [i_0 + 1] [i_1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_1] [i_0] = (arr_35 [i_0 + 1]);
                                var_39 = (max(var_39, (var_7 - 1)));
                            }
                        }
                    }
                    var_40 = (((arr_33 [i_0 + 1] [i_0 + 1]) * var_6));
                    var_41 &= (!var_0);
                }
            }
        }
    }

    /* vectorizable */
    for (int i_19 = 0; i_19 < 1;i_19 += 1)
    {
        var_42 = (~1);
        arr_77 [i_19] [1] = (1 && (!20));
    }
    #pragma endscop
}
