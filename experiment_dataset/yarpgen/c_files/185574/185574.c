/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185574
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_16 = (max((min((((arr_7 [i_0] [i_1]) ? 30384649 : -78)), 4264582645)), (arr_7 [i_1 - 2] [i_1 - 1])));
                    var_17 |= 4264582669;
                }
            }
        }
    }
    var_18 = (min((((((max(2147483647, var_6))) ? ((3175537086 ? var_9 : -14590)) : 8))), (max(555757349999019165, var_6))));
    #pragma endscop
}
