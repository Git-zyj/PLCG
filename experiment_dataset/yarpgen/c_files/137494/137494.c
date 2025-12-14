/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137494
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_18 = ((-(arr_1 [i_1 - 1] [i_1 - 2])));

                            for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
                            {
                                arr_13 [i_2] [i_4] = ((((((arr_3 [i_1 - 1]) ? (arr_3 [i_1 - 1]) : var_13))) ? (((arr_1 [1] [1]) ? 235484008 : 1)) : (min((((80 ? 1 : 1))), 2585740557))));
                                arr_14 [i_4] [i_3] [i_2] [i_1] [i_0] = ((((max((arr_3 [i_1]), (arr_12 [i_3] [i_3] [i_1 - 1] [i_3] [3])))) ? -var_0 : (!1)));
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
                            {
                                arr_17 [i_0] [i_1] [i_3] = ((((((arr_15 [i_5] [i_2] [i_2] [i_2] [i_2] [i_1] [i_0]) ? -32758 : 1))) && var_13));
                                arr_18 [i_0] [i_1 + 1] [i_0] [i_3] [1] = ((var_2 & (~1)));
                                var_19 -= ((237 ? (~var_13) : (((arr_3 [i_1 - 1]) ? var_9 : -9223372036854775806))));
                            }
                            arr_19 [i_2] [15] = ((((((arr_16 [i_0] [i_1 - 1]) ? (arr_16 [i_0] [i_1 - 2]) : (arr_16 [i_0] [i_1 - 1])))) | ((~((1 ? 9 : 1))))));
                            var_20 = (-29017 ? 1 : ((-(arr_8 [i_1 - 2] [i_1 - 1] [i_1 + 1] [i_1 - 2] [i_1 - 1]))));
                        }
                    }
                }
                arr_20 [i_0] = 63;
            }
        }
    }

    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {
        arr_23 [i_6] = (max(15, 3547161272));
        arr_24 [i_6] &= (max((((((arr_10 [i_6] [i_6] [i_6] [i_6] [i_6]) <= 5767562930345217056)) ? (((arr_8 [i_6] [i_6] [6] [13] [i_6]) & 1)) : ((16372342809262815922 ? 1 : 1)))), (arr_4 [i_6])));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 11;i_7 += 1)
    {
        arr_27 [i_7] = ((18446744073709551611 & (13 - var_11)));
        var_21 = (min(var_21, (arr_6 [i_7] [i_7] [i_7] [i_7])));
    }
    for (int i_8 = 0; i_8 < 20;i_8 += 1)
    {
        arr_31 [11] = (((((max(-13536, (arr_29 [i_8] [i_8]))) ? (((1 && (arr_10 [i_8] [i_8] [i_8] [i_8] [i_8])))) : 1))));
        var_22 = (((max((max(10206699014778731819, 1)), -37)) * (arr_6 [i_8] [i_8] [i_8] [i_8])));
        var_23 |= ((((max((arr_8 [i_8] [i_8] [i_8] [i_8] [i_8]), -32300))) <= (((!(arr_8 [i_8] [i_8] [i_8] [i_8] [i_8]))))));
        var_24 = (max(var_13, (((!(arr_30 [i_8]))))));
        var_25 = -19219;
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 18;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 18;i_10 += 1)
        {
            {
                var_26 = var_8;
                var_27 = (((var_0 / (arr_1 [i_9] [i_9]))));
                var_28 = (max(var_28, 1));
                var_29 = (((1 && 1) > (arr_2 [i_9])));
                arr_38 [i_9] [i_10] = ((((((arr_15 [i_9] [i_10] [i_9] [i_10] [i_9] [i_9] [i_9]) ? (1 - 19229) : ((var_8 ? (arr_1 [i_10] [i_10]) : 0))))) ? ((((max(1, -24690))))) : ((((-6 ? 35184372088831 : 255)) + (3 + var_16)))));
            }
        }
    }
    var_30 = ((~((-1 ? 7477576311381632500 : 3623910644795821559))));
    var_31 = var_1;
    #pragma endscop
}
