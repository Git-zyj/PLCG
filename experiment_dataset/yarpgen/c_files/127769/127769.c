/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127769
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_8;
    var_12 = ((2147483647 >> ((((var_5 ? ((var_7 ? var_10 : var_4)) : ((-30795 ? 1 : var_6)))) - 26))));

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        var_13 = (-(((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_3 [i_0 - 1] [i_0]))));
        arr_4 [i_0] = (arr_0 [i_0]);
    }
    var_14 = (((((var_5 ? ((var_6 ? var_3 : var_3)) : ((var_7 ? var_1 : var_8))))) || (((var_4 ? var_7 : (!var_10))))));
    var_15 = var_1;
    #pragma endscop
}
