/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175802
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_13 = (max((((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))), (((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))));
        var_14 = (min((arr_0 [i_0] [i_0]), ((1670865359141859220 ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))));
    }
    var_15 = ((max(((var_1 ? 16775878714567692392 : 253)), ((var_3 ? -13 : var_12)))));
    #pragma endscop
}
