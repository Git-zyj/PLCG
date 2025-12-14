/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122550
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = ((-17 ? (max((arr_1 [i_1] [i_1 + 1]), var_7)) : (((((max(-18, (arr_0 [i_0])))) ? (1 / var_8) : (arr_0 [i_0]))))));
                arr_6 [i_0] [i_0] [i_0] = (arr_3 [i_0] [i_0] [i_1 - 1]);
                arr_7 [i_0] [i_0] = (arr_0 [i_0]);
                var_10 &= (arr_0 [12]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 4; i_2 < 7;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            {
                arr_14 [6] [i_2] = ((~var_1) * ((((arr_12 [i_2] [i_2]) ^ (arr_12 [i_2] [i_2])))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        {
                            var_11 = (max(var_0, (((16 || var_2) ? 1 : 32755))));
                            var_12 &= (arr_2 [i_2 - 3] [i_2 + 1]);
                            var_13 = (((arr_15 [i_2]) & (10455672841877659260 - 1)));
                        }
                    }
                }
                arr_19 [i_2] [i_2] = ((((((((arr_4 [i_2] [i_3] [i_2]) ? 117 : var_4)) << (arr_17 [i_2] [i_2] [i_2] [i_2] [i_2])))) ? ((((((arr_8 [i_2 - 1]) ? var_3 : 1))) ? (arr_10 [i_3] [i_3] [i_2]) : (((arr_2 [i_3] [i_2 - 1]) ? var_8 : (arr_12 [i_2 + 2] [i_2]))))) : -1553607855));
                var_14 = (arr_9 [i_2 - 1] [i_2 - 1]);
                arr_20 [i_2] [i_2] = ((((((((arr_8 [i_3]) < (arr_18 [i_3] [i_2] [2]))) ? 17 : ((32763 ? (arr_10 [i_2] [i_3] [i_3]) : 0))))) || (((arr_17 [i_2] [i_3] [1] [1] [i_2 + 1]) || (arr_13 [i_2])))));
            }
        }
    }
    var_15 &= (max(((var_4 - (var_2 & var_7))), var_6));
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 24;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 23;i_9 += 1)
                    {
                        {
                            arr_36 [i_6] [i_6] = (((((arr_23 [i_8] [i_8]) || ((min(76, 1748383627))))) ? (arr_21 [i_6]) : (arr_30 [i_8] [i_7] [i_8] [i_9])));
                            arr_37 [i_6] = (arr_30 [22] [22] [i_8] [i_9]);
                            arr_38 [i_6] [i_7] [8] [8] [8] [i_6] = (((arr_31 [i_6] [i_7]) != -6791085797535653889));
                            arr_39 [i_6] [i_7] [i_6] [i_9 + 1] [i_6] [i_7] = ((((min(var_1, var_9)) >> (arr_21 [i_6]))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_10 = 0; i_10 < 24;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 0;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 24;i_12 += 1)
                        {
                            {
                                arr_48 [i_6] [14] [i_10] [i_6] [i_7] [i_7] [i_6] = (((arr_24 [i_6]) ? ((40803 + (arr_21 [i_6]))) : 1));
                                var_16 = (arr_33 [i_6] [i_6] [i_6] [11] [i_6]);
                                arr_49 [i_6] [i_6] = (-(218 <= 2117663939));
                                var_17 = (max(var_17, (arr_24 [i_7])));
                            }
                        }
                    }
                }
                var_18 = 65472;
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 24;i_14 += 1)
                    {
                        {
                            arr_56 [i_6] [i_13] [i_13] [i_14] [9] [i_7] = 54;
                            arr_57 [i_6] [i_6] [i_7] [i_7] [i_6] [i_6] = ((((var_5 - (arr_53 [i_6] [i_6]))) == (arr_23 [i_6] [i_6])));
                            var_19 = (arr_43 [i_13] [i_6]);
                            var_20 ^= var_7;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_15 = 1; i_15 < 23;i_15 += 1)
                {
                    for (int i_16 = 1; i_16 < 23;i_16 += 1)
                    {
                        {
                            var_21 = ((0 | (((arr_33 [i_15 - 1] [i_15 + 1] [i_15 + 1] [i_15 + 1] [i_6]) ? (arr_22 [i_6] [i_16 - 1]) : (arr_33 [i_15] [i_15] [i_15] [i_15 - 1] [i_6])))));
                            var_22 = ((((((arr_23 [i_6] [i_16 + 1]) ? (arr_52 [i_6] [i_6] [i_6]) : ((-7790316946497637780 ? var_2 : (arr_25 [i_6] [i_6])))))) ? var_9 : (((var_6 || (arr_23 [i_7] [i_15 - 1]))))));
                            var_23 = ((((max(((((arr_61 [i_6] [i_7] [i_15 - 1] [i_16 + 1]) ^ -6651163701306619474))), (((arr_47 [i_6] [i_15 - 1] [i_6]) ? (arr_50 [i_7] [i_15] [i_6]) : var_1))))) ? var_2 : (((16879100612691251601 != (arr_27 [i_6] [i_6]))))));
                            arr_64 [i_6] = (max((((((arr_34 [i_6] [22] [i_6]) ? var_0 : (arr_60 [i_6] [i_6] [i_15] [i_16]))) / var_4)), -53));
                            var_24 = (arr_22 [i_6] [i_15 + 1]);
                        }
                    }
                }
            }
        }
    }
    var_25 = (max(var_25, (var_2 * var_4)));
    #pragma endscop
}
