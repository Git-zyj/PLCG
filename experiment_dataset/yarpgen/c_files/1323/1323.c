/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1323
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_19 = (min(var_19, (((~((var_8 ^ ((var_7 ? 3785097378848874127 : var_13)))))))));
                            var_20 = ((min(var_10, -3785097378848874127)));
                            var_21 = ((-3785097378848874128 ? (((-468048573 ? var_3 : ((1 ? var_12 : -11887))))) : ((3849223066 ? var_17 : (((0 ? 819 : var_15)))))));
                        }
                    }
                }
                var_22 = (max(1, (((0 ? 2344753629068748366 : var_9)))));
            }
        }
    }
    var_23 = (((((~var_17) ? (1 / var_0) : ((var_13 ? var_2 : -7053317179105235725)))) | 1));
    #pragma endscop
}
