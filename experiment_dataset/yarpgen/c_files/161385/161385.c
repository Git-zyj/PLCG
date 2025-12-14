/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161385
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(1, (var_1 | 0)));
    var_14 = (min((1 & 1), (min((65535 / 1), 48))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (max(1, 11179181902744043081));
        var_15 = (max(var_15, 1381290422228258322));
        var_16 = 1;
    }
    var_17 = (208 < 1);
    #pragma endscop
}
