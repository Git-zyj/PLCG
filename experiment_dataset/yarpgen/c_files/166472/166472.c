/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166472
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= ((var_0 << (((max(var_13, (132 + 14832))) - 14948))));
    var_15 = ((((((var_4 ? 24 : -6)) ? 3 : ((min(5, 22430)))))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_12 [i_1] [i_2] [i_1] = (max(((-101 ? -23854 : (arr_5 [2] [1] [2] [i_0]))), ((min(-33, 22426)))));
                        var_16 += (arr_1 [i_0] [i_0]);
                    }
                }
            }
            arr_13 [i_0] [i_1] = ((!((min(((min((arr_7 [i_1]), (arr_3 [i_0] [i_0])))), (max((arr_11 [i_1] [i_1] [i_1] [i_1] [i_1]), 8820)))))));

            /* vectorizable */
            for (int i_4 = 2; i_4 < 11;i_4 += 1)
            {
                var_17 = (max(var_17, (((var_10 ? (arr_16 [i_4] [i_0] [i_4 + 2]) : (arr_9 [i_0] [i_4 + 1]))))));
                var_18 |= (arr_2 [i_4]);
                var_19 = (((arr_9 [i_1] [i_1]) ? (arr_9 [i_1] [i_1]) : var_6));
                var_20 = -5;
            }
            for (int i_5 = 1; i_5 < 13;i_5 += 1)
            {
                arr_19 [i_0] &= ((~((max((arr_0 [i_1 - 2] [i_5 - 1]), (arr_0 [i_1 + 3] [i_5 + 1]))))));
                arr_20 [i_1] = ((((((((arr_8 [i_1] [i_1]) > 72057044282114048))) <= (-23844 ^ var_6))) ? ((min((arr_18 [i_1] [i_1] [i_1]), (arr_18 [i_1] [i_1 + 3] [i_1])))) : (((-9223372036854775807 - 1) ? (arr_11 [i_1] [i_5 + 1] [i_1 + 1] [i_1 + 3] [i_1]) : -1237636598))));
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 12;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        {
                            arr_28 [4] [4] [i_1] [i_1] [i_7] [i_7] = (max(((max(6, -9))), 9223372036854775807));
                            var_21 -= arr_2 [i_1];
                            arr_29 [i_1] = ((var_4 ^ (arr_15 [i_0] [i_1] [i_1] [i_6])));
                        }
                    }
                }
            }
        }
        arr_30 [7] = (((!(arr_23 [i_0] [i_0] [i_0] [i_0] [i_0]))));
    }
    #pragma endscop
}
