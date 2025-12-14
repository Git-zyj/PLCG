/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137713
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= var_4;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_11 = (max(var_11, (((var_5 ? ((1750914610 ? (arr_1 [0]) : (arr_6 [12] [i_1] [i_1]))) : (((arr_6 [6] [i_2] [i_4]) + 286246614)))))));
                                var_12 = (min(var_12, (((-60 + (var_2 < -122))))));
                            }
                        }
                    }

                    for (int i_5 = 1; i_5 < 19;i_5 += 1)
                    {
                        var_13 = (max(var_13, ((((arr_1 [10]) ? ((var_6 ? 33 : 4294967295)) : (arr_0 [i_0 + 2]))))));
                        var_14 = (max(var_14, (((122 ? (arr_7 [i_0 - 1] [i_1] [i_5 - 1] [i_0 - 2] [i_1] [i_1]) : (arr_5 [i_0] [10] [i_5 + 1] [i_0 - 1]))))));
                    }
                    var_15 += (((arr_10 [i_0 - 1] [i_0 - 1] [20] [i_0 - 2] [i_0 + 2] [i_0 - 1]) * (((arr_7 [i_0 + 2] [2] [i_0] [i_0] [i_0] [i_0]) ? var_4 : (arr_2 [i_2])))));
                    var_16 += (arr_5 [i_0] [18] [18] [i_0]);

                    for (int i_6 = 2; i_6 < 20;i_6 += 1)
                    {
                        var_17 = (min(var_17, (((-var_0 ? (arr_3 [i_1]) : (var_1 <= 89))))));
                        var_18 = (min(var_18, (((-(arr_8 [i_6] [i_6 + 1] [i_6] [i_0] [i_0 - 1] [i_0]))))));
                    }
                }
                var_19 = (max(var_19, (((((((arr_1 [0]) / ((122 ? (arr_12 [i_0] [i_0] [i_0 - 1] [i_1] [6]) : (arr_1 [18])))))) ? (((var_1 != ((min(var_4, 107)))))) : ((((((arr_3 [i_0]) < var_8))) << (min(var_3, var_8)))))))));
            }
        }
    }
    #pragma endscop
}
