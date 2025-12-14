/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123909
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 = 18446744073709551615;
        var_20 = 18446744073709551615;
        arr_3 [i_0] &= 6728283428831540375;
        arr_4 [i_0] [i_0] = 1;
        var_21 |= 16384;
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        arr_7 [i_1] = 8152724706944636498;
        arr_8 [i_1] [i_1] = 124;
        var_22 = 16380;
    }
    var_23 = var_11;
    var_24 = var_17;
    #pragma endscop
}
