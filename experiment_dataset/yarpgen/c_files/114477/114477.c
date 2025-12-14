/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114477
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_3;
    var_19 = 2719343061;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 11;i_2 += 1)
            {
                {
                    var_20 = ((((((arr_3 [i_0] [i_1] [4]) >= (arr_7 [10] [i_1] [0]))) ? (9122025100361825017 / 41) : var_17)));
                    var_21 = (min((((arr_3 [i_0 - 1] [i_0 + 1] [i_0 + 1]) ? var_17 : (arr_6 [i_2 - 2] [i_0 - 2]))), 232));
                }
            }
        }
    }
    #pragma endscop
}
