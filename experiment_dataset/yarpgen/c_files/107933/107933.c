/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107933
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_9;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (~7283697980987289422);
        arr_5 [i_0] = (((((arr_1 [i_0]) != (-127 - 1))) ? 11163046092722262193 : (arr_3 [i_0])));
    }
    #pragma endscop
}
