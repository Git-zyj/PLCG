/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160622
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_1;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = (-(~0));
        arr_3 [0] = ((2212338471867316887 % 4682936779513915615) ? ((4111005721494513630 ? (min((arr_0 [i_0]), (arr_1 [i_0]))) : (arr_1 [i_0]))) : ((var_11 ^ (var_2 / 14))));
    }
    var_13 = var_7;
    #pragma endscop
}
