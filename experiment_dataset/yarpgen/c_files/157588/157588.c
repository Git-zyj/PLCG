/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157588
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((((min(56, 60))) ? ((max(var_7, var_1))) : var_7))) ? var_1 : (min(((255 ? 23 : 200)), 31))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_7 [i_0] [8] [21] = ((!((min(((min(var_3, 199))), (0 | 239))))));
                    var_12 = (min(var_12, (((-(arr_2 [i_1 - 1] [i_2]))))));
                }
            }
        }
    }
    #pragma endscop
}
