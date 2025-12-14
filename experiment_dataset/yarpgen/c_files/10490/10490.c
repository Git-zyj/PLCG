/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10490
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_18 = (max(32767, 1));
        var_19 = (max(var_19, (((((arr_0 [i_0 - 1] [i_0 - 1]) ? var_8 : -1))))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_20 = (min(var_20, (((-((2 * (arr_2 [i_1]))))))));
        arr_5 [i_1] [i_1] = ((+(max((!var_3), (arr_2 [i_1])))));

        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            var_21 -= (var_12 ? (arr_4 [i_2]) : ((((((63 ? 1 : var_1))) && -65535))));
            var_22 = (max(var_22, ((min(((min((max(32759, (arr_7 [i_1] [i_2]))), (arr_3 [i_2])))), (((arr_3 [i_1]) - (arr_6 [8]))))))));
            var_23 |= (((var_0 + 2147483647) >> ((((max(-785, -8))) + 33))));
            var_24 = ((~(((((arr_7 [i_1] [i_2]) ? (arr_4 [i_1]) : (arr_3 [0]))) ^ ((9589751983775922109 ? (arr_7 [i_1] [i_1]) : var_15))))));
            var_25 = ((((((arr_6 [i_2]) ? var_12 : 8856992089933629506))) > ((max(((var_15 ? var_8 : var_5)), (63 | 1181695797))))));
        }
        /* vectorizable */
        for (int i_3 = 4; i_3 < 19;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    {
                        var_26 = ((-(9294 - 49)));
                        var_27 = (arr_11 [i_3]);
                    }
                }
            }

            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                var_28 = (((arr_14 [i_3 - 4] [i_3 - 2] [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_3 - 1]) ? (arr_14 [i_3 - 4] [i_3 - 4] [i_3 + 1] [i_3 - 4] [i_3 + 3] [i_3 + 2]) : 2123306894));
                var_29 = 65535;
                arr_18 [i_1] [i_1] [i_1] [i_1] = ((-(((arr_4 [i_1]) - (arr_17 [20] [i_3] [i_3] [i_6])))));
                var_30 = (((arr_8 [i_3 + 1] [6] [i_6]) < (!var_0)));

                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    var_31 = (arr_6 [i_3]);
                    arr_22 [i_1] [i_3] = (~var_17);

                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        var_32 = (arr_20 [i_1] [4] [i_6] [4] [i_3 + 1]);
                        var_33 = (51 ^ var_0);
                    }
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        var_34 = (arr_4 [i_1]);
                        var_35 = ((!((((arr_21 [i_1] [i_1] [i_1] [i_1] [2]) - (arr_8 [i_1] [i_1] [i_9]))))));
                        arr_27 [i_9] = (((-57 * var_13) / (arr_24 [i_1] [2] [i_6] [i_3 - 2] [i_9])));
                    }
                    var_36 = 255;

                    for (int i_10 = 3; i_10 < 18;i_10 += 1)
                    {
                        var_37 = ((var_3 >> ((((1650392394 ? 49 : -1)) - 44))));
                        var_38 = (min(var_38, (((var_15 ? var_5 : (arr_21 [i_6] [i_10] [i_10 - 2] [i_10 + 4] [9]))))));
                        var_39 &= 41;
                        var_40 = var_11;
                        var_41 ^= (~var_0);
                    }
                }
            }
            for (int i_11 = 1; i_11 < 19;i_11 += 1)
            {
                arr_32 [i_11] [i_3 - 2] = (arr_13 [i_11] [i_11] [i_3 - 1] [i_3] [i_1]);
                var_42 = var_13;
                /* LoopNest 2 */
                for (int i_12 = 2; i_12 < 21;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 22;i_13 += 1)
                    {
                        {
                            var_43 = (max(var_43, (((-70 ? 16368 : 2147483647)))));
                            var_44 = (arr_14 [i_1] [15] [i_11] [i_11] [i_12] [i_11]);
                            var_45 = (2562266059 - (~2147483647));
                            var_46 = (arr_8 [i_11 - 1] [i_11 + 3] [i_3 + 1]);
                            var_47 = var_8;
                        }
                    }
                }
            }
        }
        var_48 = ((~(max((9722 ^ 63), 1048575))));
        var_49 = ((-(~-63)));
    }
    var_50 = var_16;
    var_51 = (!var_12);
    var_52 = ((var_13 ? ((var_6 ? (((min(76, var_1)))) : var_10)) : (((min(1, var_6))))));
    #pragma endscop
}
