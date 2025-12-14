/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101921
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_1 ? 18446744073709551615 : (min(7, ((18446744073709551609 ? 138 : 7446108920966662008))))));

    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {
        var_20 = (201326592 >= -16);
        var_21 = (min(var_21, var_9));
        arr_4 [7] = 1;
        var_22 = (-((((var_14 ? (-127 - 1) : 190968497)))));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        arr_7 [i_1] [14] = ((((min(-3, var_13))) ? (((max(-552802896, var_17)) - var_7)) : (((((var_18 >> (var_9 - 1831896084)))) ? ((var_3 ? 35390 : 17)) : ((min((arr_6 [i_1] [i_1]), (arr_6 [i_1] [i_1]))))))));
        arr_8 [i_1] = (((((+((((arr_5 [1]) <= var_6)))))) ? (min(((18446744073709551615 ? 7446108920966662008 : (arr_6 [15] [15]))), 15)) : ((11000635152742889605 ? (((552802892 ? var_15 : 49288))) : (min(var_11, var_13))))));
    }
    var_23 = ((-190968479 / ((min(var_12, var_15)))));
    var_24 = ((((((527837154 ? 18446744073709551602 : var_16)) ? 1138321440 : -16235))));
    #pragma endscop
}
