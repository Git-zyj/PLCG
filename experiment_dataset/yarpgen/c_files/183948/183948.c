/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183948
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((!((min(2, (~486092159))))));
    var_15 = var_13;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        var_16 ^= var_12;
        var_17 = (max(var_17, 7188213152087969223));
        var_18 = ((0 ? (arr_1 [i_0] [i_0]) : ((1 ? var_3 : var_9))));
        arr_2 [i_0 + 2] = ((-((var_2 ? -3 : var_10))));
    }
    #pragma endscop
}
