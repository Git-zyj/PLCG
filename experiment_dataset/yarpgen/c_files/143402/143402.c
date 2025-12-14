/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143402
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((var_9 ? (((var_9 ? var_7 : var_10))) : (max(0, var_12)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_14 = (((!var_11) ? (((arr_0 [i_0 - 1]) ? var_0 : (arr_0 [i_0 - 2]))) : 1));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_3] [i_2] [5] = ((!(((var_9 ? (arr_6 [i_3] [i_1] [i_0 - 2] [i_3 + 2]) : (arr_4 [i_3 + 2] [i_0 + 1] [i_2]))))));
                            arr_11 [i_0 - 2] [i_1] [i_2] [i_3] = (~0);
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            {
                                arr_22 [8] [7] [i_4] [i_5] [i_5] = (((((((((arr_5 [i_6]) ? 9 : (arr_0 [i_5])))) ? ((((!(arr_20 [i_5] [i_1] [i_4] [i_0] [i_6]))))) : (((arr_3 [0]) ? (arr_20 [i_5] [i_5 + 3] [i_4] [i_1] [i_5]) : var_8))))) || (((((var_0 ? (arr_12 [i_5] [i_6]) : (arr_2 [i_1] [i_1] [i_5])))) && ((min((arr_4 [i_5] [10] [i_0]), (arr_20 [i_5] [10] [i_4] [i_5] [i_6]))))))));
                                var_15 = max(var_5, (min(18446744073709551610, (arr_4 [i_1] [i_4] [i_6]))));
                            }
                        }
                    }
                }
                arr_23 [i_0] [12] = (-4611686018427387904 ? ((9 ? 9 : 18446744073709551615)) : 18446744073709551615);
            }
        }
    }
    var_16 = ((((((((var_9 ? var_9 : var_4))) ? var_2 : var_11))) ? var_10 : 9));
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 12;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 12;i_9 += 1)
            {
                {
                    arr_32 [i_8] [i_7] [i_9] [i_7] = ((((min(((((arr_26 [i_9]) << (var_1 - 13284)))), ((~(arr_25 [i_9])))))) ? (~var_0) : (((~(arr_30 [i_7] [i_8]))))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 12;i_11 += 1)
                        {
                            {
                                arr_38 [i_8] [i_10] [i_8] [i_8] [i_7] = var_4;
                                var_17 = max(((15 ? 0 : 0)), ((((arr_18 [i_8] [i_8] [1] [i_8] [i_8] [i_8] [i_8]) ? (arr_1 [i_7]) : (((arr_17 [0] [i_8]) ? (arr_33 [1] [i_8] [i_8] [i_10] [i_8] [i_10]) : var_5))))));
                                arr_39 [i_7] [i_8] [i_8] [i_8] [11] = (((((var_10 >> 14) || -var_9)) ? var_2 : (var_5 == var_5)));
                            }
                        }
                    }
                    var_18 = ((0 ? (((((((138 ? 3972650093 : 70555562))) >= ((1 ? 1 : 8)))))) : -6266934286305044088));
                    arr_40 [1] [i_8] [i_9] [i_9] = var_3;
                }
            }
        }
    }
    #pragma endscop
}
