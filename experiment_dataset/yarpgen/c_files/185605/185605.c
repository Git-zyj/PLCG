/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185605
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_19 = (max(var_19, ((min(((min(524287, 16384))), 49153)))));
                    var_20 += (max((((~(!49141)))), ((((max(1, 1864796015))) ^ -5264316662470888167))));
                    arr_8 [i_2] = ((max(-1, (1023 + 16672509009522251172))));
                }
            }
        }
    }
    var_21 = (min(var_21, 5264316662470888167));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            {
                arr_16 [i_3] [i_3] [i_4] = max(16382, (~1));
                var_22 = ((2044159157 - ((min(0, (max(0, 1)))))));
                var_23 = ((-(1 % 3556988117)));
            }
        }
    }
    var_24 = (max(var_24, var_7));
    #pragma endscop
}
