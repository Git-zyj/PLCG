/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177735
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] = ((-((-(arr_2 [i_0])))));
        var_19 += max((arr_1 [4]), (arr_0 [i_0]));
    }
    var_20 |= ((var_4 ? var_12 : var_2));
    var_21 = var_10;
    var_22 = (min(((max((var_2 && var_3), ((var_15 ? var_15 : var_15))))), (((var_6 ? var_7 : 4203190225)))));
    #pragma endscop
}
