/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132837
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_7;
    var_13 = (((618003231649411728 << (676292100998787596 - 676292100998787596))));

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = var_0;
        var_14 = (~1);
        arr_4 [14] [14] &= arr_0 [5] [i_0];
        var_15 = -676292100998787604;
    }
    #pragma endscop
}
