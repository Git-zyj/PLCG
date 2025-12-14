/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164133
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= ((var_7 ? (min(1913134233, -5982977075932300772)) : (((6137730543387507987 ? (((max(var_11, var_11)))) : 29833372)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_20 -= (arr_4 [i_1] [i_2 - 1] [i_1]);
                            var_21 -= ((-(131071 - -131072)));
                            var_22 = (min(var_22, var_18));
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            {
                                arr_17 [i_6] [8] [i_5] [i_4] [1] [1] [i_0] |= (max(18446744073709551604, 4247710386));
                                arr_18 [i_0] [7] [i_4] [i_0] [i_6] &= ((5769 ? 1169469980 : -32));
                                arr_19 [i_0] [i_1] [i_0] = ((!(arr_10 [11] [18] [i_0 + 3])));
                                var_23 += (((((1 ? 4247710386 : 1))) ? (!-131061) : 131093));
                                var_24 = (38 + 4138445212);
                            }
                        }
                    }
                    var_25 = (min(var_25, ((1642909114 & (((!(arr_2 [i_0 + 4] [i_0 + 1]))))))));
                    var_26 += 65535;
                }
                for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                {
                    var_27 = (min(47256924, 0));
                    /* LoopNest 2 */
                    for (int i_8 = 3; i_8 < 18;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 19;i_9 += 1)
                        {
                            {
                                var_28 ^= var_13;
                                var_29 = (max(var_29, 131071));
                            }
                        }
                    }
                    var_30 -= (~-41);
                    arr_31 [i_0 - 1] [i_1] [i_7] = 131093;
                }
                /* vectorizable */
                for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
                {
                    arr_34 [i_0] = (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]);
                    var_31 = (arr_2 [i_1] [2]);

                    for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
                    {
                        var_32 = (arr_6 [i_0 - 2]);
                        arr_38 [i_1] [i_1] [i_10] &= (arr_20 [5]);
                    }
                    for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
                    {
                        var_33 -= (arr_1 [i_0 + 4]);
                        var_34 -= (~-445982403);
                        arr_42 [i_0 + 1] [i_0 + 4] [i_0 + 1] [i_1] [i_10] [i_12] = ((19 ? 1 : 103));
                    }
                    for (int i_13 = 0; i_13 < 1;i_13 += 1) /* same iter space */
                    {
                        var_35 = (((arr_8 [i_0 - 2] [i_1] [i_1] [i_0 - 2] [i_13]) ? 65513 : (arr_14 [i_0 + 1] [i_0 - 1])));

                        for (int i_14 = 4; i_14 < 18;i_14 += 1)
                        {
                            arr_48 [9] [9] [9] [i_13] [1] = -131051;
                            arr_49 [i_0 - 2] [i_1] [i_10] [i_10] [i_0 - 2] [i_0 - 2] [i_14] = var_9;
                        }
                        for (int i_15 = 1; i_15 < 16;i_15 += 1)
                        {
                            var_36 = 14659196931063469745;
                            var_37 &= ((17 ? (!23) : (~var_7)));
                            var_38 += (1 ? (arr_46 [i_15 + 1] [i_13] [i_10] [i_10] [2] [i_0]) : ((54 ? 3032265301 : 3632434865)));
                            var_39 = 13;
                            var_40 = 1;
                        }
                        arr_54 [i_10] [i_1] = (arr_27 [1] [1] [i_0 + 1] [1] [i_0 + 2] [17] [i_0 + 2]);
                        arr_55 [i_0] [i_0] [1] [2] = (~146145923);
                    }
                }
                for (int i_16 = 0; i_16 < 1;i_16 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 19;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 19;i_18 += 1)
                        {
                            {
                                var_41 -= (min((arr_12 [i_0 + 3] [i_0 + 1] [i_0 + 3] [i_0 + 1]), (arr_8 [i_17] [i_1] [i_16] [i_17] [i_18])));
                                var_42 = (-4164105422574748898 >= var_5);
                                var_43 |= ((~((((max(var_16, (arr_7 [i_0 - 1] [i_0 - 1] [i_0 + 3] [i_0 + 4] [8] [i_17])))) ? ((96 ? 65535 : 16384)) : ((min(1, (arr_58 [i_0 + 4]))))))));
                            }
                        }
                    }
                    var_44 = (min(var_44, ((((((((16 ? 3632434874 : 19)) > (((arr_35 [1] [i_1] [0] [i_0 + 4]) ? 4838922999861545805 : 11793))))))))));
                }
            }
        }
    }
    #pragma endscop
}
