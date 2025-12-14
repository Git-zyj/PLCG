/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12594
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_6 [i_0] = (arr_1 [i_0]);
                var_12 = (max(var_12, ((max(((((arr_1 [8]) ? (arr_1 [10]) : (arr_1 [6])))), (min(4294967281, (arr_1 [0]))))))));

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    arr_9 [20] [i_1] [20] |= var_1;
                    arr_10 [i_0] [i_0] [i_0] [i_2] = var_6;
                }
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    arr_13 [i_0] [0] [i_0] = 15;
                    var_13 = (~((65527 ? ((11 ? 16383 : var_4)) : var_7)));
                }
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    var_14 |= arr_2 [i_4] [i_4];
                    var_15 = (arr_12 [i_0]);
                    var_16 |= ((!((min((min(var_6, (arr_16 [i_4] [i_4]))), 23)))));
                }
                for (int i_5 = 1; i_5 < 24;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            {
                                arr_28 [i_7] [i_0] [23] [i_0] [i_0] = -536870911;
                                var_17 += ((~((((arr_2 [i_5] [8]) < (arr_2 [i_5] [6]))))));
                                arr_29 [i_0] = (max(2829104988996365213, 0));
                            }
                        }
                    }
                    var_18 = (((((var_2 - var_4) >> (((var_7 / 35183835217920) - 185279)))) | (~var_4)));
                    arr_30 [i_0] [i_1] [i_1] = 4294967284;
                    var_19 = 249;
                }
            }
        }
    }
    var_20 = ((((max((4283112043 - var_11), (((var_10 ? var_5 : var_8)))))) | 2829104988996365207));
    #pragma endscop
}
