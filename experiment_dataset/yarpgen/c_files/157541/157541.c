/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157541
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_15 *= ((-(max(((max(0, (arr_2 [i_0] [i_0])))), (max(253, var_4))))));
        arr_3 [i_0] [19] = arr_2 [1] [i_0];
        var_16 = (arr_1 [19] [i_0]);
    }
    var_17 = var_4;
    #pragma endscop
}
