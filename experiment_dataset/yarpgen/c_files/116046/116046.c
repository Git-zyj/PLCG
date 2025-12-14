/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116046
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_14 = (((arr_1 [i_0]) % (((arr_1 [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))));
        var_15 = (arr_0 [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        var_16 = 9481;
        var_17 ^= ((!(arr_3 [i_1 - 1] [8])));
        arr_5 [i_1] [i_1] = ((-(arr_4 [i_1 - 1])));
    }
    var_18 = var_2;
    var_19 = (max(var_19, var_3));
    #pragma endscop
}
