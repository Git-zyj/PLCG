/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118670
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = ((((((arr_1 [i_0 + 2]) ? (arr_1 [i_0 + 2]) : (arr_1 [i_0 + 2])))) && ((max((arr_1 [i_0 + 2]), var_10)))));
        var_11 = ((-(((max(var_8, 255)) + (arr_0 [i_0 + 1])))));
        var_12 += ((237 ? (((max(var_0, (arr_1 [i_0]))))) : ((2212668270 ? 212 : (arr_1 [i_0 - 2])))));
    }
    var_13 = 2;
    var_14 = (((10994296148012950612 == var_10) ? var_1 : var_7));
    var_15 = var_2;
    #pragma endscop
}
