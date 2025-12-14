/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16151
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = -20560;

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_18 = var_12;
        var_19 = -20560;
        var_20 ^= ((((((-20560 == (arr_2 [i_0 + 4]))))) <= 4294967295));
    }
    var_21 = var_7;
    #pragma endscop
}
