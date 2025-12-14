/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176512
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_12 = (~var_6);

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_10 [i_2] [10] = 1;
                        arr_11 [i_2] = ((((-(arr_6 [i_2] [i_2] [i_0]))) * ((((-2147483647 - 1) >= 2147483647)))));
                    }
                }
            }
        }
    }
    var_13 = var_3;
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            {
                arr_18 [i_4] [i_5] = (-2147483647 - 1);

                /* vectorizable */
                for (int i_6 = 1; i_6 < 11;i_6 += 1)
                {
                    var_14 = ((((-(arr_13 [i_6])))) ? (2147483647 || 2032) : ((~(-2147483647 - 1))));
                    arr_23 [i_4] [i_5] = ((!(((2098754466 ? -1 : 0)))));
                }
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            {
                                arr_32 [i_4] [i_4] [i_8] [i_4] [i_9] |= ((((max(var_1, ((min(28220, (arr_16 [i_7] [i_5] [i_4]))))))) ? (((~(max((arr_26 [i_4] [i_5] [i_8]), var_11))))) : (((arr_22 [i_8]) ? -var_10 : (((arr_26 [i_4] [i_4] [i_4]) ? 1073741824 : var_11))))));
                                var_15 *= 1;
                                arr_33 [i_4] [i_5] [i_5] [13] [i_8] [i_8] [i_9] = (max((min(((min((arr_27 [i_5] [i_7] [i_8]), (arr_29 [i_4] [i_5] [i_7] [i_8] [i_7] [i_7])))), (((arr_15 [i_4]) << (-2199023255552 + 2199023255561))))), (arr_13 [i_5])));
                            }
                        }
                    }
                    var_16 = (arr_16 [i_7] [i_7] [i_7]);
                    arr_34 [i_5] [i_4] [i_4] = (min((--0), (!-248)));
                }
                for (int i_10 = 2; i_10 < 11;i_10 += 1)
                {
                    arr_37 [i_5] = (max(65533, ((((arr_36 [i_4] [i_5] [1]) * var_11)))));
                    var_17 ^= ((!(arr_22 [2])));
                }
                arr_38 [i_5] = ((((max((arr_36 [i_5] [i_4] [i_4]), (arr_27 [i_4] [i_4] [i_5])))) << (((arr_12 [i_5]) - 4067810993))));
            }
        }
    }

    for (int i_11 = 2; i_11 < 18;i_11 += 1)
    {
        var_18 |= ((var_3 - (min(((((arr_41 [i_11]) ? (arr_39 [i_11 + 1]) : 1))), (((arr_41 [i_11]) << 0))))));
        arr_42 [1] |= (((min(255, 200478835) << 1)));
        arr_43 [i_11] [i_11] = 28337;
        var_19 = (min(var_19, ((((1 << 21) && ((1 == ((((-32767 - 1) || (arr_39 [i_11])))))))))));
    }
    for (int i_12 = 0; i_12 < 1;i_12 += 1)
    {
        arr_47 [i_12] [i_12] = (min((min((((4094 ? (arr_13 [12]) : -25726))), (arr_25 [i_12] [i_12]))), (arr_15 [i_12])));
        var_20 = ((~-9223372036854775797) == (arr_40 [i_12]));
    }
    #pragma endscop
}
