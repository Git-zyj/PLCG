/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128950
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_14 = 95;
        arr_3 [i_0] = ((var_9 / (arr_2 [i_0])));
        var_15 = (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])));
        arr_4 [i_0] [i_0] = (((arr_2 [i_0]) ? var_10 : 1));
    }
    var_16 = -4724409488111077721;
    #pragma endscop
}
