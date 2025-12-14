/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182170
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_17 = (~(!var_3));
        var_18 = (var_7 & -243);
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = var_7;
        arr_7 [i_1] = (arr_3 [1] [i_1]);
    }
    var_19 = (max(((max(var_12, 235))), ((248 << (1311833345 - 1311833338)))));
    #pragma endscop
}
