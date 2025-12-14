/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136724
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (-9223372036854775807 - 1);
    var_18 &= -var_9;
    var_19 = var_12;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = (~var_10);
        arr_3 [i_0] [i_0] = -2144344260;
        arr_4 [i_0] [i_0] = -7244793999737063535;
        var_20 = (max(var_20, (((18446744073709551615 << (242 - 239))))));
    }
    var_21 = (max(var_21, var_12));
    #pragma endscop
}
