/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161524
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_9;
    var_15 = (~var_8);
    var_16 = -80;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_17 = (min((max((min((arr_0 [i_0]), 0)), ((((arr_0 [10]) ? (arr_1 [i_0]) : (arr_1 [i_0])))))), (min((((arr_0 [i_0]) - (arr_0 [i_0]))), (((17502 ? 1 : (arr_1 [i_0]))))))));
        var_18 &= ((max(29649, ((9 ? (arr_0 [i_0]) : 1)))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        arr_5 [i_1] = 1;
        var_19 ^= ((((!(44915 < -120))) ? ((var_5 ? 1 : ((-(arr_4 [10] [i_1]))))) : 1316112473));
        var_20 *= 0;
    }
    for (int i_2 = 3; i_2 < 21;i_2 += 1)
    {
        var_21 = (arr_8 [i_2]);
        var_22 = (min(var_22, (((((-(((arr_1 [i_2]) ? var_9 : 1)))) - ((((min(0, -94))) ? 884208698 : (arr_6 [i_2 - 2]))))))));
    }
    #pragma endscop
}
