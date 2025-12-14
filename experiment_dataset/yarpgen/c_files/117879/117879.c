/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117879
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_12 = (((((arr_0 [5]) || (arr_0 [i_0]))) ? var_1 : 127));
                var_13 = ((255 ? (((arr_3 [5] [i_1] [i_1]) ? (max(-4646233883104101753, var_10)) : (arr_2 [0]))) : ((250 ? 0 : -2647165824584801470))));
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_14 = ((!((((arr_10 [i_3 - 1] [6] [i_2] [i_2 - 4] [i_1]) * 255)))));
                                var_15 = ((var_7 << ((-(!var_0)))));
                            }
                        }
                    }
                }
                var_16 = var_0;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 14;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        {
                            var_17 = (((((!(arr_19 [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 + 1])))) / var_4));
                            var_18 = max((max(255, (arr_16 [i_7 + 3] [i_7] [i_7]))), (~var_8));
                            var_19 = (max(var_19, ((max((-var_11 * var_1), ((var_2 ? (arr_17 [i_5] [i_7] [i_7] [i_8]) : (((887350008 ? (arr_12 [i_5] [i_5]) : 234))))))))));
                            var_20 = (arr_20 [i_6] [i_6]);
                            var_21 = (arr_13 [i_6] [i_7]);
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_9 = 2; i_9 < 15;i_9 += 1)
                {
                    for (int i_10 = 2; i_10 < 13;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 17;i_11 += 1)
                        {
                            {
                                var_22 = (max((arr_26 [i_5] [i_6] [i_9] [i_9] [i_11] [i_10]), (((var_0 <= (arr_15 [2] [i_10 - 2]))))));
                                var_23 = ((~(((((-6880694584273014506 ? var_3 : 22))) ? (arr_28 [i_11] [i_10] [2] [2] [i_6] [i_5]) : var_9))));
                                var_24 = (max(var_24, 0));
                            }
                        }
                    }
                }
                var_25 = var_10;
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 17;i_12 += 1)
                {
                    for (int i_13 = 3; i_13 < 15;i_13 += 1)
                    {
                        {
                            var_26 = var_9;
                            var_27 *= (arr_17 [i_5] [i_5] [i_12] [i_5]);
                            var_28 = (arr_35 [i_5] [i_6] [i_13 - 3] [i_12]);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
