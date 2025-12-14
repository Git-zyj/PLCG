/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162906
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_0] [i_1] [i_2] [7] = ((((max(1, 1))) | (!-38)));

                            for (int i_4 = 0; i_4 < 1;i_4 += 1)
                            {
                                var_14 = (max(138, (arr_12 [i_0] [1] [i_2] [i_3] [i_4])));
                                var_15 = 35;
                            }
                            for (int i_5 = 4; i_5 < 14;i_5 += 1) /* same iter space */
                            {
                                var_16 = (max(((26 ? (arr_9 [i_0] [i_1] [i_2] [0] [1] [i_5]) : (arr_7 [i_0] [i_1] [i_2] [i_3]))), (arr_13 [i_2] [i_2] [5] [i_2] [i_2])));
                                var_17 = (max(((50042 & (arr_8 [i_2 + 1] [i_2 - 1] [i_5] [i_5]))), (arr_8 [i_2 + 1] [5] [i_3] [5])));
                                arr_17 [i_0] [i_1] [4] [i_2] [4] [i_5] [i_1] = (((arr_3 [i_3] [i_3]) ? (max((arr_6 [i_0] [i_0]), (arr_5 [0] [i_1] [i_3] [i_5]))) : (((arr_5 [i_3] [i_0] [i_1] [i_3]) ? (arr_6 [i_2 + 1] [1]) : (arr_3 [i_3] [i_1])))));
                            }
                            for (int i_6 = 4; i_6 < 14;i_6 += 1) /* same iter space */
                            {
                                arr_21 [i_6] = (arr_0 [i_6]);
                                var_18 = (max((arr_4 [7] [i_1]), (max((arr_4 [10] [i_1]), (arr_4 [9] [i_6 - 2])))));
                            }
                        }
                    }
                }
                var_19 *= (arr_15 [14] [10] [i_0] [i_0] [i_0]);
                var_20 = ((+(((arr_0 [i_0]) ? (arr_13 [11] [11] [i_0] [11] [i_0]) : (!239)))));
            }
        }
    }
    var_21 = (~4787104539528571341);
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 16;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 16;i_8 += 1)
        {
            {
                var_22 -= (arr_0 [i_7]);
                arr_27 [i_8] = ((((arr_5 [12] [i_7] [i_7] [i_7]) == (max((arr_22 [i_8]), 1966092637305244921)))));
                var_23 -= (~-238);
            }
        }
    }
    #pragma endscop
}
