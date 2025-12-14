/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153431
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] = ((3336 ? var_12 : 3567155338));
        var_14 = var_8;
        var_15 = (max(var_15, var_10));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_7 [1] [1] = (((!105) ? 18159 : (((10448383818618709497 == 4) ? 26 : ((22354 ? var_6 : 1))))));
        arr_8 [i_1] = (-((236 % (max(0, 18446744073709551584)))));
    }
    var_16 = ((18446744073709551612 ? var_6 : 1400300138));
    var_17 = min(var_5, ((19 ? 18446744073709551611 : 1641416471)));
    var_18 = var_7;
    var_19 = (max(var_19, -0));
    #pragma endscop
}
