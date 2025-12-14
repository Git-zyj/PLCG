/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151159
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                arr_4 [i_0] [5] [i_0] = ((~(arr_2 [i_1 - 2] [i_1 - 2] [i_1 + 2])));
                var_19 = (((var_11 / (arr_3 [i_1 - 1] [i_1]))));
                var_20 = ((((-7685904351621560604 ? var_13 : var_1)) + (arr_3 [i_0] [i_0])));
            }
        }
    }
    var_21 = ((((17179869176 ? 7685904351621560604 : 7685904351621560611)) >= var_13));
    var_22 = var_6;
    var_23 = var_9;
    var_24 -= (((max(-var_4, (max(var_0, var_5)))) & (var_0 ^ var_7)));
    #pragma endscop
}
