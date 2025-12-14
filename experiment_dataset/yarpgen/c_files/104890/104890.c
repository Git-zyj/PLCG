/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104890
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((max(var_2, var_3)))) | var_15));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 = (((((arr_0 [i_0]) ? ((var_1 ? var_4 : var_8)) : var_10)) > (((arr_0 [i_0]) ? var_4 : (arr_0 [i_0])))));
        var_19 = (((~300801890) >= (var_5 <= var_0)));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_20 -= (!var_13);
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 12;i_3 += 1)
                {
                    {
                        var_21 = arr_9 [i_0] [i_3 + 1] [i_2];
                        var_22 *= (504 % 1894126846);
                    }
                }
            }
            var_23 = var_16;
            /* LoopNest 3 */
            for (int i_4 = 2; i_4 < 11;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 9;i_6 += 1)
                    {
                        {
                            var_24 = ((var_16 ? (arr_12 [i_4 + 1] [i_4] [12] [i_4]) : var_3));
                            var_25 |= (((var_16 / var_6) ? -134217720 : (((arr_17 [i_0] [10] [i_0]) ? (arr_20 [i_1] [i_1] [10] [i_1] [i_6 + 3] [i_1] [i_1]) : (arr_7 [i_1] [i_1])))));
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 13;i_8 += 1)
            {
                {
                    var_26 = (max(var_26, var_5));

                    for (int i_9 = 3; i_9 < 9;i_9 += 1)
                    {
                        arr_31 [4] [i_7] [i_7] [i_7] [i_7] = (min(var_16, (var_9 ^ var_14)));
                        var_27 = (max(var_27, ((((((!(134217710 != 1)))) % (((arr_0 [i_0]) ? 27397 : 180)))))));
                    }
                    arr_32 [i_0] [i_0] [i_0] [i_0] = ((-(max((max(var_6, var_8)), ((min(-450093832, 184)))))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 13;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 13;i_11 += 1)
                        {
                            {
                                arr_38 [i_8] [i_10] [i_10] = 205;
                                arr_39 [i_10] [i_7] [i_8] = ((-((max(-27397, 27391)))));
                                var_28 -= (((var_10 + 9223372036854775807) << (((arr_23 [i_7] [i_7]) - 13380))));
                            }
                        }
                    }
                }
            }
        }
        var_29 -= ((min(var_13, 20440)));
    }

    for (int i_12 = 0; i_12 < 23;i_12 += 1)
    {

        for (int i_13 = 2; i_13 < 21;i_13 += 1)
        {
            /* LoopNest 3 */
            for (int i_14 = 2; i_14 < 22;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 23;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 1;i_16 += 1)
                    {
                        {
                            arr_53 [i_16] [i_13 + 1] [i_14] [i_13 - 1] [i_16] [i_13 - 1] = var_13;
                            arr_54 [i_12] [i_12] [i_12] [i_12] [i_12] [i_14] = var_14;
                            var_30 -= (~var_6);
                            var_31 -= (max(-1328281662, (((arr_47 [i_13] [i_13 - 2] [i_14 - 1] [i_15]) ? (arr_51 [i_13] [i_13 - 2] [22] [i_14] [i_13] [i_16] [i_13]) : var_11))));
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_17 = 0; i_17 < 23;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 23;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 23;i_19 += 1)
                    {
                        {
                            var_32 |= 0;
                            var_33 = (max(var_33, 2420136910));
                            var_34 -= -20998;
                            var_35 = 2315381689727765080;
                        }
                    }
                }
            }
            arr_64 [i_12] [i_12] [i_13] = -8;
            var_36 ^= (min(((((arr_58 [i_12] [i_13 + 1] [i_13]) | -64))), (max(((((arr_52 [i_12] [20] [20] [i_13] [i_12]) != var_3))), (min(171, (arr_49 [i_12] [i_12] [13] [0] [i_12] [i_12])))))));
            arr_65 [i_12] [1] [i_12] = (max(var_2, var_11));
        }
        /* LoopNest 2 */
        for (int i_20 = 0; i_20 < 23;i_20 += 1)
        {
            for (int i_21 = 0; i_21 < 23;i_21 += 1)
            {
                {
                    var_37 = (max(var_37, (185 && 3317027003)));
                    /* LoopNest 2 */
                    for (int i_22 = 0; i_22 < 23;i_22 += 1)
                    {
                        for (int i_23 = 0; i_23 < 23;i_23 += 1)
                        {
                            {
                                arr_77 [i_21] [i_20] [i_20] [i_20] [i_20] = (((-var_3 ? (((((arr_51 [i_12] [i_20] [i_21] [i_20] [i_20] [i_20] [i_22]) >= var_8)))) : (((arr_59 [i_12]) | var_8)))));
                                var_38 *= (max(((22351 ? 71 : -126)), 255));
                                arr_78 [i_12] [i_20] [i_20] [i_20] [i_21] [i_23] = (arr_43 [9]);
                            }
                        }
                    }
                }
            }
        }
        arr_79 [i_12] = var_11;
    }
    /* LoopNest 2 */
    for (int i_24 = 1; i_24 < 10;i_24 += 1)
    {
        for (int i_25 = 0; i_25 < 11;i_25 += 1)
        {
            {
                arr_85 [i_24] [2] [i_24 + 1] = (((var_5 ? ((-101 ? var_3 : (arr_33 [i_24] [i_24] [i_24] [i_24]))) : (arr_42 [i_24 + 1] [i_24 + 1]))) << (((min(var_6, (max(var_7, 0)))) - 30662)));
                /* LoopNest 2 */
                for (int i_26 = 0; i_26 < 11;i_26 += 1)
                {
                    for (int i_27 = 0; i_27 < 11;i_27 += 1)
                    {
                        {
                            var_39 = (max(var_8, ((max((max(var_6, 2472250783)), (~var_1))))));
                            arr_90 [i_24] [i_24] [i_24 + 1] [i_24 + 1] [8] [i_24] = ((!((!(arr_70 [i_24] [i_24 + 1])))));
                        }
                    }
                }
            }
        }
    }
    var_40 = -2315381689727765089;
    #pragma endscop
}
