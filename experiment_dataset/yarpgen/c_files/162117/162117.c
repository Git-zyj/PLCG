/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162117
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_13 = (min(((((arr_4 [i_0] [i_1 - 1]) % (arr_0 [i_0 - 1] [i_0 - 2])))), (((((min(var_10, (arr_0 [18] [8]))))) - ((var_10 ? (arr_0 [9] [i_1]) : (arr_4 [i_0] [16])))))));
                var_14 = ((-((-((var_6 ? 0 : -1))))));
                arr_6 [i_0] [16] = ((max((arr_0 [i_0 - 3] [i_1 + 1]), -5152233198651086218)));
            }
        }
    }
    var_15 *= var_8;
    var_16 = (max(((max(((var_10 ? var_12 : 65535)), var_11))), ((var_7 ? (~237) : var_6))));
    #pragma endscop
}
