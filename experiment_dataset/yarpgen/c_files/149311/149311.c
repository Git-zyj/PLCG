/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149311
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((((1 ? var_12 : 1181768899)) + ((min(var_13, var_7))))) < (((~(min(-1822199266, 0)))))));
    var_17 = (max(var_8, (min((min(-3868, var_10)), ((max(var_2, 1)))))));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        var_18 = (max(var_18, (((0 ? (arr_0 [22] [i_0 + 3]) : 18507)))));
        var_19 = ((!(arr_0 [i_0] [i_0 + 1])));
        arr_3 [i_0] = (arr_2 [i_0 - 2] [i_0]);
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        arr_8 [1] = 761828545;
        var_20 = ((-((1 ? (arr_7 [i_1] [i_1]) : (arr_4 [i_1])))));
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        var_21 += 1;
        arr_11 [5] = (max(((1 ? -8274670007479166050 : 21184)), 21184));
    }
    #pragma endscop
}
