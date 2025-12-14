/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115930
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;
    var_11 |= var_2;
    var_12 = (max(var_12, var_7));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        var_13 += (arr_1 [i_0 - 3]);
        arr_3 [i_0] = (((arr_2 [i_0]) & ((((arr_0 [i_0 + 1]) <= 18155842359317483340)))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_14 = (max(var_14, (arr_5 [i_1] [i_1])));
        var_15 = (arr_5 [7] [i_1]);
        var_16 = (min(var_16, ((((arr_4 [4]) - (arr_4 [8]))))));
        var_17 = (((((arr_4 [i_1]) && (arr_5 [i_1] [i_1]))) && ((max((arr_4 [i_1]), (arr_4 [i_1]))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            arr_12 [6] [i_3] [i_2] = (((arr_11 [i_2] [i_2]) & (arr_4 [i_2])));
            var_18 = (arr_9 [17] [i_3]);
        }
        for (int i_4 = 1; i_4 < 18;i_4 += 1)
        {
            var_19 ^= (arr_8 [i_4 - 1] [2]);
            var_20 = (arr_13 [i_2] [i_2] [i_2]);
        }
        var_21 |= (arr_7 [i_2]);
        arr_15 [i_2] = (arr_10 [i_2]);
        arr_16 [i_2] = (((arr_6 [i_2] [i_2]) * (arr_8 [i_2] [i_2])));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
    {
        arr_19 [i_5] = (arr_5 [i_5] [i_5]);
        var_22 = (arr_9 [8] [i_5]);
        var_23 = (arr_4 [i_5]);
        var_24 = (arr_9 [i_5] [i_5]);
        var_25 = (arr_6 [i_5] [i_5]);
    }
    #pragma endscop
}
