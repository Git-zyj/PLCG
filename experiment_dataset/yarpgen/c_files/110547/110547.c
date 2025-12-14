/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110547
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_16 = (max(var_16, ((max((max(((((arr_0 [2]) <= var_1))), (max(var_9, var_8)))), var_9)))));
        var_17 ^= (max((((((((arr_0 [12]) > (arr_0 [8]))))) * (min((arr_0 [6]), (arr_1 [3]))))), var_5));
        var_18 = (max(var_18, (arr_0 [10])));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {
        var_19 = (arr_3 [i_1 + 1] [i_1 - 1]);
        arr_5 [i_1 + 1] = (((arr_2 [i_1 - 1] [i_1 + 1]) || ((var_9 < (arr_4 [i_1] [i_1])))));
        arr_6 [i_1] = ((var_12 ? (arr_3 [i_1] [i_1]) : (arr_4 [1] [i_1])));
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        arr_9 [12] = (arr_8 [i_2] [i_2]);
        var_20 = (max(var_20, ((max(((((~(arr_8 [i_2] [i_2]))))), ((~(max(var_12, (arr_8 [i_2] [i_2]))))))))));
        var_21 = ((((min(var_15, (arr_7 [i_2])))) ? (((arr_7 [i_2]) ? var_2 : var_6)) : ((var_10 ? (arr_7 [i_2]) : (arr_7 [i_2])))));
        arr_10 [i_2] = (max((((arr_7 [i_2]) >> 4)), (arr_8 [i_2] [11])));
    }
    var_22 = var_9;
    #pragma endscop
}
