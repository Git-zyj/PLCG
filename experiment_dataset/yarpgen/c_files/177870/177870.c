/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177870
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= (max(((((min(var_16, var_14))) ? (~var_8) : (var_2 <= -42))), var_15));
    var_18 = var_9;

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_19 += (((((min(var_11, 7196))) ? var_8 : 13246716000914960266)));
        arr_2 [i_0] [i_0] = var_3;
        var_20 -= (((arr_1 [i_0 - 1] [i_0 - 1]) ? (max(49707782, (arr_1 [i_0 + 2] [i_0]))) : 1));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_21 = (min(var_21, ((((((~((508 ? var_5 : var_6))))) ? ((max(20082, (min((arr_3 [i_1]), var_5))))) : var_11)))));
        arr_5 [i_1] = var_3;
        var_22 = (min(var_22, var_12));
    }
    #pragma endscop
}
