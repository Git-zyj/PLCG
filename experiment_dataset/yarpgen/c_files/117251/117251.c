/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117251
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = -11;

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        var_13 -= 15;
        var_14 = (arr_1 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {
        arr_4 [i_1] [i_1] = (((var_4 + var_2) - (((arr_1 [1]) - 1))));
        var_15 = arr_0 [i_1];
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        var_16 = (max(var_16, (((-(((arr_1 [i_2]) / var_4)))))));
        arr_7 [i_2] = (arr_0 [i_2]);
    }
    var_17 = var_4;
    #pragma endscop
}
