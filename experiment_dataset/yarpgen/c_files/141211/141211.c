/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141211
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += 12945177146433244698;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_11 &= (arr_0 [i_0 - 1] [i_0 - 1]);
        var_12 = ((3708565534 - (arr_1 [i_0 + 1])));
        var_13 = 4663068808403884009;
        arr_2 [i_0 - 1] = ((((!(arr_1 [i_0]))) ? (((15 ? (arr_0 [i_0] [i_0]) : 3752599506))) : (arr_1 [i_0 + 1])));
        var_14 = (((6 >= var_8) ? var_2 : ((~(arr_1 [i_0 - 1])))));
    }
    for (int i_1 = 3; i_1 < 13;i_1 += 1)
    {
        arr_5 [i_1 - 2] = (((((-(arr_0 [i_1 - 3] [i_1 - 2])))) - (arr_0 [i_1 - 1] [i_1 - 1])));
        var_15 = ((-(((arr_0 [i_1 - 1] [i_1 + 1]) + 140))));
        var_16 = (min((((arr_0 [i_1 - 1] [i_1 - 1]) ^ (max(7118690966914970751, (arr_1 [7]))))), (arr_0 [i_1 + 1] [i_1 - 1])));
    }
    var_17 = (((((288230376151711743 ? var_4 : (~var_1)))) ? (max(var_8, ((1322162536315760174 ? var_1 : var_4)))) : var_4));
    #pragma endscop
}
