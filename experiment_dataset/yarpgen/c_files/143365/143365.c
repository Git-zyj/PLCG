/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143365
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += (max((max(4, var_0)), var_7));
    var_21 -= var_9;
    var_22 = var_13;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_23 = var_2;
        var_24 -= (arr_0 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {
        var_25 = arr_4 [i_1 - 1];
        var_26 = (min(var_26, (((arr_5 [i_1 - 1]) || (arr_0 [i_1 - 1])))));
    }
    #pragma endscop
}
