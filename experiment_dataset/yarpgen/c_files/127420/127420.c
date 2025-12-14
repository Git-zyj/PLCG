/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127420
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((max(((var_4 ? var_1 : var_11)), (~33))) | ((min(1, var_3)))));
    var_16 &= (min(64, 0));
    var_17 |= min(((max((min(52243, -37)), var_7))), (min(var_1, (~var_2))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_18 -= (((-((max((arr_0 [i_0]), (arr_2 [i_2])))))));
                    var_19 = var_12;
                    var_20 |= arr_1 [i_1];
                    var_21 += (arr_0 [i_2]);
                }
            }
        }
    }
    var_22 = var_5;
    #pragma endscop
}
