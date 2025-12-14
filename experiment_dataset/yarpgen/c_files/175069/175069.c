/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175069
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((+(((!var_2) ? (~var_13) : (!var_11)))));

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_15 = arr_1 [0] [i_0];
        var_16 = (min(var_16, (((((((arr_0 [i_0]) ? (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0] [i_0]))) : ((~(arr_1 [i_0] [i_0])))))) ? ((((!(arr_0 [0]))) ? (((arr_0 [7]) ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0]))) : (((arr_1 [i_0 - 1] [0]) ? (arr_1 [i_0] [4]) : (arr_0 [4]))))) : (arr_0 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_17 = (((arr_0 [i_1]) ? (((((-(arr_4 [i_1])))) ? (arr_3 [i_1]) : ((((!(arr_0 [8]))))))) : (arr_0 [i_1])));
        var_18 = ((!((((arr_2 [i_1]) ? (arr_0 [i_1]) : (arr_1 [i_1] [9]))))));
        var_19 &= (arr_0 [1]);
        var_20 = (!(arr_2 [4]));
        var_21 = ((!(((~(((arr_2 [i_1]) ? (arr_1 [i_1] [i_1]) : (arr_3 [i_1]))))))));
    }
    var_22 = ((var_6 ? var_4 : -var_9));
    var_23 ^= var_2;
    #pragma endscop
}
