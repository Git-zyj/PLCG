/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118862
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 130229000;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = (~246);
        var_14 = 4074478764;
    }
    #pragma endscop
}
