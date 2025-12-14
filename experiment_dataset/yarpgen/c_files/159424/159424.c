/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159424
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_13;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_20 = (arr_1 [i_0] [i_0]);
        arr_2 [i_0] [i_0] = (((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0] [i_0])));
        arr_3 [i_0] = (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0] [i_0])));
        var_21 = ((((((arr_0 [i_0]) + (arr_0 [i_0])))) ? (arr_1 [i_0] [i_0]) : ((~(arr_0 [i_0])))));
    }
    for (int i_1 = 1; i_1 < 11;i_1 += 1)
    {
        arr_6 [i_1] [i_1] &= ((((((!(arr_5 [i_1 + 1] [1]))) ? (arr_5 [9] [i_1]) : ((((arr_5 [i_1] [12]) << (((arr_4 [i_1 + 2] [i_1]) - 81))))))) - (((((min((arr_4 [i_1] [i_1]), (arr_5 [i_1] [i_1])))) | ((-(arr_5 [i_1] [i_1]))))))));
        arr_7 [i_1] = ((!((((arr_4 [i_1] [i_1 + 1]) % (((arr_4 [4] [i_1 + 2]) ? (arr_5 [i_1 - 1] [i_1 - 1]) : (arr_4 [i_1 + 2] [7]))))))));
        arr_8 [i_1] = (((arr_4 [i_1 - 1] [i_1 - 1]) % (((arr_4 [i_1] [i_1 - 1]) | (arr_5 [i_1] [i_1 + 1])))));
    }
    var_22 = var_3;
    #pragma endscop
}
