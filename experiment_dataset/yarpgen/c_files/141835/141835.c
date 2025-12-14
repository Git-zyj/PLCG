/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141835
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = ((32751 ? var_3 : -32751));
        arr_3 [i_0] [i_0] = ((-(arr_0 [i_0])));
    }
    var_16 = var_14;
    #pragma endscop
}
