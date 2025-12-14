/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139060
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_20 |= ((132120576 ? 2788099393 : 1506867893));
                    var_21 = (min(((((arr_6 [i_0] [i_0 + 2] [i_0 - 2] [i_0 - 2]) ? var_9 : (arr_7 [i_0 + 2] [i_0 - 1] [i_0 - 2])))), (arr_6 [4] [i_0 - 1] [i_0] [i_0 - 3])));
                }
            }
        }
    }
    var_22 = var_0;
    var_23 = (min(2788099417, 1659180629));
    #pragma endscop
}
