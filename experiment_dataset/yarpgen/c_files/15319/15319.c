/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15319
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_16 = var_4;
                    arr_8 [i_0 + 1] |= (max(var_3, var_2));
                }
            }
        }
    }
    var_17 *= (min((((((var_0 ? var_11 : var_8))) ? var_12 : (var_6 * var_14))), var_6));
    #pragma endscop
}
