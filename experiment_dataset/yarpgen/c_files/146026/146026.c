/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146026
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_12 = (((((arr_1 [i_0 - 1]) != (max((arr_4 [i_0] [i_0]), var_3)))) ? (48 | 11513796882372877533) : (((((arr_6 [i_0 + 2] [i_0 - 1] [i_0 + 2]) > var_6))))));
                                arr_13 [i_0] [i_1 - 1] [5] [i_3] [i_4] [i_4] [1] = (max((arr_4 [i_0 + 2] [i_1]), 199));
                                var_13 += (arr_6 [i_4] [i_1 - 1] [i_0]);
                            }
                        }
                    }
                    var_14 *= arr_1 [11];
                }
            }
        }
    }
    var_15 = var_7;
    var_16 = (max(var_16, ((max(9231527597574995710, 141)))));
    var_17 = (min(var_17, (((((min((~var_2), ((var_5 ? var_10 : 8))))) / ((var_1 ? 125 : 12455406318152501524)))))));
    var_18 = (max(171, ((min(var_4, (max(var_4, 94)))))));
    #pragma endscop
}
