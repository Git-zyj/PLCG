/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13583
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= var_14;
    var_21 |= var_14;

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        arr_4 [21] [21] |= var_17;
        var_22 = (min(var_22, (arr_0 [22])));
        var_23 = (((var_13 ? (arr_0 [i_0 - 1]) : 14674)));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 16;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 17;i_2 += 1)
        {
            var_24 = var_0;
            arr_9 [8] [i_2] [i_1] |= (((((var_7 ? (arr_0 [i_2]) : (arr_3 [i_1] [6])))) != var_5));
            var_25 = ((((((arr_7 [3] [1]) * 0))) != (arr_2 [i_2 - 1] [i_1 + 2])));
        }
        arr_10 [i_1] |= (((var_2 ? var_11 : 14674)));
    }
    var_26 = var_15;
    var_27 = (min(var_27, (((var_0 ? ((var_7 ? 1 : ((1 ? -128367445 : var_15)))) : (((((58582 ? 1 : 9))) ? var_12 : 22300)))))));
    #pragma endscop
}
