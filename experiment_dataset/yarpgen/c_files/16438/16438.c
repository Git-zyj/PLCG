/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16438
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = var_8;
        var_15 = (((arr_1 [i_0]) && (!var_8)));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_16 = (arr_5 [i_1]);
        var_17 = ((13231894325308416861 ? -7743446798488276829 : 9003739307777177857));
    }
    var_18 = (min(((var_13 ? var_9 : ((var_4 ? var_3 : var_5)))), var_2));
    var_19 ^= (((!(((127 ? 64 : 64))))));
    #pragma endscop
}
