/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184294
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_18 = (arr_0 [i_0 + 1]);
                                var_19 = ((((min(92, ((56 ? -20070 : (-2147483647 - 1)))))) < ((1 ? (!var_8) : (var_13 + 56188)))));
                                var_20 = ((max(var_1, (!18446744073709551615))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            {
                                var_21 = ((~(((arr_16 [i_0] [i_1 + 1] [i_0] [8] [i_6]) ? (arr_16 [i_1 - 2] [i_5] [i_2] [i_1 - 2] [i_0]) : 116))));
                                var_22 = (max(var_22, ((((((var_15 ? (arr_1 [i_6]) : var_4))) >= var_12)))));
                                var_23 = (max(5518, (((arr_2 [i_1 - 2] [i_2] [i_5 - 1]) ? var_6 : (arr_7 [i_0] [i_0 - 1] [i_1 + 1] [i_5 + 3])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 21;i_8 += 1)
                        {
                            {
                                var_24 = (max((arr_8 [i_1 - 3] [i_2] [i_1] [i_8]), (((arr_14 [i_0 + 2] [i_1] [i_1 + 2] [i_7]) ? var_15 : (arr_19 [i_0 - 1] [i_0 - 1] [20] [i_1])))));
                                var_25 -= ((~(((!(((1 ? -1436109272 : 220))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 16;i_9 += 1)
    {
        for (int i_10 = 3; i_10 < 15;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 1;i_11 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 16;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 16;i_13 += 1)
                        {
                            {
                                var_26 = 12;
                                var_27 = (arr_21 [i_9] [i_10] [i_12]);
                                arr_34 [i_12] [i_10] [3] [i_12] [i_9] [i_12] = (min((((arr_13 [i_9] [i_9] [i_10 - 2] [i_9]) ? (arr_13 [i_9] [i_9] [i_10 - 3] [i_9]) : 1240748180)), ((-632157035764721838 ? var_9 : (arr_13 [i_9] [i_9] [i_10 + 1] [i_9])))));
                                arr_35 [i_9] [14] [i_9] [i_12] [i_9] = (((((~(arr_10 [i_9] [i_10] [i_11 - 1] [i_13])))) ? ((~(arr_10 [i_9] [i_10 - 2] [i_11 - 1] [i_12]))) : (((arr_10 [i_9] [i_10 - 3] [i_10 - 3] [i_12]) ? (arr_10 [i_13] [i_11 - 1] [i_10] [i_9]) : (arr_10 [i_9] [i_10 - 3] [i_11 - 1] [i_12])))));
                                var_28 = var_10;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 2; i_14 < 14;i_14 += 1)
                    {
                        for (int i_15 = 1; i_15 < 14;i_15 += 1)
                        {
                            {
                                arr_42 [i_9] = (((1436109284 ? var_17 : (arr_21 [i_9] [i_11 - 1] [i_11 - 1]))) % var_3);
                                var_29 = var_6;
                                arr_43 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] = (arr_41 [i_11] [i_11] [i_11] [i_11] [i_11]);
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_16 = 1; i_16 < 20;i_16 += 1)
    {
        for (int i_17 = 2; i_17 < 19;i_17 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 22;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 22;i_19 += 1)
                    {
                        {
                            var_30 = (~((((202 ? 962493566 : 0)) + (1799055651 + var_13))));
                            var_31 = ((+((((min((arr_49 [i_16] [i_16] [i_16]), (arr_52 [i_16] [i_17] [i_18] [i_19])))) ? (((171 < (arr_48 [i_16 - 1])))) : 127))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_20 = 0; i_20 < 22;i_20 += 1)
                {
                    for (int i_21 = 2; i_21 < 20;i_21 += 1)
                    {
                        {
                            arr_60 [14] [i_20] [2] [12] = ((!(--1615489451477585254)));
                            var_32 = (min(var_32, var_0));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_22 = 0; i_22 < 22;i_22 += 1)
                {
                    for (int i_23 = 2; i_23 < 21;i_23 += 1)
                    {
                        for (int i_24 = 2; i_24 < 21;i_24 += 1)
                        {
                            {
                                var_33 = (max(var_33, (((-116 ? (((var_7 >> (((arr_64 [i_23 - 1] [i_23] [i_23] [i_22]) - 7299202004607787939))))) : (arr_46 [i_24 - 2] [i_23 + 1]))))));
                                var_34 *= (((var_0 / 122) ? var_3 : (((-32767 - 1) / ((2611566721193978868 ? 1 : (arr_63 [i_16] [i_16])))))));
                                var_35 = -11316;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
