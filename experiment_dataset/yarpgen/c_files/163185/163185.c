/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163185
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_12;

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((max((arr_1 [i_0 - 1]), (arr_1 [i_0 - 1])))) && ((!((max((arr_0 [i_0] [i_0]), (arr_1 [i_0])))))));
        arr_3 [i_0] [i_0] = (((max((((arr_1 [i_0]) - (arr_0 [i_0] [i_0]))), (arr_1 [i_0])))) ? ((~(arr_0 [i_0] [i_0]))) : var_11);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_0] = (((((((var_14 ? var_14 : var_4))) ? (arr_1 [i_3]) : ((((arr_4 [9] [i_1] [i_3]) * (arr_4 [i_0] [i_0] [i_3])))))) >> var_14));
                        var_17 *= ((((((arr_7 [i_0 - 1] [i_1] [12] [i_0 - 1]) ? (arr_4 [i_0 - 1] [i_1] [i_2]) : (arr_4 [i_2] [i_1] [i_0 - 1])))) ? (arr_0 [16] [i_1]) : (((((arr_7 [i_0 - 1] [i_0] [0] [i_0]) <= (arr_7 [i_0] [8] [18] [i_3])))))));
                    }
                }
            }
        }
        var_18 = (max((arr_6 [i_0] [i_0] [i_0] [i_0]), (min(((min(var_13, (arr_7 [i_0] [i_0] [i_0] [i_0])))), ((23 ? (arr_8 [7] [21] [7] [i_0 - 1] [i_0 - 1] [i_0]) : var_5))))));
        var_19 = (min(var_19, (arr_7 [i_0] [i_0] [1] [1])));
    }
    for (int i_4 = 1; i_4 < 1;i_4 += 1)
    {
        arr_14 [i_4] |= (-(((arr_5 [22]) ? (arr_5 [22]) : (arr_5 [12]))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 0;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 18;i_6 += 1)
            {
                {
                    var_20 = (max(var_20, ((((((var_9 && var_6) ? (((((arr_16 [i_4 - 1] [i_5] [i_6]) == (arr_6 [i_6 - 2] [i_5] [i_4] [i_4]))))) : (((arr_0 [1] [1]) - (arr_16 [i_4 - 1] [i_5 + 1] [i_6])))))) ? (((max((arr_9 [i_6 - 2] [i_6]), (((var_15 >= (arr_4 [i_4] [i_4] [i_6])))))))) : 1938667599))));
                    arr_20 [i_4 - 1] [i_5] = (((((arr_12 [i_4 - 1] [i_5 + 1]) ? (0 > 255) : 21)) + (((arr_10 [i_5 + 1] [i_6 - 2] [i_6] [i_6]) ? var_12 : (((arr_6 [i_4] [i_4] [i_6] [i_4]) ? (arr_4 [i_4 - 1] [i_4 - 1] [i_6]) : var_3))))));
                }
            }
        }
    }
    for (int i_7 = 1; i_7 < 6;i_7 += 1)
    {
        var_21 *= var_6;
        arr_23 [0] = (((((arr_7 [i_7 + 3] [i_7 + 1] [20] [i_7 + 4]) > var_2)) ? (((min((arr_18 [12] [12]), (arr_12 [i_7] [i_7 + 4]))))) : (var_2 > 1)));
    }
    #pragma endscop
}
