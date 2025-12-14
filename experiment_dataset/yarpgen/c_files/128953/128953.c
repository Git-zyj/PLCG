/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128953
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= ((((1 & ((11 ? var_0 : var_0)))) | var_15));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_20 += ((-(arr_1 [18])));
        var_21 = (arr_2 [i_0] [i_0]);
        var_22 &= ((((arr_1 [i_0]) | (arr_0 [i_0]))));
        var_23 = 15;
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] [i_1] = (~1082010969);
        var_24 = (var_7 % var_9);
        arr_7 [i_1] = (min(var_16, (((var_14 || (((arr_2 [i_1] [i_1]) >= (arr_2 [i_1] [i_1]))))))));
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
    {
        var_25 = ((!(((~((var_18 >> (var_4 - 507772201))))))));
        var_26 *= ((1 >> (2311606675 - 2311606664)));
        arr_11 [14] [i_2] |= ((+(((~var_12) ? var_10 : ((var_3 ? var_17 : var_11))))));
    }
    #pragma endscop
}
