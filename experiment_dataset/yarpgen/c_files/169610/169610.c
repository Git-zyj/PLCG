/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169610
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(9, -1095813534));
    var_13 = 21;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_14 = var_6;
        arr_2 [i_0] = ((29 ? (arr_1 [i_0]) : var_3));
    }
    var_15 = ((-((-(var_0 & var_4)))));
    var_16 = (((((max(var_2, var_11)))) - ((((max(5241198791415880865, 15957045933044306124))) ? ((-1562803050 ? var_1 : var_6)) : (var_3 & var_0)))));
    #pragma endscop
}
