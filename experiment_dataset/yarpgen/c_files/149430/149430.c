/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149430
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_16 = arr_1 [i_0] [i_0];
        arr_4 [i_0] = (max((((((var_10 ? 3755373546 : (arr_2 [i_0]))) + (539593740 | -32764)))), (max(79, 6776127006166679925))));
    }

    /* vectorizable */
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 11;i_4 += 1)
                {
                    {
                        arr_15 [i_1] [i_2] [i_3] [i_4 - 3] = ((!(arr_13 [i_4] [i_4 - 3] [i_4 - 1] [i_4] [i_4 - 2])));
                        var_17 = (max(var_17, (!-7346137257160981553)));
                    }
                }
            }
        }
        arr_16 [i_1] [i_1] = (((arr_3 [8] [i_1]) ? (((!(arr_9 [i_1] [i_1])))) : var_13));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 11;i_7 += 1)
                {
                    {

                        for (int i_8 = 0; i_8 < 12;i_8 += 1)
                        {
                            arr_29 [i_1] [i_5] [i_7] [i_7 - 1] [i_5] = (((arr_13 [i_1] [4] [i_6] [i_6] [i_7 + 1]) < (arr_24 [i_1] [i_8] [i_6] [i_7])));
                            arr_30 [i_1] [i_5] [i_6] [i_7] [i_7] = ((-(arr_5 [i_7 - 1])));
                        }
                        for (int i_9 = 0; i_9 < 12;i_9 += 1)
                        {
                            arr_35 [i_7] [i_7] [i_6] [i_6] [i_5] [i_1] [i_7] = var_3;
                            arr_36 [i_1] [i_1] [i_7] [i_1] [i_1] [i_1] = 1297593923;
                            var_18 = ((((((3047337369 ? -32763 : -19)) + 2147483647)) >> ((((15497231809028636099 ? 194 : var_15)) - 184))));
                            arr_37 [i_9] [i_6] [i_6] [i_6] [i_6] |= ((64 ? -1297593924 : (-127 - 1)));
                        }
                        for (int i_10 = 0; i_10 < 12;i_10 += 1)
                        {
                            var_19 ^= (5080 & -6001);
                            var_20 = ((((!(arr_39 [i_1] [i_5] [i_6] [i_7] [i_10])))) > -1297593924);
                            var_21 = 22;
                            arr_40 [7] [i_5] [i_6] [i_7 - 1] [i_7] = (arr_10 [i_7 + 1]);
                        }
                        arr_41 [i_7] [i_6] [i_5] [i_7] = ((60473 | (arr_28 [i_7] [i_7 - 1] [i_7] [i_7 - 1] [i_7 + 1])));
                    }
                }
            }
        }
        arr_42 [i_1] [i_1] = (((arr_25 [i_1] [i_1] [i_1] [i_1]) ? (arr_38 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) : 0));
    }
    /* vectorizable */
    for (int i_11 = 3; i_11 < 9;i_11 += 1) /* same iter space */
    {
        arr_46 [i_11] [i_11] = (~11628232090223703817);
        arr_47 [i_11 - 3] = ((3394 == (arr_12 [i_11 - 2] [i_11 - 3])));
    }
    /* vectorizable */
    for (int i_12 = 3; i_12 < 9;i_12 += 1) /* same iter space */
    {
        arr_50 [i_12] = 1297593917;
        arr_51 [i_12] [i_12] = var_15;
        arr_52 [i_12] = -1297593924;
    }
    #pragma endscop
}
