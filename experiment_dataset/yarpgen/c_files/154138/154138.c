/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154138
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_12 = (((((0 ? (arr_6 [i_0] [i_1 - 2]) : 1391184427))) ? (((max((arr_6 [i_0] [i_1]), (arr_6 [i_0] [i_0]))))) : ((1391184427 ? 2903782868 : var_4))));
                    var_13 = (((~1) ^ ((2903782868 ? 5887282513951783250 : 1391184427))));
                }
            }
        }
    }
    var_14 ^= var_9;
    var_15 = ((var_6 ? 4258177494 : ((var_4 ? (max(4258177494, 1804290045299191030)) : ((36789802 ? 5585690623050359301 : 28941))))));
    #pragma endscop
}
