/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162037
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_12;

    for (int i_0 = 3; i_0 < 8;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            var_18 = ((!(((var_5 ? var_9 : ((var_14 ? (arr_4 [i_0 - 1] [i_0 - 1] [i_0]) : 1)))))));
            var_19 = max(((~((var_13 ? (arr_0 [5] [5]) : var_15)))), (max(((~(arr_4 [i_0] [i_0] [i_1]))), (min((arr_2 [i_0 - 1] [i_0 - 1]), var_1)))));
        }
        /* vectorizable */
        for (int i_2 = 1; i_2 < 9;i_2 += 1) /* same iter space */
        {
            var_20 = (min(var_20, (((((var_14 ? (arr_4 [i_2] [i_0 - 2] [i_0 - 2]) : (arr_4 [i_2] [i_2] [i_2]))) != (var_13 / var_16))))));
            var_21 = ((var_0 ? ((var_6 ? var_10 : (arr_5 [1] [i_0]))) : (arr_6 [i_2 - 1])));
        }
        for (int i_3 = 1; i_3 < 9;i_3 += 1) /* same iter space */
        {
            arr_10 [i_0] = var_15;
            arr_11 [i_0] = ((((((((2305843009213693951 - (arr_0 [i_0] [i_3])))) ? var_2 : (arr_7 [i_0])))) ? var_2 : (max(((var_6 ? var_14 : (arr_7 [i_0]))), var_14))));
            arr_12 [i_0] [i_0] = (min(var_6, ((-(~var_5)))));
        }
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    {
                        var_22 = ((((min(-3163163131457704908, (var_12 * var_5)))) ? (((((var_0 | var_0) != var_11)))) : (min(-var_6, (max(37, var_9))))));

                        for (int i_7 = 1; i_7 < 1;i_7 += 1)
                        {
                            var_23 = arr_7 [8];
                            var_24 = (max(var_24, (((var_4 | (((~(arr_21 [i_0] [i_4] [i_4] [i_5] [i_6] [i_7 - 1])))))))));
                            var_25 = var_1;
                            var_26 = ((var_3 ? (arr_16 [i_0 - 1] [i_0]) : ((-(arr_0 [i_7 - 1] [i_0 - 1])))));
                        }
                        for (int i_8 = 0; i_8 < 10;i_8 += 1)
                        {
                            var_27 = ((((max((arr_3 [i_4] [i_0 - 1] [i_0]), (arr_3 [i_0 - 3] [i_0 - 3] [i_0])))) ? var_3 : (min((arr_3 [7] [i_0 - 3] [7]), var_3))));
                            arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] = var_15;
                            var_28 = (arr_4 [7] [1] [1]);
                            var_29 = (max(var_29, ((((max(((max(4239839785, -193987661276827738))), var_13)) * (((((var_14 & (arr_17 [i_4] [i_5] [0] [i_8])))) ? (var_7 + var_9) : var_2)))))));
                        }
                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            var_30 = (((((-((var_2 ? (arr_3 [i_4] [i_5] [i_9]) : var_0))))) && (var_11 && var_5)));
                            arr_27 [i_4] [i_4] [i_5] [i_0] = (((((((~(arr_26 [i_0] [i_0] [i_4] [i_5] [i_0] [i_6] [i_5]))) >> (((arr_0 [i_0 + 1] [i_0 - 1]) - 15188716563130907551))))) ? (arr_20 [i_0] [i_9] [i_5] [i_0] [i_5] [i_5]) : ((-(var_15 + var_9)))));
                            arr_28 [i_0] [i_0 + 1] [i_0 + 1] [i_0] [i_0] [i_0 + 1] = (arr_22 [i_0 - 2]);
                            arr_29 [i_0] [6] [i_6] = (arr_21 [i_0 + 1] [i_0] [1] [i_6] [i_9] [i_0]);
                        }
                        for (int i_10 = 0; i_10 < 10;i_10 += 1)
                        {
                            var_31 = -var_11;
                            var_32 = ((-((var_0 ? (arr_19 [i_0]) : var_11))));
                        }
                        var_33 = (~((var_12 ? 0 : (arr_18 [i_6] [i_5] [i_4]))));
                    }
                }
            }
        }
        var_34 = ((18446744073709551615 ? -11250 : var_2));
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 10;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 10;i_12 += 1)
            {
                {
                    var_35 |= var_14;
                    var_36 = (arr_5 [i_0] [i_0]);
                    arr_38 [i_0] [i_11] [i_11] [i_0] = ((var_3 ? (arr_7 [i_11]) : var_5));
                    arr_39 [0] [i_0] [i_12] = (arr_22 [i_0]);
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 10;i_14 += 1)
                        {
                            {
                                var_37 = (((((~(arr_43 [i_0] [i_0] [i_0 + 1] [i_0 - 3])))) ? (~var_2) : (arr_43 [i_0] [i_0] [i_0 - 3] [i_0 - 2])));
                                var_38 = ((!(((~(arr_0 [i_0 + 1] [i_11]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_15 = 3; i_15 < 8;i_15 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_16 = 0; i_16 < 10;i_16 += 1)
        {
            for (int i_17 = 1; i_17 < 8;i_17 += 1)
            {
                {
                    var_39 = (arr_32 [i_17] [i_17 + 2]);
                    arr_56 [i_15] [4] [i_16] [i_17] |= (!var_9);

                    for (int i_18 = 0; i_18 < 10;i_18 += 1)
                    {
                        var_40 = (((((var_11 - (arr_2 [i_15] [i_15])))) ? (arr_14 [i_17]) : var_11));
                        var_41 = (max(var_41, ((((arr_13 [i_15 - 2] [i_15 + 1] [2]) ? 1 : var_7)))));
                        var_42 = ((~((var_6 ? var_8 : (arr_19 [i_17])))));
                        var_43 -= ((var_11 ? var_15 : var_4));
                        var_44 = (~4177920);
                    }
                }
            }
        }
        arr_60 [i_15] [i_15 + 1] = (arr_2 [i_15 - 2] [i_15 + 2]);
    }
    for (int i_19 = 3; i_19 < 8;i_19 += 1) /* same iter space */
    {
        arr_64 [i_19] [9] = (max((max((arr_35 [i_19 - 2]), var_15)), (((-(var_10 >= var_12))))));
        var_45 = var_2;
        arr_65 [i_19] [i_19] = (((arr_40 [i_19] [i_19] [i_19]) ? (arr_4 [i_19] [i_19 - 2] [i_19]) : ((~(var_3 ^ var_1)))));
        var_46 = ((((((var_15 ? (arr_61 [i_19] [i_19]) : (arr_0 [i_19] [i_19]))) - (((arr_8 [i_19] [i_19] [i_19]) ? 71 : var_0)))) - (min(-var_8, (arr_31 [0] [0] [i_19] [i_19] [i_19])))));
    }
    #pragma endscop
}
