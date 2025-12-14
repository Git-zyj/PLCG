/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119395
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((-var_3 ? (((var_5 ? -var_1 : (-24 ^ 7)))) : (~var_3)));
    var_20 = var_17;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_21 += (var_10 ? ((((arr_1 [i_0]) * var_17))) : (arr_0 [2]));
        var_22 = (arr_0 [i_0]);
        var_23 = ((~(arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_24 = ((~((max(29, 26)))));
        var_25 = -7;
    }
    /* vectorizable */
    for (int i_2 = 3; i_2 < 17;i_2 += 1)
    {
        arr_9 [14] = (var_13 < -7);
        arr_10 [i_2 + 2] [i_2 + 1] = ((2 / (~var_5)));
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        var_26 = (max((max(55729, ((7 ? (arr_11 [i_3]) : 127)))), var_9));
        var_27 = (~20);
        arr_13 [i_3] &= (arr_2 [i_3] [i_3]);
    }
    #pragma endscop
}
