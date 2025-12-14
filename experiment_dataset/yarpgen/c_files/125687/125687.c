/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125687
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_6;
    var_17 -= (((max(var_9, (((9998111240569413456 ? 72501312 : var_10))))) - -58));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_13 [i_3] [i_1] [i_1] [i_1] [i_0] = ((((min(36, (arr_7 [i_0] [i_0 + 1] [i_0])))) ? (max(var_0, (max(-8698236026065664872, (arr_10 [i_1]))))) : (arr_3 [i_0 - 1] [i_0 + 2] [i_1 + 1])));
                            arr_14 [i_0 + 1] [i_1] [i_2] [i_3] [i_1] = ((~((((((var_3 ? (arr_7 [i_0] [4] [3]) : (arr_0 [i_2])))) || -18)))));
                            var_18 += (((arr_0 [i_1 - 3]) && ((((arr_9 [i_0 + 2] [i_0] [i_0] [i_3]) ? (max((arr_11 [i_3] [i_2] [4] [4]), (arr_5 [i_0] [i_0] [i_3]))) : (var_0 - var_13))))));
                        }
                    }
                }
                arr_15 [i_1] = (max((((((arr_3 [i_1 - 2] [i_1] [i_0]) || (arr_4 [i_0] [i_1]))) ? (arr_8 [i_1] [i_1 - 1]) : (!72501312))), (((!(((86 ? 0 : (arr_11 [0] [i_0] [2] [i_1])))))))));
                var_19 = ((-((max((arr_2 [i_1] [i_1 - 2] [i_0]), (arr_1 [i_0] [i_1]))))));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_20 -= ((((((min((arr_6 [i_0] [i_1] [i_4] [i_5]), 14149))) / 13144646990217127903)) <= ((-((16749940270766476377 ? 57537 : var_12))))));
                                var_21 = ((((min((arr_19 [i_0 + 1] [i_0 - 1] [i_1 - 2] [i_1 - 2]), ((var_15 ? (-127 - 1) : (arr_18 [i_1] [i_5] [i_1] [i_1])))))) > (max(((((arr_3 [4] [4] [4]) ? (arr_22 [i_6] [i_5] [i_4] [i_1] [i_0] [i_0 - 1]) : (arr_7 [7] [i_1] [i_4])))), (min(var_15, (arr_11 [i_0] [i_5] [i_4] [i_5])))))));
                                arr_24 [i_5] [i_5] [i_1] [i_0] [i_0] = 3256396868153115437;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
