/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152442
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = ((var_8 - (arr_1 [i_0 + 3])));
        var_20 |= ((((4152471706994169411 ? 3042193450178513266 : (arr_0 [i_0]))) % var_3));
        var_21 = var_14;
    }
    var_22 = (((max(var_1, var_14))));
    var_23 = (min(var_23, var_6));
    #pragma endscop
}
