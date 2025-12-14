/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178752
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 = ((~((32 ? 0 : var_6))));
        arr_3 [i_0] = ((~(arr_2 [i_0])));
    }
    var_13 -= ((var_11 ? (-15 >= var_7) : var_6));
    /* LoopNest 2 */
    for (int i_1 = 2; i_1 < 10;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            {
                var_14 = ((~(((((1 ? var_5 : var_8)) > ((var_8 ? (arr_9 [i_1 - 2] [i_1] [i_2]) : (arr_4 [i_2]))))))));

                for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
                {
                    var_15 = (min(((((max(127, (arr_6 [i_2] [i_3])))) ? ((max((arr_14 [i_1 + 2] [i_2]), 1))) : 1)), ((max((arr_14 [i_2] [i_2]), (arr_4 [i_1 - 2]))))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 1;i_5 += 1)
                        {
                            {
                                var_16 = (min(var_16, (arr_8 [i_1 + 3] [i_5 - 1] [i_5 - 1])));
                                arr_21 [i_2] [i_2] [i_2] [i_2] [i_3] [i_4] [i_5] = (arr_9 [i_1] [i_1] [i_2]);
                            }
                        }
                    }
                    arr_22 [i_2] [i_2] [i_2] [i_2] = (((!188) ? (((var_9 * var_0) ? (arr_8 [i_1 + 2] [i_1 + 1] [i_1 + 3]) : ((var_4 ? 224 : (arr_16 [i_2] [i_2] [i_2]))))) : ((min(var_6, (arr_18 [i_2] [i_2] [i_3] [i_2] [i_2]))))));
                }
                for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
                {
                    var_17 = (max(var_1, (((53 ? 32 : 1)))));
                    arr_27 [i_1] [i_2] = (max(1, ((1 ? (arr_20 [i_1] [i_2] [i_2] [i_6] [i_1]) : 1))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 9;i_8 += 1)
                        {
                            {
                                var_18 = (min(var_18, ((((arr_28 [i_8 + 4] [i_7] [i_7] [i_2] [i_1]) ? ((var_1 ? var_3 : 108)) : (arr_16 [i_7] [i_1] [i_7]))))));
                                var_19 = (max(var_19, 0));
                                var_20 ^= var_10;
                                arr_33 [i_1] [i_2] [i_1] [i_1] [i_1] [i_1] = ((((((((var_1 ? 1 : var_2))) ? (((arr_4 [i_7]) ? (arr_16 [i_8] [i_2] [i_6]) : 236)) : ((1 & (arr_0 [i_1] [i_7])))))) ? (((((-(arr_17 [i_8] [i_7] [i_2] [i_1 - 1])))) ? ((max(var_11, (arr_4 [i_1])))) : (((arr_23 [i_1] [i_2] [i_2]) + (arr_19 [i_1] [i_1] [i_1] [i_2] [i_8] [i_1]))))) : (((!(arr_8 [i_8 + 1] [i_6] [i_1 - 2]))))));
                                arr_34 [i_2] = var_9;
                            }
                        }
                    }
                }
                for (int i_9 = 0; i_9 < 13;i_9 += 1) /* same iter space */
                {
                    arr_39 [i_1] [i_2] [i_9] [i_1] = ((1 ? (((var_5 > ((1 ? 1 : 1))))) : 1));
                    var_21 *= 21;

                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 13;i_10 += 1)
                    {

                        for (int i_11 = 0; i_11 < 13;i_11 += 1)
                        {
                            arr_45 [i_2] [i_1] [i_1] [i_2] [i_9] [i_10] [i_11] = (i_2 % 2 == zero) ? ((((arr_35 [i_9] [i_10] [i_9] [i_1 + 2]) / (((arr_9 [i_1 + 3] [i_1 + 3] [i_2]) * 40))))) : ((((arr_35 [i_9] [i_10] [i_9] [i_1 + 2]) * (((arr_9 [i_1 + 3] [i_1 + 3] [i_2]) * 40)))));
                            arr_46 [i_2] [i_2] [i_2] [i_9] [i_10] [i_11] = (!var_2);
                            var_22 = ((var_1 * var_3) >= (arr_4 [i_1 + 2]));
                        }
                        var_23 = (max(var_23, var_6));
                        arr_47 [i_2] = var_10;
                    }
                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        arr_52 [i_9] [i_9] [i_2] [i_9] = arr_37 [i_1] [i_2] [i_1] [i_2];
                        var_24 -= ((arr_35 [i_9] [i_9] [i_1 - 1] [i_1]) && (arr_38 [i_1 - 2]));
                        var_25 &= (((arr_49 [i_1] [i_1] [i_1] [i_1 - 1] [i_1]) ? var_7 : (arr_4 [i_1])));
                    }

                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        arr_56 [i_2] = arr_9 [i_1] [i_13] [i_2];
                        var_26 -= ((((!(arr_43 [i_1] [i_1] [i_1 - 2] [i_1 + 3])))) > -var_3);
                    }
                    arr_57 [i_1] [i_2] [i_2] = 255;
                }
                /* vectorizable */
                for (int i_14 = 0; i_14 < 13;i_14 += 1) /* same iter space */
                {

                    for (int i_15 = 0; i_15 < 13;i_15 += 1)
                    {
                        arr_63 [i_2] [i_14] = (98 * 1);
                        var_27 -= (((arr_55 [i_1] [i_2] [i_14] [i_14]) % (arr_49 [i_15] [i_1] [i_2] [i_1] [i_1])));
                    }
                    for (int i_16 = 0; i_16 < 13;i_16 += 1)
                    {
                        arr_66 [i_16] [i_2] [i_2] [i_2] [i_1] = (((((1 ? (arr_23 [i_1] [i_2] [i_14]) : 247))) ? 233 : ((var_1 ? var_0 : var_0))));
                        var_28 = (((arr_2 [i_1 - 1]) ? (((arr_0 [i_2] [i_2]) ? 158 : var_11)) : var_5));
                    }
                    arr_67 [i_2] = 234;
                }
            }
        }
    }
    #pragma endscop
}
