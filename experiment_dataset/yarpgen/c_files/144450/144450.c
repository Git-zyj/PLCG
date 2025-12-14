/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144450
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_12 = (min(var_12, ((max((min((((var_11 ? 24875 : var_4))), (var_9 ^ 24885))), (arr_1 [i_0]))))));
                arr_5 [i_1] = (arr_0 [i_0] [i_1]);
                var_13 = 16625;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 13;i_4 += 1)
                            {
                                var_14 = ((14209642137762731056 ? (~var_6) : var_8));
                                var_15 = (((arr_4 [i_0] [i_1]) ? ((((arr_4 [i_1] [i_1]) % 1))) : 7));
                                var_16 = ((~(~1)));
                            }
                            for (int i_5 = 0; i_5 < 13;i_5 += 1)
                            {
                                var_17 = arr_6 [i_0] [i_1] [i_2] [5];
                                arr_18 [i_0] [i_0] [i_1] [i_2] [i_3] [i_5] = max(var_8, ((((((arr_11 [i_3] [i_1] [1] [i_3 + 1] [i_5]) ? (arr_8 [i_0]) : var_3))) ? (((var_10 ? var_3 : var_8))) : (min((arr_9 [i_0] [i_1] [i_2] [i_5]), (arr_6 [2] [i_1] [i_2] [i_3 - 2]))))));
                                arr_19 [i_1] [i_3] [i_3] [i_2] [i_1] [i_0] [i_1] = (((max(4, 72))));
                            }
                            /* vectorizable */
                            for (int i_6 = 3; i_6 < 11;i_6 += 1)
                            {
                                arr_24 [i_1] [i_1] [i_1] = 1;
                                var_18 = (i_1 % 2 == zero) ? (((21 << (((arr_17 [i_1] [i_1] [i_6 + 2] [i_3 + 2]) - 159))))) : (((21 << (((((arr_17 [i_1] [i_1] [i_6 + 2] [i_3 + 2]) - 159)) - 31)))));
                            }

                            for (int i_7 = 0; i_7 < 13;i_7 += 1)
                            {
                                var_19 = (min(var_19, var_8));
                                var_20 = (((max((arr_16 [i_0] [i_0] [i_0]), 2251799813685247))) ? (((var_7 && var_0) ? 18446744073709551606 : var_4)) : (!var_6));
                                var_21 = (((!109) ? (((max((arr_21 [i_2] [i_3 - 3] [4] [i_3 - 3] [i_3 + 2] [i_3]), (arr_21 [i_1] [i_3 - 3] [i_3] [i_3 - 2] [i_3 - 1] [i_7]))))) : ((((max(-41, (arr_12 [i_7] [i_3 - 2] [i_2] [i_1] [i_0])))) % (max(var_9, 182))))));
                            }
                            for (int i_8 = 0; i_8 < 13;i_8 += 1)
                            {
                                var_22 = 2727736609;
                                arr_31 [i_8] [i_3 + 1] [i_1] [i_1] [i_0] = ((var_3 | (((var_3 * var_6) * var_10))));
                            }
                            /* vectorizable */
                            for (int i_9 = 0; i_9 < 13;i_9 += 1)
                            {
                                var_23 = var_0;
                                arr_34 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] = (arr_28 [i_9] [i_3 + 2] [i_1] [i_0]);
                                arr_35 [i_1] = (-63 + var_6);
                                var_24 = var_10;
                                arr_36 [i_0] [i_1] [i_2] [i_2] [i_9] = ((!(arr_17 [i_1] [i_3] [i_2] [i_1])));
                            }
                            arr_37 [i_1] [i_2] [i_1] = (((((((max((arr_26 [i_1] [i_2] [4] [i_1] [i_1]), 7287420049482055439))) && (var_1 <= var_3)))) | 692750603686281447));
                        }
                    }
                }
            }
        }
    }
    var_25 = (max(var_9, var_5));
    #pragma endscop
}
