/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16162
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (~var_0);
    var_18 = var_15;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_19 &= (57 * ((+((min((arr_3 [i_0]), (arr_7 [i_0] [i_0] [i_3])))))));
                                arr_16 [i_0] [0] [i_2] [16] [i_4] [i_4] [i_4] = (198 << (((arr_6 [i_0]) - 8406417500641015593)));
                                arr_17 [i_0] [i_1] [i_0] [i_3] [i_2] [i_4] [i_3] = (arr_5 [i_0] [i_1]);
                            }
                        }
                    }
                }
                var_20 = ((min((arr_4 [i_1 + 1]), (arr_4 [i_1 + 2]))));

                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    var_21 = (max(var_21, ((min((arr_3 [i_1]), (!var_1))))));
                    var_22 = (((((var_14 + (arr_5 [i_1 - 1] [i_1 + 2])))) && ((min(((min(var_1, 57))), -var_16)))));
                    arr_20 [13] [i_1] [14] [11] = (((-((4611686018427387903 ? var_6 : var_1)))));
                }
                /* vectorizable */
                for (int i_6 = 3; i_6 < 14;i_6 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 16;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 15;i_8 += 1)
                        {
                            {
                                arr_30 [i_0] [i_1] [i_6] [0] [i_7] = (arr_5 [i_1] [i_6]);
                                arr_31 [i_7] [i_7] [9] = ((var_2 ? (((var_7 ? (arr_28 [i_0]) : (arr_14 [i_0] [i_1] [i_6] [15] [i_8 + 2])))) : ((var_1 ? var_3 : 0))));
                                var_23 = -694309613;
                                var_24 = var_2;
                            }
                        }
                    }

                    for (int i_9 = 0; i_9 < 17;i_9 += 1)
                    {
                        arr_35 [i_9] [i_1] = (arr_4 [i_6 - 1]);
                        arr_36 [i_9] [i_6 - 1] [i_0] [i_0] [i_0] = arr_24 [i_9] [i_1] [i_6] [i_6] [i_9];
                    }
                    for (int i_10 = 0; i_10 < 17;i_10 += 1)
                    {
                        var_25 = 81;
                        var_26 = ((((((arr_8 [i_0] [i_1 + 2] [i_6] [i_6]) ? (arr_21 [6] [i_1] [i_0] [i_10]) : 20))) ? var_14 : (arr_11 [0] [i_1] [i_6] [i_10] [12])));
                    }
                    for (int i_11 = 0; i_11 < 17;i_11 += 1)
                    {
                        arr_41 [i_0] [i_1] [10] [i_6 - 1] [i_6] [i_11] = (!255);
                        var_27 = -4013261724781041648;
                        arr_42 [i_11] [i_0] [i_6 + 3] [i_1] [i_0] [i_0] = ((!(((182 ? 32316 : var_6)))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
