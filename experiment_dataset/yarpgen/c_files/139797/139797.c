/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139797
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((var_7 ? var_1 : var_2)));
    var_15 = (max(var_15, (((((min(var_7, var_7))) ? (((14146 ? -14147 : 169696255))) : var_6)))));
    var_16 = -9344;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] = (((((var_10 ? var_12 : 26))) ? ((var_2 ? -16 : 20)) : 1));
        var_17 = 9344;
    }
    var_18 = ((((((134217720 ? 18446744073709551589 : 255)))) ? ((((var_8 ? var_0 : var_12)))) : var_5));
    #pragma endscop
}
