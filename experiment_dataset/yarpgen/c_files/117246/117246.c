/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117246
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= (~var_11);
    var_15 = (max(((((~-1) <= var_7))), var_12));
    var_16 = var_5;

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_17 -= ((~((((var_11 ? (arr_1 [i_0]) : 20)) * var_11))));
        var_18 -= (min(((~(min(var_7, var_10)))), -var_4));
        arr_2 [i_0] = var_8;
    }
    for (int i_1 = 3; i_1 < 14;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 4; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        for (int i_5 = 3; i_5 < 16;i_5 += 1)
                        {
                            {
                                arr_17 [i_5] [i_1] [i_4] [9] [i_1] [i_1] [i_1] = (((~(arr_8 [1]))));
                                var_19 = -var_11;
                                arr_18 [i_1] = (arr_14 [i_1]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 14;i_7 += 1)
                        {
                            {
                                arr_26 [11] [i_2] [i_2] [i_6] [i_1] = arr_24 [i_1] [i_1] [i_1] [i_1] [i_1];
                                arr_27 [i_1] [i_1] = (max((((arr_1 [i_1 - 1]) ? var_4 : 63102)), (arr_11 [i_1] [i_1] [i_1])));
                                var_20 = (arr_9 [i_1] [3] [13] [i_1]);
                            }
                        }
                    }
                    var_21 = (min(var_21, var_12));

                    /* vectorizable */
                    for (int i_8 = 4; i_8 < 16;i_8 += 1)
                    {
                        var_22 = (arr_0 [i_1]);
                        var_23 += var_7;
                        var_24 |= 7200983745543956274;
                    }
                    for (int i_9 = 3; i_9 < 15;i_9 += 1)
                    {
                        var_25 = (((((((var_5 & (arr_6 [i_1] [i_2] [i_3]))) - (((arr_31 [i_9] [i_3] [i_1] [i_1]) + var_3))))) ? ((-10252 | (min(var_0, var_1)))) : ((min(0, (((arr_5 [i_1]) * (arr_22 [1] [i_9] [11] [1] [11] [11]))))))));
                        arr_35 [i_1] [1] [i_1] [i_9] = (!(((max(1254068427, var_0)))));
                        var_26 = (max(var_26, (((((var_9 ? 145 : ((min((arr_31 [i_1] [i_2] [1] [i_3]), 1))))) <= (((!(arr_6 [14] [14] [6])))))))));
                        var_27 -= (arr_7 [i_1]);
                    }
                    for (int i_10 = 2; i_10 < 16;i_10 += 1) /* same iter space */
                    {
                        var_28 = (arr_8 [8]);
                        arr_39 [i_1] = ((4999008323795044329 ? ((min(((min((arr_34 [i_1] [i_2] [i_3] [i_1]), var_2))), (min(255, var_13))))) : (max(((var_6 * (arr_38 [13]))), (((arr_15 [i_1] [i_1] [16] [16] [i_1] [1]) << (((arr_23 [i_1] [i_2] [i_2] [i_1] [i_1]) - 2812802802))))))));
                        arr_40 [i_1] [i_1] [i_1] [i_10] = ((var_6 && (((~(arr_24 [i_3] [i_1] [i_2 - 3] [i_1] [i_2]))))));
                        var_29 = (((arr_29 [1] [10] [10] [i_1] [0] [i_1]) - -120));
                        var_30 -= (((arr_23 [i_1 + 3] [i_1 + 3] [16] [i_10 + 1] [14]) < (((max((arr_13 [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_10 - 2] [10]), var_6))))));
                    }
                    for (int i_11 = 2; i_11 < 16;i_11 += 1) /* same iter space */
                    {
                        arr_45 [1] [1] [i_1] [i_11] = min((arr_20 [13] [i_1] [11] [11] [13] [i_1]), var_9);
                        var_31 = (min(var_31, (((~((~(arr_30 [2] [2] [i_2] [0]))))))));
                    }
                }
            }
        }
        var_32 |= (((min((arr_16 [7] [i_1 - 1] [1] [i_1 + 3] [i_1 + 3]), var_10)) != ((min(0, (arr_43 [i_1 + 1] [i_1] [i_1] [7] [10] [i_1 + 1]))))));
        /* LoopNest 2 */
        for (int i_12 = 1; i_12 < 16;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 16;i_13 += 1)
            {
                {
                    arr_50 [i_1] [4] [i_13] [i_13] = (min((arr_30 [i_1] [6] [i_13] [14]), var_0));
                    var_33 = 2587548800175691596;
                }
            }
        }
    }

    for (int i_14 = 0; i_14 < 10;i_14 += 1)
    {
        var_34 = (max(var_34, (arr_53 [9] [9])));
        var_35 = (min(var_35, (((~((~(arr_8 [i_14]))))))));

        for (int i_15 = 1; i_15 < 6;i_15 += 1)
        {
            var_36 += 13705;
            var_37 = (9223372036854775807 << (((((((arr_34 [6] [12] [1] [6]) - ((15 << (arr_7 [i_14]))))) + 44)) - 14)));

            for (int i_16 = 0; i_16 < 1;i_16 += 1)
            {
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 1;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 1;i_18 += 1)
                    {
                        {
                            arr_65 [i_14] [i_16] [i_16] [i_16] [i_14] = ((+((~((min((arr_3 [i_16]), 1)))))));
                            var_38 = (max(var_38, var_9));
                            var_39 = ((min((min(98, (arr_52 [i_18]))), (arr_62 [i_14] [i_14] [i_16] [i_14] [i_18] [i_16] [i_15 + 3]))));
                            var_40 = (min(-14538, (arr_23 [i_14] [13] [1] [i_14] [i_16])));
                            var_41 = ((~((min(1, 15758)))));
                        }
                    }
                }
                var_42 = (min(((max((arr_8 [i_15 + 1]), (arr_8 [i_15 - 1])))), (~254124288)));
            }
            /* vectorizable */
            for (int i_19 = 3; i_19 < 8;i_19 += 1) /* same iter space */
            {
                arr_69 [i_19] = (arr_63 [7] [i_19] [7]);
                var_43 |= (((!1) - (~190547014248529689)));
                var_44 = (((arr_36 [i_19 - 1] [i_19 - 1] [i_15 - 1] [i_15 + 1] [i_15 + 4]) ? (arr_22 [i_19] [i_19 + 1] [i_19 + 1] [i_19 + 1] [i_19 + 1] [i_19]) : (var_3 << var_8)));
                var_45 -= var_13;
            }
            for (int i_20 = 3; i_20 < 8;i_20 += 1) /* same iter space */
            {
                arr_74 [i_14] [i_15] [i_20] [i_14] = (min(((((arr_53 [i_20 - 1] [i_15 + 2]) & (arr_53 [i_20 + 2] [i_15 + 4])))), ((((min(var_0, (arr_9 [14] [12] [14] [2])))) ? (arr_62 [i_14] [i_15] [i_14] [i_15] [i_14] [i_14] [1]) : (max(395736557534053593, var_11))))));
                var_46 = (arr_3 [i_15]);
            }
            for (int i_21 = 0; i_21 < 10;i_21 += 1)
            {
                var_47 = (max(var_47, ((max(((~((var_0 ? -24 : var_9)))), (0 - -75))))));

                for (int i_22 = 1; i_22 < 8;i_22 += 1)
                {
                    var_48 = (min((min((max(var_0, 2147483647)), (max((arr_53 [i_14] [i_15]), (arr_28 [i_14] [i_21] [8] [i_22]))))), ((min((arr_41 [i_22 - 1] [i_21] [i_22 - 1] [3]), ((min((arr_53 [2] [9]), 235))))))));
                    var_49 = (arr_11 [i_15 + 1] [i_21] [i_22 + 1]);
                }
                var_50 = -56;
            }
            var_51 -= var_3;
        }
    }
    for (int i_23 = 1; i_23 < 10;i_23 += 1)
    {
        arr_85 [i_23] [i_23] = var_0;
        arr_86 [i_23] [1] = (min((~var_10), (arr_42 [1])));
    }
    #pragma endscop
}
