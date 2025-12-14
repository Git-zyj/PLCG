/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135304
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_12 = (((max((arr_8 [i_0] [10] [i_2]), ((-(arr_8 [i_0] [5] [i_2])))))) ? ((((~var_7) ? ((var_3 ? (arr_2 [i_2]) : var_2)) : (65535 > 243)))) : (max((arr_1 [i_1] [i_2]), ((max(var_0, var_4))))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        arr_11 [i_3] [i_1] [i_2] [i_3] = ((-((((arr_6 [i_0] [i_1] [18]) && var_6)))));
                        var_13 = ((0 ? 55 : 2132837507));
                    }

                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        var_14 = (max((max(var_9, (arr_10 [i_1] [i_1] [i_1]))), (((arr_10 [i_0] [i_2] [i_0]) ? var_9 : (arr_10 [i_0] [i_1] [i_0])))));
                        var_15 = ((~((var_9 ? (arr_9 [i_0] [15] [15] [i_0]) : (((arr_12 [4] [i_4] [15] [i_4] [i_4] [7]) ? var_7 : var_0))))));
                    }
                }
            }
        }
        var_16 = (max(var_16, (!65134)));
        arr_14 [i_0] [i_0] &= (arr_7 [i_0] [2] [i_0]);
    }
    var_17 = (min(var_17, var_4));

    for (int i_5 = 1; i_5 < 1;i_5 += 1)
    {
        var_18 = (max(((((var_3 > (arr_0 [0]))) ? var_3 : (arr_15 [i_5 - 1]))), (((((arr_9 [12] [12] [i_5] [i_5]) ? (arr_6 [i_5 - 1] [10] [i_5 - 1]) : (arr_1 [i_5] [15]))) / (((~(arr_13 [i_5] [i_5] [i_5 - 1] [i_5] [i_5 - 1] [i_5]))))))));
        var_19 += (((((-1601316286551860222 ? 1 : 1))) ? (((arr_8 [i_5 - 1] [i_5 - 1] [i_5 - 1]) ? (arr_8 [0] [i_5 - 1] [i_5 - 1]) : (arr_8 [i_5 - 1] [i_5 - 1] [i_5 - 1]))) : (arr_8 [i_5 - 1] [i_5 - 1] [i_5 - 1])));
        var_20 = (min((arr_3 [i_5 - 1]), ((~(((arr_15 [i_5 - 1]) | var_11))))));
        arr_17 [i_5] &= (((1 / (arr_7 [i_5] [i_5] [i_5]))) > (26668 | 0));
    }
    var_21 = var_0;
    #pragma endscop
}
