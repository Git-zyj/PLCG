/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153537
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_11 = (arr_0 [i_0]);
        arr_2 [1] [i_0] = (arr_0 [3]);
        var_12 = (~var_4);
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_13 = (min(var_13, var_8));
        arr_6 [i_1] [i_1] |= arr_4 [i_1];
        var_14 = var_8;
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        var_15 = (arr_3 [i_2] [i_2]);
        arr_10 [i_2] [4] = (arr_7 [i_2]);
        arr_11 [i_2] = ((~((((!(arr_4 [i_2])))))));
    }
    for (int i_3 = 1; i_3 < 11;i_3 += 1)
    {
        var_16 = ((-(arr_14 [i_3])));
        var_17 = (arr_8 [i_3 + 1]);
        var_18 = (max(var_18, (((!((!(arr_3 [22] [i_3 - 1]))))))));
        var_19 = (~(arr_14 [i_3]));
    }
    var_20 = var_9;
    #pragma endscop
}
