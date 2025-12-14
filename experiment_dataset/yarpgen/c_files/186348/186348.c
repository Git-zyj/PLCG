/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186348
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_12 = (min(25, 23530));
        var_13 = (~2285144805);
        var_14 = var_1;
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        arr_6 [1] [1] = (arr_5 [i_1]);
        var_15 = (-23531 || 15433135965689883484);
        var_16 *= 18446744073709551615;
    }
    var_17 = ((-119 - ((((max(var_4, -32072)) == (~var_8))))));
    #pragma endscop
}
