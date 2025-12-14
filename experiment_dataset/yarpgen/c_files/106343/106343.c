/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106343
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_14 = (min(var_14, ((max((arr_1 [i_0] [i_0]), var_0)))));
        var_15 = (min(var_15, ((max((((var_8 ? (arr_0 [i_0 - 2] [i_0 + 2]) : (arr_0 [i_0 - 2] [i_0 - 2])))), (max(0, 1)))))));
    }

    for (int i_1 = 2; i_1 < 12;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    {
                        var_16 ^= var_5;
                        var_17 -= (arr_3 [i_2]);
                    }
                }
            }
        }
        var_18 ^= ((((max(((max(-61, var_11))), (arr_9 [i_1] [10] [i_1] [i_1])))) && (~var_5)));
    }
    var_19 *= ((max(var_13, ((var_8 ? var_4 : 15819)))));

    for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
    {
        var_20 = (max(var_20, (((-((((max(0, 3017369468971089353))) ? var_11 : 15819)))))));
        var_21 = var_8;
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
    {
        var_22 -= (!var_13);

        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            var_23 -= var_9;
            var_24 = (max(var_24, var_2));
        }
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            var_25 -= var_1;
            var_26 *= ((var_9 ? var_4 : var_13));
            var_27 = (min(var_27, (!64)));
        }
    }

    /* vectorizable */
    for (int i_9 = 0; i_9 < 11;i_9 += 1)
    {

        for (int i_10 = 0; i_10 < 11;i_10 += 1)
        {
            var_28 = (min(var_28, ((((~(arr_1 [i_9] [i_10])))))));
            arr_26 [i_9] &= var_12;
            var_29 ^= (!-1);
            var_30 ^= ((-(arr_18 [i_10] [i_10])));
        }
        var_31 &= -var_5;
    }
    for (int i_11 = 0; i_11 < 13;i_11 += 1)
    {
        var_32 += ((var_12 ? -var_0 : (max((arr_9 [i_11] [i_11] [i_11] [i_11]), ((max((arr_17 [i_11]), var_5)))))));
        var_33 = (max(var_33, (arr_27 [i_11])));
        var_34 |= ((-((((~(arr_2 [i_11])))))));
    }
    for (int i_12 = 1; i_12 < 13;i_12 += 1)
    {
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 14;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 14;i_14 += 1)
            {
                {
                    var_35 = (min(var_35, ((((((var_8 ? 8128 : (arr_31 [i_12 - 1])))) ? var_5 : ((var_5 ? 8 : var_13)))))));
                    var_36 = (min(var_36, var_4));
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 14;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 1;i_16 += 1)
                        {
                            {
                                var_37 = (min(var_37, (max(var_8, (arr_16 [i_12] [i_12] [9])))));
                                var_38 ^= var_8;
                                var_39 = (max(var_39, -var_1));
                            }
                        }
                    }

                    for (int i_17 = 1; i_17 < 13;i_17 += 1)
                    {
                        var_40 -= (max((((arr_38 [1] [1] [i_17 + 1]) | (arr_38 [i_13] [1] [i_17 - 1]))), var_11));
                        var_41 -= 0;
                    }
                    for (int i_18 = 1; i_18 < 13;i_18 += 1)
                    {

                        for (int i_19 = 1; i_19 < 12;i_19 += 1)
                        {
                            var_42 = ((((max(var_4, var_7))) ? (((!var_4) ? (max(var_3, var_4)) : (arr_30 [2]))) : var_5));
                            var_43 = (max(var_43, (!var_10)));
                        }
                        for (int i_20 = 1; i_20 < 11;i_20 += 1)
                        {
                            arr_50 [i_12] [8] [i_12] [i_12] [i_12 - 1] [i_12] [i_12 - 1] &= (~(max((arr_44 [11] [i_14] [i_14] [i_18]), (arr_44 [i_12] [i_12] [i_12] [i_12]))));
                            var_44 &= (max(var_7, ((-(max((arr_39 [i_18] [i_13] [i_14] [i_20] [i_18] [3]), var_4))))));
                        }
                        /* vectorizable */
                        for (int i_21 = 0; i_21 < 14;i_21 += 1) /* same iter space */
                        {
                            var_45 = (arr_32 [8] [4]);
                            var_46 = (max(var_46, 0));
                        }
                        for (int i_22 = 0; i_22 < 14;i_22 += 1) /* same iter space */
                        {
                            var_47 += (max((!var_1), var_12));
                            var_48 = (min(var_48, 49716));
                        }

                        for (int i_23 = 2; i_23 < 10;i_23 += 1) /* same iter space */
                        {
                            var_49 = max(var_2, ((max((~var_9), var_4))));
                            var_50 = (max(var_50, (arr_57 [i_12] [i_12] [i_14] [i_12] [i_12] [i_12])));
                        }
                        for (int i_24 = 2; i_24 < 10;i_24 += 1) /* same iter space */
                        {
                            var_51 = (min(var_51, ((max(var_0, (~1071106906))))));
                            var_52 = var_9;
                            var_53 *= ((-((max(2432190428, var_8)))));
                            var_54 = (min(var_54, (~64)));
                        }
                        for (int i_25 = 0; i_25 < 14;i_25 += 1)
                        {
                            var_55 = (max(var_55, (((max(4834447301357019684, (var_1 ^ -19))) % (((-(max(var_9, var_3)))))))));
                            var_56 += (max((arr_57 [i_18] [i_18] [i_18] [i_18 - 1] [i_18 - 1] [i_18]), (((arr_57 [i_18] [i_18 + 1] [11] [i_18 - 1] [i_18 - 1] [i_18]) / (arr_57 [7] [i_18 + 1] [i_18 + 1] [i_18 - 1] [i_18] [7])))));
                            var_57 ^= var_3;
                        }
                        var_58 = (max(var_58, ((((max((((arr_34 [i_14] [i_13] [i_14]) ? var_2 : var_3)), ((((arr_35 [2] [i_13]) > var_6))))) % var_13)))));
                    }
                    for (int i_26 = 0; i_26 < 1;i_26 += 1)
                    {
                        var_59 = (max(var_59, ((max((max(45793, (max((arr_37 [0] [0] [0] [i_13]), (arr_17 [2]))))), -var_6)))));
                        var_60 -= (arr_45 [i_14]);

                        for (int i_27 = 0; i_27 < 14;i_27 += 1) /* same iter space */
                        {
                            var_61 -= max(((((-(arr_11 [i_12] [i_27]))))), (((~(arr_66 [i_14] [i_14] [i_14] [i_14] [1])))));
                            var_62 = (min(var_62, var_9));
                            var_63 = (max(var_63, var_13));
                            var_64 -= ((~(((max((arr_39 [i_12] [i_12] [i_14] [i_26] [i_14] [i_14]), (arr_48 [1] [12] [i_26] [i_26] [i_26] [i_26])))))));
                        }
                        for (int i_28 = 0; i_28 < 14;i_28 += 1) /* same iter space */
                        {
                            var_65 -= ((-((-(arr_19 [i_28] [i_12 + 1])))));
                            var_66 *= ((var_2 ? (max(-1971235677, var_5)) : 21887));
                        }
                        var_67 -= (~45793);
                        var_68 = (min(var_68, ((max(var_4, var_7)))));
                    }
                    /* LoopNest 2 */
                    for (int i_29 = 0; i_29 < 14;i_29 += 1)
                    {
                        for (int i_30 = 0; i_30 < 14;i_30 += 1)
                        {
                            {
                                var_69 ^= var_1;
                                var_70 = (min(var_70, -27));
                                var_71 = (max(var_71, (arr_62 [i_12] [i_12] [i_14] [i_13] [i_29] [7] [i_13])));
                                var_72 *= (max(((~(max(var_5, 12340)))), (max(((max(48, (arr_72 [i_12] [11] [5] [i_29] [i_29])))), var_4))));
                            }
                        }
                    }
                }
            }
        }
        var_73 = (min(var_73, (arr_55 [i_12] [i_12] [i_12] [i_12] [0] [i_12])));
    }
    #pragma endscop
}
