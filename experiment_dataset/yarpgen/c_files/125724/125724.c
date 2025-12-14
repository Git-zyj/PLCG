/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125724
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        arr_2 [1] = (!(arr_1 [i_0]));
        var_17 = -0;
        var_18 = ((2147483647 ^ ((1 ? 218735088682240475 : (arr_0 [i_0] [i_0 + 2])))));
        var_19 ^= ((var_16 ? -1612376774 : (arr_0 [i_0 + 2] [i_0 - 1])));
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                {
                    arr_10 [i_1] [5] [i_2 + 2] [i_1] = ((var_6 ? (min(var_14, (arr_3 [i_1]))) : ((min(((13624623631244575561 ? 1612376774 : 1)), 1)))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            {
                                arr_16 [i_3] [i_1] = ((-9223372036854775788 || ((min((((arr_15 [i_1] [i_3] [i_3] [i_4] [i_4] [i_2 + 1] [i_4]) ? (arr_15 [i_1] [i_2 + 2] [i_3] [i_3] [17] [i_4] [i_5]) : 1)), 13)))));
                                var_20 = (max(var_20, (((((min(34359738367, -464421942))) ? 30 : ((~((~(arr_14 [i_1] [i_2] [i_3] [i_4] [i_4] [i_5] [i_5]))))))))));
                                var_21 = ((((max((((var_15 && (arr_5 [i_5])))), ((var_1 ? (arr_5 [i_3]) : (arr_14 [i_1] [i_1] [i_3] [i_3] [2] [i_1] [i_1])))))) ? (max(((min((arr_12 [1] [1] [i_3] [1] [i_1]), var_10))), -var_14)) : 0));
                            }
                        }
                    }
                    var_22 = ((-(arr_15 [i_1] [i_1] [i_3] [i_3] [i_2 + 2] [i_2 - 1] [i_1])));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            {
                                var_23 = (max(var_23, (((((!(arr_3 [i_1]))) ? (((-(-1612376774 && var_16)))) : (max(((123 ? -5044615987034583659 : 1)), 5044615987034583666)))))));
                                var_24 = -1;
                                var_25 ^= (max(((var_11 ? ((var_12 ? 65511 : var_9)) : ((((var_6 != (arr_18 [i_1] [4] [i_1] [i_6] [i_7] [i_1]))))))), -20922));
                                var_26 = ((((var_0 & (max(1, (arr_3 [i_2]))))) < 1));
                            }
                        }
                    }
                }
            }
        }
    }
    var_27 = (max(var_27, var_2));
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 23;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 23;i_9 += 1)
        {
            {
                var_28 = (min(var_28, ((((arr_25 [i_8] [i_8]) << (min(((var_10 ? var_3 : var_2)), ((max(var_11, (arr_26 [i_8] [19] [i_8])))))))))));
                var_29 ^= (min((((!((!(arr_24 [i_9])))))), ((~(min(31, var_13))))));
            }
        }
    }
    #pragma endscop
}
