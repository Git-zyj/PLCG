/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177799
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            {
                var_16 = ((+((var_14 >> (((arr_3 [i_0 + 1] [i_0 + 1]) - 6313924540403429678))))));
                var_17 = (((min((arr_7 [i_1]), (min(var_10, 0))))) > (min((12 || var_6), (min(var_8, 145)))));
                var_18 = (max(var_18, (((!((max(3261256321, var_0))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 14;i_3 += 1)
        {
            {
                arr_12 [i_2] [i_2 - 2] [13] = (((arr_11 [i_3 + 3] [i_2 - 2]) ? (((arr_11 [i_3 + 1] [i_2 + 2]) ? (arr_11 [i_3 - 1] [i_2 + 2]) : var_9)) : -2160799345));
                /* LoopNest 3 */
                for (int i_4 = 2; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_19 = (((arr_17 [i_2 + 2] [i_3] [i_4] [i_5] [i_6]) / ((~(~var_9)))));
                                arr_19 [15] [i_4] [i_4] [i_5] [i_6] = (((-((min(var_11, var_7))))) != (arr_8 [i_2 - 1] [i_2 + 3]));
                                var_20 = (((!var_9) + (((arr_10 [i_6] [i_2]) ? var_3 : var_14))));
                            }
                        }
                    }
                }
                var_21 = ((~(arr_11 [12] [i_3 + 1])));
                arr_20 [i_2 + 2] [i_3] &= ((arr_10 [i_2 - 2] [i_2 - 1]) ? (arr_10 [i_2 - 2] [i_2 - 1]) : (arr_10 [i_2 - 2] [i_2 - 1]));
                var_22 = var_4;
            }
        }
    }
    #pragma endscop
}
