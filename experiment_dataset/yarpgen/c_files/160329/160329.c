/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160329
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = -var_8;
    var_12 ^= var_5;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_7 [i_2] &= 0;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_13 = (((arr_9 [i_0 + 3] [i_2] [i_1 + 3] [i_0 + 1]) ? (min(22, -2)) : (2961089683323636966 || 369360814)));
                                var_14 = (((-5 + 9223372036854775807) >> (var_9 - 60)));
                                var_15 = 15485654390385914646;
                                arr_13 [i_0] = (arr_2 [i_0] [i_0 - 1]);
                            }
                        }
                    }
                    var_16 = (max(var_16, 31598));
                    arr_14 [i_2] &= var_4;
                    var_17 = (~(((~74) ? ((15485654390385914650 ? (arr_5 [i_0] [i_0] [i_2] [i_0]) : 3957025904800500748)) : (arr_5 [i_1 + 4] [i_0] [i_0] [i_0 + 2]))));
                }
            }
        }
    }
    #pragma endscop
}
