/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160414
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_17 |= ((((max((arr_1 [i_0 + 1]), (min((arr_3 [i_1] [i_1] [i_1]), -648545861))))) - ((((((arr_4 [i_1]) ? var_13 : (arr_3 [i_1] [i_1] [i_1])))) ? (((arr_0 [i_1] [i_1]) ? var_16 : var_1)) : var_6))));
                var_18 = (min(var_0, ((((((9223372036854775783 <= (arr_5 [i_1] [2] [1]))))) / ((var_11 ? var_8 : (arr_4 [1])))))));

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    arr_8 [i_0] [i_0] [i_2] [i_0] = (((((~((max((arr_2 [i_0]), (arr_0 [i_0] [i_0]))))))) ? var_3 : ((((((arr_5 [i_0] [i_0] [i_2]) ? var_5 : (arr_5 [i_2] [i_1] [i_0 - 1]))))))));
                    arr_9 [i_0] = ((39230 ? 2147483647 : 890760180));
                }
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    var_19 ^= ((648545876 ? 648545861 : 123));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 18;i_5 += 1)
                        {
                            {
                                arr_17 [i_0] [i_1] [i_3] [i_0] [i_5] = ((((132 << (-648545861 + 648545884))) >= (((arr_11 [i_1]) ? (((arr_3 [i_0] [i_1] [i_1]) << (arr_10 [i_4] [i_4] [i_4] [i_4]))) : (1531675098164469685 != var_14)))));
                                var_20 = ((-(((var_12 * 4294967295) ? var_7 : (arr_3 [i_3] [i_3] [i_4])))));
                                var_21 = ((-(min((~123), (((arr_2 [i_0]) ? (arr_5 [i_3] [i_0 + 1] [i_0 + 1]) : (arr_2 [i_0])))))));
                                var_22 *= ((((min(((((arr_12 [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1] [i_5]) == (arr_2 [i_1])))), (min(1, 10519947156839390577))))) ? (((~(arr_10 [i_0 - 1] [i_0 + 1] [i_5 - 2] [i_5 - 1])))) : (min((((var_10 ? 100 : 136))), (max(var_10, var_3))))));
                                arr_18 [i_0] [i_0] [10] [3] [i_0 + 1] [i_0] = ((((arr_11 [i_4]) ? (((min((arr_10 [i_0] [i_5] [i_4] [i_5]), var_15)))) : var_1)) <= (max((arr_5 [i_0] [i_0] [i_0 - 1]), (arr_5 [1] [i_0 + 1] [i_0 - 1]))));
                            }
                        }
                    }
                    var_23 = ((var_9 ? (((arr_14 [i_0] [i_0] [i_3] [i_0 - 1]) ? (arr_14 [i_1] [i_1] [i_3] [i_0 + 1]) : var_9)) : ((((arr_14 [i_1] [i_1] [i_0] [i_0 - 1]) == var_15)))));
                }
            }
        }
    }
    var_24 *= ((((var_12 ? ((var_7 ? 155 : var_3)) : (max(var_1, var_0)))) > (((~var_10) / (~1)))));

    /* vectorizable */
    for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
    {
        arr_21 [i_6] = (var_16 <= var_2);
        var_25 = ((var_5 & (arr_13 [i_6] [i_6] [i_6] [11])));
        var_26 = (min(var_26, (((var_10 && (arr_7 [4] [i_6]))))));
    }
    for (int i_7 = 0; i_7 < 20;i_7 += 1) /* same iter space */
    {
        var_27 = (((arr_12 [i_7] [i_7] [i_7] [i_7] [i_7]) ? ((((((arr_11 [i_7]) ? (arr_6 [i_7] [0] [12]) : (arr_4 [i_7])))) ? (arr_22 [i_7]) : (~var_16))) : (((~(((arr_13 [i_7] [15] [i_7] [i_7]) - (arr_11 [i_7]))))))));
        var_28 = (max(var_28, (((-(~140))))));
        /* LoopNest 2 */
        for (int i_8 = 2; i_8 < 19;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                {
                    arr_29 [i_8] = (max(1578, var_10));
                    arr_30 [i_9] [i_9] = (~var_8);
                    arr_31 [i_9] = (min((544638815 >= 136), 19));
                    arr_32 [i_9] [i_8 - 1] [i_7] = ((((max(((((arr_12 [i_8] [i_8 - 1] [i_8] [i_9] [i_8 - 1]) & var_0))), (min(1683172951, 149))))) && 13807392252474069325));
                }
            }
        }
        arr_33 [i_7] = 0;
    }
    var_29 = ((~(max(var_0, ((var_1 ? var_1 : var_14))))));
    var_30 = var_3;
    #pragma endscop
}
