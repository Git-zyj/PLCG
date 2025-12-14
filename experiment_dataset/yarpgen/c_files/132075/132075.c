/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132075
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((max(((-(arr_1 [i_0] [i_0]))), ((min(0, (arr_1 [i_0] [i_0]))))))) ? (((min(var_9, var_14)))) : var_11));
        var_15 = (max(var_15, ((!(arr_0 [i_0] [i_0])))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_16 = ((~(arr_6 [i_1])));
        var_17 = var_7;
    }
    var_18 = (((((-((max(1373, var_9)))))) ? (((var_8 ? var_5 : var_4))) : var_14));
    var_19 = var_1;
    #pragma endscop
}
