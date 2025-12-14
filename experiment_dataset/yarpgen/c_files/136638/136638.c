/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136638
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_13 = (min(((((max(1, 13235227455711512284)) > (var_0 && var_0)))), (~var_11)));
        var_14 = (((((var_5 ? (((min(1, (arr_0 [18]))))) : ((-18118 ? var_0 : (arr_0 [i_0])))))) ? ((662318260 ? (arr_0 [i_0]) : ((min(1, var_3))))) : (((arr_1 [i_0]) ? (max((arr_0 [i_0]), var_4)) : ((1 + (arr_1 [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            arr_8 [i_2] [i_2] [i_2] = (~1);
            var_15 = -var_11;
        }
        arr_9 [i_1] [1] = (max(2928145361, (~1)));
        var_16 = -662318267;
    }
    var_17 = (max((((!(((69 ? -662318253 : 1)))))), ((1 ? ((1 ? 1 : var_4)) : var_11))));
    #pragma endscop
}
