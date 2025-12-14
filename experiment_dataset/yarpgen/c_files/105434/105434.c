/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105434
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, var_3));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_17 = var_13;
        arr_2 [i_0] [i_0] = var_6;
    }
    for (int i_1 = 2; i_1 < 19;i_1 += 1)
    {
        arr_6 [i_1] = ((((arr_3 [i_1 + 3] [i_1 + 3]) < ((var_10 ? -2380015832971690546 : var_1)))));
        var_18 = (max(var_18, (~var_11)));
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        var_19 = (((arr_7 [i_2] [i_2]) ? (arr_7 [0] [i_2]) : (arr_7 [i_2] [i_2])));
        arr_10 [i_2] = ((var_6 ? -28205 : (arr_0 [i_2] [i_2])));
        arr_11 [i_2] = var_8;
    }
    #pragma endscop
}
