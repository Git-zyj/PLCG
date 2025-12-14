/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139480
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min((((max(var_9, var_6)) ? (var_12 % var_13) : (((var_0 ? var_9 : var_9))))), (min((min(var_8, var_11)), var_2))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 = ((((((var_10 ? var_1 : var_3)) ? (max(var_12, var_8)) : var_8))));
        var_16 = ((var_8 << (max(((min(var_6, var_0))), (var_13 >> var_6)))));
    }
    for (int i_1 = 0; i_1 < 0;i_1 += 1) /* same iter space */
    {
        var_17 -= (((min(var_4, (max(1, 2779001228)))) + (((((min(var_2, var_9))) ? ((var_3 ? var_6 : var_13)) : ((min(var_13, var_7))))))));
        var_18 = ((((var_10 ? var_12 : var_2)) >> (((max(var_10, var_4)) - 2600168777))));
        var_19 -= ((((((var_3 + var_10) ^ ((var_6 ? var_7 : var_12))))) ? (((var_8 == var_6) ? ((var_1 ? var_13 : var_4)) : (var_8 > var_8))) : (min(var_3, ((max(var_0, var_8)))))));
    }
    for (int i_2 = 0; i_2 < 0;i_2 += 1) /* same iter space */
    {
        var_20 = (max(var_20, (((((var_13 ? var_3 : var_13))) ? var_1 : ((min((~var_8), var_13)))))));
        arr_9 [i_2] = var_2;
    }
    for (int i_3 = 0; i_3 < 0;i_3 += 1) /* same iter space */
    {
        arr_13 [i_3] = max((((var_4 | var_7) | var_5)), (max((var_8 | var_12), var_4)));
        arr_14 [i_3 + 1] = (((((((min(var_5, var_1))) ? ((var_13 ? var_13 : var_6)) : var_9))) + (min(((var_13 ? var_13 : var_2)), (var_12 + var_8)))));
    }
    #pragma endscop
}
