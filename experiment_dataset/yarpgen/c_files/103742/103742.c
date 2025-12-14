/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103742
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_15;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        arr_4 [i_0] = ((!(!1925269278)));
        var_18 = var_8;
        var_19 *= (((arr_2 [i_0 - 1]) ? (arr_2 [i_0 + 2]) : (arr_2 [i_0 - 1])));
        arr_5 [10] = var_15;
        var_20 ^= (!7915533264433072099);
    }
    #pragma endscop
}
