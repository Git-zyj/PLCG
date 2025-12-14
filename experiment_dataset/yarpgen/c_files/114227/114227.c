/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114227
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_15 = (max(var_15, var_4));
        var_16 = (((var_12 & (arr_1 [i_0]))));
        arr_2 [i_0] = (arr_1 [i_0]);
        var_17 = ((0 ? -6196602118464740033 : 16613));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_18 = (min(var_18, ((min((~-31671), -16613)))));
            var_19 = -0;
        }
    }
    for (int i_2 = 3; i_2 < 11;i_2 += 1)
    {
        arr_7 [i_2 - 2] = var_12;
        arr_8 [i_2 - 3] = arr_3 [14] [14];
        arr_9 [i_2] = -16637;
        arr_10 [i_2 + 1] [i_2 + 1] = ((var_10 ? -1 : var_11));
    }
    var_20 = (min(var_20, ((min(var_11, var_2)))));
    var_21 = 16619;
    #pragma endscop
}
