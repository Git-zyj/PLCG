/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179071
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                var_17 = ((-((81 ? (((min((arr_2 [i_0] [i_0]), 1)))) : ((var_9 ? var_12 : (arr_0 [1] [i_0])))))));
                arr_4 [i_1 + 1] = (((-15598 ? (arr_1 [i_0] [i_1]) : (arr_3 [i_1 - 1] [i_0] [i_0]))));
                var_18 = (((((var_1 << (((arr_2 [i_0] [i_1]) - 47224))))) ? ((10172 ? 190 : 49167)) : var_15));
            }
        }
    }
    var_19 = (((!(((-446080171 ? 2926683395 : 37))))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                var_20 -= (((arr_2 [i_2] [i_3]) & ((~((((arr_2 [i_2] [i_3]) != 1445386728)))))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 9;i_5 += 1)
                    {
                        {
                            var_21 = 40;
                            arr_13 [i_2] [i_3] [i_4] [i_5] = ((((((arr_11 [i_3]) ? (arr_3 [i_2] [i_2] [i_4]) : (((!(arr_3 [i_5] [i_3] [i_2]))))))) ? ((((((var_2 ? (arr_11 [i_3]) : (arr_10 [i_3] [i_3] [i_5]))) >= var_10)))) : (((arr_8 [i_2] [i_3]) - (arr_12 [i_2] [i_4] [i_2])))));

                            /* vectorizable */
                            for (int i_6 = 4; i_6 < 9;i_6 += 1)
                            {
                                arr_17 [i_2] [i_3] [i_4] [2] [i_2] [i_2] = ((((var_16 ? var_15 : (arr_8 [i_2] [i_3]))) < 2494153441));
                                arr_18 [i_2] [i_3] [i_2] = (arr_10 [i_2] [i_4] [i_4]);
                                var_22 = (arr_7 [i_2]);
                                var_23 = -1;
                                var_24 = -1;
                            }
                            for (int i_7 = 4; i_7 < 12;i_7 += 1)
                            {
                                arr_21 [i_2] [i_3] [i_4] = ((min((arr_7 [i_2]), ((var_7 * (arr_20 [i_7] [i_5] [i_4] [i_3] [i_2]))))));
                                arr_22 [i_2] [i_2] [i_2] [6] [i_2] [i_2] [i_5] = (max(((-(((arr_15 [i_2] [i_3] [i_4] [i_5] [i_7] [i_2]) | 26550)))), (!var_7)));
                                var_25 = (~1);
                            }
                            var_26 -= ((2 ? (((((max(var_7, (arr_5 [8] [i_5])))) ? (arr_14 [i_2] [1] [10] [12] [i_5] [i_5] [i_4]) : (~8192)))) : (min(((var_13 ? 0 : 65535)), (~1)))));
                        }
                    }
                }
                arr_23 [i_2] = ((!((!(arr_8 [i_2] [i_2])))));
            }
        }
    }
    var_27 = var_10;
    var_28 = var_7;
    #pragma endscop
}
