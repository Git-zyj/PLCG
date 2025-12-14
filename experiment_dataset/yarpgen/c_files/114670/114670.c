/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114670
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_4;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (((var_0 || (arr_0 [i_0]))));
        var_12 = (((((arr_0 [i_0]) >> (((arr_1 [11] [i_0]) - (arr_1 [i_0] [i_0]))))) | (arr_0 [i_0])));
        var_13 = (arr_1 [i_0] [7]);
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = min(((((arr_4 [i_1] [i_1]) || 12))), (arr_4 [1] [i_1]));
        var_14 = (max((((arr_3 [8]) << (arr_3 [i_1]))), (((arr_3 [i_1]) & (arr_3 [i_1])))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        var_15 &= ((var_1 <= (arr_3 [i_2])));
        var_16 = 2716354360373694434;

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            arr_11 [i_2] = ((0 - 37393) == 2716354360373694434);
            var_17 = var_9;
        }
        arr_12 [i_2] = arr_10 [i_2] [i_2];
    }
    var_18 = var_4;
    var_19 += ((var_8 ? ((((((-13955 + 2147483647) << (var_5 - 153)))))) : var_1));
    #pragma endscop
}
