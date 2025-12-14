/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166688
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_11;
    var_15 = ((((((16532 * var_6) % var_12))) ? ((min(((var_10 ? var_6 : var_8)), (var_6 != var_11)))) : (max(((var_0 ? var_5 : var_13)), var_13))));

    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        var_16 = (min(((~(min(var_8, var_0)))), (!var_4)));
        var_17 += (((((19 ? -2861 : (~-2861)))) ? var_1 : (~-2835)));
    }
    for (int i_1 = 1; i_1 < 11;i_1 += 1)
    {
        var_18 = (max((~var_2), var_7));
        arr_5 [1] [1] = var_3;
    }
    #pragma endscop
}
