/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184000
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = min(-1024247645749402237, (((~var_13) ? var_4 : ((var_11 ? var_17 : -192130459)))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_20 = ((((var_6 ? 1024247645749402237 : (arr_1 [i_0] [i_0])))));
        var_21 = (max(var_21, ((((arr_1 [i_0] [i_0]) > (~var_14))))));
        var_22 = (max((~var_18), (min((arr_0 [i_0]), 7159966610657866958))));
        arr_3 [i_0] = (max((~var_4), var_12));
    }

    for (int i_1 = 1; i_1 < 11;i_1 += 1)
    {
        var_23 = 31517;
        var_24 *= 3311;
    }
    for (int i_2 = 1; i_2 < 24;i_2 += 1)
    {
        arr_8 [i_2] = ((~(((!var_14) ? (min(1024247645749402247, var_8)) : var_17))));
        var_25 = (max(var_25, (((((((var_9 ? -13472 : var_5)))) ? var_4 : ((((var_4 ? 31527 : var_4)))))))));
        var_26 = 11;
        arr_9 [i_2] = ((var_6 ? ((max(var_12, var_9))) : (min(var_0, ((127 ? 134 : var_12))))));
        var_27 -= (arr_6 [i_2]);
    }
    #pragma endscop
}
