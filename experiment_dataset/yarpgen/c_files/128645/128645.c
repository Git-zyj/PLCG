/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128645
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_11;

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        var_15 = (arr_0 [i_0] [i_0 - 3]);
        var_16 = ((~(((arr_0 [i_0] [i_0]) / (arr_0 [i_0] [i_0])))));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_17 = (max(var_17, (max(((-(arr_4 [12]))), (((arr_5 [i_1]) ? (~var_2) : (arr_4 [6])))))));
        var_18 = ((((max(16979, (min(var_1, var_12))))) ? (((arr_5 [i_1]) >> (((arr_3 [i_1]) - 6931737207561420940)))) : 1));
        var_19 = ((1048575 ? (var_3 != 236) : 52));
        var_20 = (min((arr_4 [i_1]), (((arr_2 [i_1]) ? (arr_2 [i_1]) : (arr_0 [i_1] [1])))));
        var_21 = var_10;
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_22 -= (arr_2 [2]);
        var_23 = (arr_1 [i_2]);
    }
    var_24 = var_8;
    #pragma endscop
}
