/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15499
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_12;
    var_19 -= (-(max(7361496237504550894, var_0)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_20 = var_16;
                    arr_8 [i_1] [i_2] [i_1] [i_2] = (min(var_8, (min(11085247836205000702, 1))));
                }
            }
        }
    }
    #pragma endscop
}
