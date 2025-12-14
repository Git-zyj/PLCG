/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157967
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((!var_2) * (max(var_8, -1562619589))));
    var_14 = ((~(12857064341127520042 > 12857064341127520036)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_15 = (max(var_15, var_10));
                            arr_11 [6] [i_1] [14] [6] = (arr_8 [18] [18] [14]);
                        }
                    }
                }
                arr_12 [i_1] = ((-var_0 ? (((((var_11 ? var_7 : var_7))) ? (arr_9 [8] [8] [i_0] [10]) : (arr_6 [i_0] [i_1]))) : (arr_8 [i_0] [i_0] [i_0])));

                for (int i_4 = 1; i_4 < 17;i_4 += 1)
                {
                    var_16 = (min(var_16, (((((((!-883924421214264051) ? 3120593764639150071 : (max(15326150309070401555, (arr_7 [i_0])))))) ? var_2 : (max(15507427650688816642, (arr_10 [i_0] [i_1] [i_4 - 1] [i_4] [i_4 + 3] [5]))))))));
                    arr_16 [i_1] = var_4;
                    var_17 = -3271;
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    arr_19 [11] [11] [i_1] [11] = (arr_3 [i_1]);
                    var_18 = (((arr_13 [i_0] [i_5]) ? (arr_8 [i_0] [i_1] [i_5]) : var_2));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 18;i_7 += 1)
                        {
                            {
                                var_19 = ((var_0 > -5018) ? (((!(arr_23 [i_0] [i_0] [i_1] [i_5] [i_6] [7])))) : -var_8);
                                arr_25 [17] [i_1] = (arr_7 [i_1]);
                                arr_26 [i_0] [i_0] [i_1] [i_5] [i_5] [i_1] [i_7] = ((~(arr_24 [i_1] [i_7 - 1] [i_7 + 2] [i_7 + 2] [i_7] [i_7])));
                                arr_27 [i_0] [i_1] [i_0] [14] [i_6] [i_7] = ((!(arr_9 [i_6] [i_6] [i_6] [i_7 + 2])));
                            }
                        }
                    }
                }
                for (int i_8 = 2; i_8 < 18;i_8 += 1)
                {
                    arr_30 [i_1] = max((((var_12 ? -var_11 : (!var_0)))), (min(12857064341127520042, -570344301)));
                    arr_31 [i_0] [i_8] |= 13182867633288214721;
                    arr_32 [i_0] [6] [i_1] [i_0] = (~(arr_18 [12] [i_8 - 2] [i_8 + 2]));
                }
                var_20 ^= (arr_28 [i_0] [i_0] [i_0] [i_0]);
            }
        }
    }
    #pragma endscop
}
