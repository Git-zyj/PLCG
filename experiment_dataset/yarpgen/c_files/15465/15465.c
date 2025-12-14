/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15465
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_3;
    var_13 = (min(var_13, ((((1 | var_11) ? 17145 : ((-32472 ? (((var_1 ? 1 : 200))) : var_5)))))));

    for (int i_0 = 2; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_14 = (max(var_14, var_10));
        var_15 = (min(var_15, 252));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_16 = (!var_8);
        var_17 *= var_2;
    }
    #pragma endscop
}
