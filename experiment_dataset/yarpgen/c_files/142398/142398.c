/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142398
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_10 = (~1);
        var_11 += -var_9;
        var_12 = ((((((((-(arr_0 [i_0])))) ? -1 : var_1))) ? (((2108207115 ? 2186760181 : -193070498))) : ((max((~-1716572969), var_0)))));
        var_13 = (min(var_13, ((max((max((((arr_0 [i_0]) ? (arr_1 [i_0]) : var_6)), (((var_8 ? var_6 : var_3))))), var_7)))));
        var_14 = ((-((((max((arr_0 [i_0]), var_2))) ? -1431808783 : (max(var_3, (arr_1 [i_0])))))));
    }
    for (int i_1 = 2; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_15 = 2108207093;
        arr_4 [i_1 + 2] [i_1 + 4] = (arr_1 [i_1 + 4]);
    }
    var_16 = ((((((9 ? 2485685105 : 1)) > var_6)) ? ((65535 ? (max(var_6, 2186760178)) : var_8)) : (((((var_9 ? var_3 : var_7))) ? (~2186760181) : ((var_1 ? 2108207093 : var_2))))));
    var_17 = var_8;
    var_18 = (!10);
    #pragma endscop
}
