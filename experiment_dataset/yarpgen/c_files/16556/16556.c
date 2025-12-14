/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16556
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, (min(59, var_2))));
    var_13 = var_9;

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        arr_3 [6] = (((((arr_1 [i_0 - 1]) / (arr_1 [i_0 + 1]))) * ((((max(4, 4))) ? 15 : var_11))));
        var_14 = (((-((-5 ? var_1 : var_6)))) - var_6);
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_15 = (max(var_15, (((((((((arr_2 [i_1]) % 16531))) ? ((((arr_0 [i_1] [i_1]) && (arr_2 [i_1])))) : (var_4 < var_7))) % (arr_1 [i_1]))))));
        var_16 += (arr_5 [i_1]);
    }
    var_17 -= var_3;
    #pragma endscop
}
