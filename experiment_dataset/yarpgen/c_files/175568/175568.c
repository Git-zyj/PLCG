/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175568
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(((max((max(var_15, var_0)), -0))), ((var_9 / (((-9223372036854775807 - 1) - var_10))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_17 ^= ((var_11 / ((-var_13 ? -1120156395 : (((arr_1 [i_0] [i_1]) ? 0 : 0))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_18 += ((((min(var_13, (arr_6 [i_0] [i_1] [i_3 + 1])))) ? (arr_8 [i_2] [i_3] [i_3] [i_2]) : var_4));
                            arr_11 [i_1] [i_1] [i_1] = (min(28429, var_11));
                            var_19 = var_14;
                        }
                    }
                }
            }
        }
    }
    var_20 = (((--28429) ? var_9 : var_7));
    var_21 = (max(var_21, var_0));
    #pragma endscop
}
