/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137727
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] = ((-(4195393440 - 4)));
        var_12 *= (((!252) & (((arr_1 [i_0]) << ((((max((arr_1 [i_0 - 3]), 3968))) - 3949))))));
    }
    var_13 *= ((var_3 ? var_5 : (~var_7)));
    var_14 = ((((min(2029, var_10))) - var_8));
    #pragma endscop
}
