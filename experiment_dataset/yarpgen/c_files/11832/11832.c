/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11832
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_13;
    var_20 = var_11;
    var_21 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_22 *= (max(((((max((arr_8 [i_0] [13] [i_1] [i_2]), 0)) != 1116290937))), (min((arr_6 [i_0] [i_1 + 1] [i_2]), 0))));
                    arr_12 [i_0] [i_0] [i_1] [0] &= (min(16264369723806622690, (min(var_15, var_2))));
                }
            }
        }
    }
    #pragma endscop
}
