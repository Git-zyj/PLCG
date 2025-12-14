/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107370
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_5;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_19 = var_1;
                        arr_13 [i_0] = (arr_0 [i_1]);
                        var_20 = (min(var_20, (arr_6 [1] [i_1] [i_1])));
                    }
                }
            }
        }
        var_21 += (min((arr_9 [i_0] [i_0]), var_8));
    }
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        var_22 = (arr_14 [i_4]);

        for (int i_5 = 4; i_5 < 22;i_5 += 1)
        {
            /* LoopNest 3 */
            for (int i_6 = 1; i_6 < 23;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        {
                            arr_30 [i_8] [i_5] [i_6] [i_6] [i_6] [i_5] [i_4] = var_14;
                            var_23 = (max(var_23, (arr_24 [i_5 - 4] [i_5 - 4] [i_6] [1])));
                        }
                    }
                }
            }
            var_24 = (arr_25 [i_4] [i_4]);
            var_25 = (min(var_25, (arr_25 [i_4] [i_4])));
        }
        for (int i_9 = 1; i_9 < 22;i_9 += 1)
        {
            var_26 = (max(var_26, -var_0));
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 24;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 24;i_11 += 1)
                {
                    {
                        var_27 = var_4;

                        for (int i_12 = 2; i_12 < 23;i_12 += 1)
                        {
                            var_28 = (arr_35 [i_9] [i_11] [i_10] [i_9]);
                            arr_44 [i_12] [i_11] [i_10] [i_10] [i_9 - 1] [i_4] [i_4] &= (max((arr_34 [i_4]), (min((((arr_14 [i_4]) ? (arr_20 [i_4] [i_9] [i_10] [i_11]) : var_6)), ((((arr_24 [i_4] [i_9] [i_10] [i_12]) ? var_14 : (arr_17 [i_4]))))))));
                            var_29 = (max(var_29, (((~(((((-(arr_14 [i_4])))) ? (((arr_35 [i_4] [i_4] [i_4] [i_4]) ? (arr_35 [i_4] [i_9] [i_4] [i_12]) : var_8)) : var_11)))))));
                        }
                        for (int i_13 = 0; i_13 < 24;i_13 += 1)
                        {
                            var_30 -= ((((min(((min((arr_23 [i_4]), (arr_46 [i_4] [i_9] [i_10] [i_11] [i_4])))), (min((arr_22 [i_4] [i_9] [i_10] [i_11]), (arr_39 [11] [i_9])))))) ? ((((max(var_9, var_13))) ? var_1 : ((((arr_45 [i_11] [i_13]) ? (arr_14 [i_4]) : var_3))))) : (((((max((arr_27 [21] [i_9] [i_10] [i_10] [i_11] [i_13]), var_4))) ? var_11 : (((arr_21 [i_10] [i_9 - 1] [i_10] [i_4]) ? (arr_23 [i_9 + 1]) : (arr_23 [i_9]))))))));
                            var_31 = (((((((((arr_42 [i_11] [i_11] [i_10] [i_11] [i_13]) ? var_12 : (arr_29 [i_4] [i_13] [i_13] [i_11])))) ? (max((arr_19 [i_4]), var_12)) : var_12))) ? (arr_32 [i_4] [i_9] [i_9]) : (((+(((arr_37 [i_10] [i_11] [i_10]) ? var_12 : (arr_14 [i_4]))))))));
                            var_32 = max((arr_46 [i_4] [i_9 + 2] [i_9] [i_9] [i_13]), var_10);
                        }
                        arr_48 [i_4] [i_4] = (((min(((-(arr_15 [i_11]))), (arr_19 [i_10])))) ? var_8 : var_7);
                        arr_49 [i_11] [i_4] [i_9] [i_4] = var_10;
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_14 = 2; i_14 < 20;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 24;i_15 += 1)
                {
                    {
                        var_33 ^= ((((((((9532768557319161519 ? -650553295 : -21))) ? ((min((arr_27 [i_4] [i_9 + 1] [i_14] [i_15] [i_4] [i_14 + 4]), (arr_36 [i_15] [i_14] [i_4])))) : (min(var_1, var_1))))) ? (min((max(var_0, (arr_32 [7] [i_9] [i_9]))), var_15)) : ((((min(var_16, var_10))) ? var_9 : ((((arr_21 [i_4] [i_9 + 1] [i_9 + 1] [i_15]) ? var_11 : (arr_19 [i_4]))))))));
                        arr_57 [i_4] [i_14] [i_9] [i_14] [i_15] = var_0;
                        var_34 += (((((4294221010227230719 ? 18446744073709551601 : 1980543195966361061))) ? (min((arr_53 [20] [i_14] [i_9] [i_9] [i_4]), var_1)) : ((((((35440 ? -60 : 1))) ? var_4 : (arr_42 [i_15] [i_14] [i_4] [i_4] [i_4]))))));
                    }
                }
            }
            var_35 |= (arr_35 [i_4] [i_4] [i_9 - 1] [i_9]);
        }
        for (int i_16 = 0; i_16 < 24;i_16 += 1)
        {
            var_36 = var_9;
            var_37 |= var_5;
            var_38 = (arr_43 [i_4] [i_4] [i_4] [i_4] [i_4] [i_16]);
            var_39 = var_13;
        }
    }
    for (int i_17 = 0; i_17 < 12;i_17 += 1)
    {
        var_40 = (min(var_40, ((min((((~(((arr_0 [i_17]) ? (arr_47 [i_17] [i_17] [i_17] [i_17] [i_17] [i_17]) : (arr_46 [i_17] [i_17] [i_17] [i_17] [i_17])))))), (arr_50 [0]))))));
        /* LoopNest 3 */
        for (int i_18 = 0; i_18 < 1;i_18 += 1)
        {
            for (int i_19 = 0; i_19 < 12;i_19 += 1)
            {
                for (int i_20 = 1; i_20 < 8;i_20 += 1)
                {
                    {
                        var_41 = ((-2147483632 ? 2147483632 : 1728724532));
                        var_42 = (min((((arr_38 [i_19]) ? ((min(var_2, (arr_58 [i_17] [i_17] [i_17])))) : var_9)), (((!(!var_10))))));

                        for (int i_21 = 1; i_21 < 11;i_21 += 1)
                        {
                            var_43 = (arr_15 [i_21]);
                            var_44 = var_17;
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_22 = 1; i_22 < 9;i_22 += 1)
        {
            for (int i_23 = 0; i_23 < 12;i_23 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_24 = 0; i_24 < 12;i_24 += 1)
                    {
                        for (int i_25 = 3; i_25 < 8;i_25 += 1)
                        {
                            {
                                var_45 = ((((max((min((arr_60 [i_17] [i_23]), (arr_50 [i_17]))), (arr_20 [i_25 + 4] [i_24] [i_22] [i_17])))) ? (((var_6 ? ((max((arr_63 [i_24] [i_24] [i_23]), var_17))) : ((var_2 ? (arr_40 [i_17] [11] [i_23] [i_25]) : (arr_50 [i_17])))))) : ((((max(var_3, (arr_66 [i_23] [i_23])))) ? (((max((arr_17 [i_17]), (arr_53 [i_17] [i_17] [i_17] [i_17] [i_17]))))) : (min((arr_39 [i_23] [6]), (arr_1 [i_23])))))));
                                var_46 = ((var_12 ? (max((arr_51 [i_17] [i_17]), (((var_16 ? (arr_45 [i_23] [i_25]) : (arr_64 [i_17])))))) : ((((min((arr_80 [i_17] [i_22] [i_23]), (arr_31 [i_17])))) ? (min(var_15, (arr_83 [i_17]))) : var_7))));
                            }
                        }
                    }
                    var_47 = var_15;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_26 = 0; i_26 < 1;i_26 += 1)
    {
        /* LoopNest 3 */
        for (int i_27 = 0; i_27 < 20;i_27 += 1)
        {
            for (int i_28 = 2; i_28 < 17;i_28 += 1)
            {
                for (int i_29 = 0; i_29 < 20;i_29 += 1)
                {
                    {
                        var_48 += (arr_7 [i_26]);
                        var_49 = var_11;
                    }
                }
            }
        }
        arr_94 [i_26] = (arr_31 [i_26]);
        var_50 = var_4;
        var_51 = ((var_16 ? (((arr_27 [i_26] [i_26] [i_26] [i_26] [i_26] [i_26]) ? (arr_45 [i_26] [i_26]) : var_7)) : (arr_91 [i_26] [i_26])));
    }
    /* LoopNest 3 */
    for (int i_30 = 0; i_30 < 14;i_30 += 1)
    {
        for (int i_31 = 2; i_31 < 12;i_31 += 1)
        {
            for (int i_32 = 2; i_32 < 12;i_32 += 1)
            {
                {
                    arr_105 [i_30] = -var_17;
                    /* LoopNest 2 */
                    for (int i_33 = 0; i_33 < 1;i_33 += 1)
                    {
                        for (int i_34 = 0; i_34 < 14;i_34 += 1)
                        {
                            {
                                arr_110 [i_31] [i_32] [i_33] [i_30] = (((((((max((arr_95 [i_30]), (arr_45 [i_30] [i_31])))) ? (((min(var_4, var_15)))) : (arr_6 [i_32] [i_33] [i_34])))) ? (min(((max((arr_35 [i_30] [i_30] [i_30] [i_30]), (arr_103 [i_30] [i_30])))), (((arr_88 [i_31] [i_32] [i_30]) ? var_1 : var_3)))) : ((min((max(var_14, (arr_45 [i_33] [i_31 + 1]))), (arr_102 [i_30] [i_30] [i_32 - 2]))))));
                                var_52 = (arr_27 [i_30] [i_30] [i_32] [3] [i_32] [i_34]);
                            }
                        }
                    }
                    var_53 = (max(((((min((arr_41 [1] [i_31] [i_31 - 1] [i_31] [i_30] [i_30] [i_30]), (arr_36 [i_30] [i_31 + 1] [i_32])))) ? ((min((arr_35 [i_30] [i_30] [i_31] [i_32 + 2]), (arr_3 [i_30])))) : ((var_14 ? var_14 : (arr_11 [i_30] [i_30] [i_30] [i_30] [i_32 - 2] [i_32 - 1]))))), ((max(((min((arr_21 [i_30] [i_31] [i_32] [i_31]), var_17))), ((var_14 ? (arr_16 [i_30]) : var_3)))))));
                    var_54 -= ((var_13 ? ((((-(arr_106 [i_32] [i_30] [i_31 - 1] [i_30] [i_30]))))) : (max((arr_56 [i_30] [i_31] [i_32] [i_30] [4] [i_30]), (min(var_1, (arr_20 [i_30] [i_30] [i_31] [i_30])))))));
                }
            }
        }
    }
    #pragma endscop
}
