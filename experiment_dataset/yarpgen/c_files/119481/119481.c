/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119481
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = -var_12;
    var_20 = ((((((((var_6 ? var_6 : var_4))) ? ((max(var_16, var_13))) : (var_14 <= var_8)))) ? (((var_11 + (max(var_11, var_2))))) : var_0));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_21 = (((((max((arr_1 [i_0]), var_7)) > ((var_12 ? (arr_0 [i_0]) : var_1)))) ? ((((var_5 ? (arr_1 [i_0]) : (arr_2 [i_0] [i_0]))) - (arr_2 [i_0] [i_0]))) : ((-((var_8 ? var_9 : (arr_0 [i_0])))))));
        var_22 = ((((((((arr_2 [i_0] [i_0]) < (arr_1 [i_0])))) / (arr_1 [10])))) ? (min(((((arr_0 [i_0]) ? var_3 : (arr_1 [i_0])))), (max(var_16, var_17)))) : ((((((max((arr_2 [i_0] [i_0]), (arr_0 [i_0])))) < (max(var_7, (arr_0 [i_0]))))))));
    }

    /* vectorizable */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_23 ^= (arr_0 [i_1]);
        var_24 ^= ((0 ? 65535 : 13600838789649423403));
    }
    for (int i_2 = 4; i_2 < 8;i_2 += 1)
    {
        arr_7 [4] = (max(((-(((arr_2 [21] [i_2 - 2]) / var_8)))), ((((arr_3 [i_2 + 2]) >= (arr_3 [i_2 + 2]))))));
        var_25 = (arr_1 [1]);
        arr_8 [i_2] = ((!((!((((arr_0 [i_2]) ? (arr_3 [i_2]) : var_16)))))));
    }
    #pragma endscop
}
