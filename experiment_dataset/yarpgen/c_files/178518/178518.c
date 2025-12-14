/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178518
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 *= var_15;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = (~0);
        arr_3 [i_0] = ((var_5 ? 2146435072 : var_5));
        arr_4 [i_0] = -11835;
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 3; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    {
                        arr_16 [i_1 - 1] [i_3] = 2367296802;
                        var_17 += ((((((arr_12 [i_1 - 1] [i_1 - 1] [i_3]) == (arr_5 [i_4] [9])))) / (arr_11 [i_1] [1] [i_1 - 1] [i_3 - 1])));
                        arr_17 [i_1 - 1] [i_2] [i_2] [i_3 + 1] [i_3] [i_2] = (((arr_9 [i_1 - 1] [i_2] [i_4]) ? ((((arr_9 [1] [1] [i_4]) ? var_7 : var_14))) : ((32767 ? 1927670494 : var_5))));
                        arr_18 [i_3] = (arr_11 [i_1 - 1] [i_1 - 1] [i_3 + 1] [i_4]);
                    }
                }
            }
            var_18 = (((arr_1 [1]) == (~-1)));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 14;i_6 += 1)
                {
                    {
                        var_19 *= (((arr_5 [i_6 + 1] [i_1 - 1]) - var_0));
                        arr_25 [i_1] [i_5] = 2367296802;
                        arr_26 [i_6 + 1] [i_5] [i_5] [12] = var_6;
                        var_20 = ((6669178222695256926 ? (-32767 - 1) : -6034983301428032833));
                        arr_27 [i_1 - 1] [i_1] [i_1] [4] [i_1 - 1] |= arr_15 [i_5] [i_5] [i_5] [i_5];
                    }
                }
            }

            for (int i_7 = 1; i_7 < 11;i_7 += 1)
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 13;i_9 += 1)
                    {
                        {
                            var_21 = ((((var_4 ? var_7 : var_2)) != (arr_5 [i_1 - 1] [i_1 - 1])));
                            var_22 = (arr_5 [i_9] [i_2]);
                            arr_34 [i_1 - 1] [10] [i_1 - 1] [i_1] [i_1] [i_1 - 1] [i_1 - 1] = ((var_9 ? (arr_8 [i_1 - 1]) : (arr_21 [i_7] [i_7] [i_7 + 1] [i_7 + 4])));
                            arr_35 [i_1] [i_2] [i_2] [i_8] [i_1] = ((var_12 ? (arr_9 [i_7 + 3] [i_7 + 2] [i_7 + 3]) : var_6));
                        }
                    }
                }
                arr_36 [i_7] = ((0 ^ (arr_29 [10] [i_7 + 3] [i_7 + 1])));
                arr_37 [i_1] = var_5;
            }
            for (int i_10 = 1; i_10 < 1;i_10 += 1)
            {
                var_23 *= 91;
                arr_41 [8] [i_2] [i_1] [i_1 - 1] = (((((var_10 ? var_2 : var_14))) ? var_7 : (arr_11 [i_10 - 1] [i_10] [i_10 - 1] [i_10])));
                arr_42 [i_2] = ((((((arr_40 [i_1] [i_10] [i_10]) >> var_3))) ? (((((arr_6 [9]) || var_0)))) : var_5));
            }
            for (int i_11 = 0; i_11 < 15;i_11 += 1)
            {
                arr_46 [i_11] [10] [i_1 - 1] = (((arr_32 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]) ? (arr_32 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]) : (arr_32 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1])));
                arr_47 [i_1] [i_11] = var_7;
            }
        }
        arr_48 [i_1 - 1] = ((-(max((arr_31 [i_1]), (arr_31 [0])))));
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 15;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 14;i_13 += 1)
            {
                {
                    arr_54 [i_1] [i_1] [i_13 + 1] = ((((max((((9223372036854775807 || (arr_20 [i_12] [i_12] [i_12] [i_12])))), (arr_28 [i_1 - 1])))) ? ((((var_5 ? var_1 : var_2)) - (7172 + var_14))) : ((((var_3 || (arr_31 [i_13 - 1])))))));
                    /* LoopNest 2 */
                    for (int i_14 = 1; i_14 < 14;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 15;i_15 += 1)
                        {
                            {
                                var_24 = (((arr_30 [i_1 - 1]) >= var_7));
                                var_25 = (arr_24 [i_13 - 1] [i_13] [i_13 - 1] [i_13] [i_13 + 1] [i_13 + 1]);
                                arr_60 [i_15] [i_14] [i_13 + 1] [i_1] [i_1] = var_2;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 15;i_16 += 1)
                    {
                        for (int i_17 = 1; i_17 < 13;i_17 += 1)
                        {
                            {
                                var_26 = (((~var_8) ^ var_2));
                                var_27 = (max(var_27, ((max(var_6, 1)))));
                            }
                        }
                    }
                    var_28 = (min(var_28, var_7));
                }
            }
        }
    }
    for (int i_18 = 0; i_18 < 13;i_18 += 1)
    {
        var_29 = (arr_40 [i_18] [i_18] [i_18]);
        arr_67 [i_18] = var_5;
    }

    for (int i_19 = 3; i_19 < 14;i_19 += 1)
    {
        arr_70 [4] |= ((((!((max((-9223372036854775807 - 1), 15))))) ? (max(((var_11 ? var_4 : var_8)), (arr_0 [i_19 - 1]))) : ((((((arr_68 [i_19]) <= var_12)) ? (58363 << 0) : ((max((arr_0 [i_19]), (arr_0 [i_19 + 2])))))))));
        var_30 -= (2367296802 >= 18446744073709551615);
        arr_71 [1] &= (arr_1 [18]);
        var_31 = (((var_14 + 2147483647) >> (arr_69 [i_19])));
    }
    #pragma endscop
}
