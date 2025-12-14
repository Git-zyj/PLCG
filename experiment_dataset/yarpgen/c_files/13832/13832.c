/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13832
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_11;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_0 [i_0] [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])));
        var_18 = (((var_11 <= 27941) ? (arr_0 [i_0] [i_0]) : 1));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_19 = (1 <= 229);
        var_20 = -109;
        var_21 = (min(var_21, ((((arr_3 [i_1]) ? var_14 : var_6)))));
        arr_5 [i_1] = ((var_2 ? 34091302912 : 0));
    }
    #pragma endscop
}
