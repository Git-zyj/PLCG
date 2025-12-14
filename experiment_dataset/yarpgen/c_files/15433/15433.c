/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15433
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= var_5;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 9;i_0 += 1) /* same iter space */
    {
        var_16 = (min(var_16, ((((var_5 & var_13) & (var_12 ^ var_1))))));
        arr_2 [i_0] = (((-8235579472246408512 ^ (arr_0 [0]))));
        var_17 = -24978;
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_18 = 24952;
                        arr_12 [i_3] [i_1 + 1] [4] = -24951;
                    }
                }
            }
        }
    }
    for (int i_4 = 2; i_4 < 9;i_4 += 1) /* same iter space */
    {
        arr_15 [i_4] [i_4] = ((min((arr_10 [i_4 + 1] [i_4 - 2] [i_4] [i_4] [i_4] [i_4]), (max(var_11, 15280709443055544258)))) - (((((arr_13 [i_4 - 2]) >= (arr_13 [i_4 - 2]))))));
        var_19 = (min(var_19, (~176)));
    }
    #pragma endscop
}
