/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132356
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min((min(-70, -70)), 87));
    var_12 = 69;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_13 &= (-var_4 ? ((((arr_1 [i_0]) >> (((arr_1 [i_0]) - 18))))) : ((var_9 ? (arr_1 [i_0]) : -9115278060010856981)));
        var_14 = var_0;
        var_15 -= ((-(max((arr_1 [i_0]), -var_3))));
    }
    var_16 = var_7;
    var_17 |= ((!(((~(~-9115278060010856981))))));
    #pragma endscop
}
