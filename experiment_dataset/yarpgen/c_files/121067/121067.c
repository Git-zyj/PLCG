/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121067
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 += var_0;
        var_19 = (var_16 != var_16);
        var_20 = ((-55 ? ((var_8 ? 18446744073709551598 : var_10)) : 50));
    }
    var_21 = var_3;
    var_22 = var_11;
    var_23 = ((var_13 << ((((((var_9 ? var_12 : 18)) * 1)) - 61468))));
    #pragma endscop
}
