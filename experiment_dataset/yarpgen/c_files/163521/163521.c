/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163521
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_14 = var_1;
                    var_15 |= var_8;
                    var_16 = var_3;
                    arr_8 [9] [i_1] [13] = 28166;
                }
            }
        }
    }
    var_17 = var_9;
    var_18 ^= (((min(37389, var_2)) - (((-var_0 * (12 / var_13))))));
    var_19 ^= var_6;
    var_20 = (min(2047, 2047));
    #pragma endscop
}
