/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120330
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0 - 2] [i_0] = (min(var_6, ((0 / (arr_0 [i_0 - 2])))));
        var_13 = var_4;
        var_14 = ((var_11 ? ((5598997009106579975 ? (arr_1 [i_0 + 2]) : -1589367794)) : (arr_0 [i_0 + 2])));
    }
    var_15 = (max(var_8, ((((0 ? 2110 : 5598997009106579974)) << (12847747064602971642 - 12847747064602971603)))));
    #pragma endscop
}
