/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165336
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= var_10;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_2] = (arr_0 [i_0] [i_0]);
                    var_17 = (arr_3 [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_18 = min(((min(var_10, 372170024))), var_12);
                                var_19 = (min(-24594, (arr_4 [i_1] [i_2] [i_0])));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        var_20 ^= var_2;

        for (int i_6 = 1; i_6 < 7;i_6 += 1)
        {

            for (int i_7 = 1; i_7 < 10;i_7 += 1)
            {
                arr_24 [i_6] = (arr_6 [i_5] [11]);
                arr_25 [9] [i_6] = (min(var_15, 1));
                var_21 = (min(var_21, (arr_17 [i_7] [i_5])));
                arr_26 [i_6] [10] [i_6] [10] = ((min(var_12, 4611686018427387904)));
            }
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {

                /* vectorizable */
                for (int i_9 = 4; i_9 < 10;i_9 += 1) /* same iter space */
                {
                    var_22 = 1;
                    var_23 = (max(var_23, (arr_32 [i_8])));
                }
                /* vectorizable */
                for (int i_10 = 4; i_10 < 10;i_10 += 1) /* same iter space */
                {
                    arr_36 [i_5] [i_6] [i_5] [5] = 264241152;
                    var_24 &= var_1;
                }
                var_25 = (max(var_25, var_6));

                /* vectorizable */
                for (int i_11 = 1; i_11 < 10;i_11 += 1)
                {
                    var_26 = (min(var_26, (arr_38 [i_5] [i_6] [10])));
                    arr_40 [i_6] [2] [i_8] [i_6 - 1] [2] [i_6] = var_5;

                    for (int i_12 = 4; i_12 < 8;i_12 += 1)
                    {
                        arr_44 [6] [i_6 + 4] [i_6 + 4] [i_12] &= 32767;
                        var_27 = (min(var_27, var_1));
                    }
                    for (int i_13 = 1; i_13 < 1;i_13 += 1)
                    {
                        var_28 = var_11;
                        arr_49 [i_6] [i_6] [i_8] [i_11] [i_11] [i_6] = var_13;
                        arr_50 [i_13 - 1] [i_6] [i_5] [i_6] [i_5] = var_2;
                    }
                    for (int i_14 = 0; i_14 < 11;i_14 += 1)
                    {
                        var_29 = (arr_17 [i_14] [i_5]);
                        var_30 = -32767;
                        var_31 = var_15;
                        var_32 ^= 23507;
                    }
                    for (int i_15 = 1; i_15 < 7;i_15 += 1)
                    {
                        arr_56 [i_15] [i_11 - 1] [i_6] [i_6] [i_6] [1] = 20;
                        arr_57 [i_6] [i_6] = var_14;
                        arr_58 [i_15] [i_11] [i_6] [i_6] [i_6] [i_5] = 12867;
                    }
                    arr_59 [2] &= var_2;
                }
                for (int i_16 = 0; i_16 < 11;i_16 += 1)
                {
                    var_33 = (max(var_33, var_8));
                    arr_63 [i_5] [7] [i_6] [i_16] [i_6] = arr_17 [i_5] [i_6 + 2];
                    var_34 = (max(var_34, 4398029733888));
                }
                arr_64 [i_5] [i_6] [i_8] = 4217563077;
            }
            arr_65 [i_6] [i_6] [i_6 - 1] = var_4;
        }
        arr_66 [9] [i_5] = min(-372170025, (arr_1 [i_5] [0]));
    }
    #pragma endscop
}
