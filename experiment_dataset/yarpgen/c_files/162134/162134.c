/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162134
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, var_9));
    var_18 -= (var_5 % var_2);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [i_0] |= (((arr_2 [i_1 + 2]) ? ((~(arr_2 [i_1 - 4]))) : (arr_0 [i_0] [i_1 - 4])));

                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    var_19 = (min(var_19, (arr_0 [i_1] [i_0])));
                    var_20 &= ((arr_6 [i_2] [i_1] [i_1] [i_0]) >> ((((arr_2 [i_1 - 4]) < (arr_2 [i_1 - 3])))));
                    var_21 |= (arr_2 [i_2 + 2]);
                }
                /* vectorizable */
                for (int i_3 = 1; i_3 < 18;i_3 += 1)
                {
                    arr_11 [i_0] [i_3] [i_0] = ((~(arr_5 [i_1 + 1] [i_3 + 1] [i_3 + 1])));
                    var_22 = ((~(arr_10 [i_0] [i_1] [i_0])));
                    var_23 = 114;
                }

                for (int i_4 = 1; i_4 < 18;i_4 += 1)
                {

                    for (int i_5 = 2; i_5 < 18;i_5 += 1)
                    {

                        /* vectorizable */
                        for (int i_6 = 1; i_6 < 18;i_6 += 1)
                        {
                            var_24 ^= arr_12 [i_6 + 1] [i_1] [i_4 - 1] [i_5];
                            var_25 ^= (arr_1 [i_0]);
                        }
                        arr_21 [i_1 - 2] [i_5] [i_5] = ((-(min((~3245197578409942233), (arr_10 [i_5] [i_5 - 1] [i_5 + 1])))));

                        for (int i_7 = 0; i_7 < 19;i_7 += 1) /* same iter space */
                        {
                            var_26 = (arr_1 [i_1]);
                            var_27 = (~var_6);
                        }
                        for (int i_8 = 0; i_8 < 19;i_8 += 1) /* same iter space */
                        {
                            var_28 = (arr_16 [i_5 + 1] [i_4] [i_4] [i_4] [i_4 - 1]);
                            var_29 = (((var_11 ? ((min((arr_3 [i_4]), (arr_3 [i_4])))) : (arr_22 [i_0] [i_1] [i_4] [i_5] [i_8]))));
                            var_30 = arr_9 [i_0] [i_0] [i_0] [i_0];
                            var_31 = 3245197578409942231;
                            var_32 = (arr_8 [i_8]);
                        }
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 19;i_9 += 1) /* same iter space */
                        {
                            var_33 = 15201546495299609382;
                            var_34 |= (arr_0 [i_1] [i_5 - 2]);
                        }
                        var_35 = (max(var_35, (((~((8166046483412962713 ? -21576 : ((15883376976203086554 ? (arr_19 [i_0] [i_0] [i_1] [i_0] [i_5]) : (arr_19 [i_4] [i_5] [i_4] [i_1] [i_0]))))))))));
                    }

                    for (int i_10 = 2; i_10 < 17;i_10 += 1)
                    {
                        var_36 *= (arr_17 [i_10 + 1] [i_4 - 1] [i_1 + 1] [i_0] [i_0]);

                        for (int i_11 = 2; i_11 < 18;i_11 += 1) /* same iter space */
                        {
                            var_37 |= ((((min((arr_5 [i_11 - 1] [i_11 - 2] [i_11 - 1]), (arr_20 [i_4 - 1] [i_1] [i_4 + 1] [i_4 - 1] [i_11 - 2] [i_11] [i_1 - 1])))) ? ((~(arr_20 [i_4 - 1] [i_1] [i_4 + 1] [i_10 + 1] [i_11 + 1] [i_11 - 1] [i_1]))) : (arr_20 [i_4 + 1] [i_1] [i_4] [i_10] [i_11 + 1] [i_4] [i_11])));
                            var_38 = (max(var_38, (~113)));
                        }
                        for (int i_12 = 2; i_12 < 18;i_12 += 1) /* same iter space */
                        {
                            var_39 = (((((-(arr_24 [i_1])))) ? (arr_23 [i_0] [i_1] [i_10 + 2] [i_0] [i_10 + 1] [i_10 + 1] [i_1 - 4]) : ((113 ? (arr_23 [i_0] [i_1] [i_0] [i_10] [i_10] [i_10] [i_1 + 3]) : (arr_23 [i_10] [i_1 - 3] [i_4] [i_10] [i_12] [i_10] [i_1 - 4])))));
                            var_40 = (arr_22 [i_0] [i_12] [i_4] [i_10] [i_12]);
                        }
                    }
                    for (int i_13 = 2; i_13 < 18;i_13 += 1)
                    {
                        var_41 = ((!((min(var_15, (arr_33 [i_0] [i_1] [i_1 - 3]))))));
                        var_42 = (min(((-(arr_20 [i_0] [i_1] [i_4 - 1] [i_13 - 2] [i_4 + 1] [i_0] [i_1]))), (arr_20 [i_0] [i_1] [i_4 - 1] [i_13] [i_13] [i_0] [i_0])));
                        var_43 = ((-((19 ? (arr_32 [i_1 + 1] [i_4 + 1] [i_13 + 1] [i_13] [i_13 + 1] [i_13 + 1] [i_13 - 1]) : (arr_32 [i_1 + 1] [i_4 + 1] [i_13 + 1] [i_13] [i_1 + 1] [i_13] [i_13 - 1])))));
                        var_44 = ((-(arr_22 [i_4] [i_4 + 1] [i_13 - 1] [i_13] [i_13])));
                    }
                    for (int i_14 = 0; i_14 < 19;i_14 += 1)
                    {
                        var_45 &= 88;
                        var_46 = (min(var_46, (~-10164871413817590654)));
                        var_47 = (max(var_47, (max((((((~(arr_15 [i_0] [i_1 - 2] [i_4] [i_14])))) ? (((arr_37 [i_4] [i_0] [i_0]) ? (arr_27 [i_0] [i_0] [i_1 + 1] [i_1] [i_4] [i_14]) : (arr_29 [i_0] [i_0] [i_0] [i_1] [i_4] [i_0] [i_14]))) : (~20863))), ((((arr_9 [i_14] [i_1 + 2] [i_0] [i_0]) < (!var_14))))))));
                    }
                    /* vectorizable */
                    for (int i_15 = 0; i_15 < 19;i_15 += 1)
                    {
                        arr_46 [i_0] [i_0] &= (arr_39 [i_1] [i_1] [i_1] [i_1 - 1]);
                        var_48 *= ((~((30414 ? (arr_13 [i_1] [i_4 - 1] [i_15]) : (arr_1 [i_0])))));
                    }
                }
                /* LoopNest 3 */
                for (int i_16 = 0; i_16 < 19;i_16 += 1)
                {
                    for (int i_17 = 1; i_17 < 17;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 19;i_18 += 1)
                        {
                            {
                                var_49 = (min(var_49, (((-((-(arr_28 [i_0] [i_1] [i_1] [i_1] [i_1]))))))));
                                arr_53 [i_1] [i_16] [i_17] [i_18] = ((~((-(((arr_50 [i_0] [i_18] [i_16]) ? (arr_25 [i_1]) : (arr_39 [i_0] [i_1 - 1] [i_16] [i_1 - 1])))))));
                                var_50 = ((-(~101)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
