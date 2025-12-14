/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115864
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_10 = (max(var_10, (((((((arr_2 [14] [i_0]) ? (arr_2 [10] [10]) : (arr_2 [20] [20])))) ? (arr_2 [8] [i_0]) : (((arr_2 [12] [i_0]) | (arr_2 [12] [i_0]))))))));
        var_11 = (min(var_11, (((!(~-4294967282))))));
        arr_4 [i_0] = var_6;
        arr_5 [i_0] = (!97);
    }

    /* vectorizable */
    for (int i_1 = 3; i_1 < 11;i_1 += 1)
    {
        arr_10 [i_1] = -13191;
        var_12 = ((var_2 || ((((arr_1 [2]) ? (arr_9 [i_1 + 1]) : (arr_3 [i_1 + 2] [i_1]))))));
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                {
                    var_13 = var_8;
                    arr_16 [i_1] [14] [i_1] &= (((159 || 1) ? 4294967284 : 2237235605));
                }
            }
        }
        arr_17 [i_1] [i_1] = (var_5 / 3779647691339714153);
        arr_18 [i_1] = -348972453;
    }
    var_14 = (max(189, 1));
    var_15 = (max(var_15, (((-(((((var_4 ? var_8 : var_8))) ^ ((var_6 ? var_4 : var_1)))))))));
    var_16 = var_6;
    #pragma endscop
}
