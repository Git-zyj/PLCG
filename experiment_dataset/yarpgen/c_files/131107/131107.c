/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131107
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] [i_0 - 1] |= 48;
        var_12 += (!var_10);

        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            var_13 += -16;
            var_14 = (min(var_14, -var_5));
            var_15 = -var_7;

            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 17;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        {
                            arr_13 [i_4] [i_1] [i_2] = (((arr_12 [i_3 + 2] [i_2] [i_2] [i_2] [i_2] [14] [i_3]) ? (arr_7 [i_0 - 1] [i_1 - 2] [i_1] [i_2 + 2]) : (17 >> var_9)));
                            arr_14 [i_0 - 1] [i_4] [i_4] = var_0;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 17;i_6 += 1)
                    {
                        {
                            arr_21 [i_2] [i_5] [i_2] [i_1] [i_1] [i_0 + 1] = -50;
                            arr_22 [i_0] [i_0] [i_1] [i_2] [i_5] [i_5] [i_6] = (arr_9 [i_0 + 1] [i_0 + 1] [i_6 - 1] [i_6] [16]);
                            arr_23 [i_0] [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0] = 10;
                        }
                    }
                }
                arr_24 [10] |= ((!(((-31 ? var_6 : 101)))));
            }
            for (int i_7 = 1; i_7 < 17;i_7 += 1)
            {
                arr_27 [i_7] [i_7] = var_3;
                arr_28 [i_7] [i_1] [i_1] [i_1] = var_8;
            }
            arr_29 [i_0] = var_3;
        }
        for (int i_8 = 1; i_8 < 16;i_8 += 1)
        {
            arr_34 [i_0] [i_8 + 2] [i_0] = (~var_3);
            arr_35 [i_0] [i_0 + 1] [i_8] = ((~(~89)));
        }
        for (int i_9 = 0; i_9 < 19;i_9 += 1)
        {
            var_16 += (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]);

            for (int i_10 = 1; i_10 < 16;i_10 += 1)
            {

                for (int i_11 = 3; i_11 < 18;i_11 += 1)
                {
                    arr_42 [i_0] [i_9] [i_10] [i_11] [i_11] = ((var_3 ? ((25 ? var_5 : var_6)) : var_0));
                    arr_43 [i_0] [i_0] [i_10] [i_11 - 1] = -var_2;
                    arr_44 [i_0] [i_9] [i_10] [i_9] [i_9] = 102;

                    for (int i_12 = 4; i_12 < 18;i_12 += 1)
                    {
                        arr_49 [i_0 - 1] [i_9] [i_10] [i_11] [i_11] [i_12] [i_12] = (((arr_38 [i_0] [i_10 + 3] [i_10 - 1] [i_11 - 1]) ? var_5 : (arr_38 [i_10] [17] [i_10 + 3] [i_11 - 3])));
                        arr_50 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] = arr_1 [i_12];
                        arr_51 [i_0] [i_0] [i_0] [i_0 - 1] [i_0] [i_0] = 87;
                    }
                    for (int i_13 = 0; i_13 < 19;i_13 += 1)
                    {
                        var_17 = var_7;
                        arr_54 [i_0] [i_0] [i_10] [i_11 - 3] [i_13] = var_3;
                    }
                    for (int i_14 = 0; i_14 < 19;i_14 += 1)
                    {
                        var_18 = (min(var_18, var_9));
                        arr_58 [i_0] [i_9] [i_10 + 1] [i_11] [i_14] = 96;
                        arr_59 [i_0] [i_0] [i_0] [i_0] [i_0] [0] &= (!1);
                        arr_60 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] = (((arr_20 [i_0 - 1] [i_10 - 1] [i_10 + 1] [i_10 - 1] [i_10 + 2]) ? (arr_3 [i_14] [i_9] [i_10]) : (arr_56 [i_0] [i_0 + 1] [i_0] [i_0] [i_0] [i_0 - 1] [i_0 - 1])));
                    }
                }
                for (int i_15 = 0; i_15 < 19;i_15 += 1)
                {
                    arr_63 [i_15] [i_9] = arr_37 [i_0];
                    arr_64 [i_0] [i_0] [i_0] [i_9] &= (arr_56 [i_10 + 3] [i_10] [i_10] [i_10 - 1] [i_10] [i_10] [i_10]);
                    arr_65 [i_0] [i_15] = ((101 ? var_5 : (((-77 + 2147483647) << (((-15 + 30) - 15))))));
                    var_19 = ((((((arr_10 [i_0] [i_9] [i_15] [i_10] [i_15]) ? (arr_7 [i_0] [i_0] [i_0] [i_0]) : var_9))) ? var_2 : var_0));
                    var_20 = (((arr_16 [i_0] [i_9] [i_0] [i_15] [i_15] [i_15]) ? ((var_1 / (arr_33 [i_0]))) : (((arr_31 [4]) / 23))));
                }

                for (int i_16 = 0; i_16 < 19;i_16 += 1)
                {
                    arr_69 [i_0] [i_0] [i_0] [i_0] [i_0 + 1] = (((arr_37 [i_10 + 2]) ? (arr_37 [i_10 + 1]) : (arr_37 [i_10 + 1])));
                    arr_70 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] = arr_53 [i_10 + 3] [i_10 + 1] [i_10 + 3] [i_10] [i_10] [i_10 + 3] [i_10];
                }
            }
            var_21 = (min(var_21, (arr_0 [i_0])));
            arr_71 [i_0] [i_0] [i_9] |= (((arr_46 [i_0] [i_9] [i_0] [i_9] [i_9] [i_0]) ? var_11 : 38));
            arr_72 [i_0] = (((arr_19 [i_0] [i_0] [i_0] [i_9] [i_9]) ? (((arr_46 [i_0] [i_0] [i_0 - 1] [i_0] [i_0] [i_0 - 2]) ? var_7 : var_10)) : var_1));
        }
    }
    var_22 = var_11;
    var_23 &= var_3;
    var_24 = ((55 ? ((min(25, var_11))) : (max(((min(var_6, 0))), (~var_2)))));
    #pragma endscop
}
