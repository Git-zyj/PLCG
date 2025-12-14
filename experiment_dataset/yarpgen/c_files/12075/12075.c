/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12075
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = -var_0;
    var_18 = var_15;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_19 = ((((var_2 ? var_7 : -63)) >= (!245)));
        var_20 = (max(var_20, (arr_1 [22])));

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            arr_4 [i_0] [i_0] [i_0] = (arr_1 [i_0]);
            arr_5 [i_0] = var_4;
        }
        for (int i_2 = 2; i_2 < 21;i_2 += 1)
        {
            arr_10 [i_0] [i_0] = (((arr_7 [i_0 + 2]) ? (arr_7 [i_0 + 2]) : (arr_7 [i_0 + 2])));
            arr_11 [i_0] [i_0] = (var_15 / 245);
            var_21 = (min(var_21, ((var_2 ? (arr_9 [18] [i_0 - 1]) : (arr_1 [8])))));
        }
    }
    for (int i_3 = 1; i_3 < 22;i_3 += 1) /* same iter space */
    {
        arr_16 [i_3] = (max(var_11, -19));
        var_22 = ((18 ? (-1788689286451947577 > 35) : (((arr_0 [i_3] [i_3 + 1]) << (((arr_0 [i_3] [i_3 - 1]) - 1631720767))))));
        var_23 |= var_10;
        var_24 = (max(var_24, (((((arr_7 [i_3 + 2]) ? (arr_12 [14]) : var_11))))));
    }
    var_25 &= (max(((((var_8 & var_12) || (-9223372036854775807 - 1)))), 239));
    #pragma endscop
}
