/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140038
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] |= (((((79 != 1) ? 1030912797 : -28)) % (~-56)));
        var_11 += ((var_9 ? (((arr_0 [i_0]) << (4187516624922036595 >= 1))) : (~var_0)));
    }
    var_12 = ((((~var_0) ? ((0 ? var_5 : var_0)) : (~1))));
    var_13 = (min((((max(1030912797, 0)))), ((~(~8064)))));
    #pragma endscop
}
