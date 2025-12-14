/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127728
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((var_8 & (!var_13)))) ? ((max(((2681844331 ? 4 : 6)), ((-17 ? 2147483633 : 2021242207))))) : 18446744073709551615));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_2] [i_3] [i_4] [i_2] [i_2] = var_8;
                                arr_17 [16] [i_1 + 2] [2] [8] [i_3] [i_3] [14] = var_4;
                                arr_18 [i_0] [i_0] [i_3] [i_3] = ((1586279690086077794 ? (arr_0 [i_0]) : 16860464383623473820));
                            }
                        }
                    }
                    arr_19 [4] [i_0] [i_0] [18] = (((((-var_10 ? var_14 : (arr_12 [i_0])))) ? ((min(var_2, var_14))) : ((var_18 ? ((var_11 ? (arr_3 [i_0] [i_0]) : var_18)) : (((arr_15 [i_0] [i_1 - 1] [i_2] [i_0] [i_0] [i_1 - 1] [10]) ? var_0 : var_12))))));
                }
                for (int i_5 = 4; i_5 < 17;i_5 += 1)
                {
                    arr_22 [15] [15] [i_0] [i_0] = ((var_18 / ((((arr_9 [i_5 + 1] [i_5 + 1] [i_5 - 1]) ? 52473 : var_13)))));
                    arr_23 [i_0] [i_1 + 1] [i_5] [i_0] = (((~var_16) ? (arr_20 [i_0]) : (var_3 == var_9)));
                    arr_24 [i_0] [i_1] = ((var_9 ? ((var_7 ? 22183 : (((arr_0 [i_0]) >> (var_6 - 4111390350))))) : var_9));
                }
                /* LoopNest 2 */
                for (int i_6 = 3; i_6 < 18;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        {
                            arr_31 [i_7] [i_6] [i_1] [i_0] = ((((min(var_2, 2062309344))) ? var_1 : ((((arr_9 [i_6 - 1] [i_6 + 1] [i_1 + 2]) ? (arr_9 [i_6 + 1] [i_6 + 1] [i_1 - 1]) : (arr_9 [i_6 - 3] [i_6 - 2] [i_1 + 2]))))));
                            arr_32 [i_0] [3] [i_0] [3] = ((var_2 ? var_4 : (arr_9 [i_1 - 1] [i_1 - 1] [i_6 - 2])));

                            /* vectorizable */
                            for (int i_8 = 0; i_8 < 19;i_8 += 1)
                            {
                                arr_35 [i_0] [i_0] [10] [i_0] [i_0] [13] &= var_5;
                                arr_36 [i_0] [i_0] [i_8] = var_6;
                            }
                            for (int i_9 = 1; i_9 < 16;i_9 += 1)
                            {
                                arr_39 [i_0] [i_1] [i_1] [18] = (arr_9 [i_0] [i_0] [i_0]);
                                arr_40 [i_9] [i_9] = ((((max((min(var_13, (arr_26 [13] [13]))), var_13))) || ((((((var_2 ? var_9 : var_5))) ? ((var_15 ? (arr_8 [i_9] [i_0] [17] [i_0]) : var_6)) : -11)))));
                                arr_41 [i_9] [i_9] [i_6] [4] [i_9] = (arr_13 [i_0] [i_1] [i_6] [i_7] [i_9] [i_7]);
                                arr_42 [i_0] [i_1] [i_0] [i_7] [i_9] = (arr_38 [i_0] [i_1] [i_1] [i_9] [i_7] [i_9] [i_9]);
                            }
                            for (int i_10 = 0; i_10 < 19;i_10 += 1)
                            {
                                arr_47 [7] [i_6 - 2] [i_0] [i_0] = var_9;
                                arr_48 [i_0] [i_0] [i_6] [i_7] [12] = ((~(((((20242 ? var_7 : (arr_6 [i_0])))) ? (((max(32767, var_8)))) : (arr_44 [i_6 - 1] [i_6] [i_6 - 1] [i_6 + 1] [i_6])))));
                                arr_49 [i_0] [i_0] [i_0] [i_0] [i_0] = ((((var_8 ? var_2 : (arr_9 [i_6 - 1] [i_6] [i_6])))) ? ((2021242207 ? var_5 : (arr_10 [i_6 - 1] [1] [i_6] [i_6] [i_6]))) : (((arr_10 [i_6 - 1] [i_6 - 1] [i_6] [18] [i_6]) ? (arr_10 [i_6 - 1] [i_6] [i_6] [i_6] [i_6]) : var_2)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
