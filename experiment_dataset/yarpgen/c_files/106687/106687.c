/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106687
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((((((2196749462477655869 ? 255 : var_11))) ? -var_5 : (min(120, var_14))))) || var_15));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_21 = var_19;
                var_22 = 255;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 8;i_3 += 1)
                    {
                        {
                            arr_11 [i_3] [i_2] [i_2] [i_1] [i_0] [i_0] = max(0, var_9);
                            arr_12 [i_0] [i_1] [i_2] &= (max((min((arr_1 [5] [i_0]), (arr_1 [i_0] [i_1]))), (~var_7)));
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    arr_17 [i_0 - 2] = (((((arr_15 [0] [i_1] [i_4]) && var_14)) ? var_16 : (min((((var_13 ? 199 : (arr_2 [i_0] [i_0])))), (3 >> var_2)))));
                    var_23 = (((arr_8 [i_0] [i_0]) / (((((var_18 ? var_14 : var_3))) ? (((var_15 ? (arr_14 [i_0]) : (arr_16 [i_0])))) : -var_14))));
                    var_24 *= (((max((arr_7 [i_0 - 2] [i_0 - 1]), -3841158699090347929))) ? ((max((arr_1 [i_4] [9]), 3841158699090347928))) : (((var_6 / var_4) ? (arr_3 [i_0] [i_0]) : var_1)));
                    arr_18 [i_0 - 2] [3] = var_15;
                }
                for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
                {
                    var_25 = 908042468084848629;
                    var_26 = (min(var_8, ((((arr_13 [i_0] [i_0 + 1] [i_0]) ? 0 : 1)))));
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
                {
                    var_27 = (min(var_27, 254));
                    arr_23 [i_0] [i_1] [i_1] [i_6] = ((var_14 ^ ((((arr_0 [i_0 - 2]) ? var_9 : 165)))));

                    for (int i_7 = 2; i_7 < 9;i_7 += 1)
                    {
                        var_28 = (max(var_28, ((((((1 >> (((arr_19 [i_0] [0]) - 42342))))) ? (1 * 9223372036854775807) : ((var_17 ? var_15 : 65515)))))));
                        var_29 = ((-230 ? ((-(arr_1 [9] [0]))) : var_12));
                    }
                    for (int i_8 = 1; i_8 < 8;i_8 += 1) /* same iter space */
                    {
                        var_30 = var_7;
                        var_31 = (max(var_31, var_9));
                    }
                    for (int i_9 = 1; i_9 < 8;i_9 += 1) /* same iter space */
                    {

                        for (int i_10 = 1; i_10 < 9;i_10 += 1)
                        {
                            var_32 *= ((var_11 ? (arr_26 [i_0] [i_1] [i_6] [i_9 - 1]) : var_12));
                            arr_35 [i_9] = ((~(((arr_13 [i_1] [i_6] [i_9 + 1]) | (arr_19 [i_9] [i_1])))));
                            arr_36 [i_9] = ((-(arr_31 [i_9])));
                            arr_37 [i_9] [i_1] [1] [i_9] [i_9] = (arr_25 [i_0] [i_0 + 1]);
                            arr_38 [i_9] [i_1] [i_6] = (var_7 | 8594674650441370388);
                        }
                        for (int i_11 = 0; i_11 < 10;i_11 += 1)
                        {
                            var_33 = var_0;
                            var_34 = (((arr_15 [i_11] [i_9 + 2] [i_0]) ? var_14 : (199 << 18)));
                        }

                        for (int i_12 = 0; i_12 < 10;i_12 += 1) /* same iter space */
                        {
                            var_35 *= (((arr_22 [i_0 - 1] [i_9 + 2]) >= var_14));
                            var_36 += ((30126 ? ((65527 ? var_12 : (arr_33 [i_0 - 1] [1] [i_0] [i_0 - 1] [i_0]))) : (~1)));
                        }
                        for (int i_13 = 0; i_13 < 10;i_13 += 1) /* same iter space */
                        {
                            var_37 = (((((var_13 ? var_11 : var_0))) || (((var_19 ? (arr_30 [i_9] [1] [2] [i_0]) : 14037)))));
                            arr_46 [i_0] [i_9] [i_6] [i_6] [9] [i_13] = var_14;
                            var_38 = ((arr_25 [i_0 + 1] [i_9 + 2]) ? var_18 : (arr_42 [i_0 + 1] [i_1] [i_9] [i_9 + 1] [4]));
                            arr_47 [i_9] [1] [i_6] [i_9] [i_13] = 92;
                        }
                    }
                    var_39 = ((17193717657274716376 ? -65503 : (((arr_29 [i_0] [i_1] [i_1]) ? var_13 : 3841158699090347917))));
                }
            }
        }
    }
    #pragma endscop
}
