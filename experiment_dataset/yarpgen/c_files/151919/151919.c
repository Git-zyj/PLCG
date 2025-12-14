/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151919
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_2;

    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] = ((((-1 < ((~(arr_0 [i_0]))))) ? (((+(((arr_0 [i_0]) ? var_11 : var_13))))) : (min((arr_0 [i_0 - 2]), ((var_1 ? 970044118 : 38229))))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    var_18 = ((((var_15 || (arr_5 [i_1 + 1] [i_1] [i_0 - 3]))) ? (((arr_5 [i_1 - 2] [i_0] [i_0 + 1]) ? (arr_5 [i_1 - 1] [i_0 - 3] [i_0 - 3]) : (arr_5 [i_1 - 2] [i_1 - 2] [i_0 - 4]))) : (arr_5 [i_1 - 3] [i_1] [i_0 - 3])));
                    arr_10 [i_0 - 2] [i_0] [i_2] = ((((min((arr_1 [i_2 + 2]), var_14))) > ((((arr_8 [i_2] [i_2 + 1] [i_1 + 1]) || (arr_1 [i_2 - 1]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] = (((((arr_15 [i_1 - 1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) ^ (arr_8 [i_1 + 1] [i_2 + 1] [i_2]))) <= (((arr_15 [i_1 + 1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) / (arr_8 [i_1 - 3] [i_2 + 3] [i_2])))));
                                var_19 = (max(((var_5 ? (arr_1 [i_1 - 3]) : (arr_7 [i_0 - 4] [i_2 + 3] [i_3]))), ((((((arr_2 [i_0] [i_1]) ? var_0 : var_4))) ? var_1 : ((var_12 ? 27886 : var_6))))));
                                var_20 = (((((min(9920, 164))) ? var_16 : (~var_6))));
                            }
                        }
                    }
                }
            }
        }
        var_21 = (min(var_21, (~255)));
    }
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        arr_20 [i_5] [i_5] = ((~((var_9 ? (((((arr_19 [i_5]) < var_4)))) : ((var_16 ? var_7 : var_16))))));
        arr_21 [i_5] = (((((((((arr_17 [i_5]) / (arr_17 [i_5])))) ? ((~(arr_18 [i_5]))) : (arr_19 [i_5])))) ? (((((var_11 ? var_6 : (arr_19 [i_5]))) > (min(var_1, (arr_19 [i_5])))))) : ((((arr_19 [i_5]) > var_14)))));
    }
    var_22 |= var_14;
    var_23 = (((max(var_12, (((9601508110978473497 ? var_10 : var_11))))) > (max(var_1, (~var_5)))));
    #pragma endscop
}
