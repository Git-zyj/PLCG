/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124768
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= (((((-82 ? 1 : (82 > 81)))) ? ((1073741823 ? 1 : 1)) : (((((82 ? -1073741823 : var_6)) >= var_9)))));

    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        var_12 += (((((((arr_0 [i_0]) + 1))) ? 0 : (-4150113864571054080 - 1))));
        var_13 = 1073741820;
        var_14 = (arr_1 [0]);
    }
    #pragma endscop
}
