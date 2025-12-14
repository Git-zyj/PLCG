/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127552
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_8 ? var_0 : (min(((var_11 ? var_5 : var_11)), (576460752169205760 & var_8)))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] [2] = ((((arr_0 [i_0] [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0]))));
        arr_3 [i_0] [13] = var_1;
        var_13 = (min((((var_11 ? var_2 : ((var_9 % (arr_0 [i_0] [i_0])))))), (max((arr_1 [i_0]), (arr_1 [i_0])))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 14;i_1 += 1)
    {
        arr_7 [4] = ((-((var_0 ? -330267868 : var_6))));
        arr_8 [12] = (((arr_0 [i_1 - 1] [i_1 - 1]) == var_4));
        arr_9 [i_1] &= (((arr_1 [i_1 + 1]) <= (arr_6 [i_1 + 1])));
        var_14 = (6768850661683225817 / -127);

        for (int i_2 = 1; i_2 < 12;i_2 += 1)
        {
            var_15 = (min(var_15, ((((arr_4 [i_1 + 1]) ? (arr_4 [i_2 - 1]) : var_4)))));
            var_16 = 260046848;
            var_17 += (((((1 ? var_0 : (arr_1 [i_2])))) ? -1147263441 : 576460752169205760));
            arr_14 [i_2] = (((9131 ? 12 : 56404)));
        }
    }
    var_18 = var_3;
    #pragma endscop
}
