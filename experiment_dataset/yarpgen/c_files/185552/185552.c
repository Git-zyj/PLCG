/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185552
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= max(var_1, var_17);

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = (var_18 << ((((max((arr_1 [i_0]), var_6))) - 65432)));

        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            arr_7 [i_0] [i_1] = (arr_6 [i_0] [i_1 - 3] [i_1]);
            var_21 = (arr_3 [i_1 - 1] [i_1 + 1] [i_1 + 1]);
        }
    }
    for (int i_2 = 2; i_2 < 10;i_2 += 1)
    {
        arr_12 [i_2] [i_2 - 2] = var_2;
        var_22 *= ((var_3 ? (arr_8 [i_2 + 2] [i_2 - 1]) : ((max(1, var_6)))));
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 24;i_3 += 1)
    {
        arr_17 [i_3] = var_13;
        var_23 = (arr_15 [i_3 - 1] [17]);
        arr_18 [i_3 - 1] = var_16;
    }
    #pragma endscop
}
