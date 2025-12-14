/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146295
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_0 / ((var_5 ? 0 : (17 <= var_4)))));
    var_17 = var_15;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_18 = ((-(arr_2 [i_1] [i_0 - 1])));
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((!(((((var_1 ? (arr_6 [i_0] [i_0] [i_0]) : var_9)) - var_13)))));
                    var_19 |= ((((~(arr_2 [i_1] [i_2]))) * (((arr_6 [i_0] [i_0 - 1] [i_0 - 1]) ? ((8707078837980642003 ? var_13 : var_11)) : (((var_8 > (arr_6 [i_2] [i_1] [i_0]))))))));
                    var_20 = (var_13 ? (max(var_5, (((arr_6 [i_0] [4] [i_2]) | (arr_4 [i_2] [i_1]))))) : (((((((min(var_11, (arr_2 [i_0 - 1] [i_0 - 1])))) + 2147483647)) << ((((4294967279 + (arr_5 [i_0] [i_2]))) - 86))))));
                    arr_9 [i_0] [i_1] = (((((max((arr_3 [i_1] [i_1]), 3)) / (arr_7 [i_0] [i_1] [i_2]))) + var_1));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 12;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 10;i_7 += 1)
                        {
                            {
                                var_21 = ((!((max((((0 ? 4294967295 : var_13))), ((var_2 ? 3293163540756861840 : 0)))))));
                                arr_22 [i_4] [i_4] [i_4] = ((~(((-5491 == (arr_12 [i_5 - 1] [i_7 + 4] [i_4]))))));
                            }
                        }
                    }
                    arr_23 [i_3] [i_4] [i_5 - 1] [i_4] = -0;
                }
            }
        }
    }
    #pragma endscop
}
