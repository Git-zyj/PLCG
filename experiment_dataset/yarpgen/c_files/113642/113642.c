/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113642
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0] [i_0]);
        var_16 += (((var_7 ? -1 : (arr_1 [i_0] [i_0]))) & 331741257);
    }
    var_17 += 4044548075;
    var_18 = ((((var_14 ? ((144115188075855871 ? -1 : (-9223372036854775807 - 1))) : var_3)) < (!var_11)));
    #pragma endscop
}
