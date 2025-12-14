/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166643
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] = (arr_1 [i_0 + 2] [i_0 + 3]);
        arr_4 [i_0] = 3;
        arr_5 [i_0] = (arr_1 [i_0] [i_0]);
    }

    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_9 [i_1] [i_1] = 1574;
        var_16 = (arr_8 [i_1] [i_1]);
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        arr_14 [i_2] [i_2] = (arr_12 [22]);
        var_17 = (max((arr_6 [i_2]), (arr_12 [i_2])));
        arr_15 [i_2] = (arr_11 [i_2] [i_2]);
    }
    #pragma endscop
}
