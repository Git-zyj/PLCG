/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174406
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_4 [i_0] = var_9;
        var_13 |= (((arr_3 [i_0]) ? (arr_3 [i_0]) : 3));
    }
    for (int i_1 = 4; i_1 < 13;i_1 += 1)
    {
        arr_8 [i_1] = arr_7 [i_1 - 4];
        var_14 = (arr_3 [i_1 - 4]);
    }
    for (int i_2 = 2; i_2 < 21;i_2 += 1)
    {
        arr_11 [i_2] [i_2] = (((((arr_9 [i_2 - 2] [i_2 - 1]) ? (max(10236847539773275309, (arr_9 [i_2] [i_2]))) : 8209896533936276300)) << (((!(arr_10 [i_2 + 1]))))));
        arr_12 [i_2] = (max((arr_9 [i_2 - 1] [i_2]), (((arr_9 [i_2 - 2] [i_2 - 2]) ? (arr_9 [i_2 + 1] [i_2 + 1]) : (arr_9 [i_2 - 1] [i_2 - 1])))));
    }
    var_15 = var_11;
    #pragma endscop
}
