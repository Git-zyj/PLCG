/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144027
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_17 = ((var_10 % ((2435833268 ? (arr_2 [i_0 - 1]) : (arr_2 [i_0])))));
        arr_4 [i_0] [i_0] = (((var_12 % var_1) ? (var_2 != 1859134027) : -var_13));
    }
    var_18 = var_4;

    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_19 = 2756738039;
        var_20 = (min(var_20, (((max((~3), var_4))))));
    }
    #pragma endscop
}
