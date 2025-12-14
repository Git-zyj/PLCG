/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17827
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 += -8623;
        var_20 ^= ((var_10 & (max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))));
        var_21 = (min(var_21, (((25486 ? 8623 : 17705743498401953284)))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_22 = ((((741000575307598332 != (((arr_0 [i_1] [i_1]) ? var_14 : (arr_2 [i_1] [i_1]))))) ? (arr_0 [2] [i_1]) : (max(17705743498401953287, -8623))));
        var_23 = (min(var_23, ((max((~37), ((((((arr_3 [i_1]) ? (arr_4 [i_1] [i_1]) : (arr_4 [i_1] [1])))) ? var_11 : ((4972894890132258570 ? (arr_4 [i_1] [i_1]) : 18446744073709551615)))))))));
    }
    var_24 = (max(var_24, ((var_15 && (((var_5 ? (!var_18) : ((min(0, var_15))))))))));

    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        var_25 |= (arr_0 [14] [i_2]);
        var_26 += ((((max(-2984, (((arr_5 [10]) & (arr_6 [i_2])))))) ? ((~(min(var_2, (arr_6 [i_2]))))) : (((var_18 ? var_18 : var_6)))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                {
                    var_27 = (max(var_27, (((((365866759 ? (max(16, 1527249671)) : 8928)) >= (((~(arr_4 [i_2] [i_3])))))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_28 = (max(var_28, ((((arr_6 [i_6]) ? (((min((arr_13 [i_5] [i_2] [i_3] [i_5] [i_3] [16]), ((max(0, 31))))))) : (arr_9 [i_2] [i_3] [i_3]))))));
                                var_29 = (min(var_29, ((((~var_13) ? (arr_7 [i_6] [i_5]) : ((((var_10 || (arr_15 [i_2] [i_3] [i_4] [i_5] [i_6] [i_2] [i_2]))))))))));
                                var_30 = (min(var_30, (((!((((-29756 + 2147483647) >> (var_12 - 38)))))))));
                                var_31 += (min((arr_10 [i_2] [i_3] [i_4]), (!var_2)));
                                var_32 += (((max(((~(arr_10 [i_5] [i_3] [i_3]))), ((max(var_14, 17218))))) >= (arr_10 [i_5] [i_5] [i_5])));
                            }
                        }
                    }
                    var_33 -= (((2127603038 >= 2127603048) ? (arr_10 [i_2] [i_3] [i_2]) : ((var_16 ? ((-8622 ? 111 : var_12)) : var_15))));
                    var_34 = (max(var_34, var_13));
                }
            }
        }
        var_35 = (min(var_35, var_4));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 21;i_7 += 1) /* same iter space */
    {
        var_36 += (((arr_0 [i_7] [i_7]) ? (arr_1 [i_7]) : (arr_0 [i_7] [i_7])));
        var_37 ^= (((arr_17 [i_7]) ? (arr_1 [i_7]) : (!var_12)));
    }
    for (int i_8 = 0; i_8 < 21;i_8 += 1) /* same iter space */
    {
        var_38 ^= (((((arr_17 [i_8]) ? (arr_0 [i_8] [i_8]) : 1155805988)) < ((((!(arr_0 [16] [i_8])))))));
        arr_22 [i_8] [i_8] |= ((var_1 ? ((max((arr_18 [i_8]), var_3))) : ((((max(var_11, var_11))) ? (((0 ? (arr_17 [i_8]) : 121))) : (arr_16 [i_8] [i_8])))));
    }
    #pragma endscop
}
