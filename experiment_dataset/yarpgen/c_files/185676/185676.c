/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185676
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_12;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_14 = ((((((arr_0 [i_0] [i_0 - 2]) + 2399265039))) || 10219061604170552873));
        var_15 |= (arr_0 [i_0] [i_0]);
        var_16 = 10219061604170552859;
        arr_3 [i_0] = var_3;
        var_17 = 3224538356;
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_18 = (max(var_18, ((((arr_0 [i_1 - 1] [i_1 + 1]) ? (arr_5 [i_1 + 1]) : (((-29 ? var_9 : 0))))))));
        var_19 -= (!(arr_4 [4]));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 14;i_2 += 1)
    {
        var_20 = (arr_4 [6]);
        var_21 = 11163;
    }
    for (int i_3 = 1; i_3 < 20;i_3 += 1)
    {
        var_22 = (((arr_9 [i_3 + 3] [i_3]) & (arr_10 [i_3 - 1])));
        var_23 = (max(var_23, var_7));
    }
    var_24 = ((max(var_2, var_1)));
    #pragma endscop
}
