/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155525
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((min(var_7, var_17))));
    var_19 += var_15;
    var_20 ^= 31878;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_14 [i_0 + 2] [i_0 + 2] [i_0 + 1] [15] [i_0 + 1] [i_0] [i_0 + 2] = var_3;
                                arr_15 [i_0] [3] [10] [i_0] [i_4] = ((7933527474193868877 ? var_17 : ((((arr_2 [i_0]) ? ((var_17 ? (arr_11 [0] [i_2] [i_1] [i_0 - 2]) : 0)) : (var_14 < var_2))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            {
                                var_21 ^= -2412024121875439970;
                                var_22 = (min((min(var_9, var_14)), (arr_0 [i_0])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
