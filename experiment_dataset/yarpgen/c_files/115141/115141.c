/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115141
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = (arr_2 [3]);
        var_13 = (max(var_13, ((max((((((var_2 ? (arr_2 [i_0]) : 0)) >= var_0))), (arr_0 [i_0] [6]))))));
        var_14 = (arr_1 [i_0]);
    }
    var_15 = var_9;
    var_16 = ((((var_6 ? (max(var_4, var_0)) : var_10)) + ((var_2 ? (max(var_0, var_2)) : -5022))));
    #pragma endscop
}
