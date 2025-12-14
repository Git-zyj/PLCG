/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132475
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_1, var_7));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] [2] = ((14081 ? var_6 : ((51455 ? (arr_1 [1] [8]) : (arr_2 [i_0 - 2] [9])))));
        var_21 -= var_15;
        var_22 += 4294967295;
        var_23 &= -1618189463;
        var_24 += ((1 ? 1 : (arr_2 [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_7 [i_1] = (13270798070528177972 / 9);
        arr_8 [i_1] = var_1;
        var_25 ^= 3990;
        arr_9 [i_1] = ((((var_6 ? (arr_6 [i_1]) : (arr_6 [i_1]))) >> (((arr_5 [i_1] [i_1]) - 1752526491))));
    }
    #pragma endscop
}
