/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159031
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_11 = (191 * 0);
                var_12 = (((((((min(29, 8682186502501601760))) ? 15620731090745417421 : -99))) ? (max((((!(arr_2 [i_0])))), ((var_8 ? (arr_0 [9]) : var_9)))) : (((56413 << (!0))))));
            }
        }
    }
    var_13 = -30;
    var_14 = var_5;

    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                {
                    var_15 = var_5;
                    arr_14 [i_2] [i_2] [i_2] = (max(-6752728852564751746, (max((~var_7), (arr_1 [i_2])))));
                    var_16 = (((29 ? (((595696971560944014 + (arr_6 [i_3])))) : (min((arr_13 [i_2]), 29)))) == (arr_3 [1] [i_3]));
                }
            }
        }
        var_17 = 99;
        arr_15 [i_2] = 188;
        var_18 = ((((6752728852564751746 ? var_2 : (min(9544, var_4)))) == (((-(arr_2 [i_2]))))));
        var_19 = -2259815035;
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        arr_20 [i_5] [i_5] = (arr_6 [i_5]);
        arr_21 [i_5] = var_1;
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {
        arr_25 [i_6] = 9223372036854775807;
        var_20 = ((!(((0 << (2259815035 - 2259815010))))));
        arr_26 [i_6] = ((1 ? (arr_2 [i_6]) : 0));
        var_21 = ((~(arr_24 [i_6] [i_6])));
    }
    #pragma endscop
}
