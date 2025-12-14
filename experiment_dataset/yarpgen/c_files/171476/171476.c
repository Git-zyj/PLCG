/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171476
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_14;

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_16 = ((-((min((arr_0 [i_0 + 1]), var_13)))));
        arr_2 [i_0 + 2] = -7055180977007544719;

        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            arr_5 [i_1] [i_1] = 1;
            arr_6 [i_1] [i_1] = -9060037963209409643;
            arr_7 [i_1] = (min(var_10, (min(((min((arr_0 [i_0]), var_4))), 7288))));
            /* LoopNest 3 */
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 14;i_4 += 1)
                    {
                        {
                            var_17 = (min(-1, ((min((arr_3 [i_4]), (arr_8 [11] [i_1 - 1] [i_1 - 1] [i_1 + 3]))))));
                            var_18 = (min((min(var_11, (~var_10))), ((((((min((arr_0 [i_0]), (arr_1 [i_0]))))) == 255)))));
                            var_19 = ((min(((min(var_3, (arr_0 [i_3]))), (min(4294967295, 10))))));
                        }
                    }
                }
            }
        }
        for (int i_5 = 1; i_5 < 14;i_5 += 1)
        {
            var_20 = ((~(arr_3 [i_5 + 1])));
            var_21 = ((((min(((var_0 ? (arr_14 [i_0] [6] [i_0 + 4] [i_0] [i_5] [i_5]) : 996757196)), ((var_3 ? var_6 : 7288))))) ? (arr_10 [5]) : 996757196));
            arr_19 [i_5] [i_0] [i_5] = (((996757202 ? (((var_13 + 2147483647) << (46 - 46))) : ((((arr_9 [4]) || (arr_10 [i_0 + 3])))))));
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {

            for (int i_7 = 1; i_7 < 1;i_7 += 1) /* same iter space */
            {
                arr_26 [i_7 - 1] [i_6] [i_0 + 1] = 1;
                var_22 = (((arr_25 [i_0 - 1]) / (((arr_8 [i_0] [i_6] [i_6] [i_6]) % var_0))));

                for (int i_8 = 3; i_8 < 12;i_8 += 1)
                {
                    var_23 = ((214 ? var_7 : (arr_4 [i_0 + 4] [i_8])));
                    arr_31 [i_8 - 2] [i_8] [i_7] [i_6] [i_0] = (((arr_23 [i_7 - 1] [i_0 + 2] [i_7 - 1] [i_8 + 1]) ? var_14 : (arr_23 [i_7 - 1] [i_0 + 2] [i_7] [i_7 - 1])));
                    var_24 = ((~(arr_22 [11] [11] [i_0 + 4] [i_8])));
                }
                arr_32 [8] [9] [i_7] = ((+(((arr_9 [i_0]) ? 80 : 1))));
                arr_33 [i_6] [9] = (~-var_3);
            }
            for (int i_9 = 1; i_9 < 1;i_9 += 1) /* same iter space */
            {
                var_25 = (((arr_30 [i_0] [i_0] [i_0] [i_6] [i_9 - 1]) == (arr_3 [i_0 + 3])));
                /* LoopNest 2 */
                for (int i_10 = 2; i_10 < 14;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 15;i_11 += 1)
                    {
                        {
                            var_26 = (((28672 <= 120) | (arr_16 [i_9 - 1] [i_6] [i_0 + 3])));
                            var_27 = arr_9 [i_10];
                            arr_40 [i_11] [i_9] [1] [i_9] [i_0] = -1802901355;
                            arr_41 [i_9] = (((((1 ? var_14 : var_10))) ? (2002839821729805399 < var_10) : (arr_12 [i_9 - 1] [i_9 - 1] [i_9 - 1] [5] [i_9] [i_9])));
                        }
                    }
                }

                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {

                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        var_28 = (((((var_7 ? var_2 : 1))) ? -var_14 : -17));
                        var_29 = var_5;
                        var_30 = 1;
                    }
                    for (int i_14 = 0; i_14 < 15;i_14 += 1)
                    {
                        var_31 = (((arr_37 [i_0 + 4] [i_0 + 2] [i_0 + 2]) | ((-(arr_43 [i_14] [i_14] [i_14] [i_14])))));
                        var_32 = 16;
                        var_33 = (arr_4 [i_0 + 2] [i_6]);
                    }
                    for (int i_15 = 1; i_15 < 13;i_15 += 1)
                    {
                        var_34 = ((!(var_10 / 4695872503971826498)));
                        arr_52 [i_0 + 1] [i_0 + 1] [i_6] [i_9 - 1] [i_12] [i_9] = ((var_2 >> (((arr_15 [i_0 + 2] [i_9 - 1] [i_15 + 1]) - 47))));
                    }
                    var_35 = (arr_50 [i_0 + 2] [i_12]);
                    arr_53 [i_0] [i_9] [i_0] [i_9] = (((arr_0 [i_0]) ? ((((arr_14 [i_0] [i_6] [i_0] [i_6] [i_6] [i_12]) && (arr_28 [i_6] [i_0] [i_6] [i_0])))) : (arr_14 [i_0 + 2] [i_6] [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_6])));
                }
                for (int i_16 = 0; i_16 < 15;i_16 += 1)
                {
                    var_36 *= ((-(arr_45 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0] [i_0 + 1])));
                    arr_56 [i_16] [i_9] [i_9] [i_0 + 1] = var_14;
                    var_37 ^= var_11;
                }
                for (int i_17 = 0; i_17 < 15;i_17 += 1)
                {
                    arr_59 [i_6] [i_6] [i_6] [i_9] = (var_14 == var_2);
                    var_38 = var_14;
                }
                arr_60 [i_0] [i_0] [i_6] [i_9] = (-8177 ? 3 : 19);
            }
            var_39 = -17;
            var_40 = ((var_10 ? (arr_10 [i_0 + 3]) : var_14));
        }
        for (int i_18 = 0; i_18 < 15;i_18 += 1)
        {
            /* LoopNest 2 */
            for (int i_19 = 0; i_19 < 1;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 15;i_20 += 1)
                {
                    {
                        arr_68 [i_19] = ((var_10 + (120 > 1)));
                        var_41 = var_1;
                    }
                }
            }
            var_42 = (min((min((arr_58 [i_0 + 2] [i_18]), (arr_58 [i_0 + 3] [i_18]))), (arr_58 [i_0 + 3] [i_18])));
            var_43 = (max(var_43, (((((((~var_11) * ((((arr_16 [i_0] [i_0] [i_0]) && (arr_49 [i_0] [i_0 + 3] [1] [1] [i_18] [8]))))))) == (min(1, 14968310458865719009)))))));
        }
    }
    for (int i_21 = 0; i_21 < 21;i_21 += 1) /* same iter space */
    {
        var_44 = (min(var_44, (arr_70 [i_21] [i_21])));
        arr_71 [i_21] = ((((var_12 ? ((min((arr_69 [i_21]), 6))) : (((var_10 || (arr_69 [i_21])))))) <= ((min((min(var_6, (arr_69 [i_21]))), ((((arr_70 [i_21] [i_21]) == (arr_69 [i_21])))))))));
    }
    /* vectorizable */
    for (int i_22 = 0; i_22 < 21;i_22 += 1) /* same iter space */
    {
        arr_75 [i_22] [i_22] = (arr_70 [i_22] [i_22]);

        for (int i_23 = 0; i_23 < 21;i_23 += 1)
        {
            var_45 = (max(var_45, ((((arr_70 [15] [10]) ? var_5 : (arr_78 [i_22] [i_23]))))));
            arr_80 [i_22] = (((arr_78 [i_22] [i_23]) & var_10));
            var_46 = (max(var_46, (((~(var_4 < var_3))))));
            var_47 = var_13;
            arr_81 [i_22] [i_23] = var_2;
        }

        for (int i_24 = 0; i_24 < 21;i_24 += 1)
        {
            var_48 = (arr_74 [i_22]);
            var_49 ^= var_12;
        }
        var_50 = var_10;
    }
    for (int i_25 = 2; i_25 < 19;i_25 += 1)
    {
        arr_88 [i_25 - 1] = (!1713528616);
        var_51 = var_1;
    }
    #pragma endscop
}
