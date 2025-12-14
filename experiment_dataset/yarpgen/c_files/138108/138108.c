/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138108
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        var_11 -= (((((0 ? (arr_1 [i_0 - 2] [i_0]) : -127))) ? ((~(arr_1 [i_0 + 2] [i_0 - 3]))) : (arr_0 [i_0] [i_0])));
        arr_2 [i_0] = (min((var_7 * 105), (min((arr_1 [i_0] [i_0 + 3]), 11747626781355904821))));
    }
    var_12 = var_5;
    #pragma endscop
}
