/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163892
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_4;
    var_15 = ((~(((!(var_5 || var_6))))));

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_16 = (arr_1 [i_0]);
        var_17 = (-818966046 / -32456);
        var_18 ^= (arr_2 [i_0]);
    }
    var_19 = (~var_13);
    #pragma endscop
}
