/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104603
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] [i_1] = var_4;
                var_16 = ((((~((var_7 ? 4042247488 : var_1)))) == (((16179 ? -1 : -10000)))));
            }
        }
    }
    var_17 = (min(((((var_8 % 4053370284) ? var_9 : ((max(-1, -1)))))), (min((0 & 30701), -8))));
    var_18 = 8;
    #pragma endscop
}
