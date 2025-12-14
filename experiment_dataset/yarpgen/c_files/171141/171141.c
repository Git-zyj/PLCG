/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171141
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
                {
                    var_14 *= (6 >= 23860);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_15 = (arr_4 [i_1]);
                                var_16 = (min(var_16, ((min(((max((arr_5 [i_1 - 1] [i_1 - 1] [i_1]), var_6))), ((3927522130 ? ((367445166 ? (arr_0 [i_0] [i_0]) : 11737598906811024684)) : var_4)))))));
                                var_17 ^= (62 >= 151);
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
                {
                    var_18 = (arr_5 [i_0] [i_1] [i_5]);
                    var_19 = (min(var_19, ((((arr_4 [i_1]) ? ((((((1140939481 ? -1721079393935906177 : var_8))) ? (-23862 & 1845478802) : -1845478801))) : ((((var_1 ? var_2 : 2219540913)) << (var_12 - 4217193040896676675))))))));
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 13;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 14;i_7 += 1)
                        {
                            {
                                arr_19 [i_0] [i_1] [i_5] [i_6] [i_1] = ((5 ? 195 : 0));
                                var_20 = var_9;
                            }
                        }
                    }
                    var_21 ^= ((((((~109) ? ((112 ? var_11 : var_6)) : var_10))) ? ((min((min((arr_6 [i_0] [i_0] [i_0] [i_0]), (arr_10 [i_5] [i_1] [i_1] [i_1] [i_1] [i_0] [i_0]))), var_9))) : (arr_13 [i_0] [i_1] [i_0] [i_5])));
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 15;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 16;i_9 += 1)
                        {
                            {
                                var_22 = (max(var_22, (((((min(var_6, (arr_11 [i_5] [i_5] [i_5]))))) ? (arr_6 [i_1] [i_1 + 1] [i_1 + 1] [i_1]) : (((((var_6 ? (arr_8 [i_0] [i_0] [i_0] [i_0]) : 61))) ? (arr_10 [i_0] [i_1] [i_5] [i_1] [i_1] [i_8] [i_9]) : ((max(var_8, var_8)))))))));
                                arr_25 [i_0] [i_0] [i_9] [i_9] [i_8] [i_9] = ((-1845478802 ? 144115188042301440 : 33));
                            }
                        }
                    }
                }
                for (int i_10 = 0; i_10 < 16;i_10 += 1) /* same iter space */
                {
                    var_23 *= ((((((arr_7 [i_10] [i_1] [i_0] [i_10]) + (((arr_9 [i_0] [i_0]) + 4443658371751657355))))) ? ((var_13 + (arr_28 [i_0] [i_1] [i_1 + 2] [i_0]))) : (arr_7 [i_1 - 2] [i_1 + 2] [i_1 + 1] [i_1 + 1])));
                    var_24 = (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                    var_25 ^= ((195 >= ((((((arr_23 [i_0] [i_1] [i_10] [i_10] [i_1] [i_10]) ? var_12 : var_9))) ? (8893343097576227632 >= 222) : (2219540913 >= -1845478802)))));
                    /* LoopNest 2 */
                    for (int i_11 = 1; i_11 < 12;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 16;i_12 += 1)
                        {
                            {
                                arr_35 [i_11] [i_0] [i_11] = ((-((var_6 ? ((1066455916 ? 144 : 367445185)) : ((((arr_1 [i_10]) ? 195 : var_3)))))));
                                var_26 ^= ((((((arr_5 [i_0] [i_1] [i_1 + 1]) ? (arr_21 [i_0] [i_1] [i_1 + 1] [i_11] [i_12]) : (arr_21 [i_0] [i_1] [i_1 + 1] [i_1] [i_1])))) ? (((124 - var_10) + (arr_2 [i_1 - 1] [i_1 + 2] [i_1 + 2]))) : (((((var_4 ? (arr_27 [i_10] [i_10] [i_1]) : var_0))) ? (var_8 >= var_13) : (arr_29 [i_0] [i_1] [i_10] [i_1])))));
                            }
                        }
                    }
                }
                var_27 = ((arr_27 [i_0] [i_1 - 1] [i_1 + 1]) ? (max((arr_27 [i_0] [i_0] [i_0]), (arr_27 [i_0] [i_0] [i_1 - 1]))) : var_4);
                arr_36 [i_0] [i_1] [i_1] = ((1845478802 ? -1378025449725987558 : (arr_34 [i_0] [i_0] [i_0])));
            }
        }
    }
    var_28 *= var_8;
    #pragma endscop
}
