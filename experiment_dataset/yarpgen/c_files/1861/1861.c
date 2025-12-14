/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1861
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += (((((!((max(var_5, var_7))))))) * var_16);
    var_20 = (max(((((4294967295 != var_6) ? (7044 | var_13) : (var_13 * var_13)))), (((max(var_16, var_13)) * 38))));
    var_21 = ((max((max(var_11, var_17), (0 - 7044)))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_22 *= (max(((-((-(arr_0 [i_0] [i_0]))))), (min((((arr_0 [i_0] [i_0]) - 1443367773)), ((max(var_5, 0)))))));
        arr_2 [i_0] [i_0] = (max(12408, 16));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_23 = (((1 / (arr_4 [i_1]))) ^ var_11);
        arr_6 [i_1] = var_4;
        arr_7 [i_1] = ((21 ? (arr_4 [i_1]) : (arr_4 [i_1])));
        var_24 = (max(var_24, var_1));
    }
    #pragma endscop
}
