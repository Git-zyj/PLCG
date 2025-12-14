/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164857
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] = ((-(arr_7 [i_0] [i_0])));
                            var_14 = ((~((-(((var_12 <= (arr_4 [i_3] [i_2] [i_1 + 2] [i_0]))))))));
                            var_15 = var_11;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 9;i_5 += 1)
                    {
                        {
                            var_16 = ((-((max((arr_6 [i_1 + 1] [i_1 - 1] [i_5 - 2] [i_5 - 2]), (arr_6 [i_1 + 1] [i_1 - 1] [i_5 - 2] [i_5 - 2]))))));
                            var_17 = (((((!(arr_2 [i_1 - 1] [i_1 - 1] [i_5 - 2])))) * (((!(arr_16 [i_0] [i_5 - 2] [i_4] [2] [i_5] [i_0]))))));
                            arr_18 [i_0] [i_0] [i_4] [i_5 - 2] = (((arr_7 [i_0] [i_4]) * 36));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        for (int i_7 = 3; i_7 < 19;i_7 += 1)
        {
            {

                /* vectorizable */
                for (int i_8 = 0; i_8 < 20;i_8 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 18;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            {
                                var_18 = 1;
                                arr_34 [i_9 + 1] [i_6] [i_6] = (((arr_19 [i_6] [i_7]) * (arr_32 [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_7] [i_7 - 2] [i_6])));
                            }
                        }
                    }

                    for (int i_11 = 0; i_11 < 20;i_11 += 1)
                    {
                        arr_37 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = (arr_28 [19] [i_11] [i_11] [i_11] [i_11] [i_11]);
                        var_19 = (((~(-127 - 1))));
                    }
                    for (int i_12 = 1; i_12 < 1;i_12 += 1) /* same iter space */
                    {
                        var_20 = ((2546192928621580745 / ((var_9 ? (arr_38 [i_6] [i_7] [i_12] [i_12] [i_7] [i_7]) : 7486193450489888499))));

                        for (int i_13 = 1; i_13 < 18;i_13 += 1)
                        {
                            arr_44 [i_6] [i_7] [i_7] [i_8] [i_8] [i_12] [i_6] = 1;
                            var_21 = (arr_33 [i_6] [i_6] [i_8] [i_12] [i_12]);
                        }
                    }
                    for (int i_14 = 1; i_14 < 1;i_14 += 1) /* same iter space */
                    {
                        arr_47 [i_6] = 1;
                        arr_48 [i_6] [i_6] [i_8] [i_6] [i_6] [i_6] = (((arr_25 [i_6] [i_14 - 1] [i_7 - 2]) * var_7));
                    }
                    var_22 = ((var_12 * (arr_45 [i_7 + 1] [i_7 - 2] [i_7 + 1])));
                    var_23 = arr_19 [i_6] [i_6];
                }
                /* vectorizable */
                for (int i_15 = 0; i_15 < 20;i_15 += 1) /* same iter space */
                {
                    arr_51 [i_6] [i_6] [i_6] [i_6] = -2675022917;
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 0;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 20;i_17 += 1)
                        {
                            {
                                var_24 = (arr_45 [i_7] [i_7 - 3] [i_16 + 1]);
                                arr_57 [i_6] [i_15] [i_15] [i_6] [i_6] = (arr_55 [i_6] [i_6] [i_6] [i_6] [i_6]);
                            }
                        }
                    }
                    var_25 = ((((var_9 * (arr_52 [i_6] [i_6] [i_6] [i_6]))) <= (arr_23 [i_7 - 2] [i_7 - 3])));
                }
                for (int i_18 = 2; i_18 < 17;i_18 += 1)
                {
                    arr_60 [i_6] [i_6] = ((var_8 <= (min(((4294967295 ? var_8 : 67108863)), (((arr_40 [i_18]) ? 3177219910 : var_9))))));

                    for (int i_19 = 1; i_19 < 1;i_19 += 1)
                    {
                        var_26 = (arr_43 [i_19] [i_19 - 1] [i_18 + 3] [i_7 + 1]);

                        /* vectorizable */
                        for (int i_20 = 0; i_20 < 1;i_20 += 1)
                        {
                            arr_66 [i_6] [i_7] [i_6] = (((((arr_42 [i_18] [i_19 - 1] [i_18] [i_6] [i_6] [i_6]) * var_3)) * (((var_1 * (arr_24 [i_20] [i_6] [i_6]))))));
                            arr_67 [i_6] [i_7] [i_6] [i_19] [i_7] = (((((arr_21 [i_20]) & -6728081827568496273)) / (~3908524232)));
                            arr_68 [i_6] = (arr_31 [i_20] [i_18] [i_18] [i_7] [i_6] [i_6]);
                            var_27 = (((arr_43 [i_18 + 3] [19] [i_18 + 1] [i_18 + 1]) + (arr_43 [i_18] [i_18] [i_18 + 2] [i_18 + 1])));
                        }
                        var_28 = (arr_63 [i_7 + 1] [i_7 + 1] [i_6] [i_18 - 2]);
                        arr_69 [i_6] [i_6] [i_6] [i_6] = ((((-1 * (max((arr_42 [i_6] [i_6] [i_7 + 1] [i_6] [i_18 - 2] [i_6]), (arr_38 [i_19] [i_6] [i_6] [i_6] [i_6] [i_6]))))) <= (!2679933463)));
                        arr_70 [i_6] [i_7] = (((var_10 ? 1372960747 : 255)));
                    }
                    for (int i_21 = 2; i_21 < 19;i_21 += 1)
                    {
                        arr_73 [i_6] = var_11;
                        var_29 = ((+((~(min((arr_25 [i_6] [i_6] [i_6]), (arr_42 [i_6] [i_6] [i_7] [i_21] [i_7] [i_6])))))));
                        var_30 = (((arr_46 [i_6] [i_6] [i_6] [i_6]) * -5708160995489055597));
                    }
                    arr_74 [i_6] [i_7] = (max(2, (!var_3)));
                }
                var_31 = ((-((~(arr_72 [i_7 - 3] [i_7 + 1] [i_6] [i_6] [i_7 - 1] [i_7])))));
            }
        }
    }
    #pragma endscop
}
