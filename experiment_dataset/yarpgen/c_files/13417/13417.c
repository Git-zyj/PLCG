/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13417
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = max(var_11, var_13);
    var_18 = var_16;
    var_19 |= ((-var_3 ? var_1 : var_12));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] &= var_11;
        var_20 |= var_11;
    }
    #pragma endscop
}
