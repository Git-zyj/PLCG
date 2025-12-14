/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178864
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 *= var_6;
    var_20 = (min(var_20, 10));
    var_21 = var_0;
    var_22 = ((((((~var_16) ? (min(var_17, 16)) : 23))) ? (~52) : var_7));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_23 = (~11);
        var_24 &= (4294967284 >> 25);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {
        var_25 += -var_6;
        var_26 = (917320592 ? var_14 : (arr_2 [i_1 - 1]));
    }
    #pragma endscop
}
