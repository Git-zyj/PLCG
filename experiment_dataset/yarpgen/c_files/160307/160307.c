/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160307
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_7;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] &= var_0;
        var_13 += ((~(min(1, 2659461085))));
    }

    /* vectorizable */
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_14 += -2;
        var_15 = (2231198292 % var_6);
        var_16 = (min(var_16, -14));
        var_17 = (max(var_17, ((((arr_1 [i_1]) > (arr_5 [i_1]))))));
    }
    #pragma endscop
}
