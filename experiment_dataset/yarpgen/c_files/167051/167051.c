/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167051
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((14477 != (var_9 - var_8))) ? ((255 ? -14468 : -124)) : (~var_5)));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_17 = var_0;
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                {
                    var_18 = (min(var_18, (((((32767 ? var_4 : 16717666409197668980)) / var_13)))));

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        arr_9 [i_0] = (arr_8 [i_0] [3] [i_2] [i_2]);
                        var_19 = (max(var_19, ((((arr_5 [i_0 + 1] [i_2 - 2]) ? (arr_0 [16]) : (arr_0 [4]))))));
                    }
                    for (int i_4 = 3; i_4 < 18;i_4 += 1) /* same iter space */
                    {
                        var_20 = (max(var_20, ((!(var_11 || var_4)))));
                        arr_12 [0] [i_1] [0] [i_0] = ((((((arr_2 [i_0]) ? 148 : var_5))) ? (((arr_0 [i_0]) * (arr_2 [i_0]))) : var_12));
                    }
                    for (int i_5 = 3; i_5 < 18;i_5 += 1) /* same iter space */
                    {
                        arr_15 [i_0] [i_0] [i_1] [0] [7] [i_0] = ((!((((arr_2 [i_0]) ? var_15 : var_13)))));
                        arr_16 [1] [i_0] [7] [6] = ((var_3 ? (((!(arr_10 [i_5] [i_2 + 1] [15] [i_1] [i_0])))) : (var_1 || 1202)));
                        var_21 = var_11;

                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            arr_20 [i_0] [i_1] [i_2] [i_5 - 3] [i_6] = (arr_8 [i_0] [i_0] [i_0] [i_0]);
                            var_22 = (((arr_1 [i_1] [i_1]) ? var_4 : (arr_3 [i_5 - 1])));
                        }
                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            arr_23 [i_0 + 2] [i_1] [i_0] = ((((arr_6 [6] [i_0] [6]) << (arr_11 [i_1] [i_2 - 3] [i_5 + 1] [i_7]))));
                            var_23 = (((((arr_6 [i_1] [i_0] [i_1]) < -7088)) ? ((var_7 ? (arr_19 [12] [i_1] [i_2] [i_5] [i_7]) : (arr_14 [i_0 - 1] [i_1 + 1] [i_2 + 1] [i_5] [10]))) : (arr_1 [i_0 - 1] [i_0 - 1])));
                        }
                    }
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        var_24 ^= var_5;
                        var_25 = (min(var_25, (((var_5 ? (arr_6 [i_0 - 1] [12] [i_2 - 3]) : var_6)))));
                        arr_28 [i_0] [i_0 - 1] [i_1] [i_2 + 2] [i_1] [13] = -1;
                        arr_29 [i_8] [i_0] [i_0] = (arr_5 [i_0] [i_0]);
                    }
                    arr_30 [i_0] [i_1] [i_2] [i_2 - 1] = (!var_4);
                }
            }
        }
    }
    var_26 = (min(((var_13 ? var_1 : var_11)), (((!(65520 - 18446744073709551592))))));
    var_27 = (((((-(var_9 || var_6)))) ? var_0 : var_7));
    var_28 = var_12;
    #pragma endscop
}
