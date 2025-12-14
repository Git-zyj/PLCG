/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141814
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_17 = (((~(~var_7))));
                            var_18 = (min(var_18, (!-9)));
                            var_19 ^= -329754498;
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    var_20 = (((((var_6 ? 20094 : 4294967292))) ? var_9 : (!var_0)));
                    arr_13 [i_0] [i_1] [i_1] = (((((~1108307720798208) | (~var_2))) * var_1));
                }
                var_21 -= ((~((var_7 ? 1 : 8589934591))));
                var_22 = (~var_6);
                var_23 += -5126809323894431169;
            }
        }
    }
    var_24 = (((!var_6) ? 1 : 84));
    #pragma endscop
}
