/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153479
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (var_6 < var_3);

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_14 = (((-((4964417219639698826 ? 1 : 5048)))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        var_15 = (((max((((arr_3 [i_1]) ? var_7 : var_3)), (arr_8 [i_0 - 1] [i_0 - 1] [i_1] [i_2 + 1] [i_2 + 1] [i_3]))) & (((min((arr_0 [i_0] [i_2 + 2]), (min((arr_6 [i_0 + 2] [i_0 + 2] [12] [i_3]), var_10))))))));
                        var_16 += ((!(((-(arr_2 [i_2 - 1]))))));
                    }
                }
            }
        }
        var_17 ^= (((arr_1 [3]) % 2147483647));
    }
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        arr_15 [i_4] = (((((var_9 ? (arr_14 [i_4]) : (((~(arr_13 [1] [i_4]))))))) ? var_2 : -2147483647));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 12;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            {
                                arr_27 [i_4] [i_5] [i_6 + 1] [i_7] [i_8] = (arr_10 [i_4] [i_6 + 2]);
                                arr_28 [i_4] [i_4] = (min((max(((max(var_8, (arr_1 [17])))), (arr_26 [i_6 - 1] [i_6] [i_6 + 2] [i_6] [i_6 + 1]))), (((((arr_12 [i_5]) ? var_2 : (arr_21 [i_4] [i_5] [i_6] [i_7])))))));
                            }
                        }
                    }

                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {
                        var_18 = (max(var_18, 28149));
                        var_19 = (min((arr_29 [i_4] [i_5] [i_5] [i_6] [i_6] [5]), ((var_2 ? 2147483642 : var_8))));
                        var_20 ^= 53402;
                    }
                    for (int i_10 = 1; i_10 < 11;i_10 += 1)
                    {
                        var_21 = -var_6;
                        arr_34 [i_4] [i_4] [i_6 - 2] [i_10] = (arr_3 [i_10]);
                    }
                    var_22 = var_8;
                    var_23 ^= (arr_30 [i_4] [i_6 + 1] [1] [i_6]);
                }
            }
        }
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 14;i_11 += 1)
        {
            for (int i_12 = 2; i_12 < 12;i_12 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        var_24 = ((!(arr_42 [i_12 + 2] [i_12 + 2] [i_12] [i_13] [i_12])));
                        arr_43 [i_13] = (arr_30 [i_12 + 1] [i_12 + 1] [4] [i_13]);
                        arr_44 [i_13] [i_12] [i_11] [i_11] [i_4] = (arr_10 [8] [i_11]);
                        arr_45 [i_4] [i_4] [i_4] [i_4] [i_4] = (arr_10 [i_4] [i_11]);
                    }
                    arr_46 [i_4] [i_11] [i_4] = ((-(min(((var_10 + (arr_8 [i_4] [i_11] [4] [i_11] [i_12 + 2] [i_4]))), (((arr_10 [i_4] [i_11]) / var_4))))));
                }
            }
        }
    }
    for (int i_14 = 0; i_14 < 10;i_14 += 1)
    {
        /* LoopNest 2 */
        for (int i_15 = 1; i_15 < 8;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 10;i_16 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 10;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 10;i_18 += 1)
                        {
                            {
                                var_25 = (((-((max(var_8, (arr_50 [i_17] [i_16] [i_14])))))));
                                var_26 = ((+(max((arr_52 [i_15 + 2] [i_15 + 2] [i_15 - 1]), ((((arr_50 [i_17] [i_16] [i_15]) <= (arr_13 [i_14] [i_14]))))))));
                                var_27 = (((((-(arr_20 [i_14] [i_15] [i_14] [i_17])))) || ((max((arr_38 [i_15 + 2] [7]), (arr_31 [i_18] [3] [i_15 + 2] [i_15 + 1] [i_15]))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_19 = 3; i_19 < 7;i_19 += 1)
                    {
                        for (int i_20 = 2; i_20 < 9;i_20 += 1)
                        {
                            {
                                var_28 = (arr_52 [i_20] [i_19 + 3] [i_14]);
                                arr_62 [i_14] [6] [i_16] [i_15] [i_14] [i_14] = (!((max((!var_4), (arr_16 [i_15] [i_19] [i_15])))));
                                var_29 = ((((arr_26 [i_15 + 1] [i_15 + 2] [i_15 - 1] [i_15 + 2] [i_15]) - (arr_25 [i_15 + 2] [i_15 + 1] [i_15] [i_15 + 2] [i_15]))));
                                var_30 = (min(var_30, ((max(((var_10 & (arr_26 [i_20] [10] [i_20 - 2] [i_20] [i_20 + 1]))), (((((arr_9 [i_14]) <= var_7)))))))));
                            }
                        }
                    }
                    arr_63 [i_14] [i_15] = var_8;
                    /* LoopNest 2 */
                    for (int i_21 = 0; i_21 < 10;i_21 += 1)
                    {
                        for (int i_22 = 1; i_22 < 8;i_22 += 1)
                        {
                            {
                                arr_69 [i_14] [i_14] [i_15 + 2] [i_16] [i_21] [i_22 + 1] = var_9;
                                arr_70 [i_21] = (((((var_1 <= (11626 >= var_12)))) > ((max((arr_18 [i_14]), (arr_35 [i_15] [i_15]))))));
                            }
                        }
                    }
                }
            }
        }
        arr_71 [i_14] = ((var_3 ? (arr_47 [5] [7]) : ((max(var_12, 1)))));
        /* LoopNest 2 */
        for (int i_23 = 0; i_23 < 10;i_23 += 1)
        {
            for (int i_24 = 0; i_24 < 10;i_24 += 1)
            {
                {
                    var_31 += var_8;
                    arr_78 [i_14] [i_14] = (min(-var_4, (((((arr_40 [i_14] [i_23] [i_14]) ? var_1 : var_2)) * var_0))));
                }
            }
        }

        for (int i_25 = 0; i_25 < 10;i_25 += 1)
        {
            var_32 = (max(((((arr_19 [5] [i_25]) ? var_11 : (arr_16 [11] [i_14] [i_25])))), ((((arr_21 [i_14] [i_14] [i_14] [i_14]) > 23)))));
            var_33 = (max(var_33, (arr_32 [5] [i_25] [i_25])));
        }
        for (int i_26 = 1; i_26 < 6;i_26 += 1) /* same iter space */
        {
            arr_83 [i_26] = ((-((4294967295 + ((min(60486, var_8)))))));
            var_34 = (((((+(((arr_1 [i_14]) + 120))))) ? (max((arr_17 [i_26] [i_14] [i_14]), (((-6973949699407821241 && (arr_5 [i_14] [i_14] [i_14])))))) : (arr_16 [i_14] [i_14] [i_14])));
        }
        for (int i_27 = 1; i_27 < 6;i_27 += 1) /* same iter space */
        {
            arr_86 [i_14] [i_27] = (((arr_6 [i_27 + 1] [i_27 + 2] [i_27] [i_27 + 4]) ? (max((arr_66 [i_14] [0]), (arr_8 [i_27] [i_27 + 4] [i_27 + 1] [i_27 - 1] [i_27 + 1] [i_27]))) : (arr_82 [1] [i_14] [i_14])));
            var_35 -= (arr_32 [i_14] [i_14] [i_14]);
            var_36 = (min(var_36, (arr_41 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14])));
        }
    }
    #pragma endscop
}
