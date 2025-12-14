/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149125
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min((!var_6), (~-14)));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] = ((max((max((arr_0 [i_0] [i_0]), var_1)), (arr_2 [11] [i_0]))));
        var_12 = var_5;
        var_13 *= 14;
        var_14 *= (arr_2 [i_0] [i_0]);
    }
    for (int i_1 = 1; i_1 < 22;i_1 += 1)
    {
        var_15 = ((!((min(14, (arr_5 [i_1 + 1] [i_1 + 1]))))));
        arr_7 [8] [i_1] = ((-(arr_4 [i_1])));
        var_16 *= (((arr_6 [i_1] [i_1 - 1]) ? 14 : var_8));
    }
    var_17 = var_4;
    var_18 = var_7;
    #pragma endscop
}
