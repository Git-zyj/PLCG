/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11479
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_3] [i_2] = var_0;
                                arr_13 [0] [i_4] [i_3] [i_4] |= ((((!((((arr_8 [11] [i_3] [i_2 + 3] [3] [3]) >> (((arr_10 [i_1] [i_1] [i_1]) - 212))))))) ? (min((((!(arr_3 [i_4] [i_2] [i_0])))), (arr_4 [i_1] [i_2]))) : (arr_10 [i_0] [i_0] [i_0])));
                            }
                        }
                    }
                    var_19 = (max(var_19, (((-(arr_8 [i_2 - 4] [i_2] [i_2 - 4] [i_2 + 1] [11]))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                {
                    arr_21 [i_7] [6] [i_5] [i_7] = ((var_4 ^ (!var_14)));
                    var_20 -= ((!((min((arr_10 [i_5] [i_6] [i_7]), -7846220359760118951)))));
                    arr_22 [i_5] [i_7] [i_5] = 127;

                    for (int i_8 = 2; i_8 < 10;i_8 += 1)
                    {
                        var_21 = (((((var_10 ? (var_16 ^ var_12) : (((var_11 ? (arr_19 [i_7] [i_7] [i_8 + 1]) : 2013265920)))))) ? 2013265920 : ((47909 ? -7846220359760118930 : (arr_19 [i_7] [i_8 - 1] [i_7])))));
                        var_22 *= (((((!(((var_14 ? (-32767 - 1) : 32767)))))) * (arr_24 [i_6] [i_6] [i_8 + 1] [i_8 - 1] [i_8 - 2] [i_8])));
                        var_23 = (max(var_23, (((!(!16755766995642923652))))));
                    }
                    for (int i_9 = 3; i_9 < 8;i_9 += 1)
                    {
                        arr_27 [i_5] [i_7] [i_6] [i_6] [i_9] [i_9] = var_13;
                        var_24 = (min(var_24, (((63439 ? var_1 : (var_13 - 32767))))));
                    }
                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        arr_30 [i_10] [i_7] [i_6] [i_7] [i_5] = ((~(((((arr_15 [i_6]) + 2281701376))))));
                        arr_31 [i_5] [i_6] [i_7] [i_7] = arr_17 [i_7] [i_6] [9];
                        var_25 += (-32767 - 1);
                        arr_32 [i_5] [i_7] [i_5] [6] [i_7] [i_10] = ((6904852707005152486 <= (((2281701376 ? 0 : 1)))));
                        arr_33 [i_6] [i_7] [i_10] = 71;
                    }

                    for (int i_11 = 2; i_11 < 9;i_11 += 1)
                    {
                        var_26 = var_5;
                        arr_36 [i_7] [i_6] [i_7] = (arr_3 [12] [12] [i_7]);
                        var_27 = (((arr_34 [i_11 - 1] [i_11 - 1] [i_11] [i_11 - 1] [i_11]) / 2973388694));
                    }
                }
            }
        }
    }
    var_28 = (min(var_28, (((1 ? ((((var_1 ? var_1 : var_8)) * (((2161727821137838080 ? 17 : 1))))) : (var_16 * var_11))))));
    #pragma endscop
}
