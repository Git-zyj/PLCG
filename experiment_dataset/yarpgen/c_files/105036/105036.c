/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105036
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= ((var_1 ? var_15 : 1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (((arr_0 [i_0]) ? ((1 ? (arr_2 [i_0] [i_0] [i_1]) : (-772633617 - 97))) : ((1 ? (1 - 2092633981) : 1))));
                arr_6 [i_0] = (max(0, 1416425234));

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    arr_11 [i_0] [i_0] = ((arr_9 [i_0] [i_0] [i_2] [i_0]) && ((((arr_7 [i_0]) ? 1 : -1383727450))));
                    var_20 -= (((arr_1 [12] [12]) ? (arr_0 [i_0]) : 1));
                    arr_12 [i_2] [i_1] [18] |= ((((min(((1 >> (((arr_10 [0]) - 2832443225)))), (((arr_2 [i_0] [13] [i_2]) << (var_16 - 141)))))) ? ((~(((arr_3 [i_0] [i_2]) ? 1 : var_18)))) : (arr_9 [6] [i_1] [i_0] [6])));
                }
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    arr_17 [i_0] [i_0] [i_1] [i_0] = var_9;

                    for (int i_4 = 1; i_4 < 19;i_4 += 1)
                    {
                        arr_21 [i_0] [i_1] [i_1] [i_1] [i_3] [i_0] = (((((arr_13 [i_4 + 1] [i_0] [i_0] [i_0]) ? (arr_18 [i_4 - 1] [i_4] [i_4 + 1] [i_4] [i_4 + 1] [i_4]) : -1437410748)) % var_1));

                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 19;i_5 += 1)
                        {
                            var_21 -= var_4;
                            arr_24 [i_0] [4] [i_3] [i_4 - 1] [i_0] [i_5 - 1] &= (arr_3 [i_4] [i_5]);
                        }
                        var_22 += (((arr_9 [i_0] [i_0] [i_4 + 1] [10]) * 100));
                    }
                }

                for (int i_6 = 4; i_6 < 17;i_6 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 20;i_8 += 1)
                        {
                            {
                                arr_35 [i_0] [i_6] [i_6] [i_8] |= (((arr_29 [i_0] [i_1] [i_8] [i_8] [i_8] [i_0]) ? (((1 > 1) ? ((max((arr_13 [i_0] [i_6] [i_7] [i_8]), (arr_19 [i_0] [i_6] [i_6])))) : ((1 ? 986051586499507754 : 1437410747)))) : (9 || var_1)));
                                var_23 += (((arr_25 [i_7]) ? (max(((((arr_9 [i_0] [i_6 + 3] [i_6 + 3] [i_6]) ^ (arr_3 [i_7] [i_7])))), (arr_29 [i_0] [i_1] [i_0] [i_6] [i_0] [i_0]))) : (((((var_10 ? 4027800941004533879 : 1437410747))) ? (arr_31 [15] [i_6 - 3] [i_7] [i_7] [i_8]) : ((var_5 ? (arr_2 [i_0] [i_6] [i_7]) : -9223372036854775797))))));
                                arr_36 [i_0] [i_1] [i_6 - 2] [i_7] [i_8] [i_6] [1] |= 1;
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {
                        var_24 = (max(var_24, 1));
                        arr_41 [i_0] [i_0] [i_0] [i_6] [i_9] = (((32767 / var_6) >> (((((arr_10 [i_0]) ? var_10 : (arr_0 [i_0]))) - 48539))));
                    }
                }
                arr_42 [i_0] = (((arr_16 [i_1] [i_0] [i_0]) ? (((((max(1, 1437410749))) ? ((min(1, 1))) : (((!(arr_27 [i_1] [i_0] [i_0] [i_0]))))))) : (((1 ^ -14502) & (1 | var_14)))));
            }
        }
    }
    var_25 += (max((10446476389038851630 && var_5), 4105566768));
    #pragma endscop
}
