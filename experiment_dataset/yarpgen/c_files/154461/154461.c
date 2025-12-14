/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154461
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += (((((var_3 ? var_3 : var_1)) << (var_3 - 11786561304857527691))));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    var_15 = (var_13 / var_11);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_16 &= var_13;
                                var_17 += (18 + 1);
                                var_18 = (max(var_18, var_5));
                            }
                        }
                    }
                }
            }
        }

        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {

            for (int i_6 = 2; i_6 < 20;i_6 += 1)
            {
                var_19 = var_0;
                arr_17 [i_0] [i_5] [i_6] = var_9;
                arr_18 [1] [i_5] = ((~(!var_2)));
            }
            for (int i_7 = 1; i_7 < 22;i_7 += 1)
            {
                var_20 = ((var_1 ? (arr_16 [i_0] [i_5] [1]) : var_0));
                var_21 = 3241;
                arr_22 [i_0] [i_5] [i_0] &= ((var_12 / (var_2 / var_2)));
            }
            var_22 = (((arr_7 [i_0] [i_0] [15] [i_0 + 2] [i_0 - 1] [15]) > (arr_7 [i_0] [i_0 - 2] [i_0 - 3] [i_0 + 1] [i_0 + 3] [i_0])));
        }
        var_23 &= var_8;

        for (int i_8 = 0; i_8 < 23;i_8 += 1)
        {
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 23;i_9 += 1)
            {
                for (int i_10 = 4; i_10 < 22;i_10 += 1)
                {
                    {
                        var_24 = ((-(arr_19 [i_0 + 2] [i_9])));

                        for (int i_11 = 2; i_11 < 19;i_11 += 1)
                        {
                            var_25 = (~var_13);
                            var_26 = ((var_8 & var_9) + -var_4);
                            var_27 = (arr_20 [i_0 - 2] [i_8]);
                        }
                    }
                }
            }
            var_28 = var_7;
        }
        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            var_29 = (var_0 & (arr_39 [i_0 - 3] [i_12] [i_0 + 1]));
            arr_40 [i_12] = (((var_1 + (arr_9 [i_12] [i_12] [i_12]))));
            var_30 = (min(var_30, var_8));
        }
    }
    for (int i_13 = 2; i_13 < 22;i_13 += 1)
    {
        var_31 = (max(var_7, var_11));
        var_32 = (max(var_32, (((var_8 ? ((var_7 ? var_3 : var_12)) : var_4)))));
    }
    for (int i_14 = 0; i_14 < 12;i_14 += 1)
    {

        for (int i_15 = 2; i_15 < 11;i_15 += 1)
        {

            for (int i_16 = 0; i_16 < 12;i_16 += 1)
            {
                var_33 = ((((min(var_7, var_9))) ? -var_4 : var_13));
                arr_53 [i_14] [i_14] [6] = (max((((30665 >> (5989 - 5980)))), (min((arr_8 [i_15 - 2] [i_15] [i_15] [i_14]), var_6))));
            }
            for (int i_17 = 1; i_17 < 9;i_17 += 1)
            {
                var_34 *= (((((1 ? var_5 : (arr_43 [i_14])))) ? ((var_2 ? (arr_12 [i_15 - 2] [i_17 + 3]) : (arr_12 [i_15 + 1] [i_17 + 3]))) : (var_11 != var_8)));
                var_35 += (~var_10);
                var_36 = (min(var_36, ((((-15 < 5989) ? (((var_11 ? ((((arr_33 [i_17] [i_17] [i_17] [i_17]) > var_13))) : (var_8 * var_6)))) : var_10)))));
            }
            for (int i_18 = 0; i_18 < 12;i_18 += 1)
            {
                arr_60 [i_14] [i_14] [i_14] [i_14] = ((62294 ? 0 : 14));
                /* LoopNest 2 */
                for (int i_19 = 2; i_19 < 10;i_19 += 1)
                {
                    for (int i_20 = 2; i_20 < 11;i_20 += 1)
                    {
                        {
                            var_37 = (((arr_19 [i_15] [i_15 - 2]) ^ var_11));
                            var_38 += var_13;
                            var_39 = (arr_51 [i_20] [i_18] [i_14]);
                            var_40 = ((((min((var_1 | 3241), (min((arr_4 [i_18] [i_19] [i_20]), var_6))))) ? (min(var_3, (arr_28 [i_15 - 2] [i_20 + 1] [i_19 + 1]))) : (((var_13 ? var_8 : var_1)))));
                            var_41 = (min(var_41, (((~((max(6, -20116))))))));
                        }
                    }
                }
                var_42 += (((((var_6 ? (~var_9) : (~var_9)))) + var_3));
                var_43 = (((arr_9 [i_14] [i_15] [i_18]) ? ((var_6 ? (arr_2 [i_15 + 1] [i_15 + 1]) : var_13)) : ((((var_5 > (arr_31 [i_14] [i_14] [i_14])))))));
            }
            for (int i_21 = 0; i_21 < 12;i_21 += 1)
            {
                var_44 *= (min((max((var_1 ^ var_1), 62279)), (((arr_36 [i_15 - 1] [i_15 - 2] [i_15] [i_15 - 2] [i_15]) ? 147 : var_8))));
                /* LoopNest 2 */
                for (int i_22 = 2; i_22 < 11;i_22 += 1)
                {
                    for (int i_23 = 3; i_23 < 9;i_23 += 1)
                    {
                        {
                            var_45 = ((max((arr_59 [i_22 - 1] [i_15 + 1]), (arr_59 [i_22 - 1] [i_15 + 1]))));
                            var_46 = (min(var_46, (((-var_8 ? (((8973058912477250574 ? 167 : 6))) : ((var_8 ? (arr_12 [i_23 + 1] [i_15 - 1]) : (arr_16 [i_15 - 2] [i_22 + 1] [i_22 + 1]))))))));
                        }
                    }
                }
                var_47 = (((arr_49 [i_15 - 1] [i_15 - 2] [i_15 + 1]) ? (min(var_3, var_7)) : (arr_49 [i_15 - 2] [i_15 - 2] [i_15 - 2])));
            }
            var_48 *= (((min((arr_16 [i_14] [i_14] [i_14]), (arr_64 [i_14] [i_15 + 1])))) ? ((max(var_6, var_7))) : (~var_10));
            var_49 = (max(((min((arr_11 [i_15 + 1] [i_15] [i_15 + 1] [i_14] [i_15 - 2]), (arr_2 [i_15 - 1] [i_15 - 1])))), (1 + 13250946947373855839)));
        }
        var_50 += ((~(var_10 + var_6)));
    }
    var_51 = var_4;
    var_52 = var_1;
    #pragma endscop
}
