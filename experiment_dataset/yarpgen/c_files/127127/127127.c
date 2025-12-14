/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127127
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_14 = (arr_1 [i_0 + 1]);
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_9 [i_1] = ((arr_5 [i_1 - 2] [8] [i_2]) - (arr_5 [i_1 - 3] [6] [i_1]));
                    var_15 = (min(var_15, -var_5));

                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        arr_14 [i_0] [9] [1] [i_2] [i_0] = (arr_6 [i_1] [i_2]);
                        var_16 = (163 | 163);
                        arr_15 [i_0] [i_0] [i_0] = (arr_12 [i_0] [i_3 + 1] [i_1 - 2] [i_0 - 1]);
                    }
                    for (int i_4 = 4; i_4 < 14;i_4 += 1)
                    {
                        arr_19 [i_4] [i_2] [i_1] [3] = (arr_17 [i_0] [i_0] [i_2] [i_4] [i_4 - 1]);
                        arr_20 [i_4 - 2] [i_4] [i_2] [i_2] [i_1 - 2] [i_0] = ((-(arr_8 [i_0 + 1] [i_0 + 2] [3])));
                    }
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        var_17 = (max(var_17, ((((arr_17 [i_0 - 1] [i_0 + 2] [i_0 - 1] [i_0 + 1] [i_0 - 1]) >= (arr_17 [i_0] [i_0 + 2] [i_0 + 2] [14] [6]))))));
                        var_18 = (min(var_18, 355981170));
                        arr_25 [i_5] [i_1] [i_5] [i_1] = ((!(arr_8 [i_5] [i_0 - 1] [i_0])));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {
        var_19 = (!111651887);
        var_20 = arr_7 [i_6] [i_6];
        var_21 = (((arr_5 [10] [6] [i_6]) + ((((arr_23 [i_6] [i_6] [10] [i_6]) <= 5)))));
        arr_28 [i_6] = (arr_8 [i_6] [i_6] [i_6]);
        arr_29 [i_6] = (((arr_7 [i_6] [i_6]) != (arr_7 [i_6] [i_6])));
    }
    var_22 = var_1;

    for (int i_7 = 1; i_7 < 22;i_7 += 1)
    {
        arr_34 [i_7] = (max(-111651902, (((((arr_30 [i_7]) ? (arr_30 [i_7 - 1]) : (arr_31 [i_7]))) | (arr_33 [i_7 - 1])))));
        var_23 = (min(var_6, 111651883));
    }
    var_24 = (max((((((min(var_12, var_2))) < var_2))), (((!63) | -22936))));
    #pragma endscop
}
