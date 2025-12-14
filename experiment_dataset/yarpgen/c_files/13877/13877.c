/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13877
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((-127 ? var_10 : 54668)))) ? (((30 ? 126 : 43431))) : ((((10 ? 4294967283 : var_7)) * var_3)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_4 [i_0] = (3658705290 & -22);
        var_18 *= ((~(~41)));
        arr_5 [i_0] [2] = (((arr_1 [i_0] [i_0]) == ((126 ? 49 : var_11))));
    }
    var_19 = 29629;
    var_20 = -var_11;
    #pragma endscop
}
