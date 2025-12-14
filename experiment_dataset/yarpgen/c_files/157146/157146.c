/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157146
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 = var_9;
        var_14 = (max(var_14, -5620));
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {
        arr_4 [10] = (max(var_12, (min((arr_2 [i_1 + 2]), 15430))));
        var_15 = 4095;

        for (int i_2 = 4; i_2 < 11;i_2 += 1)
        {
            var_16 = var_11;
            var_17 = ((-((~(arr_2 [i_2 - 4])))));
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        var_18 = var_3;
        arr_12 [0] [0] = ((((!(arr_9 [10] [0]))) ? var_0 : (arr_6 [i_3] [i_3])));
        arr_13 [i_3] [i_3] = -1;
    }
    var_19 = ((-(((var_10 && (((var_6 ? var_4 : var_11))))))));
    #pragma endscop
}
