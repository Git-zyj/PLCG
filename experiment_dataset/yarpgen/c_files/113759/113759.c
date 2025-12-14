/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113759
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, ((((~-var_14) ? var_4 : 6685751375268195231)))));
    var_17 += var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_6 [16] [i_1] [i_0] = (((arr_4 [i_1] [i_1]) == (((((~(arr_3 [i_1] [i_0])))) ? (arr_2 [i_1]) : (arr_4 [i_1] [i_0])))));
                var_18 = (min(var_18, (((((-(arr_1 [i_1]))) <= (~-17))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_19 = ((((((((2383933381 ? 254 : 34))) ? ((-(arr_9 [i_0] [i_0] [i_0]))) : (arr_12 [i_1] [i_1] [i_3] [7])))) ? (((arr_12 [i_0] [i_0] [i_0] [i_0]) - var_15)) : ((((min((arr_7 [i_0]), var_5))) ? var_10 : 1))));
                                var_20 |= (((arr_1 [i_1]) ? ((((arr_11 [8] [8] [i_2] [i_2]) - (arr_11 [i_3] [i_3] [i_3] [15])))) : (((arr_15 [i_3]) ? (arr_11 [9] [i_2] [i_3] [i_4]) : var_12))));
                            }
                        }
                    }
                }
                arr_16 [i_1] = (((((var_7 ? (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_10 [i_0] [i_0] [i_1] [i_0] [i_1])))) ? (min((arr_10 [i_0] [i_1] [i_1] [23] [23]), (arr_10 [i_0] [i_0] [i_1] [i_1] [12]))) : (((arr_10 [i_0] [i_0] [i_0] [i_1] [i_1]) ? (arr_10 [i_0] [i_0] [i_0] [i_1] [i_1]) : (arr_10 [i_0] [i_0] [i_0] [i_1] [i_1])))));
            }
        }
    }
    #pragma endscop
}
