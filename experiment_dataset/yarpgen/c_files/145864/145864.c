/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145864
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= ((min(((var_7 ? var_9 : var_3), (-850568894 + var_4)))));
    var_15 = (min((-850568894 % 117440512), ((var_8 ? var_0 : (min(var_7, var_11))))));
    var_16 = ((161 ? 94 : 0));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = 82;
        var_18 += ((arr_2 [i_0] [0]) ? var_6 : (arr_0 [i_0]));
        arr_3 [i_0] [i_0] = 170;
        arr_4 [i_0] = 1;
    }
    #pragma endscop
}
