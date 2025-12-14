/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107195
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = -var_7;
    var_17 = var_6;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = ((~((~(min(1, 9125903956586600545))))));

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            arr_6 [i_0] [10] = (((-2147483647 - 1) ? 2040545365 : 6172900722895008386));
            arr_7 [i_0] [4] [i_1] = ((max(var_10, 1)));
            arr_8 [i_0] [i_1] [1] = (arr_5 [0]);
        }
        arr_9 [i_0] [i_0] = 1;

        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            arr_12 [i_2] = var_7;
            arr_13 [i_0] = (60 ? 57062 : 404334282);
            arr_14 [7] = var_9;
            arr_15 [i_0] [i_2] [12] = (arr_10 [i_0] [i_0] [i_0]);
        }
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            arr_19 [i_0] [i_0] [i_3] = min((((arr_5 [0]) ? var_11 : var_1)), var_3);
            arr_20 [i_3] = 1;
            arr_21 [i_3] [i_3] [i_0] = 1;
            arr_22 [i_3] = ((var_4 ? ((max(((var_5 ? var_6 : (arr_11 [i_3] [i_3]))), 1082744418))) : (((arr_11 [i_0] [3]) * (arr_1 [i_3])))));
        }
        arr_23 [1] = var_8;
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        arr_27 [12] [12] = 1;
        arr_28 [i_4] = -10067;
        arr_29 [i_4] = 1197370617;
        arr_30 [i_4] = -404334283;
    }
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        arr_34 [12] = (max((arr_5 [2]), ((max(var_3, (arr_0 [3]))))));
        arr_35 [6] = var_2;
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                {
                    arr_40 [i_5] [i_6] [i_7] = var_2;
                    arr_41 [i_7] = (((!(((var_8 ? var_6 : var_1))))));

                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        arr_44 [i_5] [i_5] [i_7] [i_8] = (arr_10 [4] [i_6] [i_6]);
                        arr_45 [0] [i_7] [i_8] = 55;
                        arr_46 [i_5] [i_6] [i_6] [i_7] = (arr_31 [11] [14]);
                        arr_47 [i_7] [i_7] [i_6] [i_7] = (min(-12554196941121930714, var_6));
                        arr_48 [i_7] = (arr_42 [i_5] [i_5] [i_5] [i_6] [i_7] [i_8]);
                    }
                    arr_49 [8] [i_7] = ((((404334282 & (arr_11 [i_5] [1]))) >= ((((min((arr_43 [4] [i_5] [i_7] [i_6] [14] [i_7]), 4190200442939768327))) ? ((0 ? (arr_39 [11] [11] [i_7]) : 0)) : (arr_1 [i_5])))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        arr_52 [i_9] [1] = (!1);
        arr_53 [i_9] = (((arr_25 [i_9]) ? (8473 % 448) : 12));
    }
    #pragma endscop
}
