/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106881
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_8;

    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = var_17;
        var_20 = (max(var_20, ((((((arr_1 [i_0 - 2] [i_0 + 2]) ? (arr_0 [i_0 - 2] [i_0 - 4]) : var_2)) >> ((((var_14 ? (((arr_1 [i_0 - 3] [7]) ? var_14 : var_13)) : (((var_9 ? 2 : var_15))))) - 4294967182)))))));
        arr_3 [9] = ((1 >> (-227162031732326658 + 227162031732326684)));
        var_21 = 150;
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_22 = (max(((((arr_4 [i_1]) ^ ((max((arr_6 [i_1]), (arr_6 [i_1]))))))), ((((var_12 ? (arr_5 [i_1]) : var_12)) + (var_10 / var_0)))));
        var_23 = ((var_12 ? -96395609 : (((var_6 + 2147483647) >> ((((var_12 << (-43 + 89))) - 7227784820720402405))))));
        var_24 = (((((arr_6 [i_1]) ? var_1 : var_16)) >> (var_4 - 9274124282168131977)));
        arr_7 [i_1] = ((var_16 >> (((((((222 ? var_15 : var_18))) ? ((var_11 ? var_9 : 162)) : ((12036 ? (arr_4 [i_1]) : var_15)))) - 5))));
    }
    #pragma endscop
}
