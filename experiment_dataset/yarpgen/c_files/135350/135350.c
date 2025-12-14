/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135350
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, (((((((var_0 >> (var_1 - 30)))) ? var_10 : -var_0))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_10 [i_1] [13] [i_1] [i_0] = ((9223372036854775786 / ((1943068966 ? (7296922687575952494 - -9223372036854775787) : (((184 ? var_0 : -37)))))));
                    arr_11 [i_1] [i_2] = (max((((((min(195, var_8))) && (((var_2 ? var_3 : (arr_9 [20] [20]))))))), ((-(arr_6 [i_0 + 3] [i_1] [i_2])))));

                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        var_16 = var_9;
                        var_17 = ((((((arr_2 [i_3 - 1]) ? (arr_5 [i_0 + 3] [i_3 - 1]) : (arr_2 [i_3 - 1])))) ? ((min((var_8 + -9223372036854775786), ((max((arr_1 [i_0 + 1]), (arr_0 [2] [2]))))))) : (arr_4 [i_3])));
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_18 = ((1336930312 ? 40642 : (arr_14 [i_0] [i_1] [i_0] [7] [i_0])));
                        var_19 = (min(((((var_13 ? var_11 : 9223372036854775807)) & (var_14 & var_13))), (((-(((arr_9 [i_0] [i_0]) ? (arr_8 [i_0] [12]) : (arr_5 [i_0] [i_0]))))))));
                        var_20 = ((((((!1) ? ((2314519173 ? (arr_4 [i_1]) : 1)) : (arr_3 [i_0] [i_0 + 2])))) || (((arr_8 [i_2] [i_4]) && (arr_6 [16] [i_1] [i_2])))));
                        var_21 = (min((min((arr_7 [i_0 - 1]), (arr_7 [i_0 + 1]))), (min((arr_3 [i_0 - 1] [i_0 + 4]), (arr_3 [i_0 + 1] [i_0 - 1])))));
                    }
                    /* vectorizable */
                    for (int i_5 = 2; i_5 < 18;i_5 += 1)
                    {
                        arr_18 [i_5] [i_1] [i_1] [1] = (((arr_13 [13] [i_5 + 1] [i_5 - 1] [1] [11]) < ((var_14 ? var_3 : var_5))));
                        var_22 = (((arr_4 [i_0 + 4]) ? (arr_4 [i_0 + 4]) : (arr_16 [i_0 + 3])));
                    }
                    var_23 = (((((10223848910575634389 % (arr_5 [i_0] [i_0])))) ? (((-var_13 > (max(-7520784854451776777, (arr_5 [i_0 - 1] [i_0 - 1])))))) : ((((arr_4 [i_0 + 1]) >= (arr_4 [i_0 + 1]))))));
                }
            }
        }
    }
    var_24 = var_5;
    #pragma endscop
}
