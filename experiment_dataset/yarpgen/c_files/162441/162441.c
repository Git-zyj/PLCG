/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162441
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += var_11;
    var_13 = var_7;
    var_14 = (~var_1);
    var_15 += (max(((-6236795239266204362 ? -19329 : -6236795239266204362)), (-6236795239266204362 / 6236795239266204362)));

    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        var_16 &= (max((((arr_1 [i_0] [i_0]) ? (((1974690922 < (arr_1 [i_0] [i_0])))) : 1)), (!1)));
        arr_2 [i_0] = (((max(-6236795239266204362, 1)) / (((~((max((arr_0 [i_0] [i_0 + 3]), 1))))))));
        arr_3 [i_0] [i_0 + 3] = (arr_1 [4] [4]);
    }
    #pragma endscop
}
