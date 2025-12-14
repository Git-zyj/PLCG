/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11960
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(289433721, (max(((var_0 ? var_3 : var_0)), var_5))));
    var_13 = (max((var_4 != var_4), (min(var_0, var_3))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    var_14 = max(-var_0, (((+(min((arr_1 [i_1]), var_3))))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_13 [i_3] [1] [i_2] [i_3 + 1] [1] = var_1;
                                var_15 = (1 ? 18060604568567071695 : 289433723);
                            }
                        }
                    }
                }
                var_16 = (((~4005533594) & (min(var_2, ((max(var_1, -1)))))));
            }
        }
    }
    #pragma endscop
}
