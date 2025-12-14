/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122875
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_1] = (min(171, 85));
                arr_6 [i_0] [i_1] = ((~((((min(var_0, var_6))) % var_1))));

                for (int i_2 = 1; i_2 < 23;i_2 += 1)
                {
                    var_10 &= ((((((((84 - (arr_0 [i_2])))) ^ (max((arr_10 [i_0] [12]), 103))))) ? var_5 : (((arr_8 [i_0 - 1] [i_0 - 1] [i_2 + 1]) % var_6))));
                    var_11 = ((max(var_8, (((arr_4 [i_1] [i_2 + 1]) ? (arr_4 [i_0] [i_1]) : (arr_3 [20] [i_1] [4]))))) << (((min((((17743309295012352011 ? 140 : 60989))), (max(var_7, var_2)))) - 133)));
                    arr_11 [i_0] = (min(116, (min((1408042121 < 116), (var_1 * var_0)))));
                    var_12 = (((((-153 || ((min(64911, 7)))))) % (max(153, (arr_8 [i_0] [i_1] [i_2 - 1])))));
                }
            }
        }
    }
    var_13 = var_5;

    /* vectorizable */
    for (int i_3 = 1; i_3 < 8;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 2; i_4 < 8;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 9;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 7;i_6 += 1)
                {
                    {
                        arr_22 [i_3] [i_4] [i_5] = (((var_7 ? (arr_16 [i_4] [i_4] [i_5] [2]) : var_9)));
                        arr_23 [i_3] [i_4] [5] [i_6] = ((var_6 * (arr_13 [i_6 + 2])));
                        var_14 = ((27685 < (arr_20 [i_3] [i_3 + 2] [i_3] [i_4 + 1] [i_4])));
                        var_15 = (((arr_3 [i_4 + 2] [i_6 + 3] [i_3 - 1]) == (arr_1 [i_4 - 2] [i_6])));
                    }
                }
            }
        }
        var_16 = var_6;
        var_17 = ((arr_9 [i_3 + 1]) * (arr_9 [i_3 - 1]));
    }
    for (int i_7 = 0; i_7 < 13;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 11;i_9 += 1)
            {
                {
                    var_18 = (((max((max(var_6, (arr_1 [i_7] [i_8]))), (arr_28 [i_8] [i_9 + 2]))) * (0 % 97)));
                    var_19 += 1;
                    var_20 = (arr_26 [i_7] [7]);
                }
            }
        }
        var_21 = (arr_26 [i_7] [i_7]);
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 20;i_10 += 1)
    {
        var_22 = (var_7 - var_4);
        var_23 = ((~(arr_8 [i_10] [i_10] [i_10])));
    }
    var_24 = (max(var_24, ((((((-(min(var_8, var_9))))) ? ((((min(var_8, 0))))) : var_9)))));
    var_25 = var_7;
    #pragma endscop
}
