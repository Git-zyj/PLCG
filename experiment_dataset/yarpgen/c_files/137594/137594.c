/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137594
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            arr_10 [i_2] = ((-1541358218 / ((var_5 ? (min(var_10, 1)) : (1 || var_5)))));
                            arr_11 [i_0] [i_1] [2] [i_2] [6] = (((~var_0) + (var_1 % 1)));
                        }
                    }
                }
                var_13 *= (min((max((arr_7 [i_0] [i_1]), (arr_7 [i_0] [i_1 - 1]))), ((var_7 ? (arr_7 [i_0] [i_1 - 1]) : (arr_7 [i_0] [i_1])))));
            }
        }
    }
    var_14 = ((var_1 ? var_8 : 1776526523));

    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_15 = (max(var_15, (max(((min((arr_13 [i_4]), ((((arr_12 [i_4]) && (arr_12 [i_4]))))))), -var_5))));
        var_16 = var_12;
    }
    #pragma endscop
}
