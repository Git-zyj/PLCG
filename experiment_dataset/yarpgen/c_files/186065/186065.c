/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186065
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_1;
    var_14 &= (((-865270406 | 1021514373) ? (((!var_7) ? (((var_7 ? -23 : var_4))) : ((var_12 ? var_12 : var_1)))) : ((((max(var_9, var_12)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_15 = (arr_3 [i_1]);
                                arr_12 [i_0] [i_1] = 10230600;
                                var_16 += (((((-((1021514373 ? var_5 : var_4))))) ? ((((((arr_7 [i_2] [i_3] [i_4]) ? var_9 : var_1))) ? (3273452923 - 349266736197521853) : (((var_5 ? 1021514373 : (arr_0 [i_0])))))) : (((~((var_5 ? 1021514372 : (arr_1 [i_1] [i_4]))))))));
                                arr_13 [i_1] [8] [i_2] [i_2] [i_4 - 1] = ((-((var_5 ? var_6 : -1))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 16;i_6 += 1)
                        {
                            {
                                arr_19 [i_0] [i_2] [i_1] [i_2] [i_5] [i_6 - 1] &= 255;
                                var_17 &= (max(((1021514373 ^ (3273452920 && 3969891504))), 3273452910));
                            }
                        }
                    }
                    var_18 ^= var_8;
                    var_19 -= (max(var_8, (((!(arr_15 [i_2] [i_2] [i_0]))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 1; i_7 < 11;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 13;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 13;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 13;i_11 += 1)
                        {
                            {
                                var_20 = (min((((((arr_21 [i_9]) ? var_8 : 3273452933)) * var_1)), 3273452920));
                                arr_34 [11] [i_7] [i_10] = ((((!(((18446744073709551615 ? (arr_7 [i_7] [i_8] [8]) : var_12))))) ? (arr_1 [i_7] [4]) : (arr_9 [i_7] [i_8] [i_9] [i_10] [i_11])));
                                var_21 ^= (min(((((arr_31 [i_11] [i_7] [i_9] [i_8] [i_7] [i_7]) >> (((arr_21 [i_7]) ? 0 : (arr_4 [i_7 + 1] [i_11] [i_9] [i_10])))))), (~724118020446051477)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 13;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 13;i_13 += 1)
                        {
                            {
                                var_22 = ((-3670016 ? (arr_26 [i_7 + 1] [i_7 - 1] [i_7]) : ((((max(var_2, var_5))) ? ((var_8 ? var_0 : var_5)) : (((max(var_0, (arr_21 [i_7])))))))));
                                var_23 ^= var_3;
                                var_24 = (arr_20 [i_7]);
                            }
                        }
                    }
                    var_25 -= (((max((!1488680972724710521), (arr_22 [10])))) ? (arr_10 [i_7] [i_7] [7] [i_7] [i_7] [i_7]) : (((var_5 ? (arr_21 [i_7 - 1]) : (arr_21 [i_7 + 1])))));
                    var_26 = ((1021514387 ? 2515226793 : 9223372036854775807));
                    arr_40 [10] [i_8] [i_9] &= var_12;
                }
            }
        }
    }
    #pragma endscop
}
