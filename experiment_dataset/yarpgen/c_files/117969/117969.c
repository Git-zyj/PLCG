/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117969
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((max((!var_1), (!-6833)))) <= ((~(var_6 - var_8)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_18 = (((((var_3 ? (arr_4 [i_0] [5]) : (arr_4 [i_0] [i_1])))) ? ((((903044720 < (arr_2 [i_1]))))) : 13685532092191424530));
                arr_6 [14] [1] = var_16;
                arr_7 [i_0] = (((arr_0 [i_0]) ? ((~(arr_5 [i_0] [i_0]))) : (arr_0 [i_0])));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] [i_0] [i_0] [1] [i_0] = (((!var_6) | (((arr_2 [11]) >> (11487936906599535108 - 11487936906599535106)))));
                                arr_18 [i_4] = -739930649;
                                var_19 = (max(var_19, (arr_8 [i_1] [i_1])));
                                arr_19 [6] [7] [i_2] [i_2] [i_2] = (min((((~((~(arr_13 [17])))))), ((((max(8915012608047010411, 7056733870860278543))) ? (((arr_10 [i_4] [i_1] [3] [i_3]) & 690796094316474191)) : var_14))));
                                arr_20 [i_0] [0] [i_1] [5] [16] [2] = (min((arr_12 [i_0] [i_0] [11] [i_4]), ((((var_15 ? -8581426111359136061 : (arr_9 [6] [i_0]))) / (((arr_9 [i_0] [i_3]) ? (arr_1 [3]) : (arr_10 [i_0] [9] [i_3 - 1] [i_4])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = 16082546;
    #pragma endscop
}
