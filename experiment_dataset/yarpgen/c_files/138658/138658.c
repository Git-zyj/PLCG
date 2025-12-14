/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138658
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        var_18 = (min((max(235, 21)), (((!((max(17996806323437568, 180))))))));
        arr_2 [i_0] = (((((29517 ? var_16 : 21))) ? 18446744073709551615 : (arr_0 [i_0])));
        var_19 = (~(arr_1 [i_0]));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_5 [i_1] = (((~((~(arr_0 [i_1]))))));
        var_20 = (min(var_13, var_5));
    }
    var_21 = var_11;
    #pragma endscop
}
