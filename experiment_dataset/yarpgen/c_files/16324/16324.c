/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16324
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] = -1033488195;
        var_13 = ((1033488195 < ((var_1 ? -588035480 : (arr_1 [i_0] [15])))));
    }
    var_14 = ((((max(((-588035470 ? var_8 : var_3)), (127 / 48528)))) ? 1 : var_12));
    #pragma endscop
}
