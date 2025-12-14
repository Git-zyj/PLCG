/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143714
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_0] = (min(((((((arr_1 [i_1]) % var_0))) ? (arr_0 [i_0]) : (!var_8))), (!-1387927066)));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {

                            for (int i_4 = 3; i_4 < 11;i_4 += 1)
                            {
                                var_12 &= (((((((max(var_2, (arr_1 [i_0])))) ? ((min((arr_5 [i_4]), var_5))) : (arr_7 [i_2 - 1] [i_2 + 1] [i_2] [i_2])))) ? var_11 : ((((max((arr_0 [i_4]), (arr_7 [i_0] [i_1] [i_2] [i_3])))) ? (arr_5 [i_0]) : (max(var_0, (arr_6 [i_0] [i_0] [i_0])))))));
                                var_13 = ((((max(7576, (min(var_2, 14621617553824028488))))) ? (arr_12 [i_2] [i_3] [i_3] [i_3]) : -18175));
                                arr_13 [i_0] [i_0] [i_2] [i_0] [i_4] [i_3] = -65535;
                            }
                            arr_14 [i_0] [i_1] [i_1] [i_3] = (arr_7 [i_0] [i_1] [i_1] [i_2 - 1]);
                        }
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 1; i_5 < 22;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 1; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 22;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    {
                        arr_27 [i_8] [i_6 + 1] [i_6] [i_6] [i_8] = (((((var_2 ? var_5 : var_11))) ? ((2580508852 ? (arr_17 [i_7]) : 101)) : (arr_24 [i_5 + 2] [i_6 - 1])));

                        for (int i_9 = 0; i_9 < 24;i_9 += 1)
                        {
                            var_14 = (((arr_21 [i_6] [i_6 - 1] [i_6] [i_6 + 2]) ? (arr_21 [i_6] [i_6] [i_6] [i_6 + 1]) : (arr_21 [i_6] [i_6] [i_6] [i_6 - 1])));
                            arr_31 [i_8] [i_6 + 1] [i_8] = var_5;
                            arr_32 [i_5] [i_5] [i_5] [i_8] [i_9] [i_9] [i_5] = var_5;
                        }

                        for (int i_10 = 0; i_10 < 24;i_10 += 1)
                        {
                            arr_36 [i_5 + 1] [i_6] [i_8] [i_8] [i_10] = (arr_23 [i_6] [i_7 - 1] [i_7 - 1] [i_6]);
                            arr_37 [i_7 + 2] [i_8] [i_7] [i_8] [i_7 + 2] = 3;
                            var_15 = ((((((arr_33 [i_5 + 1] [i_5 + 1] [i_7] [i_7] [i_6] [i_10] [i_6]) & var_0))) ? ((((var_5 <= (arr_17 [i_7]))))) : (((arr_21 [i_8] [i_7 + 2] [i_6 - 1] [i_5]) ? (arr_18 [i_10]) : var_3))));
                        }
                    }
                }
            }
        }

        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            arr_40 [i_5] [i_11] = var_0;
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 24;i_12 += 1)
            {
                for (int i_13 = 3; i_13 < 23;i_13 += 1)
                {
                    {
                        arr_47 [i_11] [i_11] = (arr_46 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11]);

                        for (int i_14 = 0; i_14 < 24;i_14 += 1)
                        {
                            arr_50 [i_14] [i_14] [i_11] [i_11] [i_11] [i_5] = (arr_34 [i_5] [i_11] [i_12]);
                            var_16 = (min(var_16, var_1));
                            arr_51 [i_11] [i_11] [i_13] [i_13] [i_14] = ((((((arr_48 [i_5 + 2] [i_11] [i_13 - 1] [i_11]) ? 66977792 : var_11))) ? var_6 : (arr_23 [i_13 - 1] [i_13 + 1] [i_13 - 3] [i_5 - 1])));
                        }
                        for (int i_15 = 0; i_15 < 24;i_15 += 1)
                        {
                            var_17 = (-1 && var_10);
                            arr_55 [i_13 - 1] [i_13] [i_11] [i_13] [i_13] [i_13] [i_13 - 1] = (arr_16 [i_5 + 2]);
                            arr_56 [i_12] [i_11] [i_12] = (((arr_39 [i_5 - 1] [i_12] [i_15]) < (arr_53 [i_15] [i_13] [i_11] [i_11] [i_5])));
                            var_18 = (63 >> (18446744073709551615 - 18446744073709551605));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_16 = 0; i_16 < 1;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 24;i_17 += 1)
                {
                    {
                        var_19 = (((!var_9) && (arr_20 [i_5 + 1])));
                        arr_61 [i_5 + 2] [i_5 + 2] [i_11] [i_5 + 2] [i_5] = (arr_58 [i_5] [i_16] [i_17]);
                    }
                }
            }
            arr_62 [i_5] [0] &= ((arr_52 [i_11] [i_5 - 1] [i_5 + 2] [i_5 + 2] [i_5 + 1]) && (arr_52 [i_11] [i_5 - 1] [i_5 + 2] [i_5 + 2] [i_5 + 1]));
            var_20 = (((arr_23 [i_5] [i_11] [i_11] [i_11]) ? (arr_26 [i_5] [i_5] [i_11] [i_11] [i_11] [i_11]) : 53092));
        }
    }
    /* LoopNest 3 */
    for (int i_18 = 1; i_18 < 21;i_18 += 1)
    {
        for (int i_19 = 1; i_19 < 1;i_19 += 1)
        {
            for (int i_20 = 0; i_20 < 0;i_20 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_21 = 2; i_21 < 20;i_21 += 1)
                    {
                        for (int i_22 = 0; i_22 < 22;i_22 += 1)
                        {
                            {
                                arr_75 [i_18] = (max(((-2 ? (((min(var_7, 1)))) : var_2)), ((min((!18903), (arr_26 [i_22] [i_22] [i_22] [i_22] [i_22] [i_22]))))));
                                arr_76 [i_18] [i_18] [i_20 + 1] [i_18] [i_18] [i_18] = (10459 & 59);
                                var_21 = (max((!var_0), (max(7, (arr_26 [i_18] [i_18 + 1] [i_18 + 1] [i_20 + 1] [i_20 + 1] [i_20])))));
                            }
                        }
                    }
                    arr_77 [i_18] [2] [i_20] &= (arr_26 [i_19 - 1] [i_19 - 1] [i_20 + 1] [i_18] [i_19 - 1] [i_18 + 1]);
                    arr_78 [i_18] [i_18] [i_18] = (-32767 - 1);
                    arr_79 [i_18] [i_18] = (min((arr_68 [i_18] [i_19] [i_20 + 1]), (max((arr_48 [i_18] [i_19] [i_19] [i_18]), (arr_73 [i_19 - 1] [i_19 - 1])))));
                }
            }
        }
    }
    var_22 = (min((max(var_5, (max(var_2, var_9)))), ((var_10 ^ (var_5 % 5)))));
    #pragma endscop
}
