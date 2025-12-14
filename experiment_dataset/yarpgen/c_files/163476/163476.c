/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163476
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_2;

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        var_17 = ((((((18766 ? (arr_1 [10]) : 19)))) && ((((65532 && 1) ? (~var_10) : (arr_2 [i_0]))))));
        arr_3 [i_0] = (((((max(18446744073709551614, 5)) & ((var_11 ? var_14 : var_12)))) + (min((~5), 2305843009213693952))));
    }
    #pragma endscop
}
