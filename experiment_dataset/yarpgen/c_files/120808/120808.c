/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120808
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= ((65535 ? var_1 : var_4));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 24;i_2 += 1)
            {
                {
                    var_20 = (max(var_20, var_5));
                    var_21 = (max(var_21, (arr_4 [i_2 - 2] [i_2 - 2] [23])));
                }
            }
        }
    }
    var_22 &= ((var_2 << (((-65535 + 65554) - 14))));
    #pragma endscop
}
