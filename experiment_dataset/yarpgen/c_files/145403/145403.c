/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145403
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min((((-(1 != var_7)))), (((max(var_8, var_13)) / var_16))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_1] = ((var_1 & (((var_14 - (arr_0 [i_0 + 1]))))));
                arr_7 [6] = (!10051);

                /* vectorizable */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_17 [i_0 - 1] [i_1] [i_3] [i_1] [i_4] = ((1 % ((((arr_9 [i_0 - 1] [i_1] [i_3] [i_4]) <= (arr_10 [i_0] [i_1] [10] [i_4]))))));
                                arr_18 [i_0] [i_0] [i_1] [i_2] [i_2] [i_3] [i_4] = (((((arr_8 [i_0]) ? var_13 : 242933089))) ? (((((arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 - 2]) > (arr_14 [i_4] [i_2] [i_2] [i_2] [i_0]))))) : var_0);
                                arr_19 [i_0 - 1] [i_3] [i_0 - 1] [i_0] [i_0] [3] = ((~(~2546808908)));
                                arr_20 [i_3] [i_3] [i_2] [i_3] [i_0] = ((~1) ^ -10051);
                                arr_21 [i_3] [i_3 + 2] [i_2] [0] [i_3] = (((1748158383 ? -10044 : -26)));
                            }
                        }
                    }
                    arr_22 [i_0] = -81;
                    arr_23 [i_0] [i_0] [i_1] [i_0] = (arr_1 [i_0]);
                }
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    arr_27 [i_0] &= (arr_13 [i_5] [i_1] [i_0] [2]);
                    arr_28 [i_0 + 1] = (arr_9 [i_5] [i_0 - 2] [1] [i_0]);
                    arr_29 [i_5] [i_1] [i_0] = (arr_25 [i_0 - 1] [i_1] [i_5]);
                    arr_30 [i_1] [i_1] |= var_15;
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 12;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                arr_36 [i_0 - 2] [i_1] [i_1] [i_6 - 1] [i_7] = (((((~(min((arr_35 [i_6 - 1] [i_1]), var_3))))) ? (((-10052 != 1273054096) ? var_18 : 255)) : (~31511)));
                                arr_37 [i_6] [i_1] [i_5] [i_6] [i_7] [i_7] &= (((((min((arr_25 [0] [i_6] [i_7]), 56488)) << (var_19 - 7241))) == (((((((var_14 ? (arr_12 [i_1] [i_1] [i_1]) : 0))) || (arr_33 [i_0] [i_1] [i_1])))))));
                                arr_38 [i_5] [i_5] = (((17742 ? (min(var_11, var_4) : (var_17 == var_4)))));
                                arr_39 [12] |= (min((!var_1), ((!(arr_31 [i_7] [i_6] [i_5] [i_0])))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
