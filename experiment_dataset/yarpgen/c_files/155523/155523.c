/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155523
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_15 = var_4;
                    arr_8 [i_0] [9] = (((((8895913203349944882 ? var_4 : (arr_0 [i_0]))) | (arr_5 [i_0] [i_1] [i_2]))));
                    var_16 = (i_0 % 2 == 0) ? (((+(((arr_1 [i_0]) << (((arr_1 [i_0]) - 113))))))) : (((+(((arr_1 [i_0]) << (((((arr_1 [i_0]) - 113)) - 46)))))));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        arr_13 [i_3] = (((((((arr_4 [i_3] [i_3]) ? (arr_6 [5]) : 8895913203349944874))) ? (arr_2 [8]) : 8895913203349944882)));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 9;i_5 += 1)
            {
                {
                    var_17 = (((arr_7 [i_3] [i_5] [18]) && ((!((((arr_10 [i_4]) - var_3)))))));
                    var_18 = (((((-((-1334935770 ? (arr_4 [16] [i_4]) : (arr_1 [16])))))) ? (!20827) : (((arr_7 [i_5 + 3] [i_5 + 2] [8]) ? (arr_7 [i_5 + 3] [i_5 + 2] [16]) : (arr_18 [i_5 + 3] [i_5 + 2] [i_5 - 1] [i_5 + 3])))));
                    arr_19 [7] [7] = (arr_4 [i_3] [i_5 - 1]);
                }
            }
        }
        var_19 = (((arr_17 [i_3] [i_3] [5]) ? (((arr_16 [i_3] [i_3]) ? (arr_0 [1]) : (arr_18 [i_3] [i_3] [i_3] [i_3]))) : (((arr_14 [i_3]) / 44709))));
    }
    var_20 = (((((var_4 + 2147483647) >> (((var_1 + var_13) - 813384297)))) < (((!(((var_2 ? -8895913203349944859 : var_0))))))));
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 15;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 1;i_7 += 1)
        {
            {
                var_21 = (max(var_21, (arr_23 [i_6] [i_7] [2])));
                var_22 = ((((((var_8 ? (arr_21 [i_6]) : var_0)))) ? 105 : (max((max((arr_1 [i_6]), (arr_2 [i_6]))), (arr_5 [i_6] [i_6] [i_6])))));
                var_23 = (((max((arr_5 [i_7 - 1] [i_7] [i_7 - 1]), (arr_20 [i_7 - 1] [i_6]))) / (((arr_20 [i_7 - 1] [i_6]) ? (arr_20 [i_7 - 1] [i_6]) : (arr_5 [i_7 - 1] [i_7 - 1] [i_7 - 1])))));
            }
        }
    }
    #pragma endscop
}
