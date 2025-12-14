/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162813
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_10 = (arr_1 [i_0]);
        var_11 = (min(var_11, ((min(var_1, (min(((var_4 ? (arr_1 [i_0]) : (arr_2 [i_0]))), (arr_2 [i_0]))))))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = (((arr_3 [i_1]) >> (arr_1 [i_1])));
        arr_6 [i_1] [i_1] = ((-(((arr_3 [i_1]) ? (arr_0 [i_1] [i_1]) : (arr_4 [i_1])))));
        arr_7 [i_1] = (arr_2 [i_1]);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            {
                                var_12 = ((((!(arr_10 [i_1]))) ? (arr_9 [i_1]) : (max((arr_16 [i_1] [i_1] [i_1] [i_3] [i_3] [i_4] [i_5]), (arr_3 [i_1])))));
                                var_13 = (arr_0 [i_5] [i_3]);
                                var_14 ^= max((arr_10 [i_5]), var_6);
                            }
                        }
                    }
                    arr_19 [1] [i_2] [i_1] = (((max((arr_16 [i_1] [i_1] [i_1] [i_2] [16] [i_3] [16]), (arr_15 [i_1] [i_1] [i_3]))) == ((((var_5 >= var_9) ? var_4 : -268435456)))));
                }
            }
        }
        var_15 = (((((!((max((arr_0 [i_1] [17]), var_5)))))) & ((((~(arr_17 [i_1] [i_1] [i_1] [6] [i_1])))))));
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 25;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 25;i_7 += 1)
        {
            {
                var_16 = (arr_24 [i_6]);
                arr_25 [i_6] = (((arr_24 [i_6]) ? (((((4011500967 ? 283466337 : 283466326))) ? ((((arr_21 [i_7] [i_7]) ? (arr_23 [i_6]) : (arr_21 [i_7] [3])))) : ((~(arr_24 [14]))))) : (((arr_23 [i_6]) + (arr_24 [i_7])))));
                var_17 = var_3;
            }
        }
    }
    var_18 = (min(136709345, 283466329));
    var_19 = var_9;
    #pragma endscop
}
