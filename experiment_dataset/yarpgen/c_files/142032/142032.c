/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142032
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (!6475721144207309119);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_15 -= ((3271276563 << (((arr_0 [i_0] [i_0]) - 1012897877683512521))));
        var_16 ^= (arr_1 [9] [i_0]);
        arr_2 [i_0] |= ((arr_0 [i_0] [i_0]) == (arr_1 [i_0] [i_0]));
    }
    #pragma endscop
}
