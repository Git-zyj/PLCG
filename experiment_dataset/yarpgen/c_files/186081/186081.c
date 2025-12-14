/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186081
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= (((((max(32, var_14))) ? (max(0, var_11)) : var_12)) - var_4);
    var_16 = var_12;
    var_17 = (max(2128370166, ((((((15366900574243390796 ? var_7 : var_10))) ? (~var_11) : var_7)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_18 += (((min(15366900574243390796, ((max(var_11, 4294967295))))) <= (((((arr_12 [i_2] [i_0]) == (arr_4 [i_0] [i_2] [i_4 - 1])))))));
                                arr_13 [i_0] [i_2] [i_4] = 6283781531628029673;
                                var_19 = (max(var_19, ((((max((arr_11 [i_1] [i_1] [8] [i_4 + 1] [1] [i_4 + 1] [i_2]), (arr_11 [2] [8] [i_4] [6] [0] [i_4 + 1] [i_0]))) >= (((arr_11 [i_1] [0] [i_3] [6] [i_4] [i_4 - 1] [i_2]) ? (arr_11 [i_3] [i_3] [i_4 - 1] [i_4 - 1] [i_4] [i_4 - 1] [i_0]) : var_12)))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        {

                            for (int i_7 = 0; i_7 < 12;i_7 += 1)
                            {
                                arr_21 [i_7] [i_6] [i_5] [i_1] [i_0] [i_0] |= (~var_10);
                                arr_22 [i_0] [i_0] [6] [i_0] [i_0] = ((((((arr_3 [i_1]) ? (arr_3 [i_6]) : (arr_1 [i_0])))) != (max((arr_17 [i_0] [i_5] [i_6] [i_7]), (arr_16 [i_0] [2] [i_6] [i_7])))));
                                var_20 = (((((max((((var_11 >= (arr_20 [i_0] [5] [5] [i_7] [1] [i_7] [i_6])))), (arr_1 [i_7]))))) + (max((max((arr_11 [i_0] [i_1] [10] [i_6] [i_7] [i_0] [i_0]), var_14)), -var_13))));
                                arr_23 [i_0] [i_1] [i_0] [i_6] = (((((((-1210879941 * (arr_15 [2])))) ? ((var_11 * (arr_11 [i_6] [i_6] [i_5] [i_5] [i_1] [i_1] [i_6]))) : (arr_7 [i_0] [i_1] [i_0])))) ? ((((((arr_6 [i_0] [i_0] [4]) / var_14)) * (((876534941 ? 0 : -1210879941)))))) : (var_12 / 876534931));
                            }
                            for (int i_8 = 3; i_8 < 11;i_8 += 1)
                            {
                                var_21 = ((((((arr_19 [i_8 - 1] [i_8] [i_8] [i_8 - 2] [i_6]) + (arr_18 [i_8 - 1] [i_8] [i_8 - 1] [i_8 - 1] [i_8])))) ? ((-22 ? (arr_19 [5] [i_6] [i_8] [i_8 + 1] [i_6]) : (arr_19 [i_8] [i_8] [i_8] [i_8 - 3] [i_8 - 3]))) : ((-(arr_19 [i_8 - 2] [i_8] [i_8] [i_8 - 3] [i_6])))));
                                arr_26 [i_6] = ((((((max((arr_4 [i_6] [i_1] [i_5]), -1))) != ((~(arr_16 [i_0] [2] [2] [i_6]))))) ? (((arr_25 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 - 2] [i_8 - 1]) ? (arr_25 [i_8 + 1] [i_8] [9] [i_8 - 1] [i_8 + 1]) : (arr_25 [i_8 - 1] [i_8 - 1] [i_8] [i_8 - 1] [i_8 - 2]))) : var_8));
                            }
                            arr_27 [1] [i_1] [i_6] [1] [i_5] [i_0] = (arr_6 [i_0] [i_5] [i_6]);
                        }
                    }
                }
            }
        }
    }
    var_22 |= (max(var_2, var_9));
    #pragma endscop
}
