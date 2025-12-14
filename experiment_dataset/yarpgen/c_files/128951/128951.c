/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128951
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= (max(var_7, var_4));
    var_13 = 32759;

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_14 = (max((max(218, (arr_0 [i_0]))), (min(1, 38028))));
        var_15 -= (min(var_8, ((-1140828657 ? (arr_0 [18]) : var_7))));
    }
    var_16 = 32759;
    #pragma endscop
}
