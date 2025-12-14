/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162407
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_16;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] [3] = ((min(((((arr_1 [i_0]) << (((arr_1 [i_0]) - 99))))), (var_17 % -829672277925389705))));
        arr_4 [i_0] [i_0] = 8993726988618342889;
    }
    #pragma endscop
}
