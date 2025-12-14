/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138370
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = ((var_6 ? -8811 : 7824));

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_17 = ((0 ? (arr_5 [i_0] [i_0]) : 1724239742));
            arr_7 [i_0] [8] [i_1] &= (-8811 || -8796);
            var_18 ^= -8811;
        }
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 19;i_2 += 1)
    {
        var_19 = ((!(arr_8 [i_2 + 1])));
        var_20 -= 23036;
        arr_10 [i_2] [i_2] = -7211649838848673604;
        var_21 -= ((var_7 | (arr_9 [i_2 - 1])));
    }
    var_22 = (((((var_16 - (((min(var_1, var_3))))))) ? ((var_5 ? (var_9 / var_14) : (min(var_15, var_3)))) : var_6));
    var_23 = (var_13 && (2550444939 >= 10881980855977336834));
    #pragma endscop
}
