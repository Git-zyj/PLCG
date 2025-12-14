/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132265
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (var_0 | -24442);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [2] [i_0] &= 2790963961;
        var_19 = (!0);
        var_20 = 18446744073709551615;
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = ((((((arr_5 [i_1]) ? (arr_4 [i_1]) : -18))) ? (max(0, 0)) : (((((4026531840 ? var_13 : (arr_5 [i_1]))))))));
        arr_8 [i_1] &= 1;
    }
    #pragma endscop
}
