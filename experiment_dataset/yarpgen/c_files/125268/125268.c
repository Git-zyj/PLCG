/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125268
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_2;
    var_16 = (((((var_11 >= ((var_4 ? var_2 : -8178573826670425519))))) >> ((((((var_13 ? var_11 : var_9))) && (((var_6 ? var_14 : var_8))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    arr_7 [i_0] [i_1] [i_2 + 1] = 1;
                    var_17 = (((var_10 * 128) / (arr_6 [i_0])));
                    arr_8 [i_0] [i_1] = (103 >= var_12);
                    arr_9 [1] [i_1] [i_2] = (arr_4 [i_2 + 3]);
                    arr_10 [i_2] = (-5963135402988514515 ? ((-(arr_0 [i_2]))) : (arr_1 [i_2 + 1] [i_0]));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 4; i_4 < 17;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            {
                                arr_22 [i_0] [i_0] [i_0] [i_0] = ((arr_13 [i_0] [i_1] [i_4 + 1] [i_4]) ? (arr_13 [13] [i_1] [i_4 - 2] [i_4]) : (arr_13 [i_0] [i_0] [i_4 - 2] [i_4]));
                                var_18 ^= 11116042658630243680;
                                arr_23 [i_0] [i_5] = (((arr_12 [i_0] [i_0] [i_0] [i_0]) + (arr_5 [i_0])));
                            }
                        }
                    }
                    arr_24 [i_0] [17] [i_3] [i_3] &= (arr_0 [i_0]);

                    for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
                    {
                        var_19 = (max(var_19, (arr_13 [12] [i_1] [i_1] [i_1])));

                        for (int i_7 = 0; i_7 < 18;i_7 += 1) /* same iter space */
                        {
                            var_20 = var_8;
                            var_21 = 18446744073701163008;
                            arr_29 [i_1] [i_6] = (var_12 ? (arr_14 [i_0] [i_1] [2] [i_7]) : (arr_14 [i_0] [i_0] [i_0] [i_0]));
                            arr_30 [i_6] [i_1] [i_3] [i_1] [i_6] = (arr_13 [i_0] [i_0] [i_0] [6]);
                        }
                        for (int i_8 = 0; i_8 < 18;i_8 += 1) /* same iter space */
                        {
                            arr_34 [i_0] [i_1] [i_3] [i_6] [i_6] [i_3] [i_1] = var_11;
                            arr_35 [1] [i_6] [i_6] = -var_3;
                        }
                        for (int i_9 = 0; i_9 < 18;i_9 += 1)
                        {
                            var_22 = (~var_14);
                            var_23 = var_3;
                            var_24 = (((((~(arr_25 [i_0] [i_1] [i_0] [4])))) ? (arr_16 [i_0] [i_0] [i_0] [i_0]) : (arr_18 [i_0] [i_1] [i_3] [i_3] [i_3] [i_9] [i_0])));
                        }
                        arr_38 [i_0] [i_1] [i_6] [i_6] = (((arr_6 [i_0]) && var_11));
                    }
                    for (int i_10 = 0; i_10 < 18;i_10 += 1) /* same iter space */
                    {
                        arr_41 [i_0] [i_0] = -var_11;
                        var_25 = (max(var_25, (((-(arr_36 [i_0] [i_0]))))));
                    }
                    for (int i_11 = 0; i_11 < 18;i_11 += 1) /* same iter space */
                    {
                        var_26 += ((var_10 ? var_14 : (arr_31 [i_0] [i_1] [i_3] [i_0] [i_3])));
                        var_27 = (((arr_26 [i_0] [1] [i_3] [i_11]) ? (arr_37 [i_0] [i_0] [i_1] [i_1] [i_11]) : -var_2));
                        arr_44 [i_0] [i_1] [i_0] [i_0] = var_10;
                        var_28 = (((((arr_3 [i_11] [i_0]) << (var_2 - 96))) <= (~var_14)));
                    }
                }
                for (int i_12 = 1; i_12 < 17;i_12 += 1)
                {
                    arr_49 [15] [i_1] = ((((((arr_40 [i_12 + 1] [i_12] [i_12 - 1] [i_12 + 1]) ? (arr_28 [i_12] [i_12 - 1] [i_12 + 1] [i_12 + 1] [i_12 - 1]) : (arr_40 [i_12 - 1] [i_12] [i_12 - 1] [i_12 + 1])))) + (((arr_2 [i_12 + 1]) ? var_4 : (((-(arr_39 [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
                    var_29 = min((min(-804465037, var_13)), ((((arr_13 [i_0] [12] [i_0] [10]) >= (arr_42 [i_0] [i_0] [i_0])))));
                    var_30 = var_12;
                    var_31 *= arr_2 [i_0];
                    var_32 = var_2;
                }
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 18;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 18;i_14 += 1)
                    {
                        {

                            for (int i_15 = 0; i_15 < 1;i_15 += 1)
                            {
                                arr_57 [i_0] [i_1] [i_13] [i_14] [i_15] = (arr_5 [i_14]);
                                arr_58 [i_0] [i_1] [4] [i_13] [i_14] [i_14] [i_15] = (((((-(arr_50 [i_14] [i_13])))) ? (arr_50 [2] [i_15]) : var_0));
                                arr_59 [i_0] [i_1] [i_13] [i_14] [i_15] = (111 + ((var_4 / ((var_5 ? (arr_28 [i_0] [i_1] [i_13] [i_14] [i_13]) : (arr_15 [i_0] [i_0] [i_0] [i_0]))))));
                            }
                            for (int i_16 = 0; i_16 < 1;i_16 += 1)
                            {
                                var_33 = ((arr_2 [i_14]) ? (((var_13 ? var_11 : (arr_27 [i_0] [i_1] [6] [i_1] [i_1] [i_16] [i_13])))) : 0);
                                var_34 = (min(var_34, var_0));
                                arr_64 [i_0] [i_0] [i_0] [i_0] = ((-((min((arr_27 [i_0] [i_1] [i_13] [i_13] [i_13] [i_14] [i_16]), var_13)))));
                            }
                            for (int i_17 = 0; i_17 < 18;i_17 += 1)
                            {
                                arr_67 [i_0] [i_1] [10] [i_14] [i_17] = (((((min((max((arr_19 [i_0] [2] [i_13] [i_14] [i_17]), var_11)), (arr_51 [i_0] [i_1] [3] [i_0]))))) - (max(var_10, ((((arr_26 [14] [i_1] [i_1] [i_1]) == var_1)))))));
                                arr_68 [i_0] [i_0] [i_0] = (arr_45 [i_0] [i_13] [i_14]);
                                arr_69 [i_0] [i_0] [i_1] [i_13] [i_14] [i_17] [i_17] = (((max(((-96 ? var_7 : (arr_31 [i_0] [i_1] [i_13] [i_13] [i_17]))), var_5))) ? (((~(arr_26 [i_0] [6] [i_0] [i_0])))) : ((-(arr_13 [i_0] [i_13] [i_14] [i_17]))));
                                arr_70 [i_0] [i_1] [i_13] [i_0] [i_17] = var_3;
                                var_35 = ((((((((1 ? var_7 : (arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [3] [i_0])))) ? (var_3 != var_7) : var_9))) ? ((var_2 ? (arr_27 [14] [14] [i_1] [14] [i_13] [4] [i_17]) : var_0)) : (var_8 ^ var_11)));
                            }
                            var_36 = ((min(var_12, (min(-118958312, -7946066555702907369)))));
                        }
                    }
                }
                var_37 = (!((min((((arr_5 [i_1]) ? var_0 : var_4)), (((arr_1 [i_1] [14]) - var_12))))));
            }
        }
    }
    #pragma endscop
}
