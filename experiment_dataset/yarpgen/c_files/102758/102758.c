/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102758
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_11 ? var_10 : var_9));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_13 = -1;
        var_14 = (min((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_0])));
        arr_3 [i_0] = ((-((-60 ? -65 : (arr_0 [i_0])))));
    }
    for (int i_1 = 3; i_1 < 9;i_1 += 1)
    {
        arr_6 [i_1] = var_11;
        var_15 = (min(var_15, ((((((var_6 ? (arr_5 [i_1 + 2]) : -65))) ? (((arr_5 [i_1 + 3]) / 67)) : 60)))));
        var_16 = ((((var_11 + 2147483647) >> (((arr_4 [i_1 - 3]) + 117)))));
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        var_17 = -40;
        var_18 = ((((59 == (arr_5 [11]))) ? ((72 ^ (arr_5 [i_2]))) : -65));
        var_19 = -60;
    }
    #pragma endscop
}
