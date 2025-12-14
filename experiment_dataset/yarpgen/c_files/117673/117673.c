/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117673
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_9 ? (((((max(var_1, 18446744073709551604))) ? ((937568016 ? var_8 : var_3)) : 0))) : (((((var_4 ? var_0 : var_4))) ? var_1 : (min(0, var_6))))));
    var_11 = ((12 ? 31 : 0));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_12 -= 126;
        var_13 = (~23714);
        var_14 = (arr_0 [i_0 - 2] [i_0 + 1]);
        var_15 -= (61 * var_2);
    }
    #pragma endscop
}
