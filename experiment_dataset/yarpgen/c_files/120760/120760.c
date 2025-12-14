/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120760
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (!var_15);
    var_21 = (min(var_6, var_9));
    var_22 &= var_13;
    var_23 = ((var_6 * (~var_17)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = (((var_19 ? 0 : var_18)));
        arr_3 [i_0] = var_18;
        arr_4 [i_0] = var_10;
        var_24 = (max(var_24, -var_19));
    }
    #pragma endscop
}
