/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109397
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        arr_2 [21] = (min(((var_1 ? 57553 : var_1)), ((min(52, (arr_1 [i_0 - 1] [i_0 - 1]))))));
        arr_3 [i_0] = ((((!(arr_1 [i_0] [i_0 + 2]))) ? (~57553) : (max((((arr_1 [i_0] [i_0]) & 1)), ((((arr_1 [i_0] [i_0]) != (arr_1 [16] [i_0]))))))));
        arr_4 [i_0] = 43;
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        var_17 = ((((~(arr_1 [i_1] [i_1]))) % (arr_6 [i_1 - 1] [2])));
        var_18 = (((arr_6 [i_1 - 1] [i_1 - 1]) ? ((4294967282 ? (arr_5 [0] [i_1]) : (arr_5 [i_1] [i_1]))) : var_0));
        arr_7 [i_1] [i_1] = (arr_0 [i_1 - 1] [i_1 - 1]);
    }
    for (int i_2 = 2; i_2 < 23;i_2 += 1)
    {
        arr_10 [7] = ((((((!(arr_9 [i_2]))) && ((((arr_9 [i_2]) ? -70 : var_1))))) || ((867612599 != (max(137, (arr_9 [17])))))));
        arr_11 [i_2] = (((min((arr_9 [i_2]), 1))));
        var_19 += ((((((var_16 ? (arr_9 [i_2]) : (arr_8 [i_2 - 2]))) | ((((arr_8 [i_2]) ^ -1432469565))))) ^ (~-867612615)));
        arr_12 [i_2] = (arr_8 [i_2]);
    }
    var_20 = (((max(var_7, (min(var_6, 3131627867)))) + var_3));
    #pragma endscop
}
