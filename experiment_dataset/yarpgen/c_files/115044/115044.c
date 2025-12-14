/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115044
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max((var_6 + var_9), (max(((1356873704 << (var_7 - 182))), var_5))));
    var_13 = (max((((max(var_3, 18021)))), (min((var_6 / var_10), (var_9 * var_1)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_0] [i_0] = (max(var_7, 1));
                arr_5 [i_0] = ((!((((arr_3 [i_0]) ? var_6 : ((min(var_4, -18021))))))));
                var_14 *= var_5;
                arr_6 [i_0] = min(((max(-18022, 52328))), ((-18026 | (arr_1 [i_0] [i_1]))));
                arr_7 [i_1] [8] |= min(((-20146 ? (arr_0 [6]) : var_1)), ((min(-9089, 42301))));
            }
        }
    }
    var_15 = var_8;
    var_16 = (max(var_16, 1));
    #pragma endscop
}
