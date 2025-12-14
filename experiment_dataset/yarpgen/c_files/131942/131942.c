/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131942
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, (((var_0 + (!var_2))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 10;i_2 += 1)
                {
                    var_11 = (((max(16256, (12 >= 0))) - (((((~(arr_3 [i_0] [i_2])))) ? (arr_1 [i_1 + 1] [i_1 + 1]) : (((arr_8 [i_2]) - var_9))))));
                    arr_9 [i_0] [6] [10] [i_2] = (min((((~var_4) ? ((701591650805312512 ? var_1 : 4503599627370495)) : (((min((arr_8 [i_1]), 106)))))), (((var_7 + (((arr_6 [0]) ? (arr_1 [i_0] [i_2]) : var_8)))))));
                }
                arr_10 [i_0] [3] [i_0] = (arr_0 [9]);

                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    var_12 = (1 ? 4503599627370495 : 0);
                    var_13 = (arr_7 [i_0] [3] [1]);
                    var_14 = min(((~(arr_12 [7] [i_1] [i_3] [i_3]))), 1885470229874180336);
                }
                arr_13 [i_1 + 1] [i_0] = (max((((((min(0, var_9))) ? -110 : var_7))), (((arr_2 [i_1 - 2] [i_1 - 3]) ? (arr_2 [i_1 + 1] [i_1 - 1]) : (arr_2 [i_1 - 3] [i_1 - 2])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 1;i_5 += 1)
        {
            {

                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    var_15 -= (((max(((max(-12501, 105))), (arr_17 [i_4]))) != (((max(var_3, (arr_22 [i_5 - 1] [i_5] [i_4] [i_4])))))));
                    arr_24 [i_6] [i_5] [i_6] [i_5 - 1] &= (max(((((!(arr_18 [i_6] [i_5] [i_6]))) ? (arr_23 [i_5 - 1] [i_4]) : (((min(var_1, var_1)))))), (arr_23 [i_5] [2])));
                    arr_25 [i_4] [i_4] = (~12376910786919012324);
                    var_16 = ((~(min(var_4, (arr_17 [i_5 - 1])))));
                }
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    var_17 = (max((arr_19 [i_4]), ((max(var_3, -1)))));
                    var_18 |= (((((arr_26 [i_5 - 1]) && (arr_17 [i_4]))) ? (((~((~(arr_16 [i_7])))))) : (((arr_27 [i_5 - 1] [i_5 - 1] [i_7]) ? (min(12376910786919012324, (arr_17 [i_5]))) : var_2))));
                }
                var_19 = (max(((min((arr_21 [i_5 - 1] [7] [i_4] [i_5]), (arr_21 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_4])))), (((arr_21 [i_5 - 1] [i_5] [i_5 - 1] [1]) ? (arr_21 [i_5 - 1] [i_5] [i_4] [i_4]) : (arr_21 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_4])))));
                arr_29 [12] &= (+(((arr_18 [8] [4] [i_5 - 1]) ? (arr_18 [4] [i_5] [i_5 - 1]) : (arr_18 [2] [i_5] [i_5 - 1]))));
            }
        }
    }
    #pragma endscop
}
