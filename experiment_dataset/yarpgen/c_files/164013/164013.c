/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164013
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_12 = (min(var_12, ((var_3 <= (((arr_2 [i_0] [i_0]) ? var_6 : (arr_1 [i_0] [i_0])))))));
        var_13 -= 1;
        var_14 = (arr_1 [i_0] [i_0]);
        var_15 = ((!(((var_0 ? (arr_2 [i_0] [i_0]) : var_11)))));
        var_16 = var_3;
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_17 = (min(var_17, ((((arr_0 [i_1]) ? (arr_2 [i_1] [i_1]) : ((var_10 ? var_2 : ((var_0 << (((arr_5 [i_1]) - 16930909162061530901)))))))))));
        var_18 = (!1);
        var_19 *= ((((max(((var_4 ? 1 : (arr_4 [i_1] [i_1]))), ((max(var_6, (arr_1 [i_1] [i_1]))))))) ? (((((arr_2 [i_1] [i_1]) ? var_10 : var_3)) ^ ((((arr_3 [i_1] [i_1]) ? var_11 : var_7))))) : (arr_4 [i_1] [i_1])));
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
    {
        var_20 ^= (((((var_4 ? (arr_1 [i_2] [i_2]) : (max(var_11, var_8))))) ? (((max(var_9, var_5)))) : ((var_7 ? var_5 : 1))));
        var_21 = (max(var_21, (((var_9 ? var_2 : var_4)))));

        for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
        {

            for (int i_4 = 2; i_4 < 17;i_4 += 1)
            {
                var_22 &= ((!(((var_7 ? var_2 : 13495213731439767)))));
                var_23 += (arr_14 [i_3] [i_4 + 1] [i_4 + 1]);
            }
            /* vectorizable */
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                var_24 = ((var_3 ? (arr_4 [i_5] [i_5]) : (arr_11 [i_3] [i_3])));
                var_25 = (var_11 ^ var_9);
                var_26 = ((1 ? var_11 : (arr_9 [i_2] [i_3])));
                var_27 = (~var_4);
            }
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {

                /* vectorizable */
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {

                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        var_28 = 107;
                        var_29 |= (((arr_15 [i_8] [i_7] [i_3] [i_2]) ? (arr_8 [i_7] [i_8]) : (arr_7 [i_2])));
                    }

                    for (int i_9 = 1; i_9 < 19;i_9 += 1) /* same iter space */
                    {
                        var_30 = (((arr_24 [i_9] [i_9 + 1] [i_9 - 1] [i_9] [i_9] [i_9 - 1] [i_9 + 1]) < ((var_1 ? 1 : var_5))));
                        var_31 = ((!(((var_11 ? var_4 : (arr_3 [i_9 + 1] [i_3]))))));
                    }
                    for (int i_10 = 1; i_10 < 19;i_10 += 1) /* same iter space */
                    {
                        var_32 += ((!(var_0 != var_11)));
                        var_33 = (((arr_17 [i_2] [i_2] [i_2] [i_2]) ? var_10 : var_5));
                        var_34 ^= (((arr_10 [i_10 - 1] [i_10 - 1] [i_10 - 1]) ? var_3 : (arr_25 [i_10 + 1] [i_10 + 1] [i_10 - 1] [i_10] [i_10 - 1])));
                    }
                    var_35 = var_7;
                    var_36 = var_3;
                }
                var_37 = var_5;
                var_38 |= (max(var_2, (((((var_10 ? var_6 : 1))) ? var_8 : (arr_17 [i_2] [i_2] [i_3] [i_3])))));
                var_39 = (arr_11 [i_2] [i_2]);
            }
            var_40 = ((72 | ((var_5 ? var_0 : ((max(var_3, var_4)))))));
            var_41 = ((((var_10 ? var_3 : (arr_8 [i_2] [i_3]))) + (arr_8 [i_2] [i_3])));
            var_42 = (max(var_42, (((~((max(var_9, var_3))))))));
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 20;i_11 += 1) /* same iter space */
        {
            var_43 = (((((var_11 ? var_8 : 1))) ? (arr_30 [i_2] [i_2] [i_2]) : (var_3 & var_7)));
            var_44 = var_8;
            var_45 = (((arr_28 [i_2] [i_2] [i_2] [i_2] [i_2]) ? (arr_28 [i_2] [i_2] [i_2] [i_2] [i_2]) : (arr_28 [i_11] [i_11] [i_2] [i_2] [i_2])));
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                for (int i_13 = 1; i_13 < 19;i_13 += 1)
                {
                    {
                        var_46 = (var_2 % var_10);
                        var_47 = var_8;
                        var_48 = var_10;
                        var_49 = (max(var_49, (((-((var_3 ? var_1 : var_9)))))));
                        var_50 = (max(var_50, ((((arr_27 [i_2] [i_2] [i_2] [i_2] [i_12] [i_13 + 1] [i_2]) >= (arr_27 [i_2] [i_11] [i_12] [i_11] [i_13] [i_13 + 1] [i_12]))))));
                    }
                }
            }
            var_51 = ((var_11 ? var_6 : var_1));
        }
    }

    for (int i_14 = 2; i_14 < 22;i_14 += 1)
    {

        /* vectorizable */
        for (int i_15 = 0; i_15 < 1;i_15 += 1)
        {

            for (int i_16 = 2; i_16 < 23;i_16 += 1)
            {

                for (int i_17 = 0; i_17 < 25;i_17 += 1)
                {
                    var_52 = (max(var_52, (((var_3 ? (arr_49 [i_14] [i_14 - 2] [i_16 - 2] [i_16 + 1]) : var_4)))));
                    var_53 = (max(var_53, 1));
                }
                for (int i_18 = 1; i_18 < 23;i_18 += 1)
                {
                    var_54 = ((arr_49 [i_18 + 1] [i_15] [i_16 + 1] [i_16 + 1]) ? (arr_47 [i_18 + 2] [i_18] [i_18 + 2] [i_18 - 1]) : var_3);

                    for (int i_19 = 1; i_19 < 24;i_19 += 1)
                    {
                        var_55 = ((var_8 ? var_3 : var_2));
                        var_56 = var_0;
                        var_57 = (~-59);
                    }

                    for (int i_20 = 2; i_20 < 23;i_20 += 1)
                    {
                        var_58 = (arr_45 [i_15] [i_20 - 2] [i_20]);
                        var_59 = (((arr_55 [i_20 - 2] [i_15] [i_20 - 1] [i_20] [i_20 - 1] [i_20] [i_20]) ? (arr_55 [i_20 - 1] [i_15] [i_20] [i_20 + 1] [i_20 + 1] [i_20 - 1] [i_20]) : (arr_55 [i_20 + 1] [i_15] [i_20 + 1] [i_20 + 1] [i_20] [i_20] [i_20])));
                        var_60 = ((var_10 ? var_6 : (var_3 > var_10)));
                    }
                    for (int i_21 = 4; i_21 < 21;i_21 += 1)
                    {
                        var_61 = -65524;
                        var_62 -= 1768480067;
                        var_63 = (((arr_50 [i_15]) ? var_8 : (arr_50 [i_15])));
                        var_64 = ((var_10 ? (arr_49 [i_18 - 1] [i_18 - 1] [i_21] [i_21 + 1]) : (arr_49 [i_18 + 2] [i_18 - 1] [i_18] [i_21 + 2])));
                        var_65 = var_1;
                    }
                }
                var_66 = 1;
                var_67 |= ((var_2 ? 1 : 65535));
                var_68 = (((arr_56 [i_14 - 1] [i_14] [i_15] [i_14] [i_14 - 1] [i_16 + 2] [i_16]) ? (((var_8 + (arr_47 [i_14] [i_14 - 2] [i_15] [i_16])))) : var_10));
            }
            var_69 += (arr_59 [i_14] [i_14] [i_14] [i_14] [i_14 + 1]);
            var_70 = var_3;
            var_71 = var_6;
            var_72 *= ((-516927827 ? (arr_59 [i_14] [i_14 + 3] [i_15] [i_14] [i_15]) : var_3));
        }
        var_73 = (max((arr_50 [i_14]), (arr_58 [i_14 - 1] [i_14 + 1] [i_14] [i_14 + 1])));
        var_74 = var_9;
    }
    for (int i_22 = 3; i_22 < 17;i_22 += 1)
    {
        var_75 = ((((max((max(2026227426, var_7)), var_9))) ? (((max(var_8, var_3)))) : (max((arr_55 [i_22 - 2] [16] [i_22] [i_22 - 3] [i_22 - 1] [i_22 - 3] [i_22]), (arr_56 [i_22 + 1] [i_22] [1] [i_22 + 1] [i_22 + 1] [i_22] [i_22 - 2])))));
        var_76 = var_0;
        var_77 = ((-(max((((arr_50 [10]) - (arr_49 [i_22] [i_22 + 1] [i_22 - 1] [i_22 - 3]))), (!var_9)))));
        var_78 = (~var_7);
        var_79 = (max(var_79, ((max(((3690396616972340417 ? 30 : 128)), var_7)))));
    }
    #pragma endscop
}
