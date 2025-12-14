/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179453
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_10 += (((arr_11 [i_4]) ? (((-117 || var_6) ? ((-(arr_13 [18] [18] [i_4] [18] [i_2 - 1]))) : (min((arr_11 [i_4]), (arr_12 [i_1]))))) : (((((var_3 ? (arr_8 [i_0 - 1] [i_4] [20]) : (arr_11 [i_4])))) ? (arr_5 [i_4] [i_1]) : ((((arr_10 [i_1] [i_4] [i_4]) / 4787482808090097582)))))));
                                arr_15 [i_0] [i_1] [i_1] = ((var_7 ^ (((arr_5 [i_0] [i_0]) ? 4787482808090097574 : (((2016 ? var_0 : (arr_9 [i_0 - 1] [i_1] [i_0 - 1] [i_0]))))))));
                                arr_16 [i_0] [i_0] [i_3] = (((max(5, (arr_2 [i_0]))) / ((max(var_3, var_4)))));
                                var_11 = ((((((min(0, -1999))) && (((-13810 ? var_5 : 0))))) ? 4787482808090097582 : ((((arr_3 [i_0] [i_0] [i_0]) ? 32376 : (max(var_3, 1)))))));
                                arr_17 [i_4] [i_1] [i_1] [i_2] [2] [i_3] [i_4] &= ((!((((((var_0 ? (arr_0 [i_4]) : (arr_12 [i_2])))) ? (((arr_1 [i_2 - 2] [i_4]) ? var_5 : 241)) : var_7)))));
                            }
                        }
                    }
                    arr_18 [i_0] [i_1] [i_2] = ((max(33, (((!(arr_7 [16] [17] [9] [i_2])))))));
                    arr_19 [i_0] = ((-1177727391 * ((1177727372 ? ((((-127 - 1) >= var_5))) : var_7))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            {
                var_12 = (((arr_14 [i_6] [i_6] [i_6] [i_6] [i_5] [i_6]) ? var_6 : (((!(arr_22 [i_6]))))));
                var_13 *= var_5;
            }
        }
    }
    #pragma endscop
}
