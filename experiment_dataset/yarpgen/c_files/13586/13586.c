/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13586
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_4;
    var_19 = var_6;

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0 - 1] = (((arr_2 [i_0]) ? var_8 : (((45709 & var_11) ? (((arr_1 [i_0]) ? 1 : var_2)) : (arr_1 [i_0])))));
        arr_4 [i_0] [i_0] = (arr_1 [1]);
    }
    var_20 = var_15;
    var_21 &= (((var_7 & var_11) / var_17));
    #pragma endscop
}
