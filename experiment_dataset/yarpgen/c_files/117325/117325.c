/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117325
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = 0;
        var_13 = 0;
        arr_5 [i_0] = var_9;
    }
    for (int i_1 = 3; i_1 < 12;i_1 += 1)
    {
        var_14 = (max(var_14, ((min(3610175005, 4294967286)))));
        arr_9 [i_1] = min(var_3, 684792290);
        var_15 = var_2;
    }
    var_16 = var_4;
    #pragma endscop
}
