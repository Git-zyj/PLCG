/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11446
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (var_6 * 60);
    var_17 = 14588201215162745030;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_18 = ((((var_0 ? var_10 : -1897662921)) + 1897662921));
        var_19 = -1897662924;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        arr_5 [i_1] = 37;
        arr_6 [i_1] [i_1] = var_3;
        var_20 = ((var_7 ? 1897662924 : var_1));
        var_21 = ((-var_3 ? 1997253846 : 1338083078));
        arr_7 [4] |= (~-17856);
    }
    #pragma endscop
}
