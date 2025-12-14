/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184650
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_5;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = 32754;
        var_14 = ((!((((var_5 - 175) ? var_7 : (!var_3))))));
        var_15 -= ((+(max(((-1 ? (arr_1 [i_0]) : var_6)), (arr_0 [2])))));
    }
    var_16 = var_8;
    var_17 = 56;
    #pragma endscop
}
