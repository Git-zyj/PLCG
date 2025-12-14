/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125008
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    var_14 *= -var_8;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_15 = (max(505, ((max((arr_2 [i_4]), (arr_9 [i_0] [1]))))));
                                arr_13 [i_0] [i_3] [i_2] [i_3] [i_3] [i_3] [i_4] = (((max(((max(var_11, 3840))), ((var_4 ? (arr_10 [i_0] [i_0] [2] [i_0]) : (arr_6 [i_1] [i_1] [i_2] [i_3]))))) >= (((var_1 ? (arr_1 [i_0 - 2] [i_0 + 2]) : (arr_1 [i_0 + 2] [i_0 + 2]))))));
                                var_16 *= (((((arr_9 [i_0] [i_0]) | var_0)) >= (((((-9223372036854775807 - 1) >= (arr_9 [i_0] [i_0]))) ? ((12558021668484226576 ? (arr_4 [i_2] [i_1]) : var_9)) : ((0 ? var_9 : var_11))))));
                                var_17 = (min(var_17, (max(3018306312227078104, (min(var_12, 4668773609522955302))))));
                                arr_14 [i_3] [i_1] [i_1] [i_1] = var_1;
                            }
                        }
                    }
                    var_18 |= (((min(-3840, (arr_9 [i_0 - 2] [i_1]))) >> (((arr_11 [i_0 + 1] [i_0] [i_0 + 1] [i_0]) - 15673))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 13;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 12;i_6 += 1)
        {
            for (int i_7 = 4; i_7 < 12;i_7 += 1)
            {
                {
                    arr_23 [i_7] [i_7] [i_5] = 7575372807076985755;
                    var_19 |= (((max(68715282432, (arr_10 [i_7 - 4] [i_6 - 2] [i_6 - 1] [i_5 - 1]))) ^ (arr_10 [i_7 - 3] [i_6 - 1] [i_6 + 2] [i_5 - 1])));
                    var_20 = (arr_7 [i_5]);
                }
            }
        }
    }
    #pragma endscop
}
