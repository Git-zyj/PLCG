/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176936
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = -var_6;

    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = var_5;
        arr_3 [i_0] = (((~(arr_1 [i_0]))));
        var_17 = ((!((((arr_0 [i_0]) ? var_10 : (arr_0 [i_0]))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_18 -= -30231;
        var_19 = ((49 ? var_12 : -5453));
        var_20 = (max(var_20, (!var_4)));
    }
    for (int i_2 = 1; i_2 < 22;i_2 += 1)
    {
        var_21 *= 2771633616352385256;
        var_22 -= ((-(max((arr_9 [i_2 + 1] [i_2 + 1]), -1))));
    }
    var_23 = ((30255 ? 13694 : var_1));
    var_24 = var_8;
    #pragma endscop
}
