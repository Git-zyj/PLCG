/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156130
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        arr_4 [i_0 + 1] = var_2;

        /* vectorizable */
        for (int i_1 = 1; i_1 < 14;i_1 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 16;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        {
                            var_15 = arr_6 [i_2];
                            arr_17 [i_0] [i_2] [i_4] [17] [i_4] = var_1;
                        }
                    }
                }
            }
            var_16 *= (arr_15 [i_1] [i_0] [i_0] [i_0 - 1] [i_0 - 1]);
            var_17 = (max(var_17, (((var_2 + (arr_2 [i_1 + 3]))))));

            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                var_18 = (max(var_18, var_14));
                arr_22 [1] [14] [i_0] = 0;
                arr_23 [i_0] [1] [i_5] [i_5] = (arr_1 [i_1 - 1] [i_1 - 1]);
            }
            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                var_19 = (arr_26 [i_0 - 1] [i_1 - 1]);
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 15;i_7 += 1)
                {
                    for (int i_8 = 3; i_8 < 15;i_8 += 1)
                    {
                        {
                            var_20 = ((var_8 / (arr_26 [i_0 - 1] [i_7 + 1])));
                            var_21 = ((var_5 ? (arr_6 [i_8 - 2]) : var_2));
                            var_22 = var_13;
                            var_23 = var_3;
                            var_24 = (max(var_24, (((((~(arr_32 [i_8] [i_7] [i_6] [i_6] [i_0 - 1] [i_0 - 1] [i_0 - 1]))) % ((var_11 - (arr_9 [0] [i_6] [i_6]))))))));
                        }
                    }
                }
                var_25 = (max(var_25, (((~(arr_0 [i_0]))))));
            }
            for (int i_9 = 2; i_9 < 17;i_9 += 1)
            {
                var_26 = ((~(arr_8 [i_0 + 1] [i_1 + 1])));
                var_27 = (((-(arr_30 [i_0] [i_0] [4] [i_9] [0]))));
            }
        }
        for (int i_10 = 1; i_10 < 14;i_10 += 1) /* same iter space */
        {
            var_28 = (max(var_28, (((!(((576425567931334656 ? 9062960001397330186 : (arr_29 [i_0] [i_0 - 1] [i_0] [i_0 - 1] [i_10])))))))));
            var_29 = (min(3311939163427910391, 17104753772679120956));
        }
        for (int i_11 = 1; i_11 < 14;i_11 += 1) /* same iter space */
        {
            arr_42 [i_0] [i_11] [i_11] = var_9;

            /* vectorizable */
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                arr_47 [i_0 - 1] = ((!(((var_5 ? 2529 : -9062960001397330189)))));
                arr_48 [i_12] = (((arr_32 [i_0 - 1] [i_0 + 1] [i_0] [i_0 + 1] [i_11] [i_11 + 3] [i_11 + 4]) ? var_8 : var_4));
            }
        }
        for (int i_13 = 3; i_13 < 15;i_13 += 1)
        {
            var_30 = (max(var_30, ((-1 ? -9062960001397330187 : 36598990))));

            for (int i_14 = 3; i_14 < 17;i_14 += 1) /* same iter space */
            {
                var_31 = (max(var_31, (((0 ^ (((var_4 ? ((((arr_2 [i_14]) & var_14))) : ((~(arr_45 [i_14] [i_14] [i_14] [i_14])))))))))));
                var_32 = (min((((~(arr_41 [i_14 + 1])))), (min((arr_51 [i_13 - 3] [i_13] [i_0 + 1]), (((arr_25 [1]) | var_1))))));

                /* vectorizable */
                for (int i_15 = 0; i_15 < 18;i_15 += 1)
                {
                    arr_56 [i_0] [i_13 - 2] [i_14] [i_15] |= -1205217907;
                    var_33 = (((arr_3 [i_0 - 1]) & 2523));
                    var_34 = (max(var_34, var_11));
                }
                /* vectorizable */
                for (int i_16 = 1; i_16 < 16;i_16 += 1)
                {

                    for (int i_17 = 2; i_17 < 16;i_17 += 1)
                    {
                        var_35 = (max(var_35, (((106 ? -6727562522401849398 : (((0 << (163 - 152)))))))));
                        var_36 = (((((~(arr_3 [i_16])))) ? var_13 : (arr_37 [16] [16])));
                        var_37 &= ((var_7 ? 125 : var_5));
                        arr_62 [i_0] [1] [12] [i_14] [i_16 + 1] [i_14] = (((arr_11 [i_16 + 2] [i_13] [i_0 + 1] [i_13]) - (arr_11 [i_16 + 2] [i_0] [i_0 + 1] [10])));
                    }
                    var_38 = ((var_2 ? (arr_38 [i_0 + 1]) : var_13));
                }
            }
            for (int i_18 = 3; i_18 < 17;i_18 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_19 = 4; i_19 < 16;i_19 += 1)
                {
                    for (int i_20 = 3; i_20 < 16;i_20 += 1)
                    {
                        {
                            var_39 = (min((min(var_1, (arr_36 [i_0 + 1] [i_20] [i_20 - 2]))), ((min(29, 3646969855)))));
                            arr_70 [i_0] [i_0] [i_18] [i_19] [i_19] = var_8;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_21 = 0; i_21 < 18;i_21 += 1)
                {
                    for (int i_22 = 2; i_22 < 17;i_22 += 1)
                    {
                        {
                            arr_76 [i_22 + 1] [8] [i_18] [i_0] [i_0] = min(var_2, -var_11);
                            var_40 = ((-(min((((var_3 ? 0 : var_6))), 9062960001397330186))));
                            arr_77 [i_0] [i_21] [i_18] [i_0 + 1] [i_21] [i_22] [i_0] = var_1;
                            var_41 = ((((max(var_13, (arr_18 [i_0 - 1] [i_18 - 1] [i_22 - 1])))) ? (arr_67 [i_0 - 1]) : (min(var_10, (arr_18 [i_0 - 1] [i_18 - 1] [i_22 - 1])))));
                        }
                    }
                }
                arr_78 [i_0] [i_0] [i_0 - 1] = var_3;
                var_42 = (min(((((arr_14 [i_0 - 1] [i_0 - 1] [i_13 - 2] [i_18] [i_18 - 3]) || (arr_14 [i_18] [i_13 + 3] [i_13] [i_0 - 1] [i_0 - 1])))), (arr_14 [i_0 + 1] [i_0 + 1] [i_13] [i_0 + 1] [i_18 - 3])));
                arr_79 [i_0] [i_13] [1] [i_18] = (((((arr_45 [i_18] [i_13 + 3] [i_13 + 3] [i_0]) ? ((min((arr_75 [i_0]), var_11))) : ((min(1, 0))))) - ((-(arr_38 [i_18 - 3])))));
            }
        }
    }
    /* vectorizable */
    for (int i_23 = 2; i_23 < 17;i_23 += 1)
    {
        arr_84 [i_23] = var_0;
        arr_85 [15] = -var_4;
        var_43 ^= (((arr_25 [i_23 - 1]) ? (arr_55 [i_23] [13] [i_23 + 1] [i_23 - 2] [i_23] [i_23 + 1]) : (arr_75 [i_23])));
    }
    var_44 = var_8;
    /* LoopNest 2 */
    for (int i_24 = 0; i_24 < 1;i_24 += 1)
    {
        for (int i_25 = 0; i_25 < 15;i_25 += 1)
        {
            {
                arr_91 [i_24] [4] [i_25] = var_1;
                arr_92 [i_24] [i_24] = (arr_80 [i_25]);
                /* LoopNest 2 */
                for (int i_26 = 0; i_26 < 15;i_26 += 1)
                {
                    for (int i_27 = 3; i_27 < 13;i_27 += 1)
                    {
                        {
                            var_45 ^= (min((max(((var_3 ? var_13 : var_2)), var_13)), ((max(-9062960001397330187, 2139095040)))));
                            var_46 = (arr_24 [i_24]);
                            arr_97 [8] [8] [i_26] [i_27] [i_27] = (arr_10 [i_27] [i_27 - 1] [i_27 - 2] [i_27 + 1]);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
