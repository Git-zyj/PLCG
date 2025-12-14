/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14045
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_8;

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        var_11 = (max(var_11, ((min((max(23538, (arr_0 [i_0] [i_0]))), 127)))));
        var_12 = ((min(46055, (arr_2 [2]))));
        arr_4 [i_0] [i_0 - 1] = (arr_2 [i_0]);
        var_13 = ((-((var_6 / (arr_1 [i_0])))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 12;i_1 += 1)
    {
        arr_7 [i_1] = 5;
        arr_8 [i_1] = (arr_3 [i_1 - 2]);
        var_14 = ((-127 ? -124 : (arr_2 [i_1])));
    }
    #pragma endscop
}
