/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18004
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = var_1;
        arr_3 [12] [17] = (min((arr_0 [i_0]), (((var_3 ? var_2 : var_5)))));
        var_12 = ((((((arr_0 [i_0]) ? (arr_0 [i_0]) : (min(var_6, 4142462539))))) ? (min(var_9, (arr_0 [i_0]))) : (((!((min((arr_0 [i_0]), (arr_1 [19])))))))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1 - 1] [i_2 - 1] = var_9;
                    var_13 = (min(var_13, ((min((min((1 + 1), (arr_4 [i_1 - 1]))), ((max((arr_5 [i_1 - 3] [i_2 - 1]), (arr_5 [i_1 - 3] [i_2 + 2])))))))));
                    var_14 *= ((!(((min(10, var_4))))));
                    arr_9 [i_0] [i_0] [i_1] [i_2] = 1743157727;
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                {

                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        arr_22 [i_3] [i_4] [8] [i_4] [i_6] &= var_4;
                        arr_23 [i_5] [i_5] [i_4] = (arr_13 [i_4 - 1] [i_5]);
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            {
                                var_15 += (min((((min(13850, var_1)))), var_4));
                                arr_30 [i_3] [i_3] [i_3] [i_5] [i_3] [i_3] = 42366;
                                arr_31 [i_5] [i_4] [i_5] = ((min(((1743157750 ? 36979 : 723595654757691795)), ((((arr_25 [i_5] [i_4] [i_7]) ? var_2 : (arr_18 [i_5] [4])))))));
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 4; i_9 < 20;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 1;i_10 += 1)
            {
                {
                    var_16 = var_7;
                    arr_36 [i_3] [i_10] [i_10] = (((((var_8 ? (arr_34 [i_9 + 1] [i_9] [i_9 - 1]) : (arr_10 [i_9 + 1] [i_9 + 1])))) & (min((arr_33 [i_9 + 1] [i_10 - 1]), (arr_33 [i_9 + 2] [i_10 - 1])))));

                    for (int i_11 = 2; i_11 < 19;i_11 += 1)
                    {
                        var_17 = (!((((!var_6) ? (arr_27 [i_9 - 1] [i_10] [i_10 - 1] [i_10 - 1] [i_10] [i_11 + 1]) : -25))));

                        for (int i_12 = 0; i_12 < 22;i_12 += 1)
                        {
                            var_18 = (min(var_18, (((((var_10 || 1) || 1))))));
                            var_19 = (min((arr_19 [i_9] [i_10]), (max(((var_10 ? 3856376481457665553 : var_3)), var_3))));
                        }
                        for (int i_13 = 0; i_13 < 22;i_13 += 1)
                        {
                            arr_44 [i_3] [i_3] [i_9] [i_9] [i_11 - 1] [i_10] [i_10] = ((((0 < (var_11 == 36979))) ? ((var_5 ? (arr_20 [i_3] [i_3] [i_3] [i_3]) : (max(var_7, var_6)))) : (max(((min(var_0, (arr_38 [i_9] [i_11])))), (1 + var_5)))));
                            arr_45 [i_3] [i_9] [i_10 - 1] [i_10] [i_10] [i_10] = (max(var_3, ((((var_9 ? var_1 : var_11)) / (arr_35 [i_11 - 2] [i_10] [i_10] [i_9])))));
                            var_20 = (max(var_20, ((((min(var_2, (arr_21 [i_11] [i_11 - 1] [i_11] [i_11 - 1] [i_11] [i_11]))) >= var_2)))));
                        }
                        for (int i_14 = 2; i_14 < 21;i_14 += 1)
                        {
                            arr_48 [i_10] [i_9 - 4] [i_9] [i_9] = (max(var_11, (((65525 ^ var_3) ? (arr_19 [i_3] [i_10]) : ((min(564054900, 29)))))));
                            arr_49 [i_3] [i_11 + 3] [i_10] [i_11] [i_10] [8] [i_10] = var_6;
                            arr_50 [i_10] [i_11] [i_14 + 1] = (arr_39 [i_3] [i_9] [i_10] [i_10 - 1] [i_11 + 2] [13]);
                            arr_51 [i_10] [i_9] [i_14] = ((((max((min((arr_20 [0] [i_9] [i_10] [2]), (arr_38 [i_14 - 2] [1]))), var_11))) >> ((+(((arr_24 [i_3] [i_9] [i_10] [i_10] [i_14]) >> (var_9 + 157883155)))))));
                        }
                        /* vectorizable */
                        for (int i_15 = 3; i_15 < 19;i_15 += 1)
                        {
                            arr_54 [i_15] [19] [i_10] [6] [i_3] = ((var_2 ? (arr_43 [i_9 - 3] [i_10 - 1] [i_11 + 1] [i_11 - 1] [i_15 + 3] [i_15 - 3]) : (arr_21 [i_9 - 1] [i_10] [i_10] [i_10] [i_10 - 1] [i_10 - 1])));
                            var_21 = (!152504739);
                        }
                    }
                }
            }
        }
        var_22 -= ((((~(var_0 | var_11))) * (((!(1 + var_6))))));
        arr_55 [i_3] = var_0;

        for (int i_16 = 0; i_16 < 22;i_16 += 1)
        {
            arr_59 [0] = (((!(arr_35 [i_16] [i_16] [14] [i_16]))));
            arr_60 [i_3] = ((var_11 * (((min((arr_27 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]), (arr_47 [16] [i_16] [i_16] [i_16] [i_16]))) * (1 / var_10)))));
            arr_61 [i_3] = (((max(var_1, var_5)) > (arr_41 [i_3] [17] [i_3] [i_3] [i_3])));
        }
    }
    var_23 = (((min((max(var_8, var_7)), ((min(var_0, 0))))) + (max(((max(var_1, 152504756))), 14590367592251886063))));
    var_24 = var_11;
    var_25 = (min(var_3, (((((28672 ? (-2147483647 - 1) : var_0))) ? var_8 : (min(var_6, var_9))))));
    #pragma endscop
}
