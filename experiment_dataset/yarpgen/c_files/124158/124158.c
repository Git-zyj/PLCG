/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124158
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [11] = (arr_3 [i_1]);
                arr_6 [i_1] = (((arr_4 [i_1 + 1] [i_1 + 2]) < (arr_1 [15])));
                var_19 -= ((31 ? 65530 : (((1 == 246) + (max(9107027971050922396, var_11))))));
                arr_7 [15] = (arr_4 [i_0] [i_1 - 1]);

                for (int i_2 = 2; i_2 < 22;i_2 += 1)
                {
                    var_20 = (arr_3 [21]);

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        arr_13 [i_0] [i_0] [i_1] [i_2 - 1] [i_3] = (arr_4 [9] [i_3]);
                        var_21 = (((((((arr_1 [15]) ? (arr_4 [i_2 - 2] [i_3]) : (arr_8 [i_0] [i_0]))))) ^ 28));
                        var_22 = ((((arr_11 [19] [i_2 + 1] [19] [19] [i_2 - 1]) - (((arr_1 [i_0]) ? 1670384531 : 238)))));
                        arr_14 [i_0] [i_0] [i_2] [i_3] = ((var_1 ? (((-((65535 ? 17980 : 3))))) : (max(7851905908324214614, (arr_9 [i_0] [i_1 + 2])))));
                    }
                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {
                        arr_17 [i_0] [i_0] [i_1] [i_4] [i_2 - 2] [i_4 - 1] = 216;
                        arr_18 [i_0] [i_1 + 3] [i_4] [i_4 - 1] = ((~((((arr_16 [11] [i_1] [i_1] [11]) || (arr_8 [i_0] [i_0]))))));
                    }
                    for (int i_5 = 2; i_5 < 20;i_5 += 1)
                    {
                        var_23 = (((0 < 1) || (arr_2 [i_2 + 1])));
                        arr_21 [i_0] [i_5] = ((((!(arr_3 [i_2 + 1]))) ? -3155626002925795834 : var_11));
                        arr_22 [i_0] [i_0] [i_5] [i_5] = var_7;
                    }
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    var_24 = (~var_12);
                    arr_27 [i_6] [6] [11] = (arr_23 [i_6] [i_1 + 3] [i_6]);
                    arr_28 [i_0] [i_1] [i_6] [i_6] = -7;
                }
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    arr_31 [i_0] = ((var_9 ? var_5 : ((((min(100663296, (arr_3 [i_7])))) ? (((arr_15 [i_7] [i_7] [i_7] [i_0] [i_7] [6]) ? var_6 : (arr_4 [i_7] [i_1]))) : (arr_26 [i_0] [i_0] [i_0] [i_0])))));
                    var_25 ^= var_12;
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    var_26 = 1;
                    arr_34 [i_0] = (((arr_29 [0] [i_1 + 1] [i_1]) ? (arr_29 [i_1] [i_1 + 1] [i_0]) : var_9));
                    var_27 = var_14;
                    var_28 = 1;
                }
            }
        }
    }
    #pragma endscop
}
