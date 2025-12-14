/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101041
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_11 &= (((arr_1 [i_0]) ? (~9223372036854775803) : ((((arr_0 [i_0] [3]) ? var_5 : 65529)))));
        var_12 = ((((var_4 >= (arr_0 [i_0] [i_0]))) ? var_8 : var_8));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_13 *= (((var_5 ? -9223372036854775783 : var_8)));
        var_14 = 5226559002714386099;
    }
    var_15 = (max(((-var_9 ? ((var_8 ? var_6 : 9223372036854775801)) : 124)), var_6));
    var_16 -= ((var_10 ? (((((max(var_3, var_0))) ? (!var_2) : var_6))) : 9223372036854775801));
    #pragma endscop
}
