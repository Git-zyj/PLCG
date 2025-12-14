/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139748
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_15 *= ((~(max((arr_1 [i_0 + 1] [i_0 + 1]), (arr_1 [i_0 - 1] [i_0 + 1])))));
        var_16 = ((((((arr_0 [i_0 - 1]) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 - 1])))) ? ((min((arr_0 [i_0 + 2]), (arr_0 [i_0 + 1])))) : (((arr_0 [i_0 + 1]) ? (arr_0 [i_0 + 1]) : (arr_0 [i_0 + 2])))));
        var_17 = ((+(((arr_1 [i_0] [i_0 + 1]) ? (arr_1 [i_0] [i_0 + 2]) : (arr_1 [i_0] [i_0 - 1])))));
        var_18 = ((-(((arr_1 [i_0 + 2] [i_0 - 1]) ? (arr_1 [i_0 + 1] [i_0 + 1]) : (arr_1 [i_0 + 2] [i_0 + 2])))));
        var_19 = (((((((((arr_0 [i_0 - 1]) ? (arr_0 [8]) : (arr_0 [i_0 + 2])))) ? (((arr_0 [i_0]) ? (arr_1 [i_0] [i_0 + 2]) : (arr_1 [i_0] [i_0]))) : (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0 + 2] [i_0])))))) ? (max(((((arr_1 [i_0 + 2] [i_0 + 2]) && (arr_1 [i_0 - 1] [i_0 + 2])))), ((2065917560 ? 0 : 60836)))) : ((((((arr_1 [7] [7]) ? 79307707 : (arr_1 [i_0] [i_0 - 1])))) ? ((-(arr_0 [i_0 + 1]))) : (arr_0 [i_0 + 1])))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        arr_6 [i_1] = ((arr_2 [i_1] [i_1]) ? (((arr_5 [i_1] [i_1]) ? (arr_4 [i_1] [i_1]) : (arr_3 [i_1]))) : ((59 ? (arr_5 [i_1] [i_1]) : -25941)));
        arr_7 [i_1] = (((arr_3 [i_1]) ? (arr_2 [i_1] [i_1]) : (arr_5 [i_1] [i_1])));
        arr_8 [i_1] [i_1] = 0;
    }
    var_20 = ((!((min((-127 - 1), ((-79307707 ? -1 : var_14)))))));
    #pragma endscop
}
