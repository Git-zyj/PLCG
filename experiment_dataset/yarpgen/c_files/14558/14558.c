/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14558
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_0] = (arr_1 [i_0]);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_0] [i_0] [15] = (((min(((2809052795 << (var_1 - 6364508903981203120))), ((min((arr_11 [15] [i_1] [i_1] [i_3]), var_2))))) - (arr_7 [i_0] [i_0] [i_0] [i_0])));
                                arr_15 [7] [i_4] [i_2] [i_0] [i_4] [i_2] [i_4] = (arr_4 [i_0]);
                                var_17 = ((((-((0 ? -25 : 1)))) / 19796));
                                arr_16 [i_0] [i_3] [18] |= (((arr_10 [i_0] [i_2] [i_4]) ? var_14 : (min(((var_1 ? (arr_1 [i_4]) : (arr_7 [i_0] [1] [i_0] [i_4]))), var_9))));
                                arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = (min((arr_8 [i_0] [i_0]), -var_13));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 ^= -1;
    var_19 = (min(var_4, (var_4 * var_7)));
    var_20 = var_2;
    var_21 = ((1 << ((((((var_8 << (var_6 - 936114256))) << (((min(var_16, var_3)) + 1110825509)))) - 38769))));
    #pragma endscop
}
