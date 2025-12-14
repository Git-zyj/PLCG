/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173983
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_8;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_4 [i_0] = ((((var_7 ? (arr_0 [i_0]) : var_0)) != (((((arr_1 [i_0] [i_0]) != (arr_3 [i_0])))))));
        var_11 = ((-(((arr_2 [i_0] [i_0]) >> (-4754732662557745493 + 4754732662557745524)))));
        var_12 = ((-(arr_1 [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_13 = (arr_1 [i_1] [1]);
        var_14 = ((-739289848 ? (!1) : (arr_1 [1] [i_1])));
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            {
                arr_12 [i_3] = (min((((-((1 ? var_7 : var_9))))), (max((min((arr_10 [i_2 - 1] [i_2 - 1]), var_6)), ((min(var_2, 1)))))));
                var_15 = ((((var_8 & (min(var_4, var_1)))) >> (var_1 - 1589121881)));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        {
                            var_16 = (min(((85 >> (var_4 + 105))), (((arr_2 [i_2] [3]) >> (((1 + var_1) - 1589121871))))));
                            var_17 = (max(var_17, (1 != 1)));
                            arr_17 [i_4] = var_9;
                            var_18 = (min(((~(((arr_6 [i_4]) ? 64 : var_8)))), ((min((min(var_7, var_4)), ((min(29, 85))))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        {
                            arr_25 [i_2] [i_7] [i_7] = ((1 ? ((min((arr_15 [i_2 - 1] [i_2] [i_2 - 1]), (arr_15 [i_2 - 1] [i_2] [i_2 - 1])))) : (arr_18 [i_2 - 1] [i_2] [i_2 - 1])));
                            var_19 = (max(0, ((var_6 >> (4754732662557745493 - 4754732662557745477)))));
                            var_20 = ((min(-85, (arr_0 [i_2 - 1]))));
                            var_21 = (max(var_21, ((((((~var_9) & var_8)) & ((~(arr_11 [i_2] [i_3] [i_7]))))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        {
                            var_22 = ((((((arr_19 [i_2 - 1] [i_3] [i_3] [i_9]) ? ((0 ? (arr_27 [i_3] [i_9]) : var_3)) : -1932356536))) ? ((-1190638122880865947 ? var_7 : (~1))) : (((((1 ? -86 : 4754732662557745493))) ? 85 : var_9))));
                            var_23 += var_6;
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 18;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 18;i_11 += 1)
        {
            {
                var_24 = (((min(0, (arr_0 [i_10]))) + (((arr_0 [i_11]) ? (arr_0 [i_11]) : (arr_0 [i_10])))));
                var_25 = var_1;
                var_26 = var_3;
                /* LoopNest 3 */
                for (int i_12 = 2; i_12 < 17;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 18;i_14 += 1)
                        {
                            {
                                var_27 = (i_10 % 2 == zero) ? ((((((var_2 ? var_4 : (min(1, 4551849740065329196)))) + 9223372036854775807)) >> (((((min((arr_34 [i_14] [i_10] [i_10] [i_10]), var_2)) - var_7)) + 192)))) : ((((((var_2 ? var_4 : (min(1, 4551849740065329196)))) + 9223372036854775807)) >> (((((((min((arr_34 [i_14] [i_10] [i_10] [i_10]), var_2)) - var_7)) + 192)) + 206602272))));
                                var_28 -= ((-(((arr_33 [i_10] [i_10] [i_12 + 1]) ? (arr_39 [i_10] [i_13] [i_12 + 1] [i_13]) : (arr_39 [i_10] [i_10] [i_12 - 1] [i_13])))));
                                var_29 = (min(var_29, (4754732662557745493 / var_2)));
                                var_30 = 1;
                                var_31 = 0;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
