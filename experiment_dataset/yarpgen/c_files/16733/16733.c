/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16733
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= (!var_10);
    var_21 = var_15;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_22 = (((((((((arr_3 [i_0]) | 13302789582487060800))) ? (arr_3 [2]) : var_15))) ? (((var_3 << (((arr_8 [i_0] [i_1] [i_2] [i_2]) - 106))))) : (((~var_15) ? (max(3344604649, -4)) : (1472525045 || 1)))));
                            arr_9 [i_0] [i_2] [i_2] [i_3] = (max((((((((576459652791795712 > (-2147483647 - 1))))) & (var_9 & 1472525042)))), ((4294967295 + (min(var_12, var_19))))));
                        }
                    }
                }
                var_23 &= 25619;
                arr_10 [i_1] [i_0] = var_3;
            }
        }
    }
    #pragma endscop
}
