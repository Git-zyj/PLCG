/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125196
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((-((1 ? 1 : -25026))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_10 [i_1] [i_2] [i_3] = (((~4) ? (arr_9 [9] [i_1 + 3] [1] [i_3]) : (((arr_2 [i_0 - 1]) ? var_8 : var_8))));
                            var_11 = ((-0 - (((arr_3 [i_1 + 2]) & var_2))));
                        }
                    }
                }
                var_12 = ((((min((arr_3 [i_0 - 1]), (arr_0 [i_1 + 3])))) ? var_9 : (var_6 - 1)));
            }
        }
    }
    var_13 &= (((~0) / -1));
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            {
                var_14 = ((arr_12 [i_4]) < (max((arr_13 [1]), ((var_1 ? (arr_15 [i_4] [i_5]) : (arr_12 [i_4]))))));
                arr_16 [i_4] [i_5] = var_6;
                var_15 ^= arr_14 [i_4] [i_4] [i_5];
            }
        }
    }
    #pragma endscop
}
