/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183099
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_11 ^= (arr_0 [i_0 + 1] [i_0 + 1]);
        var_12 = ((arr_0 [i_0] [i_0]) >= (arr_1 [7] [i_0 + 1]));
        arr_2 [i_0] = -var_0;
        var_13 = (max(var_13, (arr_0 [i_0] [i_0 + 1])));
        arr_3 [i_0] [i_0] = ((~(arr_0 [i_0 + 1] [i_0 + 1])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = (arr_5 [i_1] [i_1]);
        var_14 = -45;
        var_15 = (min(var_15, (((~((~(arr_4 [i_1]))))))));
    }
    var_16 = (~197);
    var_17 ^= ((15 ? var_7 : var_6));
    #pragma endscop
}
