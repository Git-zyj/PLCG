/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100728
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_12 = ((~((-22642 ? (!-118) : 9812276629203819487))));
        var_13 = var_10;
        arr_4 [i_0] = (~24147);
    }
    var_14 = (((((51970 ? 4294967295 : var_6)) ? var_9 : var_8)));
    var_15 = (!var_7);

    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {
        var_16 *= ((-46 ? (max(96, (arr_5 [i_1 - 1] [i_1 + 1]))) : var_9));
        arr_8 [i_1] = ((-16447 ? ((~(max((arr_7 [i_1 - 1] [i_1]), var_3)))) : (max(var_1, (((10344187908521438433 ? (arr_5 [i_1] [i_1]) : var_2)))))));
        var_17 = ((((((((arr_6 [i_1 - 1]) ? var_11 : (arr_7 [i_1 - 1] [i_1]))) & ((-(arr_5 [i_1] [i_1])))))) ? (arr_7 [i_1 + 2] [i_1 + 2]) : (412 & -44)));
    }
    #pragma endscop
}
