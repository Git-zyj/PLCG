/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128992
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                var_16 = (min(var_16, ((max((max(0, -1559248620)), (max(37, 2)))))));

                for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
                {
                    arr_7 [i_0] = (max(((max((arr_6 [i_1 - 2] [i_0] [i_1 + 1]), (arr_6 [i_1 - 1] [i_0] [i_1 - 2])))), (max(var_12, 4294967292))));
                    arr_8 [i_0] [i_0] = (max(((max(1626661593, -28790))), (max(0, ((max((arr_5 [i_0] [i_1 - 2] [i_1 + 1] [i_2]), (arr_5 [3] [3] [i_2] [9]))))))));
                    arr_9 [i_0] = (max((max(var_0, (arr_2 [i_2]))), ((max((arr_2 [i_2]), (arr_5 [i_0] [i_0] [i_0] [i_0]))))));
                }
                for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 10;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            {
                                var_17 = (max(((max(var_3, (arr_13 [i_4] [i_4 - 2] [i_3] [i_1 - 1])))), (max(var_7, 9223372036854775807))));
                                arr_18 [i_0] [i_0] [i_3] [i_4 + 1] [i_5] = (max(((max((arr_15 [i_0] [i_0] [i_0] [i_0] [i_4 - 2] [i_3]), (arr_15 [i_0] [i_5] [i_0] [i_4] [i_4 - 1] [i_3])))), (max((arr_11 [i_1 + 2] [i_1 - 1] [i_1 - 2]), var_13))));
                                arr_19 [i_5] [i_5] [4] [i_5] [i_0] = (max((max((arr_17 [i_1 + 2] [i_0]), (arr_17 [i_1 + 2] [i_0]))), (max(-28790, (arr_17 [i_1 - 2] [i_0])))));
                            }
                        }
                    }
                    var_18 -= (max((max(((max(var_11, 192))), (max(-1, 0)))), ((max(127, (max(1, 0)))))));
                }
                var_19 -= (max((max((arr_15 [i_0] [i_1 + 2] [1] [i_0] [1] [i_0]), 26)), ((max((arr_15 [i_0] [i_1 - 1] [1] [i_1] [i_1] [i_0]), var_7)))));
            }
        }
    }

    for (int i_6 = 0; i_6 < 18;i_6 += 1)
    {
        var_20 = (min(var_20, ((max((max((-2147483647 - 1), (arr_21 [i_6]))), (max(5423214720766699954, 0)))))));

        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            arr_25 [i_6] [i_7] [i_6] = (max((max((arr_20 [i_7]), (arr_20 [i_7]))), (max((arr_20 [i_7]), var_8))));
            var_21 -= (max(((max(615363705, (arr_24 [i_6])))), (max(174, 911832789269059240))));
        }
    }
    for (int i_8 = 1; i_8 < 15;i_8 += 1)
    {
        arr_30 [i_8] = (max(-28790, -2));

        for (int i_9 = 0; i_9 < 16;i_9 += 1)
        {
            var_22 = (max(((max(1, -1112344979))), (max(((max(1, -9))), (max(0, var_2))))));

            for (int i_10 = 0; i_10 < 16;i_10 += 1)
            {

                for (int i_11 = 2; i_11 < 15;i_11 += 1)
                {
                    var_23 = (max((max((arr_22 [i_8] [i_8] [i_11 + 1]), var_15)), (max((arr_22 [i_8] [i_8] [i_10]), (arr_22 [i_8 + 1] [i_8] [i_9])))));

                    for (int i_12 = 0; i_12 < 16;i_12 += 1)
                    {
                        var_24 = (max(((max((arr_28 [i_8]), 130))), (max(16002749337196393044, (arr_28 [i_8])))));
                        var_25 = (max((max(1112344978, -255521405928392337)), ((max(-8670, (arr_44 [i_8]))))));
                        arr_45 [i_12] [i_12] [i_8] [i_11] [i_8] [10] [i_8] = max(((max(1112344978, 28789))), (max((arr_21 [i_8]), 9223372036854775807)));
                        arr_46 [i_8] [i_8] [i_8] [i_8 - 1] [i_8] [i_8 + 1] [i_8] = (max((max(-1295979712, var_15)), (max(var_12, (arr_26 [i_8 - 1] [i_11 - 2])))));
                    }
                    var_26 *= (max(((max(var_1, var_3))), (max(796830520397836622, var_6))));
                    var_27 = (max((max(0, var_10)), ((max(var_15, 111)))));
                }
                for (int i_13 = 0; i_13 < 16;i_13 += 1)
                {
                    arr_50 [i_8] [i_8] [i_13] [i_13] = (max((max((arr_21 [i_8 - 1]), ((max(var_0, (arr_47 [i_8] [i_8] [i_10] [i_13] [i_8] [i_13])))))), ((max(28887, var_0)))));

                    for (int i_14 = 0; i_14 < 16;i_14 += 1)
                    {
                        var_28 = (max((max((arr_34 [i_8 + 1] [i_8 - 1]), var_7)), (max((arr_34 [i_8 + 1] [i_8 + 1]), 2147483647))));
                        arr_53 [6] |= (max((max(var_6, (arr_21 [i_8 - 1]))), ((max(-1112344979, 65535)))));
                        var_29 -= (max((max(4294967245, (arr_31 [i_8 + 1]))), (max(var_3, var_2))));
                    }
                    for (int i_15 = 0; i_15 < 16;i_15 += 1)
                    {
                        arr_57 [i_8] [0] [i_10] [i_8] [i_8] = (max(((max((arr_55 [i_8] [i_8] [i_8] [1] [i_8 + 1]), 192))), (max(var_2, (arr_55 [i_8] [i_8] [i_8] [i_8] [i_8 + 1])))));
                        var_30 = (max((max(((max((arr_56 [i_8] [i_9] [i_9] [i_13] [i_13]), 255))), (max(1, var_11)))), (max(var_14, var_8))));
                    }
                }
                /* vectorizable */
                for (int i_16 = 0; i_16 < 16;i_16 += 1)
                {
                    var_31 = 64;
                    var_32 *= (-2147483647 - 1);
                    arr_61 [i_8] [i_8] [i_8] = 24169;
                }
                var_33 = (max((max(((max(var_1, var_12))), 5423214720766699953)), (max(-1074822217090011131, 192))));
            }
        }
        var_34 = (max(((max(-294734969, 131040))), -7877968933369930951));
    }
    /* vectorizable */
    for (int i_17 = 1; i_17 < 16;i_17 += 1)
    {
        var_35 = 4294967269;
        arr_64 [i_17] = 41367;
    }
    #pragma endscop
}
