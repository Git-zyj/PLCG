/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127844
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (var_14 && 171);
    var_20 = (((var_3 | 0) ^ -3));
    var_21 = (((-11 || -13) ? var_11 : ((min((min(59, var_7)), (!var_3))))));

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_22 = (min(var_22, ((((arr_3 [i_0 - 1]) > -2147483617)))));
        arr_4 [3] = (((arr_3 [i_0 - 1]) ? (~45722) : (max(7, var_17))));
        arr_5 [i_0] = var_5;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_23 = (arr_8 [i_1]);
        arr_9 [i_1] = (arr_6 [i_1]);
        var_24 = ((((var_8 ? -29156 : 2)) <= var_12));
        arr_10 [i_1] = (132 > 1);
    }
    #pragma endscop
}
