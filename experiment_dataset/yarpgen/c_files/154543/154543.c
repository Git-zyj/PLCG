/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154543
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((min(((min(0, 1))), (50 & var_1))) <= ((((var_4 + var_5) - -var_5)))));
    var_19 = (min(var_6, (max(((max(var_16, var_4))), var_13))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_20 *= var_9;
                    var_21 = var_13;
                }
            }
        }
    }
    #pragma endscop
}
