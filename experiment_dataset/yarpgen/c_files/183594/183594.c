/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183594
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {
                        arr_8 [i_2] [i_3] [i_1] [i_1] [i_1] [i_0] = (((((arr_6 [i_0 + 2] [i_1 + 1] [i_1 - 1]) ^ (arr_6 [i_0 - 1] [i_1 - 1] [i_1 + 2])))) ? var_9 : (1274526405 >= 3267330561));
                        arr_9 [i_1] [i_1] [i_1] [i_1] = 1;
                        var_14 -= arr_0 [i_2];
                        var_15 = (arr_0 [i_3]);
                        arr_10 [i_1] = ((((((var_9 - var_4) + (arr_0 [i_1])))) / -4951563806462044011));
                    }
                }
            }
        }

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 9;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        {
                            arr_24 [i_4] [i_4] [i_5] [i_5] [i_4] [i_0 + 1] = ((var_3 ? (min((max(1027636735, 0)), (((arr_11 [i_0] [i_0] [i_0]) ? 1027636759 : (arr_0 [i_5]))))) : (min(1, (arr_0 [i_0])))));
                            var_16 = (max((((arr_13 [i_4] [i_4] [i_4]) + ((~(arr_16 [i_0] [i_4] [i_6] [i_7]))))), ((max((((arr_3 [i_6] [i_4]) ? (arr_2 [i_5]) : (arr_7 [i_6 + 1] [i_4] [i_7] [i_6 + 1]))), -32756)))));
                            var_17 *= var_3;
                            var_18 ^= var_6;
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_8 = 3; i_8 < 10;i_8 += 1)
            {
                for (int i_9 = 2; i_9 < 11;i_9 += 1)
                {
                    {
                        var_19 = -1;

                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            arr_32 [i_0 - 1] [i_4] [i_4] [i_9] [i_4] = ((((arr_21 [i_0 + 3] [i_0 + 3] [i_0 + 1]) >= (arr_21 [i_0 + 3] [i_0 + 2] [i_0 - 1]))));
                            var_20 = (arr_26 [i_8 - 1] [i_8 - 1] [i_0 - 1]);
                            var_21 = var_5;
                        }
                        var_22 = (max(((((arr_1 [i_9 - 2]) * var_2))), (max((((var_12 ? (arr_30 [i_9] [i_8] [i_0] [i_0] [i_0] [i_0]) : var_9))), ((var_7 ^ (arr_4 [i_8] [1] [i_8 + 1] [11])))))));
                        var_23 = 376203521;
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 14;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            {

                /* vectorizable */
                for (int i_13 = 1; i_13 < 11;i_13 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 14;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 14;i_15 += 1)
                        {
                            {
                                arr_49 [i_11] [i_11] [i_12] [i_11] [i_14] [i_11] = (arr_46 [i_13 + 1] [i_11] [i_13 - 1] [i_14] [i_15] [6]);
                                arr_50 [i_15] [i_11] [3] [i_11] [i_11] = 0;
                                var_24 = (((arr_41 [i_13] [i_13] [i_13 - 1] [i_13 + 2]) + 1));
                                arr_51 [i_15] [i_11] [i_13] [i_12] [i_11] [1] = var_11;
                                arr_52 [i_15] [i_15] [i_15] [i_15] [i_11] [i_15] = (arr_33 [i_11]);
                            }
                        }
                    }
                    var_25 += (-127 - 1);

                    for (int i_16 = 0; i_16 < 14;i_16 += 1)
                    {
                        var_26 = (var_12 ? (arr_45 [13] [i_13 - 1] [i_13] [i_16] [i_16] [i_12]) : (~1879113862));
                        var_27 += ((((var_3 / (arr_45 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11]))) / var_5));
                        arr_56 [i_11] [i_11] [i_11] [i_13] [i_11] [i_16] = var_5;
                        arr_57 [i_16] [11] [i_11] [i_11] [i_12] [i_11] = (~var_8);
                    }
                    arr_58 [4] [i_11] = ((-6428586078639477109 ? 32755 : (arr_39 [i_11] [i_13 + 1])));
                }
                for (int i_17 = 2; i_17 < 13;i_17 += 1)
                {
                    arr_61 [i_11] [i_11] [i_11] [i_11] = max((arr_38 [6] [i_12] [i_17] [i_11]), (((arr_40 [i_11] [i_17 + 1] [6] [i_11]) ? (arr_40 [i_11] [i_17 - 2] [i_17] [i_11]) : (arr_40 [i_11] [i_17 - 1] [i_17] [i_11]))));
                    var_28 = (((max((((arr_33 [i_17]) < 0)), 1)) ? (((min((arr_45 [i_11] [i_12] [i_17] [i_17] [i_11] [i_17]), (min((arr_53 [i_11]), (arr_37 [i_17] [i_12] [i_11]))))))) : (min(-6428586078639477109, 4460))));
                    arr_62 [i_11] = (max((max((((arr_44 [i_11]) ? var_9 : (arr_37 [i_11] [i_11] [i_11]))), (~1))), ((((var_7 ? var_8 : var_2)) - ((max((arr_42 [6] [4] [i_12] [4]), var_2)))))));
                }
                arr_63 [i_11] = ((((arr_36 [i_11] [i_11] [i_11]) < -710367552)));
            }
        }
    }

    for (int i_18 = 0; i_18 < 24;i_18 += 1)
    {
        arr_66 [i_18] [i_18] = var_11;
        /* LoopNest 3 */
        for (int i_19 = 0; i_19 < 24;i_19 += 1)
        {
            for (int i_20 = 0; i_20 < 24;i_20 += 1)
            {
                for (int i_21 = 3; i_21 < 21;i_21 += 1)
                {
                    {
                        arr_76 [i_21] [i_19] [i_19] [i_19] = (max(3267330561, var_3));
                        var_29 = var_2;
                        var_30 = (arr_74 [i_18] [i_18] [i_18] [i_18]);
                    }
                }
            }
        }
    }
    #pragma endscop
}
