/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113819
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 1;
    var_16 = (min(var_16, var_8));

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0 - 1] = (((-9223372036854775807 - 1) ^ ((19882 ? -19880 : (arr_1 [i_0 + 2])))));
        arr_3 [i_0 + 2] &= (((var_7 && var_9) ? (-127 - 1) : (max((arr_1 [i_0 + 1]), var_0))));
        var_17 = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        arr_6 [i_1] = 17645678912031817861;
        arr_7 [i_1] [14] = (min((((arr_4 [i_1] [i_1]) | (arr_5 [i_1] [i_1]))), ((1557182631 & (arr_5 [22] [i_1])))));
        var_18 = arr_4 [i_1] [21];
        var_19 = (min(var_19, ((min((((min((arr_5 [i_1] [i_1]), 1557182631)) ^ (arr_5 [i_1] [i_1]))), 155)))));
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        arr_12 [i_2] = (arr_10 [i_2]);
        var_20 &= 72;
    }
    var_21 = var_8;
    var_22 ^= (255 || var_10);
    #pragma endscop
}
