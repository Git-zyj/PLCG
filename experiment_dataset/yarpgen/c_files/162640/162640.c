/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162640
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] [10] [i_1] = (~1098974756864);
                var_14 = 1777261178;
                var_15 = var_8;
            }
        }
    }

    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        var_16 = ((1098974756888 ? 180 : -1098974756861));
        var_17 = (min(var_17, (~var_0)));
        var_18 = (((28062 >> 1) >> ((((min((arr_0 [i_2]), (arr_0 [i_2])))) - 14))));
    }
    var_19 = (min(var_19, var_3));
    var_20 = ((var_3 ? var_7 : var_6));
    #pragma endscop
}
