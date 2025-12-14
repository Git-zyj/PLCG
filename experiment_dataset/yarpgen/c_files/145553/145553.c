/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145553
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                var_14 = (max((min(var_3, (arr_4 [i_0] [i_1 + 4] [i_1 + 1]))), ((min((arr_4 [i_0] [i_1 - 2] [i_0]), 127)))));

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_15 -= (min(-115, 14353169924104580033));
                                var_16 -= (max(((max(var_12, (arr_8 [i_1 - 1] [i_1 + 4] [i_1 + 2] [i_1 + 1])))), (min(14353169924104580033, 18446744073709551590))));
                                var_17 = (max(((min((max(32767, -32761)), -17173))), (min((min(var_0, 1056964608)), 127))));
                            }
                        }
                    }
                    arr_14 [5] [i_1 + 4] [i_1 + 4] [i_2] |= (max((min(32766, (arr_9 [i_0] [i_1 + 3] [3]))), ((min(32767, 32759)))));
                    var_18 = (max((min((arr_4 [i_1 + 3] [i_1 - 2] [1]), (arr_4 [i_1 + 1] [i_1 - 2] [i_1 - 2]))), (max(var_6, (arr_4 [i_1 - 1] [i_1 + 1] [i_1 + 3])))));
                    var_19 = (min((min(var_3, var_5)), (min(14741, 8795019280384))));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    arr_19 [i_0] [i_0] = 14741;
                    var_20 |= -8954404388745304101;
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                arr_25 [i_7] [i_7] [i_7] [i_5] [i_7] [i_0] [i_0] = 23;
                                var_21 = (max(var_21, 17189));
                            }
                        }
                    }

                    for (int i_8 = 0; i_8 < 16;i_8 += 1) /* same iter space */
                    {
                        var_22 = (-127 - 1);

                        for (int i_9 = 0; i_9 < 16;i_9 += 1)
                        {
                            var_23 = 209;
                            var_24 = 18446744073709551615;
                        }
                        for (int i_10 = 1; i_10 < 15;i_10 += 1)
                        {
                            var_25 = 65535;
                            var_26 = (max(var_26, 448));
                        }
                    }
                    for (int i_11 = 0; i_11 < 16;i_11 += 1) /* same iter space */
                    {
                        var_27 *= 50772;
                        var_28 &= 4323455642275676160;
                    }
                    for (int i_12 = 0; i_12 < 16;i_12 += 1)
                    {
                        var_29 = (max(var_29, 15348669620797963633));
                        var_30 *= 1;
                    }
                    for (int i_13 = 0; i_13 < 16;i_13 += 1)
                    {

                        for (int i_14 = 0; i_14 < 16;i_14 += 1)
                        {
                            var_31 = 23;
                            var_32 = 64;
                        }
                        var_33 = 18446744073709551613;
                    }
                }
                for (int i_15 = 0; i_15 < 16;i_15 += 1)
                {
                    var_34 ^= min((max(7518704237020266349, 0)), ((max(var_12, var_6))));
                    var_35 = (max((min((arr_26 [i_1 + 1] [i_1 + 1] [i_1 + 3] [i_1 + 3] [i_1 + 4] [i_1 + 4]), 18446744073709551589)), (min(((max((arr_34 [i_0] [i_0] [i_0] [i_1 - 2] [3] [3]), 9223372036854775807))), (max(50783, var_3))))));
                    var_36 = (max(((min((arr_1 [i_1 + 2] [i_1 + 3]), 1))), (min(((max(17172, var_12))), (max(41, var_7))))));
                    var_37 = (max((max(((min(67, 0))), (max(14764, 41)))), ((max((max(var_1, 14764)), (arr_41 [i_1 + 1] [5] [i_0]))))));
                    var_38 = (max((min(var_2, 82)), (max((min(-17174, 0)), ((min(67, 7)))))));
                }
                arr_47 [i_0] [i_1 + 4] = (max((min(((max((arr_0 [i_0] [i_1 + 1]), 52))), (min(var_9, var_6)))), (min(var_3, 11845852407632265533))));
                var_39 = min(((max(var_4, 1))), (max(429389850, var_11)));
            }
        }
    }
    var_40 = (min(var_8, (max(var_7, var_4))));
    var_41 = min(var_3, var_13);

    for (int i_16 = 0; i_16 < 15;i_16 += 1)
    {
        var_42 |= (min((min(1, var_1)), ((max(var_8, 18788)))));
        arr_50 [i_16] = (max((max(((max(0, var_2))), (max(7406635959908159110, 50792)))), ((min(var_6, var_13)))));
        var_43 = (max(((min(1, (arr_10 [i_16] [i_16] [i_16])))), (min((arr_6 [i_16] [i_16] [i_16]), 18446744073709551561))));
    }
    #pragma endscop
}
