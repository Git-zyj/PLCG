/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135231
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 17;i_2 += 1)
            {
                {
                    var_13 += (((((-95 - (arr_1 [17] [14])))) ? (max(var_0, var_4)) : (arr_4 [1] [i_1] [10] [i_2])));
                    arr_6 [i_0] [i_1] [i_0] [15] = var_0;
                    var_14 -= 1;
                    var_15 = 1;
                }
            }
        }
    }
    var_16 = ((((((((var_9 ? 1 : 1))) - (max(var_4, var_8))))) ? var_11 : (max(-4600783560346492839, var_12))));
    var_17 = (~var_7);
    var_18 = (var_12 > 1);
    var_19 = ((((max(var_0, var_11))) * ((1 ? 1 : (((-9223372036854775807 - 1) + 1))))));
    #pragma endscop
}
