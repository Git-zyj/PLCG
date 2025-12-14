/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117261
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((min((var_8 && 199887444), var_16))) ? var_10 : (max(var_6, (1 || var_6)))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_20 *= ((max(1, -2076298353)));
                        var_21 = (min((arr_6 [i_0] [10] [i_1] [10]), (2205 * var_9)));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_4 = 1; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
                        {
                            var_22 ^= (((arr_19 [i_7]) - var_18));
                            var_23 = var_13;
                            var_24 = var_0;
                            arr_22 [i_7] [i_4] [i_5] [i_4] [i_0] = 560195407;
                        }
                        for (int i_8 = 0; i_8 < 12;i_8 += 1) /* same iter space */
                        {
                            arr_26 [i_4] = (arr_14 [i_4]);
                            var_25 = (max(var_25, 2076298340));
                        }
                        for (int i_9 = 0; i_9 < 12;i_9 += 1) /* same iter space */
                        {
                            var_26 -= ((((10 && -2076298353) ? (((arr_8 [i_0] [0] [i_5]) ? 9223372036854775795 : (arr_15 [i_0] [i_4] [i_0]))) : (((arr_28 [i_6] [i_6] [i_6] [i_0] [i_4]) >> (((arr_1 [i_0]) - 7430733262125068506)))))));
                            arr_29 [i_0] [i_0] [i_4] [i_6] [i_9] = ((((((!(var_1 / var_4))))) + 9223372036854775778));
                        }

                        for (int i_10 = 0; i_10 < 12;i_10 += 1)
                        {
                            var_27 = (max((arr_2 [i_4] [10]), (arr_9 [i_4] [i_4] [i_6])));
                            var_28 = 638376911369795378;
                        }
                        for (int i_11 = 0; i_11 < 12;i_11 += 1) /* same iter space */
                        {
                            var_29 = ((arr_1 [i_0]) ? -9223372036854775788 : (min(1, (min(var_5, var_13)))));
                            var_30 = min((min((arr_13 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 + 1]), 1870747906)), (arr_13 [i_4 - 1] [i_4] [i_4] [i_4 + 1]));
                            var_31 = ((~(max((arr_8 [i_4 - 1] [i_4] [i_5]), (arr_33 [i_4 + 1] [6] [i_4 + 1] [i_4] [i_0])))));
                            var_32 = (((((var_11 ? (arr_4 [i_0] [i_0] [i_5]) : var_7)) / (var_17 != 1870747927))));
                        }
                        for (int i_12 = 0; i_12 < 12;i_12 += 1) /* same iter space */
                        {
                            var_33 = max(((min(9223372036854775795, var_15))), ((10 ? ((((!(arr_20 [i_6] [2] [11] [i_12] [i_12]))))) : var_18)));
                            var_34 = (~(max(((~(arr_31 [5] [i_5] [i_0]))), (((-120194452039850852 ? 3684193651831623989 : 4382065267348859391))))));
                        }
                        for (int i_13 = 0; i_13 < 12;i_13 += 1) /* same iter space */
                        {
                            var_35 = (max(var_35, ((((((var_9 ? var_15 : (-32767 - 1))) <= var_11))))));
                            arr_40 [6] [4] [i_4] [i_4] [i_6] [7] = ((!(arr_3 [i_0] [i_0] [1])));
                        }
                    }
                }
            }
        }
        var_36 = (min(var_36, ((((((arr_33 [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_33 [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_33 [i_0] [i_0] [i_0] [i_0] [i_0]))) > (max((arr_33 [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_33 [11] [0] [i_0] [8] [4]))))))));
    }
    #pragma endscop
}
