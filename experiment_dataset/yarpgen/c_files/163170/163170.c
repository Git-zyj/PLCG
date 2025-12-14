/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163170
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= ((((-(var_9 < var_1))) / ((var_11 ? var_18 : ((min(50375, var_14)))))));
    var_20 = (min(var_20, var_4));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_21 = 15159;
                var_22 = (((((((arr_3 [i_1 - 1] [i_0]) / (arr_3 [i_1] [i_0]))))) ? (arr_2 [i_1 - 1] [i_0] [i_0]) : (((((arr_4 [i_1]) ? var_12 : 50377)) << (((arr_0 [i_0]) - 57879))))));
            }
        }
    }
    #pragma endscop
}
