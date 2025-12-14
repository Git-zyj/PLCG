/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125130
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        var_17 = (min(var_17, var_14));
        var_18 = (+-3035);
        arr_3 [i_0] = ((~(~-2002839599)));
        var_19 = (!0);
        arr_4 [15] [i_0] = max(((~(var_11 * var_4))), var_8);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_20 = 93;
        arr_8 [i_1] = (arr_7 [i_1]);
    }
    var_21 = (((((~(2002839598 ^ var_9)))) ? ((~((var_2 ? 124432852 : var_16)))) : var_9));
    var_22 = ((~(max((var_1 & 155), var_14))));
    #pragma endscop
}
