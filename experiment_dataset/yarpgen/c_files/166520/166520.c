/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166520
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_16 -= (!(arr_2 [i_0] [6]));
        var_17 = var_14;
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_18 = ((((((((arr_3 [i_1]) < 102)))) % (arr_4 [i_1] [i_1]))));
        arr_5 [i_1] = var_12;
    }
    var_19 = ((((((((max(var_3, var_0)))) | (var_8 & var_14)))) ? ((min(0, 25611))) : var_6));
    #pragma endscop
}
