/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116684
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = ((((((arr_0 [i_0]) * (arr_1 [i_0 - 1])))) ? (max(988525703, 988525703)) : (max((max(988525703, 988525703)), ((2034349567 ? 988525703 : 988525703))))));
        var_17 = var_3;
    }
    var_18 = var_6;
    var_19 = -102;
    var_20 *= ((988525703 ? -988525713 : 988525720));
    #pragma endscop
}
