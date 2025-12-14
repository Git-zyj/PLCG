/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16405
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (var_0 && var_2);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_3 [8] = (arr_2 [i_0] [i_0]);
        var_18 *= ((-1 ? 4169716908125560942 : 112));

        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            arr_6 [i_0] [i_1] [i_1 + 1] = (~-25496);
            arr_7 [1] [1] = var_15;
        }
        var_19 = ((!(((var_14 ? 91 : var_3)))));
    }
    #pragma endscop
}
