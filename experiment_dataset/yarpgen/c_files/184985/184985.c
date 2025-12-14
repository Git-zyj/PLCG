/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184985
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_10;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        arr_4 [i_0] = var_1;
        arr_5 [i_0] = ((+(((arr_0 [i_0]) ? (arr_1 [i_0 - 1]) : (arr_2 [i_0] [i_0])))));
        var_12 = ((((arr_3 [i_0]) ? (arr_2 [6] [i_0]) : (arr_1 [i_0]))));
    }
    var_13 = var_6;
    var_14 = ((-((var_4 ? 785636878316391909 : var_3))));
    var_15 ^= ((max(((4035016282 ? 1 : 2076412843), (~var_1)))));
    #pragma endscop
}
