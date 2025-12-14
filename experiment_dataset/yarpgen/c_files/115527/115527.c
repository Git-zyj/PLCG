/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115527
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_16 = ((((arr_4 [i_0 + 1] [i_1 - 4] [i_1]) - var_12)));
                    arr_8 [i_1] [i_1] [8] = var_10;
                }
            }
        }
        arr_9 [i_0] = ((92 ? var_1 : var_3));
        arr_10 [i_0] = ((-119 == (arr_5 [i_0 - 2] [i_0 - 1] [i_0])));
        var_17 = ((var_2 ? (arr_5 [i_0] [i_0] [i_0]) : -93));
    }
    var_18 = var_1;
    var_19 -= (max(var_8, var_14));

    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        var_20 = (((~var_0) ? ((~(~var_6))) : (((min((arr_12 [i_3] [14]), var_14)) >> (((arr_11 [i_3] [i_3]) ? (arr_11 [9] [i_3]) : var_15))))));
        var_21 = arr_11 [i_3] [i_3];
        arr_13 [i_3] = 3744;
    }
    for (int i_4 = 1; i_4 < 12;i_4 += 1)
    {
        arr_16 [i_4] = (((!(arr_14 [i_4]))));
        var_22 = (((var_14 ? 18446744073709551615 : (arr_1 [i_4] [i_4 - 1]))));
        arr_17 [i_4] = min(-61791, var_0);
    }
    for (int i_5 = 1; i_5 < 7;i_5 += 1)
    {
        var_23 -= (!((((arr_18 [i_5 - 1]) >> (((arr_18 [i_5 + 2]) - 139))))));
        var_24 = ((((~((min(var_2, var_14))))) <= (arr_5 [i_5 + 2] [i_5 + 2] [i_5])));
    }
    #pragma endscop
}
