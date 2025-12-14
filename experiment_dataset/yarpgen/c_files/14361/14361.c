/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14361
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_12;
    var_14 = (min(((((2582924400 - var_1) == 2582924405))), (((var_5 - var_0) ? var_9 : (var_12 - var_10)))));
    var_15 = (min(-var_11, (~var_1)));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 6;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_16 = -3017883157;
                        var_17 = (((((arr_8 [i_0] [i_0]) ? var_9 : var_5))));
                    }
                }
            }
        }
        arr_13 [i_0] [i_0] = 2582924393;
        arr_14 [i_0] = arr_8 [i_0] [i_0];
        /* LoopNest 3 */
        for (int i_4 = 1; i_4 < 8;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 6;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 0;i_6 += 1)
                {
                    {
                        arr_25 [i_6] [i_4] [i_4] [i_4] = ((1665331138 ? 262136 : 262136));
                        arr_26 [i_5] [i_0] [i_0] [i_5] [i_0] [i_5] |= ((((((((14356998652110149940 ? var_5 : 11735600610146232267))) ? (((arr_12 [i_0] [i_0] [i_0] [i_6]) ? var_12 : 1)) : (arr_24 [i_0] [i_0] [i_0] [i_6])))) ? var_9 : (((arr_12 [i_6] [i_6 + 1] [i_0] [i_6 + 1]) ? (arr_7 [i_6] [i_6 + 1] [i_6 + 1] [i_6 + 1]) : (arr_7 [i_6] [i_6 + 1] [i_6 + 1] [i_6 + 1])))));
                        arr_27 [i_0] [i_6] [i_5] [i_0] [i_6] = ((+(min((~4294705177), var_4))));
                    }
                }
            }
        }
        arr_28 [i_0] |= (1 * ((((3 >= ((1 ? var_12 : 0)))))));
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        var_18 = (min(var_18, ((~(max((arr_29 [i_7] [i_7]), 506400699))))));
        arr_31 [i_7] [i_7] = (((max((arr_29 [i_7] [i_7]), (arr_29 [i_7] [i_7]))) * (((arr_29 [i_7] [i_7]) - (arr_29 [i_7] [i_7])))));
    }
    #pragma endscop
}
