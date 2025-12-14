/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173298
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_15 = (max((1 - 14184), (max(var_6, (arr_6 [i_1 - 2] [i_1 - 1] [i_1 + 1])))));
                    arr_8 [i_1] [i_1] [14] [12] = 1566684185;
                    arr_9 [i_1 - 1] [i_1 + 1] [i_2] = (~(((var_5 ? 14 : 24862))));
                }
            }
        }
    }
    var_16 = (!-14203);
    #pragma endscop
}
