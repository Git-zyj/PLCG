/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100141
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_13 = (min(var_13, ((var_11 ? (-127 - 1) : 9525))));
        arr_2 [i_0] = (((arr_0 [i_0] [2]) == 127));
        var_14 -= ((var_5 < (arr_1 [i_0])));
    }
    var_15 = (max((((1 - var_12) ? -var_8 : var_4)), var_5));
    var_16 = (max(var_16, ((min(-1940566769, var_8)))));
    var_17 = 25302;
    var_18 = ((-1771400506 > (((((min(var_2, var_3))) || var_6)))));
    #pragma endscop
}
