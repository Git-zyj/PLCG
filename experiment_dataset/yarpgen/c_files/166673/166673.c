/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166673
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, (((!(((var_2 ? var_12 : -var_6))))))));
    var_18 += (!-5634);

    /* vectorizable */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        arr_2 [11] [11] = (~5627);
        var_19 ^= (((47 & 97) ? var_10 : 65515));
        arr_3 [i_0 + 3] [i_0 - 2] = (arr_1 [i_0 - 2]);
        arr_4 [i_0] = var_10;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_20 = ((-((181 ? 31 : (arr_6 [i_1])))));
        var_21 = ((arr_6 [i_1]) ^ (arr_5 [i_1] [i_1]));
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
    {
        var_22 *= (((5633 || 74) && -var_11));
        var_23 = (min(var_23, (((!((min((arr_9 [i_2] [i_2]), (arr_8 [i_2] [i_2])))))))));
        var_24 = var_8;
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
    {
        var_25 |= (!var_9);
        arr_13 [i_3] [i_3] = ((+((var_9 ? (arr_6 [i_3]) : (arr_10 [i_3])))));
        var_26 = var_10;
    }
    var_27 = var_4;
    var_28 = (((((var_3 - (var_15 - 0)))) ? ((-var_2 ? var_12 : var_3)) : var_11));
    #pragma endscop
}
