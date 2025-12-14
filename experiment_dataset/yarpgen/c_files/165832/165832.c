/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165832
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] [1] = (arr_1 [i_0]);
        var_13 *= (((arr_1 [11]) ? (arr_1 [i_0]) : (arr_1 [i_0])));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_14 = ((0 ? 4294967295 : (~3440407053)));
        var_15 = (max(var_15, (arr_2 [1])));
    }
    var_16 *= var_0;
    var_17 = (((var_5 ? ((var_9 ? var_3 : var_11)) : var_0)));
    #pragma endscop
}
