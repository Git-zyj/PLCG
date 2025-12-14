/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104519
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_17 = (max(((((var_7 ? var_3 : 8469736793956837946)))), (max(((var_2 ? var_14 : var_8)), -8469736793956837951))));
        arr_2 [i_0] = (min((((-(arr_0 [i_0] [i_0])))), ((((var_6 ? var_9 : var_11)) - var_15))));
        var_18 = ((max(((min(var_8, var_2))), (max(var_6, var_9)))));
        var_19 ^= var_4;
    }

    for (int i_1 = 4; i_1 < 14;i_1 += 1)
    {
        arr_6 [i_1] &= ((((arr_0 [i_1] [i_1]) + 2147483647)) >> ((((-8469736793956837963 ? ((-6 ? 8469736793956837950 : -204919561)) : 1957386880)) - 8469736793956837924)));
        arr_7 [i_1] [i_1] = var_2;
        arr_8 [i_1] = ((((((((-(arr_5 [i_1] [9])))) ? (var_13 / 17289140063057718619) : var_0))) ? var_13 : (((-var_9 ? ((var_13 ? var_4 : (arr_0 [i_1 + 1] [i_1]))) : var_6)))));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_11 [i_2] = var_15;
        arr_12 [i_2] = arr_10 [i_2] [i_2];
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        arr_17 [i_3] = var_6;
        var_20 = ((((var_1 ? (arr_13 [i_3] [i_3]) : var_10)) >> (((arr_9 [8]) - 1313305252))));
        arr_18 [i_3] = ((-8469736793956837945 ? (((-8469736793956837951 ? var_11 : (arr_1 [i_3])))) : (((arr_15 [i_3]) ? (arr_10 [18] [18]) : var_14))));
    }
    for (int i_4 = 1; i_4 < 12;i_4 += 1)
    {
        var_21 = (min(var_21, (arr_5 [i_4] [i_4 - 1])));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                {
                    var_22 = (max(var_22, (((((!((max((arr_21 [i_6]), var_14)))))) & 31827))));
                    arr_28 [i_4] [i_4] [i_6] = var_3;
                }
            }
        }
        var_23 = ((((min(1, (arr_10 [i_4] [1])))) | ((max(((var_11 ? (arr_23 [i_4]) : var_15)), var_4)))));
        var_24 &= (max((((8633762788805495490 / 21560) ? 0 : 122)), ((((var_9 * var_5) <= 33685)))));
    }
    #pragma endscop
}
