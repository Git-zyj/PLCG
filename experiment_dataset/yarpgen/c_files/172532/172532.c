/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172532
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= 21;

    for (int i_0 = 3; i_0 < 20;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_20 = ((((min((arr_12 [0] [i_1] [i_2 - 1] [14] [i_2 + 2]), (arr_12 [i_0] [21] [6] [i_3] [i_2 - 2])))) | (((arr_8 [i_0 - 1] [i_2 + 2]) | 21))));
                                var_21 = var_7;
                                var_22 = (max(var_22, 238));
                                var_23 = ((~((~(~var_14)))));
                                arr_14 [i_0] [i_1] [i_2] = (min(((21 << (230 - 207))), ((max(var_0, 235)))));
                            }
                        }
                    }
                    arr_15 [i_1] [i_1] [i_1] = ((((var_16 | (arr_12 [i_0 - 1] [i_2 - 2] [i_0 - 1] [i_0 - 1] [i_0 + 1]))) ^ ((~(~49)))));
                    arr_16 [i_2] [i_1] [i_0 - 3] = 167;
                    var_24 ^= 166;
                }
            }
        }
        arr_17 [0] = arr_1 [i_0 - 2];
        var_25 = (min(144, (((arr_1 [i_0 + 3]) ? (arr_1 [i_0 - 1]) : (arr_1 [i_0 + 1])))));
    }
    for (int i_5 = 3; i_5 < 20;i_5 += 1) /* same iter space */
    {
        arr_21 [i_5] = ((var_9 * (!155)));
        var_26 = (((arr_12 [i_5] [i_5] [i_5] [i_5 + 2] [i_5]) && ((min((arr_1 [i_5 - 3]), 127)))));
        arr_22 [i_5] = min((min((arr_19 [i_5]), (arr_19 [i_5]))), (arr_19 [i_5]));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 22;i_7 += 1)
            {
                {
                    var_27 = (arr_1 [i_5]);
                    var_28 = arr_27 [i_5] [i_6] [3] [i_6];
                    var_29 = var_1;
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 23;i_9 += 1)
                        {
                            {
                                var_30 = min((17 && var_16), (arr_32 [i_5] [i_6] [i_7] [i_8] [i_9]));
                                arr_33 [i_5] [17] [i_8] [i_8] [20] [3] [i_5] = (min((((arr_32 [i_6] [i_6] [i_7 - 2] [i_8] [17]) * (arr_32 [i_6] [22] [i_7 - 1] [12] [i_8]))), (((135 == (arr_29 [i_5] [i_8] [i_7 - 2] [i_6] [10] [i_5]))))));
                                var_31 = (min(((((((arr_9 [i_5] [4] [2] [i_8] [i_8]) >= (arr_6 [i_5] [i_6])))) < ((min(221, 23))))), ((134 && (7 + var_6)))));
                                var_32 = ((((max(165, 71))) < ((238 ? var_0 : (arr_1 [i_6])))));
                                var_33 ^= (((((!(arr_27 [i_6] [i_6] [i_7 + 1] [i_6])))) / (((arr_27 [i_6] [i_6] [i_7 - 1] [i_8]) / var_8))));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_10 = 3; i_10 < 20;i_10 += 1) /* same iter space */
    {
        var_34 = arr_0 [i_10];

        for (int i_11 = 1; i_11 < 22;i_11 += 1)
        {
            var_35 |= (!64);
            var_36 = 42;
            arr_39 [i_10] [i_10] = ((((min((arr_0 [i_10 + 2]), 133))) < var_13));

            /* vectorizable */
            for (int i_12 = 0; i_12 < 23;i_12 += 1)
            {
                /* LoopNest 2 */
                for (int i_13 = 3; i_13 < 20;i_13 += 1)
                {
                    for (int i_14 = 3; i_14 < 22;i_14 += 1)
                    {
                        {
                            arr_47 [i_12] [i_10 - 3] [i_13] [i_10 - 3] [i_11 - 1] [i_11 - 1] [i_12] = (!186);
                            var_37 = (min(var_37, ((((arr_12 [i_14 - 1] [i_13] [i_12] [i_11] [13]) / (arr_31 [i_14] [i_13 - 3] [i_12] [i_11] [i_10]))))));
                        }
                    }
                }
                arr_48 [i_12] [i_12] [19] = ((((var_12 ? 63 : var_2)) << (((arr_31 [12] [i_11 - 1] [i_11] [i_10 - 1] [i_10 - 1]) - 155))));
                var_38 = (max(var_38, ((((((arr_31 [i_12] [i_12] [19] [19] [i_10]) | 12)) < ((11 << (70 - 65))))))));
            }
            /* vectorizable */
            for (int i_15 = 0; i_15 < 23;i_15 += 1)
            {
                arr_51 [i_10] [i_11] = (((arr_19 [i_15]) + (arr_19 [i_15])));
                arr_52 [i_15] [i_10] = (((arr_1 [i_10 - 3]) % (((arr_28 [i_15] [i_11] [i_10]) | 198))));
            }
        }
        for (int i_16 = 0; i_16 < 23;i_16 += 1)
        {
            var_39 = ((!(arr_49 [i_10 + 2] [i_10 - 3] [i_10 - 2] [i_10])));
            var_40 -= 189;
            /* LoopNest 3 */
            for (int i_17 = 0; i_17 < 23;i_17 += 1)
            {
                for (int i_18 = 1; i_18 < 20;i_18 += 1)
                {
                    for (int i_19 = 2; i_19 < 21;i_19 += 1)
                    {
                        {
                            var_41 = (max((max(13, ((140 ? var_14 : 40)))), ((~(!var_17)))));
                            var_42 = ((-(((min(167, 27))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
