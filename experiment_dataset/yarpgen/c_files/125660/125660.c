/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125660
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 14;i_2 += 1)
                {
                    var_21 -= ((((max(15, 532676608))) ? var_15 : (~3792)));
                    var_22 += ((~(-127 - 1)));
                }
                var_23 = var_5;
                var_24 = (arr_4 [i_0] [i_0]);
            }
        }
    }
    #pragma endscop
}
