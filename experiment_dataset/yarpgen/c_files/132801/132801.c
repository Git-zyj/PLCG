/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132801
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, ((((((-(((var_4 + 2147483647) << (var_1 - 3826374057)))))) < ((var_0 ? var_6 : var_8)))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_12 = ((((((2226616938983744683 >= (arr_0 [i_0]))) ? (arr_2 [i_0]) : -0)) < (arr_3 [i_0 - 1] [i_0 - 1])));
                var_13 = (min(var_13, ((!((max((arr_1 [i_0 - 1]), 4294967295)))))));
            }
        }
    }
    var_14 = (min(var_14, (((var_0 ? ((var_10 ? ((var_7 ? 0 : 12932)) : var_1)) : (var_0 == var_10))))));
    var_15 = (min(var_15, ((max((((((var_2 ? var_1 : var_0)) != var_2))), (((var_9 || var_1) ? (((var_7 ? var_1 : var_7))) : ((var_0 ? var_6 : var_1)))))))));
    #pragma endscop
}
