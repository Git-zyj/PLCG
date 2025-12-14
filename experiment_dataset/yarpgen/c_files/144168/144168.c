/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144168
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
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                {
                    var_15 = (var_3 > ((((((arr_2 [i_0] [i_0]) ? var_2 : var_5))) ? ((min(var_6, var_11))) : var_10)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_12 [i_2] = ((~((~(arr_7 [i_0] [i_0])))));
                                var_16 = (max(-101, 585));
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_2] = ((-(((arr_6 [i_2 - 1] [i_2 - 1] [i_2] [i_2 + 2]) ? var_7 : var_11))));
                                arr_14 [11] [11] [i_2] [11] [11] = (((-((100 ? 240 : var_12)))));
                                var_17 |= ((-(((((min(var_14, var_13))) == var_6)))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 7;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        {
                            arr_26 [i_6] [i_8] = (min((min((arr_22 [i_6 + 2] [i_6] [i_6 + 3] [i_6]), var_1)), 117));
                            var_18 += ((var_11 << (var_5 - 23462)));

                            for (int i_9 = 0; i_9 < 10;i_9 += 1)
                            {
                                var_19 = ((~(((arr_21 [7] [i_5] [i_6 - 1] [7]) ? (arr_27 [0] [i_5] [i_6 - 2]) : 1))));
                                var_20 = (((-12878 ? var_3 : var_14)));
                                var_21 += var_14;
                                var_22 = ((var_4 ? (((arr_22 [i_5] [i_6] [7] [i_9]) ? (((arr_9 [i_5] [i_6]) - var_0)) : var_12)) : (((((max((arr_24 [i_5] [i_6] [i_7] [8]), var_4))) && ((max(var_0, var_1))))))));
                                var_23 += ((var_9 * (((var_6 ? var_3 : (((arr_5 [i_7] [7] [i_5]) / var_6)))))));
                            }
                            /* vectorizable */
                            for (int i_10 = 0; i_10 < 10;i_10 += 1)
                            {
                                arr_34 [i_10] [i_6] [7] [i_7] [i_6] [i_5] = var_6;
                                var_24 = (((var_1 | var_3) * ((-587 ? var_11 : var_11))));
                                arr_35 [i_5] [i_6] [i_6] [i_5] [i_5] |= var_1;
                            }
                        }
                    }
                }
                var_25 += ((((((15 - (arr_28 [i_5] [i_5] [i_5] [i_5] [i_5]))) - 243)) != (((((135 / (arr_16 [i_5] [i_5]))) != var_11)))));
            }
        }
    }
    #pragma endscop
}
