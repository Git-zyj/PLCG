/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142491
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += (47 && (((-(!0)))));
    var_21 *= 49152;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_22 = (((arr_1 [i_0]) < (arr_0 [i_0] [i_0])));
        arr_4 [i_0] = (((arr_3 [i_0]) || var_8));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        arr_8 [i_1] = (-8795677281268893346 | 4294967278);
        arr_9 [i_1] = ((((4294967276 ? 4294967286 : 2308393144341745798))) ? (arr_0 [i_1] [i_1]) : ((110 ? (arr_7 [i_1]) : var_2)));
        var_23 = (arr_1 [i_1]);
    }
    var_24 = (((((min(var_18, 0)) < var_14)) ? var_3 : ((((var_14 >= (65508 && var_14)))))));
    var_25 = 207;
    #pragma endscop
}
