/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150195
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= var_1;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_17 = min((max((arr_0 [i_0] [i_0]), 139)), ((((arr_1 [i_0] [i_0]) == 125))));
        var_18 = ((var_7 ? (arr_0 [i_0] [i_0]) : (~var_4)));
    }
    #pragma endscop
}
