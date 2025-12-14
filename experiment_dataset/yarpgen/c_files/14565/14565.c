/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14565
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_18 = (((arr_9 [i_0] [i_1] [i_2] [i_2] [i_2]) ? -33 : (((((4183829297368890778 ? 2111670154318252827 : var_16))) ? -14262914776340660837 : 14262914776340660837))));
                            var_19 = ((-88 == var_1) <= 1063206805);
                        }
                    }
                }
                var_20 = (max(var_20, (((arr_3 [i_1 - 1] [i_1 - 2] [6]) > (arr_2 [16] [16])))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 4; i_6 < 9;i_6 += 1)
            {
                {
                    var_21 = 134217727;
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            {
                                var_22 = (((((+((0 ? (arr_15 [i_4]) : (arr_20 [1] [i_5] [i_7] [i_5])))))) ? ((((!(arr_17 [i_4] [i_4]))))) : (((arr_22 [3] [i_5] [i_6] [i_6] [i_7] [2] [i_6]) - (((arr_14 [i_5] [3] [i_5]) ? -4789 : 4183829297368890778))))));
                                var_23 = (max(var_23, 108));
                                var_24 = ((((((((arr_4 [i_6] [i_5] [i_7] [i_8]) ? (arr_6 [i_4] [i_4] [i_6 + 3]) : var_12))) ? ((var_5 ? 14262914776340660837 : 14262914776340660838)) : (min((arr_8 [i_4] [17] [i_8]), (arr_4 [i_6] [i_6] [i_5] [i_6]))))) - ((((((((arr_3 [i_5] [i_6] [i_6]) <= -19377)))) ^ 32736)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
