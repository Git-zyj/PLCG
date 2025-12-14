/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128475
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_13 = ((((((arr_3 [i_0] [i_1]) ? (arr_3 [i_0] [i_0]) : (arr_3 [i_1] [i_1])))) ? ((((((var_5 / (arr_6 [i_0]))) == ((var_12 ? var_6 : var_2)))))) : (max((arr_6 [i_0]), var_6))));
                var_14 = ((~((((arr_5 [i_1]) && (arr_5 [i_0]))))));
                arr_7 [i_0] [i_0] = (min((max((max((arr_4 [i_1] [i_0] [i_0]), (arr_1 [i_1]))), (((arr_3 [i_0] [i_0]) ? (arr_3 [i_0] [i_0]) : (arr_5 [i_0]))))), (((-((var_7 ? var_8 : var_12)))))));
                var_15 = ((((((((2 ? 4 : 65521))) ? ((16383 ? 1 : -280099994)) : 65515))) && ((((arr_3 [i_1] [i_0]) ? ((var_4 ? var_6 : (arr_3 [i_0] [i_0]))) : var_8)))));
                var_16 = (max((min(((((arr_6 [i_0]) ? var_12 : var_9))), (min(var_10, var_12)))), (arr_5 [i_0])));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 4; i_2 < 22;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            var_17 |= (var_10 - 13);
            arr_12 [i_2] [i_2] = (18168570355000105505 ? ((1548036643129361338 ? 12 : 152)) : 0);
        }
        var_18 = (min(var_18, (((var_7 ? (arr_9 [i_2 + 2] [i_2]) : (arr_9 [i_2 - 4] [i_2 - 4]))))));
    }
    /* vectorizable */
    for (int i_4 = 4; i_4 < 22;i_4 += 1) /* same iter space */
    {
        var_19 &= (arr_8 [i_4 - 2]);

        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            var_20 = (-7056043171495548479 ? 104 : 47);
            arr_21 [i_5] = var_11;
            arr_22 [i_4 - 3] [i_5] = ((28 ? 7 : 15));
        }
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            arr_26 [i_4 - 4] [i_6] [i_6] = var_7;
            var_21 = (((((arr_14 [i_6] [i_4]) == (arr_8 [i_6]))) || (((var_7 ? var_11 : (arr_18 [i_6]))))));
        }
    }
    /* vectorizable */
    for (int i_7 = 4; i_7 < 22;i_7 += 1) /* same iter space */
    {
        var_22 = ((~(~var_11)));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 25;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 25;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 3; i_10 < 22;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 25;i_11 += 1)
                        {
                            {
                                var_23 = (((arr_10 [i_7 + 3] [i_10 - 1]) >= (arr_10 [i_7 - 3] [i_10 - 3])));
                                var_24 = (((~var_0) ? (arr_30 [i_7 + 1] [i_7 + 1]) : (((arr_23 [i_9] [i_8]) + var_3))));
                                arr_41 [i_7] [i_7] [i_9] [i_7] [i_11] = (((((-(arr_25 [i_7] [i_7] [i_11])))) && (arr_8 [i_7 - 4])));
                                arr_42 [i_7] = (((arr_30 [i_9] [i_9]) ? ((var_5 ? (arr_35 [i_7] [i_7] [i_7] [i_8]) : (arr_18 [i_9]))) : (arr_29 [i_11] [i_9] [i_9])));
                                var_25 = (((((65512 ? var_3 : 0))) ? (arr_34 [i_10 + 2] [i_11] [i_11] [i_7]) : -var_3));
                            }
                        }
                    }
                    arr_43 [i_9] [i_9] [i_7] = (arr_14 [i_8] [i_8]);
                    arr_44 [i_7] [i_8] [i_7] = (((arr_32 [i_7 + 1] [i_7] [i_7 - 4]) ? (((arr_28 [i_9]) ? var_7 : var_5)) : ((((arr_15 [i_8]) ? (arr_15 [i_9]) : (arr_36 [i_7]))))));
                    var_26 *= ((!(arr_39 [i_7 - 4] [i_7 + 1])));
                    var_27 = (min(var_27, (((arr_35 [i_7 + 1] [i_9] [i_9] [i_9]) ? (arr_11 [i_7] [i_9]) : var_1))));
                }
            }
        }
        var_28 = ((10479 ? -8669853831549806808 : 8143988105992521338));
    }
    #pragma endscop
}
