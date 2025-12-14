/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16401
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((((min(var_5, 192))) ? var_4 : var_8))) ? var_1 : 16139292616831294896));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_16 = (min(var_16, var_0));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_2] [i_2] [i_4] [7] = (var_14 ? ((var_0 ? var_10 : var_8)) : (((arr_12 [11] [i_1] [i_1] [i_1] [i_1]) ? var_9 : (arr_11 [i_4]))));
                                var_17 *= ((((max(10872, 1234044148650583335))) | (max((((arr_2 [9]) + var_5)), var_1))));
                                var_18 |= ((+(max((arr_3 [i_0] [i_0]), (((arr_2 [i_1]) ? var_0 : (arr_12 [i_4] [i_1] [7] [i_4] [i_1])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = (max(var_19, (((var_13 << (var_12 - 11897172733867710640))))));
    #pragma endscop
}
