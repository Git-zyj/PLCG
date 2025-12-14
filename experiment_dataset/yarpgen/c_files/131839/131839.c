/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131839
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_15 += (!var_3);
                                var_16 = (max(var_16, (((((var_9 ? var_3 : var_7)) * (((var_14 * 14298081766659648578) ? -var_6 : -var_11)))))));
                            }
                        }
                    }
                    var_17 = var_9;
                }
            }
        }
    }
    var_18 |= var_9;
    #pragma endscop
}
