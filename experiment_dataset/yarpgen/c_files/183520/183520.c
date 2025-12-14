/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183520
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, (((-((var_7 + (-115 / 112))))))));
    var_11 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_12 += -344480495;
                var_13 = arr_2 [i_0] [9] [9];
            }
        }
    }
    var_14 *= var_6;
    #pragma endscop
}
