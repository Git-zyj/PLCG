/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153921
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, ((((((-((var_6 ? var_2 : 205))))) ? (min(var_6, var_11)) : var_8)))));
    var_14 = (max((max(var_8, var_5)), ((((40 ? 65535 : -1))))));
    var_15 = (max(var_15, ((min(var_8, var_6)))));
    var_16 = (max(-38, (((-9158 & 9164) | var_9))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_17 = (max(var_17, ((min(((-(max(-16777216, 20)))), (var_4 || -8))))));
        var_18 ^= (!171);
        var_19 = (min(28, (max(138, (arr_1 [i_0] [i_0])))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
    {
        var_20 = var_8;
        var_21 = (!0);
    }
    #pragma endscop
}
