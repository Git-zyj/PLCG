/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116880
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_16 = (!var_12);
        arr_2 [15] = ((~(((arr_0 [14]) / (arr_0 [i_0])))));
        var_17 = (var_7 ^ (arr_0 [i_0]));
    }
    for (int i_1 = 1; i_1 < 11;i_1 += 1)
    {
        var_18 += (max((arr_0 [14]), (((~(((arr_1 [i_1] [7]) ? var_11 : var_11)))))));
        var_19 = (max((((((arr_4 [i_1]) ? (arr_4 [6]) : var_8)) / (var_8 + var_11))), ((((((arr_1 [i_1] [i_1]) - var_6))) ? (max(var_2, var_7)) : (((arr_3 [i_1]) / (arr_3 [0])))))));
        arr_5 [i_1] = (((-((var_3 / (arr_1 [4] [i_1]))))));
    }
    for (int i_2 = 1; i_2 < 9;i_2 += 1)
    {
        var_20 = ((var_3 & (((arr_4 [i_2 - 1]) - (arr_4 [i_2 - 1])))));
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 6;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 8;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 9;i_6 += 1)
                        {
                            {
                                var_21 = ((-(((arr_13 [2] [i_6] [i_6]) ? (min((arr_10 [i_2] [i_3] [i_5] [4]), (arr_0 [6]))) : ((((arr_6 [i_4] [i_3]) ? (arr_1 [i_6] [i_3]) : (arr_14 [i_2] [i_3] [i_4] [9] [9]))))))));
                                var_22 -= ((((var_12 ? (arr_16 [i_3 + 2] [i_3 + 4] [i_3 - 3] [i_3 + 1] [i_3 - 1] [i_3 - 2]) : ((max((arr_4 [i_2]), var_11)))))) ? (((((arr_1 [i_6] [i_4]) && (arr_10 [i_2] [i_2] [i_5] [i_6]))) ? (min((arr_12 [i_2] [i_2]), (arr_6 [i_2] [i_2]))) : (arr_1 [i_2] [i_2]))) : (((((var_6 ? (arr_3 [i_2]) : (arr_10 [i_2] [i_2] [i_5] [i_2])))) ? (((arr_12 [i_2] [i_2]) * (arr_4 [5]))) : (((arr_13 [i_2] [5] [9]) + (arr_7 [i_4]))))));
                            }
                        }
                    }
                    arr_19 [i_3] = ((-(((arr_0 [i_3]) * ((var_4 ? (arr_14 [i_2] [i_3] [i_4] [1] [i_4]) : (arr_18 [4] [4] [4] [4] [4])))))));
                }
            }
        }
    }
    var_23 = (min(var_23, ((var_2 * (var_2 / var_11)))));
    var_24 = ((~(var_3 / var_11)));
    #pragma endscop
}
