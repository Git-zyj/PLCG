/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176571
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_3;
    var_13 = var_2;
    var_14 = (min(var_14, var_9));

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (arr_1 [5] [i_0]);
        arr_3 [1] [i_0] = (min((((((arr_0 [i_0] [i_0]) * (arr_1 [i_0 - 3] [i_0]))) ^ (arr_1 [i_0 + 1] [i_0]))), ((-var_1 & (arr_0 [i_0] [2])))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 13;i_2 += 1)
        {
            arr_10 [i_2] = (arr_9 [i_2]);
            arr_11 [i_1] [i_1] = (((arr_1 [i_1] [0]) + (((var_7 * (arr_6 [i_1] [i_1]))))));
        }
        for (int i_3 = 3; i_3 < 13;i_3 += 1)
        {
            var_15 = (arr_5 [i_3 - 3]);
            arr_16 [i_1] = (arr_13 [i_3] [i_3 - 3]);
        }
        var_16 = (arr_8 [i_1]);
        var_17 ^= ((-(arr_4 [i_1])));
        arr_17 [i_1] = ((-((var_10 ? (arr_1 [0] [0]) : var_3))));
        var_18 = (min(var_18, (arr_8 [i_1])));
    }
    #pragma endscop
}
