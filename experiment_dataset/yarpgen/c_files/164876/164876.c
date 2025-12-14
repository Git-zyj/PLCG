/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164876
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, 11));
    var_12 = var_4;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_13 = (((arr_0 [i_0] [i_0]) - (arr_0 [3] [i_0])));
        arr_2 [i_0] = (arr_1 [i_0] [i_0]);
        var_14 = (-(arr_0 [i_0] [i_0]));
        arr_3 [i_0] [i_0] = (-12 ^ (~9952));
    }
    for (int i_1 = 2; i_1 < 22;i_1 += 1)
    {
        var_15 = 42144;
        arr_6 [i_1] [i_1 + 2] = var_8;
    }
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        arr_10 [i_2 - 1] = ((!((max((min(var_8, 28)), -20)))));
        arr_11 [0] [i_2] = ((((var_2 ^ var_0) ^ (arr_7 [8]))));
        arr_12 [i_2 - 1] = (arr_4 [i_2]);
        var_16 = (min(var_16, (((((max((arr_4 [i_2]), (arr_8 [i_2] [i_2 - 1]))))) ? var_7 : (+-6)))));
        var_17 = (arr_1 [i_2 - 1] [i_2]);
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        var_18 = -6916776214934978275;
        var_19 = ((~((((((arr_14 [i_3]) ^ 23380))) ? (((arr_14 [i_3]) * (arr_5 [i_3]))) : 42139))));
    }
    var_20 = var_2;
    #pragma endscop
}
