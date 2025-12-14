/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184863
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= (min(((((min(var_10, var_8))) ? (((218 ? var_1 : var_4))) : (max(var_11, var_9)))), -var_10));
    var_14 |= (max((((((-100 ? var_2 : var_12)) > var_2))), ((((var_1 ? 141 : var_7)) >> (68 - 50)))));
    var_15 = (min((min(17, -45)), (((max(var_9, var_4))))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_16 = ((-((-3020 ? 45 : -2424))));
        arr_4 [i_0] = ((((((-(arr_2 [i_0] [i_0])))) < var_3)));
        var_17 *= (max((min((min((arr_3 [i_0] [i_0]), (arr_0 [i_0]))), (arr_1 [i_0] [i_0]))), ((((arr_1 [i_0] [i_0]) * ((((!(arr_3 [i_0] [i_0]))))))))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_18 ^= (min(-59, (max(2024609788, 13))));
        var_19 = (arr_0 [i_1]);
        arr_7 [i_1] [i_1] = (arr_6 [i_1] [i_1]);
    }
    #pragma endscop
}
