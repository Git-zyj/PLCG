/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130491
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, (((!(60516800 % var_8))))));
    var_15 = var_10;
    var_16 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    arr_9 [12] [i_1 - 1] [12] [i_0] = ((((var_13 >= (arr_3 [i_1] [i_1 - 1]))) ? (max(16, 3562257957)) : (!var_4)));
                    arr_10 [i_2] [i_1] [3] = (max(59354852, ((-(~0)))));
                    arr_11 [2] [i_1 - 1] [i_0] = ((((((var_10 & var_12) ? ((var_5 ? 1276102637 : var_4)) : (~4294967295)))) ? (((((273379049 << (-60516815 + 60516829)))) ? var_4 : ((-803525391 ? var_11 : var_11)))) : (((((var_1 ? 3 : 2590322827))) ? (0 & var_9) : ((17557535 ? (arr_7 [i_0] [i_2]) : var_6))))));
                }
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    var_17 = (min(var_17, var_7));
                    arr_15 [i_3] [i_1] [i_3] = ((min(((min(-10, 93))), (~var_11))));
                    arr_16 [i_0] [i_1 + 1] [i_3] = ((96 ? -115 : 10));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            {
                                var_18 ^= 83;
                                var_19 = (arr_14 [i_0] [i_1] [i_4] [i_5]);
                                arr_22 [i_0] [i_3] [i_0] [i_3] [i_0] = (((var_8 ? 99 : (arr_18 [i_1 - 1] [i_1 - 1]))));
                                var_20 = (max(var_20, (max(var_0, (arr_2 [i_5])))));
                                var_21 = ((!(((21 ? (arr_20 [i_1 + 1] [i_1 + 1] [i_1 - 2] [i_1 + 1] [i_5]) : (var_8 * 263880482))))));
                            }
                        }
                    }
                    arr_23 [6] |= (arr_12 [i_1 - 1] [i_1 - 2]);
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    arr_26 [i_6] = var_6;
                    arr_27 [13] [i_6] [i_6] [i_0] = -var_13;

                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        var_22 = (min(var_22, (((4294967295 ? (((arr_31 [i_0] [i_0] [i_0] [i_0]) ? var_13 : 255)) : (arr_6 [i_1 - 2] [i_1 - 3]))))));
                        var_23 = (((((var_1 ? var_6 : -1))) ? var_1 : var_9));
                    }
                    for (int i_8 = 2; i_8 < 10;i_8 += 1) /* same iter space */
                    {
                        arr_34 [i_6] = ((-89 ? (arr_6 [i_1 + 1] [i_1]) : var_10));
                        arr_35 [i_1 + 1] [i_6] = ((~(4294967292 / 6)));
                    }
                    for (int i_9 = 2; i_9 < 10;i_9 += 1) /* same iter space */
                    {

                        for (int i_10 = 0; i_10 < 14;i_10 += 1)
                        {
                            arr_43 [i_6] = var_12;
                            arr_44 [11] [11] [i_1] [i_6] [i_6] [i_6] [i_10] = (arr_1 [i_6]);
                            arr_45 [i_0] [i_6] [i_6] [i_0] [i_0] [i_0] = ((var_0 >= (arr_30 [i_1] [i_6] [i_1 - 2] [i_9 - 2])));
                            arr_46 [i_0] [i_0] [i_6] [i_9] [i_10] = var_10;
                            arr_47 [i_0] [i_1 + 1] [i_6] [i_9] [i_6] = var_4;
                        }
                        for (int i_11 = 3; i_11 < 13;i_11 += 1)
                        {
                            arr_51 [i_0] [i_6] [i_6] [i_9 + 3] [i_0] = ((var_11 >= (arr_36 [i_9] [i_9 - 2] [i_9 + 2] [i_9])));
                            arr_52 [i_6] [i_6] [i_6] [i_6] [i_11 - 1] = (0 / 80);
                            var_24 = ((var_6 > (arr_37 [i_9 - 1] [i_9 + 4])));
                            arr_53 [i_0] [i_1 + 1] [i_6] [i_9] [i_6] = (var_2 * var_13);
                        }
                        for (int i_12 = 0; i_12 < 14;i_12 += 1)
                        {
                            arr_57 [i_6] [i_1] [9] [i_9] [i_9] = ((157 ? ((((arr_31 [i_12] [i_12] [i_12] [i_12]) ^ var_12))) : 875082681));
                            arr_58 [i_6] = ((+((var_4 ? (arr_32 [12] [i_6] [i_6] [3] [i_12]) : var_7))));
                        }
                        for (int i_13 = 0; i_13 < 14;i_13 += 1)
                        {
                            arr_61 [i_6] [i_6] = ((!(~var_9)));
                            var_25 |= (((var_1 && 13) ? 160 : (-2147483647 - 1)));
                        }
                        arr_62 [i_0] [i_1] [i_0] [i_6] [i_9] = (arr_60 [i_0] [9] [i_0] [i_0] [i_0]);
                        var_26 = arr_4 [i_6];
                    }
                }
                arr_63 [i_1] = (~(min(((var_3 ? 24 : 16)), 64)));

                for (int i_14 = 0; i_14 < 14;i_14 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 14;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 14;i_16 += 1)
                        {
                            {
                                arr_73 [i_0] [i_1] [i_16] [i_1] [i_1] = (min((arr_72 [i_1] [i_1 - 3] [i_1 + 1] [i_1 - 1] [i_16]), 451590342));
                                var_27 = ((-985751018 ? (var_4 % var_8) : ((max(var_8, var_7)))));
                            }
                        }
                    }
                    arr_74 [i_0] [1] [i_1 - 2] [i_14] = (((!var_13) ? var_9 : (min(var_0, (arr_8 [i_0] [i_1] [i_1 - 2] [i_0])))));
                    arr_75 [13] [i_1] [i_0] [i_0] = (((((max((arr_12 [i_0] [12]), 2193800012)))) ? (min(var_9, var_0)) : ((((var_7 ? 10 : (arr_64 [i_0] [i_0] [i_0] [i_0]))) * (!var_5)))));
                }
                for (int i_17 = 2; i_17 < 13;i_17 += 1)
                {
                    var_28 *= ((-(var_7 - var_9)));
                    arr_79 [i_17] = ((!(((var_0 ? 30 : var_1)))));
                }
            }
        }
    }
    var_29 ^= (((((var_13 ? ((var_8 ? var_10 : var_7)) : var_9))) ? (((46 <= 191) ? -1812731985 : (((var_12 >> (var_10 - 1022117424)))))) : ((4294967295 >> (-30 + 61)))));
    #pragma endscop
}
