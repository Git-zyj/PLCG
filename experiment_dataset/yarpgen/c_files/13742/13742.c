/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13742
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 8426843116177973743;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_13 = (arr_2 [i_0] [i_0]);
        var_14 = (arr_2 [i_0] [4]);
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_15 -= var_0;
        var_16 = (((((17 ? var_10 : 11))) & -25));
    }
    #pragma endscop
}
