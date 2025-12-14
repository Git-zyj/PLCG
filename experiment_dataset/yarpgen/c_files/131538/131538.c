/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131538
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_4 [i_0] = 3536803946;
        arr_5 [i_0] = ((!((max((arr_2 [i_0]), 3536803963)))));
        var_19 = (arr_1 [i_0]);
    }
    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {
        arr_8 [6] = (((((arr_7 [i_1]) % var_2)) < var_0));
        var_20 = ((3536803963 ? 18 : 1808681371));
    }

    for (int i_2 = 1; i_2 < 23;i_2 += 1)
    {
        var_21 = ((+(min((arr_10 [i_2 + 2]), var_6))));
        var_22 = 114;
        arr_11 [12] = ((((((arr_9 [i_2 + 2]) >> ((((158 ? 601236350812272605 : -1)) - 601236350812272602))))) ? (((min((arr_9 [i_2]), var_13)) / (((min(-18, 18)))))) : (arr_10 [i_2 - 1])));
        arr_12 [i_2] = (min(((819188508 ? -31930 : 32628)), (((max(var_7, var_14))))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        arr_16 [i_3] = -19969;
        var_23 = ((((var_11 ? var_14 : (arr_13 [7] [7])))) ? (arr_9 [i_3]) : (var_10 >> var_8));
    }
    for (int i_4 = 2; i_4 < 13;i_4 += 1)
    {
        arr_21 [i_4] = (~var_18);
        var_24 = ((((arr_3 [i_4 - 2]) ? (arr_10 [i_4 - 2]) : 0)));
        arr_22 [i_4] = (min(var_15, ((((arr_10 [i_4 - 2]) - (arr_10 [i_4 - 2]))))));
        var_25 = (((((((var_0 ? 24 : var_15))) ? (arr_0 [i_4 - 2] [0]) : (((arr_9 [i_4]) ? var_5 : (arr_9 [5]))))) - var_14));
    }
    var_26 = -16376;
    #pragma endscop
}
