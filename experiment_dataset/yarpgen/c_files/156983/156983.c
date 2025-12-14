/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156983
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= ((!((max(((var_2 >> (var_5 - 129))), var_4)))));
    var_13 = (min(var_13, var_2));

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_14 ^= var_11;
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        arr_8 [12] &= ((((((arr_3 [4]) + (arr_5 [i_0] [i_1] [4])))) ? (((arr_0 [i_2] [4]) ? (arr_0 [18] [18]) : var_3)) : -var_9));
                        var_15 += (((((((((arr_3 [1]) * var_9))) ? (arr_4 [i_0 + 1] [i_0 + 1] [i_1 - 1]) : ((min(21063, -21036)))))) ? (((arr_5 [1] [i_1 - 1] [1]) * (arr_5 [1] [i_1 - 1] [1]))) : ((min((arr_0 [1] [1]), (arr_0 [16] [16]))))));
                    }
                }
            }
        }
        arr_9 [18] |= (max((((1 ? (arr_5 [16] [i_0 - 1] [16]) : ((var_7 ? 122 : var_3))))), (arr_3 [1])));

        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            arr_13 [i_4] [i_4] [i_0 + 2] |= 1;

            for (int i_5 = 2; i_5 < 20;i_5 += 1)
            {
                var_16 *= (max(((var_8 ? (min(var_1, (arr_3 [i_4]))) : (min((arr_14 [i_0] [i_0] [i_0 + 1] [i_0]), (arr_7 [i_5] [i_4] [i_0 + 2] [i_4] [i_0 + 2]))))), (((1964535749 ? ((min((arr_6 [i_0] [i_0]), 55423))) : var_2)))));
                arr_17 [i_4] [i_4] |= (max(((10113 ? (arr_7 [i_0] [i_0] [i_4] [i_4] [i_0]) : (1 || 2147483647))), (((arr_3 [i_4]) ? (var_6 / 128) : ((0 ? (arr_11 [i_4] [i_5 - 1]) : var_6))))));
            }
            for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
            {
                var_17 ^= var_3;

                /* vectorizable */
                for (int i_7 = 3; i_7 < 20;i_7 += 1)
                {

                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        arr_28 [12] [i_0] [i_6] [i_4] [i_8] [i_6] |= (((((133 ? var_11 : var_6))) ? (arr_3 [i_6]) : var_5));
                        var_18 |= (var_5 ? (arr_1 [i_0 - 1] [i_7 - 1]) : var_5);
                        var_19 &= (arr_6 [i_4] [i_4]);
                        var_20 *= (arr_14 [i_0 - 1] [i_4] [i_7 - 2] [i_7 + 1]);
                        arr_29 [i_4] &= (~106);
                    }
                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        var_21 = (min(var_21, (((var_3 ? 21063 : (~252))))));
                        var_22 ^= (arr_26 [i_0] [i_4] [i_4] [i_7 + 1] [i_0 + 1]);
                        var_23 = (max(var_23, (((~(arr_18 [i_0 + 2] [i_9] [i_7 + 1] [i_6]))))));
                        var_24 |= (!10987);
                        var_25 ^= (((var_10 ? var_6 : (arr_14 [i_0] [i_0] [i_6] [i_7]))));
                    }
                    for (int i_10 = 0; i_10 < 0;i_10 += 1)
                    {
                        var_26 *= ((var_6 ? var_5 : (arr_12 [i_0] [i_0 + 1])));
                        var_27 |= (-(arr_0 [i_0 + 2] [i_6]));
                    }
                    var_28 = (min(var_28, (arr_18 [i_0 - 1] [i_6] [i_0 + 2] [i_0])));
                    arr_34 [i_6] [i_6] [i_6] [i_7] [i_6] [i_6] &= (arr_15 [i_7 - 1] [i_4] [i_0 + 1]);
                }
                for (int i_11 = 4; i_11 < 20;i_11 += 1)
                {
                    var_29 += var_6;

                    for (int i_12 = 2; i_12 < 20;i_12 += 1)
                    {
                        var_30 += arr_15 [i_0] [i_6] [i_6];
                        var_31 = 2558839501;
                    }
                    for (int i_13 = 0; i_13 < 0;i_13 += 1)
                    {
                        var_32 += ((((min(((var_3 ? (arr_19 [i_0] [i_0] [i_6] [i_0]) : var_11)), -1995985280))) ? (((arr_0 [i_11] [i_11]) ? (!24576) : var_6)) : var_6));
                        var_33 += (((((arr_19 [i_0 + 2] [i_0 + 2] [i_11 - 2] [i_13 + 1]) ? (arr_19 [i_0 + 2] [i_4] [i_11 - 4] [i_13 + 1]) : var_4)) ^ (arr_0 [i_0 - 1] [i_6])));
                        var_34 ^= (min((min((arr_25 [i_11 + 1] [i_13 + 1] [i_0 + 2]), var_0)), ((min(var_3, var_1)))));
                    }
                    var_35 += (max(var_9, 160));
                }
                for (int i_14 = 2; i_14 < 17;i_14 += 1)
                {

                    /* vectorizable */
                    for (int i_15 = 0; i_15 < 1;i_15 += 1) /* same iter space */
                    {
                        var_36 = (min(var_36, (arr_4 [i_15] [i_14] [i_6])));
                        var_37 *= (arr_26 [i_14 + 2] [i_14 - 1] [i_14 - 1] [i_14 - 2] [i_14 + 3]);
                    }
                    for (int i_16 = 0; i_16 < 1;i_16 += 1) /* same iter space */
                    {
                        var_38 &= (min(10113, 1));
                        var_39 = (min(var_39, ((min((((arr_12 [i_14 + 1] [i_4]) ? (arr_12 [i_4] [i_4]) : (arr_12 [i_0 + 2] [i_6]))), ((((arr_2 [i_4] [i_4]) ? (((arr_22 [i_16] [i_16] [i_16]) ? var_2 : var_8)) : 1))))))));
                    }
                    /* vectorizable */
                    for (int i_17 = 1; i_17 < 1;i_17 += 1)
                    {
                        var_40 *= (((arr_7 [i_17 - 1] [i_4] [i_14] [i_4] [i_0]) ? var_0 : (arr_7 [i_17 - 1] [i_6] [i_0] [i_6] [i_0])));
                        var_41 *= (arr_30 [i_4] [i_4] [i_17 - 1] [i_0 + 1] [i_17 - 1] [i_17 - 1]);
                    }
                    var_42 *= ((((((var_8 < var_5) ? (arr_16 [i_0] [i_6] [i_6] [i_0]) : (max(var_11, 32768))))) ? ((max((min((arr_16 [i_6] [i_4] [i_4] [i_0 + 2]), 10113)), (max(var_5, 6285))))) : 0));
                }
                var_43 *= (min(((min(((max(1, (arr_42 [i_6] [i_0] [14] [i_0] [i_6] [i_6])))), (arr_20 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_4])))), (min(0, (arr_47 [i_0] [i_0] [i_6] [i_0 - 1] [i_4])))));
                var_44 -= (max((max((arr_12 [i_0 - 1] [i_0 - 1]), var_11)), ((1 ? (arr_12 [i_0 + 1] [i_0 + 1]) : (arr_12 [i_0 + 1] [i_0 + 1])))));
            }
            /* vectorizable */
            for (int i_18 = 0; i_18 < 21;i_18 += 1) /* same iter space */
            {
                var_45 = (arr_25 [i_0] [i_4] [i_0]);
                var_46 = arr_38 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1];
                var_47 &= (((arr_22 [i_0] [i_0 + 2] [i_0 + 1]) ? var_10 : (((arr_4 [i_0] [i_4] [11]) ? var_4 : 1))));
                var_48 += (arr_24 [i_0] [i_4] [i_18] [i_0 + 1]);
                var_49 *= var_0;
            }

            for (int i_19 = 0; i_19 < 21;i_19 += 1)
            {
                var_50 *= (((arr_45 [i_4] [14] [i_4] [i_19] [i_19] [i_19]) ? (max((max((arr_45 [i_4] [i_4] [i_4] [i_4] [i_19] [i_19]), 32754)), (((-21040 - (arr_20 [i_4] [1] [i_4] [i_4])))))) : ((((arr_23 [i_4] [i_0 + 2] [i_0 - 1] [i_0 + 1] [i_0 + 2] [i_4]) ? var_8 : (arr_23 [i_4] [i_0] [i_0 + 1] [i_0] [i_0 - 1] [i_0 - 1]))))));
                var_51 = (min(var_51, (((((max(65535, 1))) + (min(-2147483647, var_4)))))));
            }
        }
    }
    /* vectorizable */
    for (int i_20 = 0; i_20 < 1;i_20 += 1)
    {
        arr_57 [i_20] |= (arr_44 [i_20] [i_20]);

        for (int i_21 = 0; i_21 < 1;i_21 += 1)
        {
            var_52 -= var_6;
            var_53 *= (((arr_43 [i_20] [16]) ? var_4 : ((((arr_54 [1]) < 4294967295)))));
            var_54 = (min(var_54, (0 << 1)));
            arr_61 [i_20] [1] [1] |= ((!(arr_56 [i_20])));
        }
        var_55 = (max(var_55, var_11));
    }
    for (int i_22 = 2; i_22 < 16;i_22 += 1)
    {
        var_56 += (min(((max((((arr_22 [i_22] [i_22] [i_22]) ? (arr_39 [17] [i_22] [i_22 - 1] [i_22] [i_22] [17] [i_22 + 1]) : var_5)), ((45748 ? var_9 : var_10))))), (arr_36 [i_22] [i_22])));
        var_57 = (max(var_57, ((max(((min((arr_21 [i_22 + 1] [i_22]), (arr_51 [i_22])))), ((~(arr_37 [i_22 - 1] [i_22] [i_22 - 2]))))))));
    }
    for (int i_23 = 0; i_23 < 24;i_23 += 1)
    {
        var_58 |= (min(((min(var_5, var_8))), (((arr_66 [i_23]) ? (var_8 ^ 0) : (arr_65 [i_23])))));
        var_59 = (min(var_59, (arr_65 [i_23])));
        var_60 *= (min(((min(var_8, ((min(1, var_8)))))), (((((var_0 ? (arr_65 [i_23]) : (arr_65 [i_23])))) ? ((var_9 ? (arr_66 [i_23]) : 42855)) : (arr_65 [i_23])))));
    }
    var_61 += (min(5, -var_0));
    #pragma endscop
}
