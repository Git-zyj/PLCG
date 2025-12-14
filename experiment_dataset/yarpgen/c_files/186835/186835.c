/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186835
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((min(var_1, ((var_13 ? var_1 : var_8)))) * var_11));
    var_17 -= var_13;
    var_18 = var_8;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        var_19 ^= (!var_14);
        arr_2 [i_0 - 3] [i_0] = (((arr_0 [i_0 + 3]) ? (arr_0 [i_0 - 3]) : (arr_0 [i_0])));
        arr_3 [i_0 - 3] = (arr_0 [i_0 - 2]);
    }
    #pragma endscop
}
