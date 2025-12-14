/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123083
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            {
                var_15 = (max(var_15, ((((((arr_0 [2]) >> (var_4 - 12384363194696535949))) + (arr_5 [i_0]))))));
                var_16 = (((((((arr_1 [9]) ? ((~(arr_0 [i_0]))) : (((arr_0 [10]) >> (((arr_5 [i_0]) + 1725218910)))))) + 2147483647)) << (((((min((~var_11), (arr_5 [i_0 - 1]))) + 1725218918)) - 30))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] [i_0] = (((((((var_1 ? var_5 : var_5))) ? ((((arr_6 [i_4] [i_3]) ? var_1 : var_9))) : (((-1 + 9223372036854775807) >> (var_10 - 22590)))))) ? (arr_16 [i_0 + 1] [i_0 + 4] [i_0 + 1] [i_0 + 4] [i_0 + 2]) : (((arr_13 [i_0] [i_1 - 1] [i_1 - 1] [i_3 - 2] [i_4] [i_4]) % var_5)));
                                var_17 *= (arr_4 [i_4]);
                                arr_18 [i_3] [i_3] [i_3] [i_2] [i_1] [i_0] = ((((var_6 ? (((arr_13 [i_0] [8] [i_0] [i_2] [i_3] [i_4]) ? (arr_3 [i_1 + 2] [i_3] [i_4]) : var_12)) : (((~(arr_0 [i_1])))))) >> ((((~((~(arr_11 [i_4] [i_4] [i_2] [i_3] [i_2]))))) + 49))));
                            }
                        }
                    }
                }
                arr_19 [i_1] = (min(((((arr_14 [i_1 - 2] [i_1 - 2] [i_1 - 3] [i_1 - 3] [i_1 + 1] [i_1 - 3] [i_1 - 2]) ? (arr_10 [i_0 + 2] [i_0] [i_1] [i_1 + 3] [i_0]) : var_5))), (max(((((arr_15 [i_0] [i_0] [i_0] [i_0 + 2] [i_1] [i_0] [i_0 + 2]) ? (arr_12 [i_0] [i_1] [i_1] [1] [i_0] [i_0]) : var_0))), (max(var_8, var_4))))));
                var_18 += (((((((((arr_14 [i_0 - 1] [i_0] [1] [1] [i_0] [i_0] [i_0]) ? var_7 : (arr_15 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0] [11] [i_0 + 2])))) ? var_11 : (max(var_4, var_1))))) ? (min((arr_16 [i_1] [i_1] [i_1] [i_1] [i_1]), (~8470570539374502611))) : (((((!(arr_13 [i_1 + 3] [i_1] [6] [i_1] [i_0] [i_0]))) ? var_10 : ((var_11 ? (arr_14 [i_0 + 3] [i_0 + 3] [5] [i_0] [i_0 + 3] [i_0 + 3] [i_0]) : var_10)))))));
            }
        }
    }
    var_19 = (var_11 / var_1);
    var_20 = (((((((var_2 ? var_14 : var_4)) + var_9))) ? ((~(max(var_5, var_2)))) : (var_2 / var_0)));
    var_21 = (min((((var_14 ? var_0 : var_5))), var_2));
    #pragma endscop
}
