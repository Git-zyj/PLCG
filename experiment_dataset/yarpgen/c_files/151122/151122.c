/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151122
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_20 = ((~((~((~(arr_1 [i_0 - 1])))))));
        arr_4 [i_0] [i_0 + 2] = ((~((~(((!(arr_1 [i_0]))))))));
        arr_5 [i_0] &= (arr_3 [i_0] [i_0]);
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_21 &= (arr_6 [i_1]);
        var_22 = (~-1750885496);
        var_23 = (max(var_23, (((~(arr_3 [i_1] [i_1]))))));
    }
    var_24 = (!2138401231398088592);
    var_25 = var_11;
    #pragma endscop
}
