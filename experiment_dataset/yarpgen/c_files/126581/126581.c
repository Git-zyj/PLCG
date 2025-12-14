/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126581
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_13;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] = var_6;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_10 [i_2] [i_1] [i_1] [i_0] = (max((arr_4 [i_0]), var_3));
                    arr_11 [i_0] [i_1] [i_2] [i_0] = var_6;
                    arr_12 [i_2] [i_1] [i_1] [i_0] = 2678440543;
                    var_15 = (arr_0 [i_1]);
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                {
                    var_16 = (min(var_16, (((-51 ? var_11 : ((min(-1, var_7))))))));

                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        arr_25 [i_6] [i_6] &= (max(((var_5 > (((var_4 ? 1 : var_9))))), ((((max((arr_22 [i_6] [i_5] [i_4] [i_3]), var_4))) && (arr_22 [i_3] [i_4] [i_5] [i_6])))));
                        arr_26 [i_4] = min(((((arr_22 [i_4 + 1] [i_4] [i_4] [i_4]) || (arr_22 [i_4 + 1] [i_4] [i_4] [i_4])))), ((1 ? (arr_17 [i_4] [i_4 + 1]) : (((arr_23 [i_4]) ? var_10 : var_9)))));
                        var_17 *= 1;
                        var_18 = (max((max((arr_14 [i_4 + 4] [i_4 + 4]), (arr_14 [i_4 - 1] [i_4 - 2]))), ((max(1, -16222)))));
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        arr_29 [i_4] = (max(var_10, (((1 << (64 - 61))))));
                        var_19 = (min(var_19, ((min((max((min((arr_23 [1]), var_7)), (((var_9 ? (arr_13 [i_3]) : (arr_16 [i_3] [i_4] [i_5])))))), 2114163538)))));
                    }
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        var_20 = (~-27546);
                        var_21 = 77;
                        var_22 = (arr_16 [i_4] [i_5] [i_8]);
                        arr_34 [i_3] [i_4] [i_4] [i_8] = (((((arr_18 [i_3]) ? (((var_7 ? var_12 : (arr_24 [i_4])))) : 51)) <= 1935923494));
                    }
                }
            }
        }
        arr_35 [i_3] = 3726591806;

        /* vectorizable */
        for (int i_9 = 0; i_9 < 23;i_9 += 1)
        {
            var_23 = var_8;
            var_24 = (arr_30 [i_9]);
        }
    }
    for (int i_10 = 0; i_10 < 0;i_10 += 1)
    {
        arr_41 [i_10] = (min(var_10, ((((arr_38 [i_10] [i_10]) ? (arr_16 [i_10 + 1] [i_10] [i_10]) : ((min(var_1, var_13))))))));
        var_25 = var_9;
    }
    #pragma endscop
}
