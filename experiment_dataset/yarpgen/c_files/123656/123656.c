/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123656
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_9;
    var_11 = (!102);

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0 - 1] [i_0] = arr_1 [i_0 - 1];

        for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
        {
            var_12 = (arr_4 [i_1]);
            var_13 = arr_1 [i_0 - 1];
            var_14 = (~118);
        }
        for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
            {
                arr_12 [i_0] [i_0 - 1] [i_0 - 1] = (-(arr_7 [i_0]));
                var_15 = 22390;
                var_16 = (min(var_16, (!12498)));
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 13;i_5 += 1)
                    {
                        {
                            var_17 = (max(var_17, (arr_11 [i_0 - 1] [i_5 + 2])));
                            var_18 = ((arr_17 [i_0] [i_2]) ? var_9 : (((var_1 ? 163 : (arr_8 [14] [0] [i_4])))));
                            arr_18 [i_5] [i_4] = (((arr_10 [i_4 + 2]) || (arr_0 [i_5])));
                            var_19 = (min(var_19, (0 >= 1)));
                        }
                    }
                }
            }
            for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
            {
                var_20 = var_8;
                arr_22 [i_0 - 1] = (arr_4 [i_2]);
                var_21 = ((((arr_5 [i_6] [i_2]) < 150)) || (!0));
                var_22 = (((arr_9 [i_0 - 1] [i_0 - 1] [i_0 - 1]) ? var_1 : (arr_9 [i_0 - 1] [i_0 - 1] [i_0 - 1])));
            }
            for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        {
                            var_23 = (min(var_23, (arr_2 [i_7])));
                            var_24 = (arr_17 [i_0] [i_0]);
                            arr_31 [i_9] [i_2] [i_7] = 1;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 15;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 15;i_11 += 1)
                    {
                        {
                            arr_37 [i_0] [i_0] [i_7] [i_10] [i_11] = ((1 ? 1 : 12991));
                            arr_38 [i_0] [i_2] [i_2] [i_10] [i_10] [i_11] = arr_23 [i_11] [i_11] [i_11];
                            arr_39 [i_0] [i_0] [i_7] [i_10] [i_11] = ((var_8 ^ (arr_11 [i_0 - 1] [i_0 - 1])));
                            var_25 += (!46494);
                        }
                    }
                }

                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    var_26 -= ((!(arr_15 [i_0 - 1] [i_0 - 1] [i_0 - 1])));
                    arr_43 [i_7] [i_12] = var_4;
                    var_27 = (max(var_27, (((~(arr_36 [i_0] [i_2] [i_7] [i_12] [0]))))));
                }
                for (int i_13 = 0; i_13 < 0;i_13 += 1)
                {
                    var_28 = arr_32 [i_0];
                    var_29 -= var_9;
                    arr_48 [i_13] = (arr_33 [i_0] [i_0 - 1] [i_0] [i_0 - 1]);
                }
                var_30 = ((!(!var_7)));
                arr_49 [i_2] [i_2] [i_7] = -137;
            }

            for (int i_14 = 0; i_14 < 1;i_14 += 1)
            {
                /* LoopNest 2 */
                for (int i_15 = 2; i_15 < 12;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 15;i_16 += 1)
                    {
                        {
                            arr_58 [i_0 - 1] [i_2] [10] [i_15 + 1] [i_15 + 1] = var_6;
                            var_31 = (((arr_4 [i_0 - 1]) ? -var_6 : (arr_24 [1] [1] [1] [1])));
                            var_32 = var_2;
                            arr_59 [2] [2] [i_2] [i_15] [i_16] = (arr_50 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_15 + 3]);
                        }
                    }
                }
                arr_60 [1] [i_2] [i_14] [i_2] = var_0;
                arr_61 [i_0] [i_2] [i_14] [i_14] = ((!(!12996)));
            }
            for (int i_17 = 0; i_17 < 15;i_17 += 1)
            {
                var_33 ^= ((~(arr_35 [i_0 - 1])));

                for (int i_18 = 0; i_18 < 15;i_18 += 1)
                {
                    arr_67 [i_0 - 1] [i_17] [i_17] [i_18] = ((~(((arr_65 [i_2] [i_17]) ? (arr_41 [i_0] [i_0] [i_0] [2] [i_0]) : (arr_44 [i_0] [i_0] [i_17] [13])))));
                    var_34 = (~1);
                }
                for (int i_19 = 1; i_19 < 13;i_19 += 1)
                {

                    for (int i_20 = 0; i_20 < 1;i_20 += 1)
                    {
                        var_35 = (!9258970187993961239);
                        arr_72 [i_17] [i_2] [i_17] [i_2] [i_2] = (((arr_69 [i_17]) ? (arr_69 [i_17]) : var_0));
                        arr_73 [i_0] [i_2] [i_2] [i_0] [i_19] [i_20] [i_20] &= ((!(arr_2 [i_17])));
                    }
                    arr_74 [i_17] [i_2] = (!(arr_19 [0]));
                }
                var_36 *= ((((-1983831325 + 2147483647) >> (15532 - 15521))));
                var_37 = var_1;
            }

            for (int i_21 = 2; i_21 < 14;i_21 += 1)
            {
                var_38 = ((((!(arr_21 [i_21] [i_2]))) ? 93 : var_3));
                var_39 = ((~((-(arr_47 [1] [i_21 - 1] [1] [i_21])))));

                for (int i_22 = 0; i_22 < 1;i_22 += 1)
                {
                    var_40 = (arr_77 [i_21] [i_21 + 1] [i_21 - 2] [i_21 - 2] [i_21 - 2] [i_21 - 2]);
                    var_41 = (((((~(arr_0 [i_0])))) ? (arr_15 [i_0 - 1] [i_21 - 2] [i_21 - 1]) : ((((arr_4 [i_0]) >= (arr_8 [i_2] [i_21 - 2] [i_22]))))));
                    arr_80 [i_22] = var_4;
                    arr_81 [i_0] [i_0 - 1] [i_0 - 1] [i_0] [i_0] = (arr_7 [i_0]);
                    var_42 = ((arr_36 [i_0 - 1] [i_0 - 1] [i_21 - 1] [i_21] [i_21 + 1]) > var_7);
                }
                for (int i_23 = 0; i_23 < 15;i_23 += 1)
                {
                    arr_86 [1] = (!-1);
                    var_43 ^= 1;
                }
            }
        }
        arr_87 [i_0] [i_0] = ((~(arr_17 [i_0 - 1] [i_0 - 1])));
    }
    /* LoopNest 3 */
    for (int i_24 = 0; i_24 < 1;i_24 += 1)
    {
        for (int i_25 = 1; i_25 < 7;i_25 += 1)
        {
            for (int i_26 = 0; i_26 < 11;i_26 += 1)
            {
                {
                    var_44 = 2248344476;
                    arr_99 [i_24] [i_25] = (((var_6 * 18446744073709551615) * (arr_64 [i_24] [i_25 + 4] [i_25 + 1] [i_25 + 1])));
                }
            }
        }
    }
    #pragma endscop
}
