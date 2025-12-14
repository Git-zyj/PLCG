/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179488
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= (max((!var_7), (max((var_13 & var_7), var_14))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_4] [i_2] [i_0] [i_4] [i_2] = (~(((3556537650 ^ 7) ? ((1080 ? 288230376151711743 : 400208665447226730)) : (arr_8 [8] [8] [6]))));
                                var_18 = ((~((((arr_12 [i_3 + 2]) > var_8)))));
                                arr_14 [6] [i_3] [i_3] [i_0] [1] = (min((max((var_2 ^ var_13), ((-(arr_12 [i_1]))))), (min((!var_15), (arr_8 [i_0] [i_0 - 1] [i_0])))));
                                arr_15 [9] [i_1] [i_1] [3] [i_0] [12] [i_1] = (((~var_13) ? (((1361592295 ? 48993 : 1726849853))) : var_11));
                                arr_16 [7] [i_3 + 1] [i_0] [12] [i_0] [i_1] [i_0 + 1] = var_6;
                            }
                        }
                    }
                    var_19 = (max(var_19, ((min((~var_2), ((var_6 ? (((arr_9 [i_2] [i_2]) ? (arr_9 [i_0] [i_2]) : (arr_1 [i_2]))) : (((var_8 ? (arr_3 [0] [0]) : (arr_3 [i_0 - 1] [i_0 - 1])))))))))));
                    var_20 = (max(var_20, ((min((max(var_2, 10)), var_11)))));
                }
            }
        }
    }
    #pragma endscop
}
