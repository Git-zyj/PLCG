/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18709
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_14;
    var_18 = (min(var_18, var_8));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 = (((arr_1 [i_0] [i_0]) << (((arr_0 [i_0]) - 3270154922))));

        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            var_20 = ((~(arr_0 [i_1 - 2])));
            var_21 = ((~(arr_1 [10] [i_1 + 1])));
            var_22 = var_2;
        }
        var_23 = (min(var_23, (8 / 7)));
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 9;i_2 += 1)
    {
        var_24 = (max(var_24, (arr_1 [i_2 + 1] [i_2 - 1])));
        var_25 += ((((((arr_5 [i_2]) ? 1 : var_11))) ? (0 < 16) : -21291));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        var_26 -= ((-(arr_8 [i_3] [i_3])));
        var_27 = (max(var_27, ((((arr_7 [i_3]) ? (arr_8 [i_3] [i_3]) : (arr_7 [i_3]))))));
    }
    var_28 = ((((var_13 <= (var_12 <= var_10))) || var_4));
    #pragma endscop
}
