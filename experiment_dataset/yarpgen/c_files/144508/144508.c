/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144508
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_10;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        arr_3 [i_0] |= ((-2 ? 78 : -32765));
        arr_4 [i_0] [i_0] = (((2393845795 | var_7) ? (arr_2 [i_0 - 2] [i_0]) : ((var_4 ? 8919435638146666949 : var_6))));

        for (int i_1 = 4; i_1 < 8;i_1 += 1)
        {
            arr_9 [i_0] = (-28107 << (191 - 191));
            var_13 = ((-(arr_0 [i_0 - 2] [5])));
        }
        for (int i_2 = 2; i_2 < 11;i_2 += 1)
        {
            arr_13 [i_0] = (arr_7 [i_0 + 2] [i_2] [i_2 + 1]);

            for (int i_3 = 1; i_3 < 11;i_3 += 1)
            {
                var_14 = 14;
                arr_17 [i_0 + 1] [i_0] [i_0] = ((((arr_14 [i_3 + 1] [i_0]) ? 85 : -18)) < var_1);
                arr_18 [i_0 - 2] [i_3] = (516096 || -1);
            }
            for (int i_4 = 2; i_4 < 9;i_4 += 1)
            {
                var_15 = (~var_2);
                arr_21 [i_2] [i_4 - 2] = -248;
                arr_22 [i_0] [i_0] [i_0] [i_0] = ((!(((var_11 ? 32765 : var_0)))));
            }
            for (int i_5 = 2; i_5 < 11;i_5 += 1)
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        {
                            arr_32 [i_7] = ((-32762 ? 1 : ((-(arr_10 [i_2] [i_7])))));
                            var_16 = (min(var_16, ((((var_4 * var_1) ? 1901121501 : ((((arr_5 [i_0 + 2] [i_2] [i_5 + 1]) != var_11))))))));
                        }
                    }
                }
                arr_33 [i_0] [i_0] [i_2] [i_5] = 36826;
            }
            for (int i_8 = 0; i_8 < 0;i_8 += 1)
            {
                var_17 = -var_8;
                var_18 *= (((arr_16 [i_0 - 1]) | (arr_16 [i_0 - 2])));
            }
            arr_37 [i_2] = (((((var_9 ? -63 : (arr_16 [i_2])))) ? var_3 : var_11));
            arr_38 [i_0] [i_0] [i_0 + 3] = 1;
        }
        for (int i_9 = 3; i_9 < 9;i_9 += 1)
        {
            arr_42 [i_0] [8] = 1;
            arr_43 [i_9] = ((var_5 << (1610612736 - 1610612726)));
            arr_44 [i_0] [i_9 + 1] = var_7;
        }
        for (int i_10 = 3; i_10 < 9;i_10 += 1)
        {
            var_19 = ((var_9 ? 2 : (-1980391159 & 8375615848971493631)));
            /* LoopNest 3 */
            for (int i_11 = 1; i_11 < 10;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 12;i_12 += 1)
                {
                    for (int i_13 = 4; i_13 < 11;i_13 += 1)
                    {
                        {
                            var_20 += (arr_28 [i_11] [i_10 + 2] [i_11] [i_12]);
                            arr_55 [5] [i_10] [i_11] [i_13 - 4] = (((4294967290 ? var_8 : var_5)));
                        }
                    }
                }
            }
            var_21 -= (!-var_10);
            arr_56 [i_0] [i_0] = (((arr_49 [i_10 + 3] [i_10 + 3] [i_10 + 1] [i_10 + 3]) ? (!var_6) : (!var_0)));
        }

        for (int i_14 = 0; i_14 < 1;i_14 += 1)
        {

            for (int i_15 = 2; i_15 < 10;i_15 += 1)
            {
                var_22 = (arr_14 [i_0 + 3] [i_0 + 2]);
                arr_64 [i_0 + 1] [i_15] = 1;
                arr_65 [i_0] [i_14] [i_0] [i_15] |= (((arr_1 [i_15 + 1] [i_0 - 1]) >= var_5));
            }
            for (int i_16 = 1; i_16 < 9;i_16 += 1)
            {
                arr_70 [i_0] [i_0] = ((~((8375615848971493625 ? 1 : 5024601414155836494))));
                var_23 |= (~(((!(arr_41 [i_0])))));

                for (int i_17 = 1; i_17 < 11;i_17 += 1)
                {
                    var_24 = 1;
                    var_25 = (1 != var_7);
                }
                var_26 = (min(var_26, (((7 ? (arr_68 [i_16 + 2] [i_0 - 1] [i_16 + 3] [i_16 + 3]) : -1416505567)))));
            }
            for (int i_18 = 3; i_18 < 10;i_18 += 1)
            {

                for (int i_19 = 1; i_19 < 11;i_19 += 1)
                {
                    var_27 ^= (arr_0 [i_0] [i_0]);
                    var_28 = (arr_73 [i_0] [i_14] [8] [i_14] [i_18] [i_19 + 1]);
                    var_29 = ((157 > (arr_23 [i_19 + 1] [i_0 + 3] [i_18 + 1])));
                    var_30 = (arr_58 [i_0 + 1] [i_0 - 2] [i_0 - 2]);
                }
                var_31 = var_9;
            }
            for (int i_20 = 3; i_20 < 11;i_20 += 1)
            {
                var_32 = var_1;
                /* LoopNest 2 */
                for (int i_21 = 1; i_21 < 9;i_21 += 1)
                {
                    for (int i_22 = 0; i_22 < 1;i_22 += 1)
                    {
                        {
                            arr_87 [i_0] [i_22] [i_0 + 1] [i_0 + 1] [i_22] [i_21 + 3] [i_0 + 1] = var_0;
                            var_33 = (((arr_51 [i_20] [i_21] [i_21 - 1] [i_21] [i_22]) ? var_6 : (arr_51 [i_14] [i_21 + 2] [i_21 - 1] [i_21 + 1] [i_22])));
                        }
                    }
                }
            }
            var_34 = (max(var_34, (var_0 * 160292014)));
            var_35 += 70368744046592;
        }
        /* LoopNest 3 */
        for (int i_23 = 0; i_23 < 12;i_23 += 1)
        {
            for (int i_24 = 0; i_24 < 12;i_24 += 1)
            {
                for (int i_25 = 3; i_25 < 10;i_25 += 1)
                {
                    {
                        arr_96 [i_24] [i_25 - 1] = (arr_61 [i_25 - 3] [i_24] [i_24] [i_24]);
                        var_36 = (arr_25 [4] [i_0 + 3] [i_0 - 1] [i_23]);
                    }
                }
            }
        }
    }
    #pragma endscop
}
