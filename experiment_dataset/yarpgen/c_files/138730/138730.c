/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138730
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_14 += ((var_13 ? (11212668933838033315 * 7234075139871518301) : (max((11212668933838033304 * var_6), (max(7234075139871518291, var_10))))));
        arr_2 [i_0] |= 1;
    }
    var_15 = var_11;
    var_16 = ((!((((((var_12 ? var_10 : var_6))) ? (((var_6 ? var_11 : var_1))) : 7234075139871518295)))));
    #pragma endscop
}
