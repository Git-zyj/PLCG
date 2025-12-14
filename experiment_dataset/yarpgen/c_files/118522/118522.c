/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118522
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])));
        var_12 = (arr_0 [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 11;i_1 += 1)
    {
        arr_7 [i_1] = var_10;

        for (int i_2 = 3; i_2 < 10;i_2 += 1)
        {
            arr_12 [i_1] = arr_11 [i_1] [i_2 - 2];
            var_13 = 16069;
            var_14 = arr_11 [2] [i_2 - 2];
        }
    }
    var_15 ^= (!var_11);
    var_16 = (max((((var_6 | (24753 / var_7)))), var_9));
    #pragma endscop
}
