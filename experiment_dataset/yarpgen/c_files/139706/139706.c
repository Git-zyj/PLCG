/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139706
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 22;i_2 += 1)
            {
                {
                    var_17 = ((-((((max(var_11, 2838))) ? ((var_0 ? 32762 : 32758)) : (var_3 / var_10)))));
                    var_18 = -var_9;
                }
            }
        }
    }
    var_19 += ((max((((22309 ? 908471701 : 32762)), (min(var_11, var_13))))));
    var_20 *= (max((((var_5 & var_4) - -32762)), var_0));
    #pragma endscop
}
