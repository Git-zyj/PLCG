/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143416
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_13 = ((var_9 ? (arr_1 [i_0 - 1]) : 23));
        var_14 = (1 & 8257536);
        arr_2 [i_0] = -1;
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_15 = (arr_3 [i_1]);
        arr_6 [i_1] = min(((((max(876949304, -159573176))) ? (var_2 && var_11) : var_1)), -1557092204);
    }
    var_16 = var_4;
    var_17 = var_5;
    var_18 = 191;
    #pragma endscop
}
