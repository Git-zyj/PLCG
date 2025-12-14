/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122777
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 1;
    var_17 = var_13;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_18 = var_8;
        var_19 = ((((arr_1 [i_0]) / (arr_2 [i_0]))) / (arr_1 [i_0]));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        arr_5 [i_1] = (((arr_4 [i_1]) ? (min(((((-9223372036854775807 - 1) ? var_12 : 0))), 1610612736)) : (~1)));
        arr_6 [i_1] = ((((8280488461881537755 ? 9223372036854775807 : 1)) >= ((((9223372036854775804 >= 1) ? (((!(arr_1 [i_1])))) : var_10)))));
    }
    #pragma endscop
}
