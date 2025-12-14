/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126832
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= -1273116896;

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_18 = min((arr_2 [i_0 - 2]), 77);
        var_19 &= (min((arr_0 [i_0 + 2]), 79));
    }
    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {
        arr_6 [i_1] [i_1 - 1] |= (arr_5 [i_1]);
        var_20 = arr_5 [i_1 - 1];
        var_21 ^= (min((min((arr_4 [i_1 + 1]), (arr_4 [i_1 + 1]))), (min((arr_4 [i_1 + 1]), 77))));
        var_22 &= (min((max(79, (arr_4 [i_1 - 1]))), (~0)));
        var_23 = (max(var_23, var_6));
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        arr_11 [i_2] = min((arr_3 [i_2]), -var_14);
        arr_12 [i_2] = (arr_8 [i_2]);
    }
    #pragma endscop
}
