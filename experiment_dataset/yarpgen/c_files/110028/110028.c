/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110028
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = max((((~(var_1 / var_3)))), -7469714428962620489);
    var_15 = var_12;
    var_16 = -26577;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_17 = (min(var_17, (((48317 ? 18 : 10153)))));
                                var_18 = ((~((((((arr_3 [19] [i_2] [i_1]) / var_12)) >= ((var_9 ? (arr_2 [i_0]) : -20791)))))));
                            }
                        }
                    }
                    var_19 = ((arr_4 [i_0 + 1] [i_0 + 1] [i_0 + 1]) / (((((arr_11 [i_0] [i_2] [i_1] [5] [i_2]) == ((var_6 ? 1 : 60761)))))));
                    var_20 *= min((((arr_9 [i_0 + 1] [i_0 + 1] [6] [i_0 + 1]) & (arr_4 [i_0] [i_2] [i_0 + 2]))), ((((var_9 ? -20791 : -20792)))));
                }
            }
        }
    }
    #pragma endscop
}
