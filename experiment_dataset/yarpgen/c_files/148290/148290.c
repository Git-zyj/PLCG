/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148290
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= ((((max((~517259811536779941), (min(13707, 517259811536779943))))) || (!var_3)));

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        arr_3 [7] = (arr_2 [12]);
        var_16 = ((1 ? ((var_6 ? ((max(116, var_9))) : (arr_0 [i_0 - 1] [i_0]))) : (24544 || 517259811536779960)));
        var_17 = (((~3118) ? ((var_9 ? (max(var_3, 5464631072733552970)) : 1278512202930703364)) : var_11));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_18 = (arr_2 [i_1]);
        var_19 = (max(var_19, (!var_13)));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 20;i_2 += 1)
    {
        arr_8 [i_2] = (((arr_1 [i_2 + 2]) * 38741));
        var_20 = (((((~var_9) + 2147483647)) << (var_1 - 478130204)));
    }
    var_21 = var_1;
    var_22 = (max(var_12, var_1));
    var_23 = var_13;
    #pragma endscop
}
