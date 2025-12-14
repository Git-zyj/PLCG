/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142289
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, (!-4592654378679298152)));
    var_15 = var_13;
    var_16 += var_2;
    var_17 = 4592654378679298166;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_18 = (min(var_18, (arr_1 [i_0] [i_0])));
        var_19 = (max((((arr_0 [i_0] [i_0]) * ((max(3018268428, 1))))), (arr_1 [i_0] [6])));
        arr_3 [i_0] = (arr_2 [i_0]);
        var_20 = ((-4592654378679298163 ? 4592654378679298151 : -4592654378679298151));
        var_21 = (arr_1 [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 18;i_1 += 1)
    {
        var_22 |= ((-57 ? (arr_5 [i_1]) : -7880232713770368881));
        var_23 = (-57 ? (arr_7 [i_1 - 1]) : (arr_4 [i_1 + 1]));
    }
    #pragma endscop
}
