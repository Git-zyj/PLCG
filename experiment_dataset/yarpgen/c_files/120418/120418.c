/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120418
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += var_2;

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_12 = (min(var_12, var_6));
        arr_2 [12] |= var_2;
        var_13 = (arr_1 [i_0] [i_0]);
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_14 = (arr_4 [i_1] [i_1]);
        var_15 = var_7;
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
    {
        arr_7 [i_2] = 1776667995;
        var_16 = (arr_0 [i_2]);
        arr_8 [i_2] [i_2] = var_3;
    }
    var_17 = 1776667989;
    var_18 ^= var_0;
    var_19 ^= var_7;
    #pragma endscop
}
