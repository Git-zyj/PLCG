/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182467
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_21 = (min(var_21, (1 <= 0)));
                                arr_12 [2] [i_1] [2] |= (((arr_10 [12] [i_1] [i_1] [i_3] [i_2]) ? (min(((246 ^ (arr_7 [8] [8] [8] [8] [8] [i_1]))), 0)) : ((max((arr_6 [i_1] [i_1] [i_1 + 1] [i_3 - 1] [i_1 + 1]), (arr_6 [i_0] [i_1] [i_1 + 1] [i_3 - 1] [i_3 - 1]))))));
                                arr_13 [i_0] [i_1] [i_2] [i_0] [i_0] = (arr_7 [i_0] [i_0] [i_2] [i_3] [i_3] [i_3]);
                            }
                        }
                    }
                    var_22 = (max((arr_1 [i_2] [i_1]), (arr_4 [i_2 + 1] [i_1 - 1])));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 19;i_6 += 1)
        {
            {
                arr_19 [i_5] = ((((arr_18 [i_5] [i_5] [i_6]) ? 14 : (arr_18 [i_5] [i_5] [i_6]))));
                var_23 &= (((arr_14 [i_6 - 1]) ? (((!(((var_7 ? (arr_17 [i_6]) : 255)))))) : (min((~-1058342701), (arr_18 [i_6] [i_6] [i_6 - 2])))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 2; i_7 < 13;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            for (int i_9 = 3; i_9 < 14;i_9 += 1)
            {
                {
                    var_24 = (arr_24 [i_7] [i_7] [i_7] [i_7]);
                    arr_28 [i_9] [i_7] [i_7] [i_7] &= (max(((((arr_25 [i_7] [i_8] [i_9]) * 0))), (arr_18 [i_7 - 1] [i_8] [i_7 - 1])));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 15;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 15;i_11 += 1)
                        {
                            {
                                var_25 = -21;
                                var_26 = (max(var_26, (((-(arr_31 [i_7] [i_8] [i_8] [i_9] [i_10] [i_11]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_27 |= -var_15;
    #pragma endscop
}
