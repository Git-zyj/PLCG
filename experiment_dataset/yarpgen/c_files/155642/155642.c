/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155642
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_2;
    var_15 = ((~((1685088212 ? (max(var_5, var_6)) : (999294984 < 3041497106)))));
    var_16 = ((((var_10 ? var_9 : 955850194)) << (var_4 - 112)));

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((!(((((var_0 ? (arr_1 [i_0]) : var_9))) || 10359579560171881928))));

        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            arr_7 [i_0] = -58;
            arr_8 [i_0] [i_1] [i_1] = var_4;
        }
        arr_9 [i_0] [11] = (!var_3);
    }
    #pragma endscop
}
