/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14172
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_11;
    var_17 -= (max(((((max(var_4, 1)) > var_7))), (min(var_10, ((2147483647 ? 13628 : var_10))))));
    var_18 = var_9;

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_19 *= ((min(((var_13 ? var_8 : var_3), (25484 == -1604284990)))));
        var_20 *= 1;
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 23;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = 1;
        var_21 = (max(var_21, (((arr_3 [6]) ? (arr_2 [i_1 - 2] [i_1]) : (((((-32767 - 1) && var_13))))))));
        var_22 = (max(var_22, (!var_1)));
    }
    for (int i_2 = 2; i_2 < 23;i_2 += 1) /* same iter space */
    {
        var_23 = -1008956417799309163;
        arr_9 [i_2] = ((min(var_3, 39680225)));
    }
    var_24 = (var_12 - var_0);
    #pragma endscop
}
