/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113334
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_14;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_21 = (arr_0 [i_0]);
            var_22 = (((arr_4 [i_0] [i_1]) ? (arr_4 [i_0] [i_0]) : 255));

            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                arr_8 [5] [i_2] = ((!(arr_7 [i_0] [i_2])));
                var_23 = (max(var_23, -1));
                var_24 = arr_0 [i_2];
            }
            for (int i_3 = 2; i_3 < 12;i_3 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 12;i_5 += 1)
                    {
                        {
                            arr_18 [i_3] = ((2147483647 ? var_3 : (((~(arr_0 [i_1]))))));
                            arr_19 [i_0] [i_1] [2] [i_3] [i_5] = var_11;
                            var_25 = var_13;
                        }
                    }
                }

                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    arr_23 [i_0] [i_3] [i_3] = var_7;
                    var_26 &= var_12;
                    var_27 *= var_11;
                    var_28 = -var_19;
                }
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    arr_27 [2] [2] [i_7] [i_3] = (var_6 / var_3);
                    var_29 = (arr_17 [i_0] [i_0] [i_1] [6] [6]);
                    arr_28 [i_0] [i_0] [i_3] [i_7] [i_7] |= (arr_12 [i_7]);
                }

                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    var_30 ^= var_12;

                    for (int i_9 = 2; i_9 < 12;i_9 += 1)
                    {
                        arr_33 [i_0] [i_9 + 1] [i_1] [i_3 + 1] [i_0] [i_0] &= (~14);
                        var_31 = (min(var_31, (arr_29 [i_9] [i_8] [i_3 - 1])));
                    }
                    for (int i_10 = 3; i_10 < 10;i_10 += 1)
                    {
                        var_32 += ((var_18 ^ (arr_12 [i_0])));
                        var_33 = (min(var_33, (arr_11 [i_10 - 3] [i_1])));
                        arr_37 [i_0] [i_0] [i_0] [i_3] [i_0] [i_0] [i_0] = (2 + 1011551144);
                    }
                    var_34 = var_12;
                }
                for (int i_11 = 0; i_11 < 13;i_11 += 1)
                {
                    var_35 = (~var_10);
                    var_36 = (arr_16 [i_0] [i_1] [i_1] [i_11] [i_3 + 1] [i_11]);
                    arr_42 [i_3] [i_1] [i_1] = (((((var_16 ? -1011551145 : 246))) ? 255 : (((arr_24 [i_0] [i_3] [i_3] [i_11]) << (-2147483615 - -2147483631)))));
                }
            }
            for (int i_12 = 2; i_12 < 12;i_12 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 13;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 13;i_14 += 1)
                    {
                        {
                            var_37 = (4297 << (-var_11 - 5754708525074251081));
                            var_38 = (((arr_47 [i_14] [i_14] [i_14] [i_14] [i_14] [0] [i_12 + 1]) - (arr_47 [i_13] [i_12 - 1] [i_13] [0] [i_12 + 1] [i_12 - 1] [i_12 - 1])));
                            var_39 = (~var_13);
                            arr_49 [i_12 + 1] [i_12] = (~12);
                        }
                    }
                }
                arr_50 [i_0] [7] = (!6);

                for (int i_15 = 0; i_15 < 13;i_15 += 1)
                {
                    var_40 = (~var_7);
                    var_41 -= ((!(-2147483647 - 1)));
                }
                for (int i_16 = 2; i_16 < 12;i_16 += 1)
                {
                    var_42 ^= -var_0;
                    var_43 = (((arr_31 [i_12 + 1] [i_12 + 1] [i_12 + 1] [i_12] [i_12 - 1] [i_12]) ^ (arr_44 [i_0] [i_12 - 1])));
                    var_44 = arr_15 [i_12 + 1] [i_12 + 1] [i_12 - 1] [i_16] [i_16 + 1] [i_16 + 1];
                    arr_58 [i_0] [i_0] [i_0] [i_0] = (((arr_36 [i_12 - 2]) ? var_4 : (var_10 <= var_17)));
                }
            }

            for (int i_17 = 0; i_17 < 13;i_17 += 1)
            {
                var_45 = (arr_52 [i_0] [i_0] [i_0] [i_0] [i_17]);

                for (int i_18 = 0; i_18 < 13;i_18 += 1)
                {
                    var_46 = ((arr_11 [i_0] [i_1]) ? (arr_34 [i_0] [0] [i_0] [i_1] [i_17] [i_0] [i_18]) : var_15);
                    arr_63 [i_0] [i_1] [i_0] [i_18] = (6287389649414782629 ? 244 : 244);
                    arr_64 [i_0] [0] [i_0] [i_18] &= (!var_13);
                }
                for (int i_19 = 0; i_19 < 13;i_19 += 1)
                {
                    arr_67 [i_0] [i_1] = (arr_44 [i_0] [i_1]);

                    for (int i_20 = 0; i_20 < 13;i_20 += 1)
                    {
                        var_47 = (arr_15 [i_0] [i_0] [i_17] [i_19] [i_19] [i_20]);
                        arr_71 [i_0] [i_0] [i_17] &= var_13;
                        arr_72 [i_0] [i_0] = (arr_69 [i_0] [i_0] [i_0] [i_0] [0]);
                        arr_73 [i_0] [i_1] [i_17] [i_19] [i_20] [i_1] = ((6586154540850048055 != (arr_30 [i_0] [4] [i_17] [i_20])));
                    }
                }
                for (int i_21 = 0; i_21 < 13;i_21 += 1)
                {
                    var_48 = (~((var_14 ? var_18 : (arr_44 [i_0] [i_0]))));
                    var_49 = var_17;
                }
                arr_77 [i_0] [i_1] = (var_12 - var_11);
                arr_78 [i_17] = (-(arr_57 [2] [i_1] [4] [i_0] [i_0]));
            }
        }
        var_50 = var_10;

        for (int i_22 = 0; i_22 < 13;i_22 += 1)
        {
            arr_81 [i_0] [i_22] [i_22] = var_8;
            var_51 ^= -116;
        }
        for (int i_23 = 2; i_23 < 12;i_23 += 1)
        {
            var_52 = (arr_31 [i_23 + 1] [i_23 + 1] [i_23 - 2] [i_23] [i_23 + 1] [i_23 + 1]);
            var_53 = 12303230271412174197;
        }
        for (int i_24 = 0; i_24 < 13;i_24 += 1)
        {
            var_54 = var_19;
            /* LoopNest 2 */
            for (int i_25 = 4; i_25 < 11;i_25 += 1)
            {
                for (int i_26 = 0; i_26 < 13;i_26 += 1)
                {
                    {
                        var_55 = (arr_22 [i_0] [i_24] [i_25] [i_26] [i_26]);
                        var_56 ^= (arr_15 [i_26] [i_26] [i_0] [i_0] [i_0] [i_0]);
                        var_57 *= (((arr_40 [i_25 + 1]) >= (arr_40 [i_0])));
                        arr_93 [i_0] [i_24] [i_24] [i_26] [i_25] = -1011551135;
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_27 = 0; i_27 < 13;i_27 += 1)
            {
                for (int i_28 = 0; i_28 < 13;i_28 += 1)
                {
                    {
                        arr_99 [i_24] [i_24] [i_27] [i_28] = (var_7 != var_18);
                        var_58 = ((((arr_48 [i_0]) + 2147483647)) << ((((18446744073709551611 ? (arr_0 [i_27]) : (arr_69 [i_0] [i_24] [i_0] [i_24] [i_28]))) - 396251768)));
                    }
                }
            }
        }
    }
    #pragma endscop
}
