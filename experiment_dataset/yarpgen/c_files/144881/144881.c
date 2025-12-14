/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144881
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((var_3 + var_7) ? 3 : var_5));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [i_2 - 1] [i_1] [i_0] &= ((((var_0 ? (min(var_2, -1778042202180442776)) : (((-(arr_5 [i_3] [i_2] [i_0])))))) ^ ((((!(10344318868717637277 ^ var_5)))))));
                            arr_14 [i_2] [i_2] = (18446744073709551615 ? (((((arr_2 [i_3] [i_2]) ? var_6 : var_7)))) : (arr_4 [i_1] [i_3]));
                            var_13 = var_0;
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    var_14 = ((!(arr_1 [i_4] [i_0])));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            {
                                var_15 = (min(var_15, (((~((var_7 ? (3492447824989320048 >= 1778042202180442776) : (((!(arr_4 [i_5] [i_1])))))))))));
                                arr_22 [i_0] [i_4] [i_0] [i_0] [i_0] [i_0] = (var_4 ^ ((-1778042202180442768 ? (var_8 ^ 1040187392) : var_4)));
                                var_16 = (((max(0, 0)) >= (1491375274 >= var_8)));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        var_17 = ((((((arr_3 [i_4] [i_7]) ? -34 : var_4))) | (((var_10 + 9223372036854775807) << (var_8 - 69)))));
                        arr_27 [i_0] [i_4] [i_4] [i_7] [i_0] = var_11;
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {

                        for (int i_9 = 0; i_9 < 16;i_9 += 1)
                        {
                            var_18 = var_2;
                            var_19 = 1;
                        }
                        arr_36 [i_4] = var_9;
                        var_20 ^= (160 >= 1);
                    }
                    for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
                    {
                        arr_39 [i_4] [i_1] [i_1] [i_1] [i_1] [i_1] = var_10;
                        arr_40 [i_4] [i_4] = ((~(((159 >= (arr_2 [i_10] [i_1]))))));
                        arr_41 [i_4] [i_4] = (arr_21 [i_4] [i_10]);
                        var_21 = (((~13777936536838583984) ? (arr_10 [i_10] [i_4] [i_0]) : (((1 ? 0 : 31512)))));
                    }
                    for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
                    {
                        var_22 = (min(var_22, ((max((((!1) ? var_10 : ((min(14946, var_5))))), (max(((34494 ? var_1 : (arr_24 [i_11] [i_0] [i_1]))), 32767)))))));
                        arr_44 [i_1] [i_1] [i_1] [i_1] [i_4] [i_1] = ((((min(((var_11 ? var_1 : var_8)), ((max(1, 31042)))))) ? var_3 : ((var_1 ? (min(var_2, var_4)) : (arr_0 [i_4] [i_0])))));
                    }
                }
                for (int i_12 = 0; i_12 < 16;i_12 += 1)
                {
                    var_23 = (-(arr_29 [i_1]));
                    arr_48 [i_0] [i_0] [i_0] [i_0] = (((-(~1778042202180442783))));
                    var_24 = (min((((!-583373544) ^ var_0)), (arr_2 [i_1] [i_0])));
                }
                for (int i_13 = 0; i_13 < 16;i_13 += 1)
                {
                    arr_52 [i_0] [i_1] [i_13] &= 18446744073709551606;
                    var_25 ^= ((((((arr_20 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1] [i_13]) ? 255 : 0))) ? (((arr_6 [i_0] [i_1] [i_0] [i_0]) ? (((((arr_7 [i_0] [i_1] [i_1] [i_0]) && var_7)))) : 146)) : (!-32758)));
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 16;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 16;i_15 += 1)
                        {
                            {
                                var_26 -= (((max((arr_17 [i_15] [i_14] [i_13] [i_1] [i_0]), (arr_17 [i_15] [i_14] [i_13] [i_1] [i_0]))) + -2081759106408466649));
                                var_27 = (min(var_27, (((((max((arr_19 [i_0] [i_1] [i_0] [i_14]), var_6))) >= ((var_10 ? var_2 : (arr_9 [i_14]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
