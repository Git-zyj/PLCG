/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127124
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_15;
    var_19 = 1;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [16] [i_0] = 61722002;
        arr_4 [i_0] = (~2650948092);
    }
    #pragma endscop
}
