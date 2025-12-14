/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165492
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_9, var_16));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                var_19 = (min(var_19, 1233865665));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_13 [i_1] [i_3] [i_2] [i_1] [i_1] = (arr_4 [i_1 + 2] [i_1 + 3]);
                                var_20 = ((var_1 ? (arr_4 [i_1] [9]) : (((((min((arr_4 [i_0] [i_0]), var_6))) ? ((-4194304 ? (arr_0 [i_0 - 2]) : (arr_3 [i_0] [i_0] [i_3]))) : (arr_3 [i_3 - 1] [i_3 - 2] [2]))))));
                                var_21 = ((((max((arr_1 [i_1]), (((477876728 >= (arr_2 [i_0]))))))) <= (((214 != (((arr_6 [i_0]) % 140737454800896)))))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            {
                                arr_22 [i_1] [i_1] [i_5] [4] [4] [i_7] [i_7] = (arr_2 [i_6]);
                                var_22 = (min(var_22, (arr_2 [i_0])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 += -2147483645;
    #pragma endscop
}
