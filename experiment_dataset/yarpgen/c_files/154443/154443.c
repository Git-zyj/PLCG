/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154443
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= (max(var_9, var_15));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_1] = (arr_2 [i_0] [i_0]);
                arr_6 [i_0] [i_1] = var_6;
            }
        }
    }

    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_18 = (min((arr_8 [i_2]), (arr_9 [i_2])));
        var_19 = (min((((((var_15 / (arr_9 [i_2])))) ? var_0 : var_13)), (arr_9 [i_2])));
    }
    for (int i_3 = 1; i_3 < 11;i_3 += 1)
    {
        arr_13 [i_3] = var_5;
        var_20 = (min(var_5, (min(((min(var_12, (arr_12 [i_3])))), (min((arr_7 [i_3]), var_10))))));
        var_21 = (min(var_21, var_10));
    }
    for (int i_4 = 3; i_4 < 9;i_4 += 1)
    {
        arr_17 [i_4] = var_1;

        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            var_22 = ((var_3 ? (((((var_6 ^ (arr_8 [i_5])))) ? ((var_1 ? (arr_9 [i_5]) : var_8)) : var_0)) : ((0 ? 1 : 4811443602625451892))));
            arr_20 [i_4] [i_4] [i_5] = var_15;
        }
        for (int i_6 = 3; i_6 < 9;i_6 += 1)
        {
            var_23 = (min(((var_1 ? (14654871970556962548 * var_13) : (arr_3 [i_6 - 2]))), (arr_12 [i_4])));
            arr_23 [i_4] [i_4] = (max(var_9, var_10));
            var_24 = (((min((arr_0 [i_4]), var_10)) ^ var_10));
            var_25 = (max(16384, (arr_0 [i_4])));
        }
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            var_26 = (max((arr_22 [i_4]), (((arr_10 [i_4] [i_7]) ? (min(var_1, (arr_7 [i_4]))) : var_11))));
            var_27 = (min(var_27, (((((((var_7 ? var_11 : (arr_16 [i_4])))) ? var_10 : (((min((arr_24 [6] [6] [i_7]), var_14))))))))));
        }
    }
    var_28 = (min(var_28, var_3));
    #pragma endscop
}
