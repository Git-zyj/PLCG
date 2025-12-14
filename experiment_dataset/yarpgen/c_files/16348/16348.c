/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16348
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_1;
    var_19 = ((var_6 ? var_15 : var_16));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    var_20 = (arr_7 [i_0 + 1] [i_0 + 1] [i_2 + 2]);
                    var_21 = var_1;
                }
            }
        }
    }
    var_22 = var_11;
    #pragma endscop
}
