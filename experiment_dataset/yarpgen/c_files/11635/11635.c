/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11635
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_10;
    var_12 = (~3009214623);

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_13 = (arr_1 [i_0 - 1] [i_0 - 1]);
        var_14 = (min(var_14, (arr_1 [i_0] [8])));
    }
    var_15 = (((max(((var_6 >> (var_3 + 3878))), -1000)) == ((-((var_0 ? var_1 : var_0))))));
    #pragma endscop
}
