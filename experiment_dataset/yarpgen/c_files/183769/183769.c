/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183769
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_20 &= ((((((((arr_1 [i_0]) <= (arr_1 [i_0]))) ? (arr_1 [i_0]) : ((((arr_1 [i_0]) || (arr_0 [i_0]))))))) ? (arr_1 [i_0]) : ((+((min((arr_1 [i_0]), (arr_1 [i_0]))))))));
        var_21 = (max((((arr_0 [i_0]) ? (((arr_0 [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0]))) : ((((arr_0 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))))), ((((arr_0 [i_0]) || ((((arr_1 [1]) ? 0 : (arr_0 [7])))))))));
        var_22 = ((!((((arr_0 [i_0]) ? 0 : (arr_1 [i_0]))))));
    }

    /* vectorizable */
    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {
        var_23 = (min(var_23, (arr_4 [i_1] [i_1])));
        var_24 &= (arr_4 [i_1 - 1] [i_1 - 1]);
        var_25 = (((arr_3 [i_1 - 1]) ? (arr_3 [i_1 + 1]) : ((((!(arr_3 [i_1])))))));
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        var_26 ^= min(0, (((arr_3 [i_2]) / (arr_3 [i_2]))));
        arr_8 [i_2] &= arr_0 [i_2];
        arr_9 [i_2] &= (((((-(arr_1 [i_2])))) ? ((((arr_0 [i_2]) ? (((-(arr_7 [i_2])))) : (arr_3 [i_2])))) : (min(((((arr_6 [i_2]) > (arr_4 [i_2] [7])))), 16949151287489153770))));
    }
    #pragma endscop
}
