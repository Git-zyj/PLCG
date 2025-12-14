/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14496
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_17 -= (((max(167, (arr_3 [i_0]))) > 4));
                    var_18 = ((!(-127 - 1)));
                }
            }
        }
    }
    var_19 = (~var_7);
    var_20 = (-32767 - 1);
    var_21 += -var_3;
    #pragma endscop
}
