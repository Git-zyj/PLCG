/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146770
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] [13] |= (arr_1 [i_0]);
        arr_4 [0] = var_3;
        arr_5 [1] [10] = (arr_1 [i_0]);
        var_20 = ((var_14 ^ (arr_1 [i_0])));
        arr_6 [i_0] = (var_5 * var_15);
    }
    var_21 = var_17;
    var_22 = ((var_0 ? (((max(18, var_5)))) : ((var_13 ? (~var_18) : var_3))));
    var_23 *= var_5;
    var_24 &= ((1631659675 ? var_12 : (var_16 || var_2)));
    #pragma endscop
}
