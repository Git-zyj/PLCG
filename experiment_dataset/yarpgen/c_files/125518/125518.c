/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125518
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = -var_2;

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_14 = (((var_8 ? (arr_2 [i_0]) : (68719476735 % 14777432013847198151))));
        var_15 = ((-((((((((arr_2 [i_0 + 1]) || var_2)))) <= (arr_3 [i_0 - 1]))))));
        var_16 ^= (((((arr_0 [i_0 - 1] [i_0 - 1]) / (((max(var_9, 18397)))))) > ((((arr_0 [i_0] [i_0]) ? -var_6 : -18401)))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 22;i_1 += 1)
    {
        var_17 = (((((var_12 ? 7485038111847486015 : (arr_4 [i_1])))) ? (((arr_4 [i_1 + 1]) ? (arr_5 [i_1]) : var_7)) : (((-(arr_5 [i_1 + 1]))))));
        arr_6 [i_1] = (((arr_5 [i_1 - 2]) ? (arr_4 [i_1 - 2]) : var_11));
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        var_18 = arr_3 [i_2];
        var_19 = (min(var_19, (((((arr_1 [i_2]) ? var_6 : (arr_8 [i_2] [i_2]))) << (arr_5 [i_2])))));
        var_20 ^= max((arr_8 [i_2] [i_2]), 2143);
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        arr_13 [i_3] = var_2;
        var_21 = (min(var_21, (((-((max((arr_10 [i_3]), (arr_10 [i_3])))))))));
        arr_14 [i_3] = -610236625637589318;
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            {
                var_22 = 1;
                arr_19 [2] = (arr_5 [i_4]);
            }
        }
    }
    #pragma endscop
}
