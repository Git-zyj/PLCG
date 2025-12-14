/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177244
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_13;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] [10] = 51432;
        var_20 = ((-12 + 2147483647) << (var_7 - 21759));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_21 ^= ((-(-127 - 1)));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                {
                    var_22 = var_4;
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 21;i_4 += 1)
                    {
                        for (int i_5 = 3; i_5 < 21;i_5 += 1)
                        {
                            {
                                arr_18 [i_1] [i_1] [i_4] [i_4 + 2] [i_5] [i_3] [i_4] = (((!104) && 21255));
                                arr_19 [i_1] [i_1] [i_4] [1] [i_4] [i_4] [i_5] = var_18;
                                var_23 = 0;
                            }
                        }
                    }
                    var_24 -= (16412305355934055446 & 1);
                }
            }
        }
    }
    for (int i_6 = 1; i_6 < 15;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 18;i_8 += 1)
            {
                {

                    for (int i_9 = 3; i_9 < 16;i_9 += 1)
                    {

                        for (int i_10 = 0; i_10 < 18;i_10 += 1)
                        {
                            var_25 = (min(var_25, 1));
                            arr_38 [i_10] [i_7] [i_8] [i_8] [13] = (arr_13 [i_6] [i_6] [i_10]);
                            arr_39 [i_6] = (arr_0 [i_6 - 1] [0]);
                        }
                        for (int i_11 = 1; i_11 < 17;i_11 += 1) /* same iter space */
                        {
                            arr_42 [i_6 - 1] [i_7] [i_11] [i_9 - 1] [i_7] [i_11] = var_1;
                            arr_43 [i_11 - 1] [i_6] [i_11] [i_8] [i_11] [i_6] [i_6] = -117;
                        }
                        /* vectorizable */
                        for (int i_12 = 1; i_12 < 17;i_12 += 1) /* same iter space */
                        {
                            arr_48 [i_9] [i_7] [i_8] [i_12] [i_9] [i_8] = (~var_2);
                            arr_49 [i_6 + 2] [i_6] [i_12] = var_11;
                        }
                        arr_50 [i_7] [i_7] = 1;
                        arr_51 [i_6] [i_7] [i_7] [i_8] [i_9] = (117 < 8415);
                    }
                    for (int i_13 = 0; i_13 < 18;i_13 += 1)
                    {
                        var_26 -= (arr_14 [i_7] [6]);
                        arr_56 [i_13] [i_13] [i_13] = -2;
                    }

                    for (int i_14 = 0; i_14 < 18;i_14 += 1)
                    {
                        var_27 = 3991281709646229121;
                        var_28 -= arr_22 [i_8];
                        var_29 -= ((~(~100)));
                    }
                    /* vectorizable */
                    for (int i_15 = 0; i_15 < 18;i_15 += 1) /* same iter space */
                    {
                        arr_64 [14] [14] [i_8] [i_8] = (!16412305355934055446);

                        for (int i_16 = 0; i_16 < 18;i_16 += 1)
                        {
                            var_30 = (min(var_30, 1));
                            var_31 = (arr_58 [i_6] [i_6 + 2] [i_6 + 2]);
                            var_32 = var_13;
                            var_33 = 23787;
                            var_34 = (~var_7);
                        }
                        for (int i_17 = 1; i_17 < 16;i_17 += 1)
                        {
                            arr_73 [i_17] [6] [6] [1] [1] = var_2;
                            var_35 = ((-(arr_33 [i_6] [i_7] [i_6 - 1] [i_17 + 1])));
                        }
                    }
                    /* vectorizable */
                    for (int i_18 = 0; i_18 < 18;i_18 += 1) /* same iter space */
                    {

                        for (int i_19 = 1; i_19 < 14;i_19 += 1)
                        {
                            arr_81 [i_6] [i_18] [i_8] [i_6] [i_19 + 3] [i_18] [i_7] = (((arr_11 [i_19 + 1] [21] [21] [i_7]) != var_16));
                            var_36 = 54185;
                        }
                        var_37 *= (11351 % var_13);
                    }
                    /* vectorizable */
                    for (int i_20 = 0; i_20 < 18;i_20 += 1) /* same iter space */
                    {
                        var_38 &= 1;
                        var_39 = (!-40);
                        arr_85 [2] [i_8] [i_6] = (((arr_12 [i_6 + 1] [i_6] [i_6] [i_7] [i_6] [i_6]) * 1));
                        arr_86 [i_6 + 1] [i_7] [i_6 + 1] [15] = (arr_55 [i_6] [i_6] [6]);
                    }
                }
            }
        }
        arr_87 [i_6] = var_9;
        var_40 += 23787;
        arr_88 [i_6] = 16412305355934055439;
    }
    #pragma endscop
}
