/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104928
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_10;
    var_20 = (((var_12 << (var_1 - 10440073968469049570))));
    var_21 = var_17;

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        var_22 = ((1 << (var_8 + 1679098103)));
        var_23 = var_4;
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_24 = (-390760333 + 1);
        var_25 = (arr_4 [i_1]);
    }

    /* vectorizable */
    for (int i_2 = 1; i_2 < 12;i_2 += 1)
    {
        arr_8 [i_2] = (arr_0 [i_2 + 1]);
        var_26 += (arr_7 [i_2]);
        var_27 ^= (390760329 << (var_17 - 40158));
    }
    #pragma endscop
}
