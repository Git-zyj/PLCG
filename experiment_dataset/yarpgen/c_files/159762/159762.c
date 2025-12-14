/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159762
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= (max((((6099653584451137965 ? 58452 : 0))), var_8));
    var_11 *= 12347090489258413651;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_12 = ((-(arr_1 [i_0])));
        var_13 = (arr_1 [i_0]);
    }
    var_14 = ((((((var_6 ? var_8 : var_7)))) ? ((var_6 >> (!7083))) : ((var_5 ? var_6 : (~var_6)))));
    var_15 = ((var_1 ? 1719538787 : (max(var_0, var_2))));
    #pragma endscop
}
