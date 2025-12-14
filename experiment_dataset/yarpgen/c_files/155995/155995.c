/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155995
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (var_9 <= var_8);

    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        var_18 = (((785944017 * (-785944018 / var_1))));
        var_19 = var_16;
        var_20 = (min(var_20, (min(-785944017, -785944019))));
    }
    for (int i_1 = 4; i_1 < 13;i_1 += 1)
    {
        var_21 = (15438 > var_4);
        var_22 *= (+-25789);
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 23;i_2 += 1)
    {
        var_23 = -785944010;
        var_24 = var_10;
        var_25 |= -785944016;
        var_26 = var_1;
    }
    for (int i_3 = 3; i_3 < 9;i_3 += 1)
    {
        var_27 = -23;
        var_28 = (max(var_28, var_13));
    }
    var_29 = var_11;
    #pragma endscop
}
