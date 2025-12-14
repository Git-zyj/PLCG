/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166041
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((-(!8))));
    var_21 -= ((~(((((var_7 ? var_11 : var_14))) ? ((0 ? var_11 : var_0)) : var_2))));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        var_22 = (~var_17);
        var_23 = (max(var_23, ((((arr_2 [i_0 - 2] [i_0 + 2]) ? (~77) : ((8 << (var_0 - 1175275988))))))));
    }
    #pragma endscop
}
