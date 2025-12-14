/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159966
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= var_5;
    var_21 = var_17;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_22 = (((var_9 >= var_1) ? (arr_1 [i_0 + 2]) : (((arr_1 [i_0 + 2]) ? (arr_0 [i_0]) : (arr_1 [i_0])))));
        var_23 = (min(var_23, ((((((~(arr_1 [i_0 - 2])))) ? (arr_0 [i_0]) : (arr_0 [i_0 + 1]))))));
    }
    #pragma endscop
}
