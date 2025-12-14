/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151832
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_9;

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_19 = ((-((var_7 ? var_14 : var_12))));
        arr_2 [i_0] = var_17;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        var_20 = (~var_12);
        var_21 = ((var_12 ? (((var_10 ? var_14 : var_10))) : ((var_4 ? var_8 : var_15))));
        var_22 -= (!var_10);
    }
    var_23 = min((~28964), var_2);
    #pragma endscop
}
