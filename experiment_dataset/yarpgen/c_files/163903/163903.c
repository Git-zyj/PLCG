/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163903
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= (max(((var_6 ? var_3 : (((-25165 ? 44056033 : 44056033))))), 14512));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_1] [i_0] = (-2060070630 == -1418356253230546670);
                    arr_10 [i_1] [i_1] = ((var_3 / var_2) ^ (((9007199254740992 ? var_3 : 2495564706))));
                }
            }
        }
    }
    var_15 = var_12;
    var_16 = var_1;
    var_17 = ((-var_13 ? (((((min(-31272, 67))) >= ((max(51, 25173)))))) : ((22574 << (var_7 - 23668)))));
    #pragma endscop
}
