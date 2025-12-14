/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152689
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = var_6;
        var_11 = (min(var_11, (arr_1 [16] [16])));
        var_12 = 134217727;
        var_13 = (((var_9 + 2147483647) << (((arr_3 [i_0 + 1]) - 17635158660186417217))));
    }

    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        arr_7 [i_1] = (arr_6 [i_1]);
        var_14 = -var_7;
    }
    #pragma endscop
}
