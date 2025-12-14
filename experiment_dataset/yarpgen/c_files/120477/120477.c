/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120477
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_17;
    var_20 -= var_6;
    var_21 = 62887;
    var_22 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = 11889;
                arr_7 [i_1] [i_1] [i_1] = 13360;
            }
        }
    }
    #pragma endscop
}
