/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137198
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = -var_13;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                var_18 = (max(var_18, (((!((min(((1 ? (arr_3 [i_0] [i_0] [i_0]) : 1)), -1))))))));
                var_19 = 562887970827012271;
            }
            arr_7 [i_1] [i_0] [i_0] = 1;
        }
        /* vectorizable */
        for (int i_3 = 2; i_3 < 8;i_3 += 1)
        {
            var_20 = 1;

            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                var_21 = (!-var_15);
                arr_16 [i_0] [i_3] [i_3] [i_3] = 92;
            }
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                var_22 = ((((((var_1 ? -562887970827012276 : (arr_8 [i_0]))) + 9223372036854775807)) >> (((((arr_0 [10]) ? 91 : var_4)) - 49))));
                var_23 = (max(var_23, (!var_14)));
            }
        }
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 7;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    {
                        arr_28 [i_0] [i_7] [i_7 + 1] [i_7 + 4] [i_8] [i_8] = (min((((!var_14) > (arr_14 [i_0] [i_7 + 2] [i_8]))), ((!((((arr_17 [0] [i_7] [i_6] [i_0]) ? var_7 : var_0)))))));
                        var_24 = (arr_2 [i_8]);
                    }
                }
            }
        }
        arr_29 [i_0] = ((!(var_4 < -562887970827012293)));

        /* vectorizable */
        for (int i_9 = 0; i_9 < 11;i_9 += 1)
        {
            /* LoopNest 3 */
            for (int i_10 = 2; i_10 < 8;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 11;i_11 += 1)
                {
                    for (int i_12 = 2; i_12 < 10;i_12 += 1)
                    {
                        {
                            var_25 -= (arr_33 [i_10 - 2] [i_10 - 1] [i_0]);
                            var_26 = (arr_14 [i_10 + 2] [i_12 - 2] [i_12 - 2]);
                            var_27 = (((65535 / var_2) ? var_1 : -186912080));
                            arr_43 [i_0] [i_9] [i_10 - 1] [i_9] [i_9] [i_12 - 2] = (((arr_17 [i_10 - 2] [i_12] [i_12 - 2] [i_12]) ? -1 : 65534));
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_13 = 3; i_13 < 9;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 11;i_14 += 1)
                {
                    for (int i_15 = 3; i_15 < 9;i_15 += 1)
                    {
                        {
                            var_28 = (4742078371031097124 + 12549315617204745020);
                            arr_53 [i_0] [i_9] [8] [i_14] [i_15] = (arr_48 [2] [i_9] [10] [i_9] [i_9]);
                            var_29 ^= (((arr_36 [i_0] [i_13 + 1] [1] [i_15 + 2]) ? (arr_52 [i_15 - 1] [i_13 + 1] [1] [i_14] [6]) : (arr_52 [4] [i_13 - 1] [i_13] [i_0] [i_15 - 3])));
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_16 = 0; i_16 < 11;i_16 += 1)
            {
                for (int i_17 = 2; i_17 < 10;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 11;i_18 += 1)
                    {
                        {
                            var_30 ^= (~var_8);
                            arr_63 [i_9] = ((var_12 ? 41492 : (arr_10 [2] [i_9])));
                            arr_64 [i_9] [i_17] [i_16] [i_9] = (arr_57 [i_17] [i_17] [i_17 + 1] [i_17] [4] [i_9]);
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_19 = 2; i_19 < 7;i_19 += 1)
            {
                for (int i_20 = 1; i_20 < 1;i_20 += 1)
                {
                    {
                        var_31 = ((3121831061 ? (((arr_1 [i_0]) ? -26 : 65535)) : (var_6 && var_5)));

                        for (int i_21 = 0; i_21 < 11;i_21 += 1)
                        {
                            var_32 = (max(var_32, -8912));
                            arr_73 [i_0] [i_9] [i_19 + 2] [i_20] [7] = (((arr_61 [i_9] [i_0] [i_9] [i_19] [i_9] [i_21] [i_0]) / ((1 ? var_12 : 32761))));
                            var_33 = (((var_11 && var_14) >= (arr_49 [i_9] [i_19 - 1] [i_19 + 2] [i_19])));
                        }
                        for (int i_22 = 0; i_22 < 11;i_22 += 1)
                        {
                            var_34 = (min(var_34, (arr_44 [i_0] [i_19 + 4] [i_20 - 1] [i_22])));
                            var_35 = (min(var_35, (~-var_4)));
                        }
                        for (int i_23 = 3; i_23 < 8;i_23 += 1)
                        {
                            arr_80 [i_19] [i_9] [i_9] [i_20 - 1] [i_23 + 1] = ((var_7 ? (!98) : (arr_59 [10] [i_9] [i_19 + 1] [i_20] [i_23 + 2])));
                            arr_81 [i_23] [i_20] [i_9] [i_9] [i_0] = (((arr_60 [i_23] [i_20 - 1] [i_23] [i_23] [i_20 - 1] [i_20 - 1]) ? (arr_60 [i_23] [i_23] [i_23] [i_23] [i_23] [i_20 - 1]) : (arr_60 [i_23 - 2] [i_23] [i_23 + 3] [i_23] [i_23 - 2] [i_20 - 1])));
                        }
                        for (int i_24 = 4; i_24 < 8;i_24 += 1)
                        {
                            var_36 = var_15;
                            arr_84 [i_9] [i_9] [9] [3] [5] = -75;
                            var_37 = (((((-(arr_44 [i_24] [i_20] [i_9] [i_0])))) ? (4742078371031097124 * -1) : (~65509)));
                            var_38 -= 0;
                        }
                        arr_85 [i_9] [i_9] = ((~(-9 - 31)));
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_25 = 3; i_25 < 10;i_25 += 1)
        {
            arr_89 [i_25] = (!var_13);
            var_39 = ((1 ? 31246 : (!0)));
            var_40 = (min(var_40, (((65534 >> (-1188 + 1209))))));
        }
    }
    var_41 = ((-var_12 ? ((var_4 + ((max(var_0, var_13))))) : ((((var_2 >= ((253 ? 1 : -12))))))));
    #pragma endscop
}
