/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167815
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_7;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_11 = -var_3;
        arr_4 [i_0] = (((((-(arr_2 [i_0])))) * var_2));
    }
    for (int i_1 = 4; i_1 < 9;i_1 += 1)
    {
        arr_9 [i_1] = (~30389);
        var_12 = var_0;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        var_13 &= var_7;
        var_14 = (((arr_2 [i_2]) & (arr_2 [i_2])));
        var_15 = ((-4611686018427387904 / (-32767 - 1)));
    }
    var_16 = var_8;
    var_17 -= var_6;
    #pragma endscop
}
