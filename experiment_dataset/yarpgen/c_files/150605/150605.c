/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150605
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((min(var_3, -4611686018427387904))));

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_21 ^= (min((max((min(var_18, 1140005512132700366)), ((((arr_1 [1]) >= -137435483))))), ((30 & (((min(var_2, (arr_2 [i_0])))))))));
        var_22 = ((((((arr_0 [i_0 + 1]) ? (arr_0 [i_0 + 1]) : 53))) ? var_2 : (max((arr_0 [i_0 + 1]), (arr_0 [i_0 + 1])))));
    }
    for (int i_1 = 3; i_1 < 11;i_1 += 1)
    {
        var_23 = (max(var_23, ((max(var_17, ((((arr_2 [19]) ? var_18 : (arr_2 [i_1])))))))));
        var_24 = arr_4 [i_1];
    }
    var_25 = (min(var_25, var_12));
    var_26 = 0;

    /* vectorizable */
    for (int i_2 = 2; i_2 < 15;i_2 += 1)
    {
        var_27 &= (var_4 <= var_16);
        var_28 = var_11;
    }
    for (int i_3 = 1; i_3 < 23;i_3 += 1) /* same iter space */
    {
        var_29 = (min(var_29, ((((((min(1271260482355313529, var_11)) - (((var_3 ? var_7 : var_14)))))) ? (arr_8 [i_3]) : ((max(137435469, var_15)))))));
        var_30 = (((((arr_7 [i_3]) ? ((var_8 ? var_19 : 137435493)) : var_3)) > ((((((var_0 ? var_6 : var_14))) > (arr_7 [i_3]))))));
        var_31 = (((min(var_3, -137435454))) % (((((((arr_8 [5]) > var_4)))) + (min(var_9, var_3)))));
        var_32 *= var_19;
    }
    for (int i_4 = 1; i_4 < 23;i_4 += 1) /* same iter space */
    {
        var_33 = var_16;
        var_34 = var_6;
    }
    #pragma endscop
}
