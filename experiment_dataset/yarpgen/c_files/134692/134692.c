/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134692
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_1] = (((((arr_4 [i_0] [i_0] [i_1]) ? (arr_4 [i_0] [i_0] [i_1]) : (arr_4 [i_0] [i_0] [i_1]))) / ((-2048 ? var_2 : (arr_4 [i_1] [i_0] [i_0])))));
                var_19 = (max(var_19, 67108860));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 23;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_20 = min((~2092046240), ((1033880118 ? 2035 : -2050)));
                                var_21 -= ((((-105389573 ? (((2802706009007436614 ? (arr_16 [i_6] [i_3] [i_2]) : -2035))) : (~var_10)))) ? (min((min(var_14, 9891)), (arr_10 [i_3 + 2] [i_5 + 1] [i_6 + 1]))) : (((var_14 > var_0) ? (max((arr_14 [i_2] [i_2] [23] [i_2]), (arr_7 [i_6 + 1]))) : ((min((arr_6 [i_5 - 2] [i_4 + 1]), var_2))))));
                            }
                        }
                    }
                    var_22 = (arr_6 [i_2] [i_4]);
                }
            }
        }
    }
    var_23 = var_15;
    #pragma endscop
}
