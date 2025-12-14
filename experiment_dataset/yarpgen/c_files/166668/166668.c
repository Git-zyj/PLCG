/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166668
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_15 = (min(var_15, (arr_1 [i_0 - 1])));
        var_16 |= 1049882593;
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {
        var_17 = (max(var_17, ((((21211 ? var_7 : (arr_1 [i_1])))))));
        var_18 = (((((3 ? var_10 : 98))) ? ((var_13 ? (arr_3 [i_1]) : 0)) : (1367401978676611698 <= var_1)));
        var_19 = (((var_7 / 152) ? (((0 ? (arr_0 [i_1]) : 65528))) : (var_12 * 1)));
    }
    var_20 = var_7;
    var_21 = (min(var_12, var_1));
    var_22 = (~var_0);
    var_23 = var_8;
    #pragma endscop
}
