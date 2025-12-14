/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154219
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_13 = var_0;
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((!(((~(((arr_11 [i_0] [i_0] [i_0]) ? (arr_1 [i_4]) : var_9)))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_14 = (175 & -248);
                                var_15 = ((var_0 ? (((max(var_4, 0)) * (((var_6 ? var_12 : (arr_1 [i_2])))))) : ((max(((8388607 ? var_3 : var_3)), 8388607)))));
                                arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] = var_7;
                                arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_1 [i_2]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            {
                                var_16 = ((~((8388603 ? 19505 : 57344))));
                                arr_26 [i_7] [i_7] [i_0] [i_0] [i_0] = ((((arr_4 [i_1] [i_1]) || (((65519 ? 32767 : (arr_23 [i_7] [i_0])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 22;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_11 = 0; i_11 < 22;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 22;i_12 += 1)
                    {
                        for (int i_13 = 2; i_13 < 18;i_13 += 1)
                        {
                            {
                                var_17 = (min(var_17, ((((((~(arr_39 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])))) ? ((max((((!(arr_28 [i_9] [i_9])))), (min(var_0, (arr_34 [i_9] [i_9] [i_9] [i_9])))))) : (max(-1, (arr_37 [i_9] [i_9] [i_9] [i_9] [i_13 + 4]))))))));
                                var_18 *= ((((((-(arr_30 [i_9] [i_9])))) || 61440)));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 22;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 1;i_15 += 1)
                    {
                        {
                            var_19 = (((arr_42 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]) ? (arr_42 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14]) : (min((16 - 1120656087), (!255)))));
                            arr_45 [i_10] [i_15] = (min(var_12, (-1 || 0)));
                            arr_46 [i_15] [i_15] = var_6;
                            arr_47 [i_9] [i_15] [i_9] [i_15] = (max((min(155, var_7)), 74));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_16 = 4; i_16 < 19;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 22;i_17 += 1)
                    {
                        {
                            arr_54 [i_9] [i_9] [i_9] [i_9] [i_9] = 1;
                            var_20 = -19490;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 1;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 22;i_19 += 1)
                    {
                        {
                            arr_59 [i_9] [i_9] [i_9] [i_9] [i_9] = -1;
                            arr_60 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] = ((((max((!-64), -791386803))) ? (arr_41 [i_10] [i_19] [i_10]) : (((((var_10 ? (arr_56 [i_19]) : (arr_41 [i_19] [i_19] [i_19])))) ? (~2147483647) : ((29943 ? 0 : var_6))))));
                            var_21 = ((((0 ? var_1 : (arr_51 [i_9] [i_9] [i_9] [i_9])))) ? (8388603 % 65519) : ((-822203839 ? -19505 : 350936737953042874)));
                            var_22 = var_6;
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_20 = 0; i_20 < 11;i_20 += 1)
    {
        for (int i_21 = 1; i_21 < 1;i_21 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_22 = 0; i_22 < 11;i_22 += 1)
                {
                    for (int i_23 = 0; i_23 < 1;i_23 += 1)
                    {
                        {
                            arr_72 [i_20] [i_20] [i_22] [i_22] [i_20] = ((var_6 ? (((arr_8 [i_20] [i_20] [i_20] [i_20] [i_20]) - (~var_9))) : ((((18446744073709551595 ^ 308798817390023975) != 1)))));
                            arr_73 [i_22] [i_22] [i_22] [i_22] [i_22] = -166;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_24 = 0; i_24 < 1;i_24 += 1)
                {
                    for (int i_25 = 0; i_25 < 1;i_25 += 1)
                    {
                        {
                            arr_78 [i_20] [i_20] [i_20] [i_20] &= (((((!((max(var_10, 230)))))) >= (((var_7 | (arr_3 [i_20] [i_20] [i_20]))))));
                            var_23 = ((~(((!(arr_44 [i_25]))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_26 = 0; i_26 < 11;i_26 += 1)
                {
                    for (int i_27 = 0; i_27 < 1;i_27 += 1)
                    {
                        {
                            var_24 = var_6;
                            var_25 = (((((((max(var_10, -8388607)) >= 89)))) & ((-(arr_41 [i_20] [i_20] [i_20])))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_28 = 3; i_28 < 9;i_28 += 1)
                {
                    for (int i_29 = 0; i_29 < 1;i_29 += 1)
                    {
                        for (int i_30 = 0; i_30 < 11;i_30 += 1)
                        {
                            {
                                var_26 = var_7;
                                arr_89 [i_29] [i_28] [i_29] [i_28] [i_29] [i_29] = var_0;
                                var_27 *= 255;
                                var_28 = (max(var_28, ((((246 && 152) % 89)))));
                                var_29 *= (var_11 || 23455);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
