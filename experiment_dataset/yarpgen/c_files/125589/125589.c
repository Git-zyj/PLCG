/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125589
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_13 = (arr_0 [i_0]);
        var_14 = ((-122 ? (((-122 ? var_4 : var_1))) : (arr_0 [i_0])));
    }
    var_15 &= var_4;
    #pragma endscop
}
