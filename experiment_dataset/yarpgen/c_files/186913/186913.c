/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186913
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = -var_5;
    var_12 = var_10;
    var_13 = ((!(~0)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = ((-(arr_2 [3] [i_1])));
                arr_6 [i_0] [i_1] [i_0] = arr_3 [i_1] [i_0] [i_0];
            }
        }
    }

    for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 1;i_4 += 1)
            {
                {
                    var_14 += -var_7;

                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        arr_18 [i_3] = (~var_6);
                        var_15 *= 1530679255;
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        var_16 *= (((arr_19 [i_6] [i_4 - 1] [i_4] [7] [i_4 - 1] [i_4]) ? (arr_19 [i_2] [i_4 - 1] [i_2] [i_6] [2] [i_6]) : (arr_16 [i_3] [i_4 - 1] [i_2] [0] [i_4] [i_3])));
                        var_17 = (334867157 / 10424462944507695879);
                        arr_22 [i_2] [i_3] [i_3] [i_2] [i_6] [i_4] = (arr_16 [2] [i_6] [0] [i_4 - 1] [i_4 - 1] [i_2]);
                        var_18 = (((!(arr_2 [i_4 - 1] [i_3]))));

                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            var_19 = (((arr_0 [i_4 - 1]) >= 683389136));
                            var_20 -= var_8;
                        }
                    }
                }
            }
        }
        var_21 = (min(var_21, ((((((arr_10 [i_2] [i_2]) >= -var_8))) << (((arr_23 [i_2]) - 15617281469572952652))))));
        var_22 = (min((min(-94, 66)), (!2716241079)));
        var_23 *= ((+((var_0 ? (arr_12 [i_2] [i_2]) : (arr_12 [i_2] [2])))));
        var_24 = (1 + 8022281129201855736);
    }
    for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
    {
        var_25 = (((var_3 ? 2784340115663559182 : var_1)));
        var_26 = var_1;
        /* LoopNest 2 */
        for (int i_9 = 4; i_9 < 10;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 11;i_10 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        for (int i_12 = 2; i_12 < 10;i_12 += 1)
                        {
                            {
                                var_27 = (((123 * var_9) | (((arr_17 [1]) ? (((-1164124608 + 2147483647) << (((-69 + 100) - 30)))) : 0))));
                                var_28 = var_2;
                                arr_40 [10] [i_9] [10] [10] [10] = 7;
                                var_29 = ((+(min((arr_1 [i_10]), 10660960828736854433))));
                            }
                        }
                    }
                    arr_41 [i_9] = (arr_19 [i_10] [i_10] [i_10] [i_9] [8] [i_8]);
                    arr_42 [i_9] [i_9] [i_9] [i_9] = ((-(arr_2 [i_9] [i_8])));
                }
            }
        }

        for (int i_13 = 0; i_13 < 11;i_13 += 1)
        {

            /* vectorizable */
            for (int i_14 = 0; i_14 < 11;i_14 += 1)
            {
                arr_48 [i_13] [1] [i_14] = (arr_8 [i_8] [i_13]);

                for (int i_15 = 0; i_15 < 11;i_15 += 1)
                {
                    var_30 -= (((-1951873484 ? -107 : var_0)) & ((((arr_49 [i_15] [i_15] [i_15]) ? 1427109266 : (arr_1 [i_14])))));
                    var_31 += 591287442;
                    arr_51 [10] [i_13] [i_13] [i_13] [10] = (((arr_32 [i_13]) % (arr_32 [6])));
                }
            }
            var_32 = (((((((arr_43 [i_8] [i_13]) ? (arr_12 [i_13] [i_13]) : (arr_10 [i_8] [i_8]))))) + (((((arr_8 [i_8] [i_13]) ? -62 : var_10))))));
        }
        for (int i_16 = 1; i_16 < 10;i_16 += 1)
        {

            for (int i_17 = 0; i_17 < 11;i_17 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 1;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 1;i_19 += 1)
                    {
                        {
                            arr_61 [i_8] [i_16] [i_8] = (arr_34 [i_8] [i_16]);
                            var_33 = (--1258947029);
                            var_34 -= ((((10424462944507695853 ? ((min(-1, -964766260))) : 1824773396)) + -134217728));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_20 = 1; i_20 < 1;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 11;i_21 += 1)
                    {
                        {
                            arr_68 [i_16] [10] [i_17] [i_20] [i_17] [i_8] = ((((max((arr_13 [i_16] [i_16 + 1] [i_16] [i_8]), (arr_31 [i_16] [i_16] [i_16])))) ? (arr_66 [i_20 - 1] [i_16 - 1] [i_17] [10] [i_21]) : ((((!((min(var_2, (arr_1 [i_16]))))))))));
                            var_35 = (min(var_35, (((((arr_67 [i_8] [i_16 - 1] [i_17] [i_8] [i_21]) / (arr_67 [i_8] [i_16 + 1] [i_17] [i_8] [i_21])))))));
                            var_36 *= ((max(var_9, (arr_59 [1] [i_17] [i_20] [i_8]))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_22 = 0; i_22 < 11;i_22 += 1)
                {
                    for (int i_23 = 0; i_23 < 11;i_23 += 1)
                    {
                        {
                            var_37 = 11890706230604225822;
                            var_38 += (!var_3);
                            var_39 = (arr_0 [11]);
                        }
                    }
                }
            }
            /* vectorizable */
            for (int i_24 = 0; i_24 < 11;i_24 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_25 = 0; i_25 < 11;i_25 += 1)
                {
                    for (int i_26 = 2; i_26 < 10;i_26 += 1)
                    {
                        {
                            arr_83 [i_24] [i_16] [i_16] = (((-127 - 1) ? (arr_80 [i_16] [i_16 - 1]) : (arr_80 [i_16] [i_16 + 1])));
                            arr_84 [i_8] [i_16] [i_26] [i_25] [i_16] [i_16] = ((arr_43 [i_16] [i_16]) ? (arr_8 [i_16] [i_16]) : (arr_3 [i_8] [i_25] [i_24]));
                            arr_85 [i_16] [i_26 + 1] [i_25] [i_24] [9] [1] [i_16] = ((!(arr_50 [i_16 - 1] [i_26] [7] [i_26 - 1] [5] [i_16])));
                        }
                    }
                }
                var_40 = 123;
            }
            var_41 -= (arr_74 [i_16 + 1] [i_16 + 1] [i_16] [i_16]);
        }
    }
    #pragma endscop
}
