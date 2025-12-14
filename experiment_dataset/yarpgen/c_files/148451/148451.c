/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148451
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_10 = var_7;
        var_11 |= (var_6 - var_4);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_12 ^= (var_0 - var_5);
        arr_7 [i_1] = ((var_7 / (var_1 & var_0)));
        var_13 = (var_0 & var_8);
    }
    var_14 = var_5;
    #pragma endscop
}
