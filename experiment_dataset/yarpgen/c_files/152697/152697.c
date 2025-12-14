/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152697
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 = (arr_3 [6] [6]);

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_15 [12] [i_1] [i_2] [i_2] [i_3] [i_3] [i_4] = ((~(min((min(1, (arr_10 [11] [i_0] [i_0] [i_0]))), var_12))));
                                var_21 = (+((var_11 ? (arr_13 [i_4] [i_0] [i_1] [i_2] [i_1] [i_0]) : ((max(1, 0))))));
                                var_22 = (max(var_22, (arr_8 [i_0] [i_1] [i_1] [i_0])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 13;i_6 += 1)
                        {
                            {
                                arr_20 [i_2] [i_2] [i_2] [i_2] [0] = var_12;
                                arr_21 [i_0] [i_2] [i_5] [i_5] [i_6 + 1] [i_1] = ((max(var_2, var_18)));
                                var_23 = (arr_2 [i_0] [i_6]);
                            }
                        }
                    }

                    for (int i_7 = 3; i_7 < 13;i_7 += 1) /* same iter space */
                    {
                        var_24 = ((((((arr_3 [i_2] [i_7]) & 1))) ? (((max(var_14, var_15)) * ((((var_18 < (arr_13 [i_0] [i_2] [i_2] [i_1] [i_0] [i_0]))))))) : ((((arr_14 [i_7 - 2]) ? (arr_14 [i_7 - 1]) : var_2)))));
                        var_25 = arr_14 [1];
                        var_26 = (max(var_26, (((!(((((arr_16 [0] [i_1] [i_2] [2] [i_7] [i_7]) || (arr_18 [1] [1] [1] [i_7] [3] [1]))) || 1039589943)))))));
                        var_27 &= ((var_11 ? 1 : ((-(arr_17 [i_7] [i_7 - 1] [i_7 - 2] [i_7 - 3] [i_7 + 1] [i_7])))));
                    }
                    for (int i_8 = 3; i_8 < 13;i_8 += 1) /* same iter space */
                    {
                        arr_26 [i_0] [i_0] [i_0] [i_0] &= ((+((-1582742155 ? (1 << 1) : (arr_9 [8] [i_0] [i_8 - 2] [i_8 + 1])))));
                        arr_27 [i_2] [4] [0] = ((1 ? 1 : 134217727));
                        arr_28 [i_2] [1] [i_1] [i_2] [9] = ((~(arr_24 [i_2] [i_8 - 1] [6] [i_8] [i_0])));
                        arr_29 [i_0] [i_0] [i_2] [i_2] = ((1 ? var_0 : (((min(65528, 1))))));
                    }
                    arr_30 [i_2] = var_15;
                }
                for (int i_9 = 0; i_9 < 14;i_9 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 13;i_10 += 1)
                    {
                        for (int i_11 = 3; i_11 < 10;i_11 += 1)
                        {
                            {
                                var_28 = var_14;
                                arr_41 [i_11 - 1] [i_11] [i_9] [i_11] [i_0] = (((~var_12) <= 1));
                                var_29 = (((arr_35 [i_0] [10] [i_9] [i_10] [i_10]) && ((121952019 && ((-1963617525 == (arr_22 [i_0] [12] [i_9] [i_10] [i_11])))))));
                                var_30 ^= 10;
                            }
                        }
                    }
                    arr_42 [i_0] [i_0] [i_1] [i_9] = (((((arr_0 [i_0]) / (arr_16 [i_0] [4] [i_1] [i_1] [i_9] [i_9]))) * (arr_18 [i_0] [3] [i_0] [i_0] [i_0] [i_0])));

                    for (int i_12 = 3; i_12 < 11;i_12 += 1)
                    {
                        var_31 = (max(var_31, ((((((1 ? (arr_1 [i_12 + 3]) : (max((arr_10 [i_0] [i_1] [i_9] [i_0]), (arr_4 [i_12 - 2])))))) ? ((((!((((arr_38 [i_0] [i_0] [i_9] [i_9] [i_9]) ? (arr_36 [i_0] [1]) : var_12))))))) : (arr_10 [i_9] [i_12] [i_9] [i_1]))))));
                        arr_47 [i_12] [i_12] = ((1963617524 ? 1 : (((((-42016118651447600 ? var_12 : 117440512)) >= (((~(arr_38 [i_0] [i_1] [i_12] [0] [i_0])))))))));
                        arr_48 [i_12] [i_12] [i_0] = (arr_43 [i_0] [i_1] [9] [i_0] [i_12]);
                    }
                    for (int i_13 = 0; i_13 < 0;i_13 += 1)
                    {
                        arr_52 [i_0] [8] [i_9] [i_13 + 1] = (((min(0, 200)) * (110 >= 117440492)));
                        var_32 = (4177526783 >= 1);
                    }
                    /* vectorizable */
                    for (int i_14 = 0; i_14 < 14;i_14 += 1)
                    {
                        var_33 = (arr_14 [i_0]);
                        var_34 = ((arr_18 [6] [6] [i_9] [1] [1] [i_0]) < var_7);
                    }
                }
                var_35 = (arr_49 [i_0] [i_0] [i_0] [i_1] [i_1] [1]);
            }
        }
    }

    for (int i_15 = 2; i_15 < 20;i_15 += 1)
    {
        /* LoopNest 2 */
        for (int i_16 = 0; i_16 < 21;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 21;i_17 += 1)
            {
                {
                    var_36 = (max(var_11, var_18));

                    for (int i_18 = 0; i_18 < 21;i_18 += 1) /* same iter space */
                    {
                        arr_65 [i_16] = ((!(arr_55 [i_15 - 1])));
                        var_37 ^= ((-((32767 ? 0 : 2244063687))));
                    }
                    /* vectorizable */
                    for (int i_19 = 0; i_19 < 21;i_19 += 1) /* same iter space */
                    {
                        arr_69 [i_16] [i_16] [i_17] [i_19] = ((var_14 ? var_8 : (arr_63 [i_15 + 1] [i_15 - 1])));
                        var_38 = (min(var_38, (arr_61 [i_15 + 1] [i_15 - 1] [i_15 - 2] [i_15 - 1])));
                    }
                }
            }
        }
        var_39 ^= ((arr_68 [i_15] [6] [i_15] [i_15] [i_15 - 1] [i_15 - 1]) ? ((((arr_68 [i_15 + 1] [i_15 + 1] [i_15] [i_15] [i_15 - 2] [i_15 + 1]) && (arr_68 [i_15] [10] [i_15] [i_15] [i_15 - 2] [i_15 - 1])))) : ((((arr_68 [18] [i_15] [i_15] [2] [i_15 + 1] [i_15 + 1]) >= var_0))));
    }
    for (int i_20 = 0; i_20 < 1;i_20 += 1)
    {
        var_40 = (max(var_40, var_19));
        var_41 = ((((!(arr_64 [i_20])))));
    }
    #pragma endscop
}
