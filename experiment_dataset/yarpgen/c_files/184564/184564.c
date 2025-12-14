/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184564
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_15 = (max(var_15, ((((-910095634 ^ 255) & var_4)))));
                                var_16 = ((var_0 / ((max((arr_0 [i_0] [i_2]), (arr_6 [i_0]))))));
                                arr_13 [i_0] [i_0] = ((-((min(var_6, 1)))));
                            }
                        }
                    }
                    var_17 = (max(var_9, ((-(max((arr_1 [i_0] [i_1 + 2]), 1))))));
                }
            }
        }
    }
    #pragma endscop
}
