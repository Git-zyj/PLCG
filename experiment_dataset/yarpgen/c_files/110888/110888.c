/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110888
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] [20] = var_11;
        var_19 = ((((min((arr_1 [i_0] [i_0]), (arr_0 [i_0])))) ? ((max((arr_0 [i_0]), var_4))) : (~var_10)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_10 [13] [i_1] [14] = arr_9 [i_0] [i_2];
                    var_20 = (((((~((-(arr_8 [i_1] [i_0])))))) ? 11 : ((225 ? (arr_6 [i_1]) : (arr_1 [i_0] [i_2])))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    {
                        var_21 = (!-var_12);
                        arr_18 [i_5] [i_5] [i_3] [i_5] [10] = 30;

                        /* vectorizable */
                        for (int i_6 = 4; i_6 < 20;i_6 += 1)
                        {
                            var_22 = (~31);
                            var_23 = (arr_5 [i_6 + 2]);
                        }
                        for (int i_7 = 2; i_7 < 21;i_7 += 1)
                        {
                            var_24 = ((~(arr_20 [18] [i_5] [i_4] [i_5] [i_3])));
                            var_25 = 196;
                        }
                        var_26 = -31;

                        for (int i_8 = 1; i_8 < 20;i_8 += 1)
                        {
                            arr_25 [3] [i_5] [i_5] [i_5] [i_5] = arr_17 [i_0] [i_0] [i_0] [i_4] [i_5] [4];
                            arr_26 [i_5] = 151;
                        }
                    }
                }
            }
        }
    }
    for (int i_9 = 2; i_9 < 22;i_9 += 1) /* same iter space */
    {
        arr_31 [i_9] = (((((arr_30 [i_9 + 1]) ? 255 : 206)) ^ 0));
        arr_32 [i_9] = ((255 ? (arr_29 [i_9 - 1]) : var_1));
    }
    for (int i_10 = 2; i_10 < 22;i_10 += 1) /* same iter space */
    {
        var_27 = arr_28 [i_10];
        arr_37 [i_10] = (((-((var_7 ? 255 : (arr_30 [i_10]))))));
    }
    for (int i_11 = 2; i_11 < 22;i_11 += 1) /* same iter space */
    {
        var_28 = (((((~(arr_39 [i_11]))))));
        var_29 = (!31);
        var_30 = (255 == 112);
        arr_41 [i_11 + 1] [i_11] = arr_30 [i_11];
        var_31 = (max((arr_36 [i_11 + 1] [i_11 + 1]), 0));
    }
    /* LoopNest 3 */
    for (int i_12 = 2; i_12 < 18;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 21;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 21;i_14 += 1)
            {
                {
                    var_32 = (((var_6 & 11) ? (arr_42 [i_14]) : 234));

                    /* vectorizable */
                    for (int i_15 = 0; i_15 < 21;i_15 += 1)
                    {
                        arr_53 [i_15] [7] [1] [i_15] [i_15] = ((1 ? var_14 : (arr_19 [i_12] [i_12])));
                        var_33 = 206;
                        arr_54 [i_12] [i_12] [i_12] [i_12] = ((130 ? (arr_1 [i_12] [i_12 - 1]) : (arr_1 [i_12 - 1] [i_12 - 2])));
                        arr_55 [i_15] [i_13] [i_14] = (arr_15 [i_12 - 2] [i_15] [15]);
                        var_34 = 135;
                    }
                }
            }
        }
    }
    #pragma endscop
}
