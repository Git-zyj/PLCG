/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120098
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_9;
    var_13 = var_10;

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((var_6 ? var_1 : (((arr_0 [i_0] [i_0 + 2]) ? (arr_0 [i_0] [i_0 + 2]) : var_8))));
        var_14 = (((arr_0 [i_0] [i_0 + 1]) ? (((min(2, var_0)))) : (min((arr_1 [i_0 + 2] [i_0 - 1]), var_1))));
    }
    for (int i_1 = 3; i_1 < 6;i_1 += 1)
    {
        arr_6 [i_1] = 79;
        var_15 = (min((min(((var_11 ? (arr_1 [i_1] [i_1]) : (arr_0 [2] [2]))), (arr_0 [18] [i_1 - 1]))), (((16189 ? var_8 : var_3)))));
        var_16 = (min(((21938 / (arr_5 [i_1 + 2] [i_1 + 4]))), (arr_5 [i_1 - 1] [i_1 + 2])));
    }
    var_17 = var_6;
    #pragma endscop
}
