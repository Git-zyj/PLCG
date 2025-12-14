/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174895
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_18 = var_5;
        var_19 = ((-((min(var_6, (max(1, 46283)))))));
        arr_4 [i_0] = (min(1, -2021101669));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_20 = ((((max((!46460), (var_4 ^ var_7)))) ? (((-((max((arr_2 [i_1] [i_1]), 19)))))) : var_11));
        arr_7 [i_1] [5] = min(var_14, (arr_6 [i_1] [i_1]));
        arr_8 [i_1] = -var_7;
        var_21 = 14427205709749405013;
        var_22 = (min(((~(~var_16))), (~var_13)));
    }
    var_23 = (max(var_23, var_13));
    #pragma endscop
}
