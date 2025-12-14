/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145451
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_14 = var_9;

                for (int i_2 = 3; i_2 < 20;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        var_15 = (arr_4 [i_2] [i_3]);
                        var_16 = (max(var_16, 1));
                    }
                    for (int i_4 = 2; i_4 < 20;i_4 += 1) /* same iter space */
                    {
                        var_17 = (max((max(((var_13 ? var_4 : var_5)), 1)), (((!((var_0 && (arr_10 [i_0] [i_2] [i_2]))))))));
                        var_18 += (var_11 || ((((max(var_7, var_1)) % var_10))));
                    }
                    for (int i_5 = 2; i_5 < 20;i_5 += 1) /* same iter space */
                    {
                        var_19 = (((var_4 ? (((max(var_3, var_0)))) : (var_12 % var_9))));
                        var_20 = ((0 ? ((max((var_9 % var_2), ((var_2 ? (arr_11 [i_2] [i_2 - 1]) : -119))))) : (((var_1 > var_9) ? 4873414474020919147 : ((1 ? var_12 : var_1))))));

                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            var_21 = (max(var_12, var_6));
                            var_22 = var_3;
                            var_23 = ((-(((((2048 ? var_1 : var_4)) == (((max(65531, var_13)))))))));
                        }
                        var_24 = (max((max((max((arr_8 [i_5] [i_5] [i_2] [i_2] [i_1] [i_0]), (arr_10 [i_5] [i_2] [i_0]))), ((max(var_11, var_2))))), 242682145));
                        var_25 = (((-(arr_7 [19] [i_5] [i_5 + 1]))) * (!5696));
                    }
                    var_26 = ((var_6 ? var_7 : ((max((max(var_4, 65523)), (arr_17 [i_2] [17] [i_1] [i_0]))))));
                }
                for (int i_7 = 4; i_7 < 20;i_7 += 1)
                {
                    var_27 *= ((!((((arr_10 [i_7 - 4] [i_0] [i_7 - 2]) ? var_1 : var_5)))));
                    var_28 = ((80 ? -2023 : 2775));
                    var_29 = ((((122 == (arr_7 [i_0] [i_1] [i_7])))));
                    var_30 = var_1;
                    var_31 = (((((0 ? (((var_8 ? (arr_19 [i_0]) : var_4))) : -1509035197956342777))) ? ((((!(arr_5 [i_0] [i_1] [i_7 - 3]))) ? (max((arr_3 [i_1]), var_6)) : (max(var_10, var_5)))) : ((((max((arr_18 [i_0] [i_1] [i_7] [i_7 + 1] [i_7] [5]), 65531))) ? var_6 : ((242682145 ? var_6 : var_12))))));
                }

                for (int i_8 = 2; i_8 < 20;i_8 += 1)
                {

                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        var_32 = (~2188494858);
                        var_33 = (((((var_2 ? (arr_17 [i_8 - 2] [1] [i_8] [1]) : (arr_12 [i_9] [1] [i_8] [1] [i_0])))) ? (((((var_11 >> (var_2 - 75)))) ? (((((arr_26 [i_9] [i_8] [i_1] [i_0]) + 9223372036854775807)) >> (2560 - 2505))) : (arr_24 [i_0] [i_0] [i_0]))) : (((((((var_0 + 2147483647) << (((arr_3 [i_0]) - 3156486705)))) < ((var_8 - (arr_1 [i_0])))))))));
                    }
                    for (int i_10 = 2; i_10 < 18;i_10 += 1)
                    {
                        var_34 = (((((max(var_2, (arr_25 [i_1] [i_10] [i_1] [i_1] [i_1] [i_1])))) ? (!38457) : (((arr_10 [20] [i_10] [2]) ? (arr_6 [i_10] [i_10] [i_10] [i_0]) : var_6)))));
                        var_35 = (max(var_35, ((max(114688, (arr_9 [i_10 + 3] [i_8] [i_1] [i_0]))))));
                    }

                    for (int i_11 = 3; i_11 < 19;i_11 += 1)
                    {

                        for (int i_12 = 2; i_12 < 18;i_12 += 1)
                        {
                            var_36 = (max((((arr_3 [i_11 - 2]) + -var_5)), (((59831 ? 27076 : -268100089)))));
                            var_37 = (max(((((var_0 + 2147483647) >> 3))), var_4));
                        }
                        for (int i_13 = 2; i_13 < 19;i_13 += 1)
                        {
                            var_38 |= (max((((!(((arr_13 [1] [i_1] [i_8 - 2]) < var_2))))), (((arr_19 [9]) ? (max(var_13, var_8)) : ((var_10 ? var_2 : 1))))));
                            var_39 = var_11;
                        }
                        for (int i_14 = 1; i_14 < 18;i_14 += 1)
                        {
                            var_40 = max((((arr_3 [i_8 - 2]) ? var_10 : ((var_9 ? var_8 : var_1)))), (((!(((arr_26 [i_0] [i_1] [i_11] [i_14 - 1]) && var_12))))));
                            var_41 = var_11;
                        }
                        var_42 = (((((-(arr_7 [i_11 + 2] [i_1] [i_8 - 2])))) && ((max((arr_14 [15] [i_8 + 1] [i_8] [i_11] [i_0]), (arr_14 [20] [i_8 + 1] [i_11] [i_1] [i_8 - 1]))))));
                        var_43 = ((((var_9 ? 187284835 : (arr_20 [i_11])) - ((-(arr_7 [i_0] [i_1] [i_0]))))));
                    }
                    var_44 = (max(var_12, var_4));
                    var_45 += -25222;
                }
                for (int i_15 = 2; i_15 < 17;i_15 += 1)
                {
                    var_46 = (arr_10 [15] [i_15] [13]);
                    var_47 = var_13;
                    var_48 = var_2;
                    var_49 = (max((arr_6 [i_15] [i_15] [i_15] [i_0]), (((((var_7 ? (arr_2 [i_0]) : var_6))) ? ((((arr_14 [18] [i_1] [i_1] [19] [19]) - var_1))) : 3783003719))));
                }
                var_50 = (max((((arr_32 [i_0] [i_0] [i_0] [i_1] [5]) ? (max(3657430970676772554, var_6)) : var_7)), ((max(var_9, var_2)))));
                var_51 = ((~(((((max(var_10, (arr_23 [i_0])))) && ((max(var_4, var_4))))))));
            }
        }
    }
    var_52 = var_3;
    #pragma endscop
}
