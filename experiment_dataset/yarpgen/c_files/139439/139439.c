/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139439
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = (min((min(1, 18446744073709551615)), (((max(var_9, 5))))));

                for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_13 = (max((-9223372036854775807 - 1), 97));
                                var_14 = ((!((((var_0 || 158) ? 4095478010 : var_3)))));
                                arr_15 [i_4] [i_2] [i_0] [i_0] [i_1] [i_0 + 1] = (((((~(arr_7 [i_0 + 1] [i_1] [i_2] [i_3])))) ? ((~(arr_7 [i_0 + 1] [4] [i_2] [i_3]))) : ((((var_11 != (arr_7 [i_0 - 3] [2] [i_4] [i_3])))))));
                                arr_16 [i_0] [i_0] [i_0] [8] [8] [i_0] = (max(5061, ((max((!90), 158)))));
                            }
                        }
                    }

                    for (int i_5 = 1; i_5 < 7;i_5 += 1)
                    {
                        var_15 = (arr_2 [i_0]);
                        var_16 = (min(var_16, (((((((var_0 && (arr_12 [i_0] [6] [i_2] [i_2]))))) ? ((-(arr_17 [i_2]))) : ((min(((97 ? 16383 : (arr_0 [i_0 - 4]))), var_7))))))));
                        arr_19 [i_0] [i_5] [i_2] [i_1] [i_0] [i_0] = var_0;
                        arr_20 [i_0 + 1] [i_0 + 2] [i_0] [i_5] = (50285 / 143);
                    }
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                {
                    var_17 = var_7;
                    var_18 -= (var_11 <= 255);

                    for (int i_7 = 1; i_7 < 7;i_7 += 1)
                    {
                        var_19 *= ((~(~var_11)));
                        var_20 = var_9;
                        var_21 = ((4849718019777516947 ? 255 : 3668809914));
                    }
                    var_22 = (((255 - var_6) ? (~45) : (!var_6)));
                }
                for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                {
                    var_23 = ((~(arr_4 [i_0 + 1] [i_1] [i_8])));
                    var_24 = (min(var_24, ((max((min(((var_6 >> (255 - 230))), 158)), (((-(arr_1 [i_0] [i_0 - 4])))))))));
                }
                for (int i_9 = 2; i_9 < 7;i_9 += 1)
                {
                    var_25 = (max(var_25, (((158 ? 32767 : 5991552888201573193)))));

                    for (int i_10 = 0; i_10 < 10;i_10 += 1) /* same iter space */
                    {
                        var_26 = 1;
                        var_27 = ((((((var_3 ? var_12 : (arr_25 [i_0] [i_0] [i_9 + 2] [i_10]))) ? ((120 ? var_7 : 4294967288)) : var_2))));
                        arr_35 [i_0] [i_0] = (min((min(var_3, var_0)), (max((arr_3 [i_0] [i_1]), (arr_3 [i_0 + 2] [i_0 + 2])))));
                    }
                    for (int i_11 = 0; i_11 < 10;i_11 += 1) /* same iter space */
                    {

                        for (int i_12 = 0; i_12 < 10;i_12 += 1)
                        {
                            var_28 = 0;
                            var_29 *= (min(1, 120));
                            var_30 = 1;
                        }
                        for (int i_13 = 1; i_13 < 7;i_13 += 1)
                        {
                            var_31 *= (arr_28 [i_11] [i_1] [i_1]);
                            arr_45 [i_0] = (((((~var_1) ? (arr_12 [i_0] [i_1] [i_11] [i_13 + 2]) : (max(-4065828399999641203, 0)))) >= var_7));
                            var_32 = ((((max(3569754640, ((min(143, 27560)))))) ? ((((arr_36 [i_0 - 1] [i_0 - 4] [i_0] [i_9 - 1] [i_13 + 1] [i_13 + 2]) != (arr_11 [i_0] [i_0] [i_9 + 3] [i_9 + 3] [i_0 - 2] [i_13 - 1])))) : ((max(0, var_7)))));
                        }
                        for (int i_14 = 0; i_14 < 10;i_14 += 1)
                        {
                            arr_49 [i_0] [i_1] [i_9 + 3] [8] [5] = ((-((((1 ? 98 : var_0))))));
                            var_33 *= ((var_0 ? (arr_28 [i_14] [i_1] [2]) : 204809466));
                            arr_50 [i_0] [i_0] [i_0] [i_11] [i_14] [i_11] [4] = (min(((((arr_9 [i_9 + 1] [i_0 + 2] [i_0]) - (arr_9 [i_9 + 3] [i_0 - 1] [i_0 + 2])))), (min(var_8, var_0))));
                            var_34 = var_2;
                            var_35 = (((((((var_3 & (arr_14 [i_0] [0] [i_9 + 3] [i_11] [i_11] [i_0])))) ? (arr_30 [i_0]) : -var_5)) >> (var_4 - 144)));
                        }
                        for (int i_15 = 0; i_15 < 10;i_15 += 1)
                        {
                            arr_53 [i_0] [i_0] = ((((min(((-(arr_4 [i_0 - 3] [i_0 - 3] [i_0 - 3]))), -var_9))) ? (min(var_12, (max(1, var_8)))) : ((min(1, 0)))));
                            arr_54 [i_0] [i_1] = ((((arr_25 [9] [0] [i_11] [0]) ? var_0 : var_12)));
                        }
                        arr_55 [i_0] [i_0 + 2] [i_0] [i_0 + 2] = (max(((max(((var_12 ? (arr_2 [i_0]) : (arr_29 [i_0] [i_9] [i_11]))), (((var_12 ? var_6 : var_6)))))), ((var_12 ? ((max(var_4, var_2))) : (arr_46 [i_0 - 1])))));
                    }
                    var_36 = ((~((~((~(arr_36 [i_0] [i_0] [i_0] [i_9] [i_9] [i_0 - 1])))))));
                }
                arr_56 [i_0] = (max(((var_3 ? ((((arr_0 [i_1]) - -53))) : (min((arr_29 [i_0] [i_0] [i_1]), var_3)))), (min((((arr_9 [i_0] [4] [i_1]) ? var_12 : (arr_48 [i_0] [i_0] [i_0 - 2] [i_1] [i_1] [i_0 - 2] [i_1]))), ((159 ? 162 : 1890802541))))));
                arr_57 [i_0] = (((((((max(1, var_6))) < (~960)))) / (((arr_9 [i_0 + 1] [i_1] [9]) ? (arr_43 [i_0 - 1] [i_1] [i_0] [i_1] [i_0 - 4] [i_1]) : (~0)))));
            }
        }
    }
    var_37 = var_7;
    var_38 = ((-(max((((var_2 ? 2337864944 : var_6))), (min(var_8, var_12))))));
    #pragma endscop
}
