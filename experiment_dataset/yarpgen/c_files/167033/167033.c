/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167033
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_13;
    var_17 = (~var_7);

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_18 = var_12;
        var_19 = var_4;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_4 [i_1] = (48 <= 59);
        var_20 = 55405;
        var_21 = (321054193319231945 && 205);
    }
    #pragma endscop
}
