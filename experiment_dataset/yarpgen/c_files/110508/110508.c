/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110508
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 8808962937262841375;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_12 = (((60689 ? 2147483647 : -8808962937262841375)));
                    var_13 -= max(((0 ? -8808962937262841376 : -8808962937262841375)), (((+((0 ? (arr_6 [i_0]) : var_6))))));
                    var_14 = (((max((((arr_0 [i_1] [i_0]) ? (arr_1 [11]) : var_10)), 106)) / (((arr_5 [i_0] [i_0] [i_1 - 1]) ? 8024342266799872466 : (arr_5 [i_0] [i_1 - 1] [i_1 - 1])))));
                }
            }
        }
    }
    var_15 = (!var_2);
    #pragma endscop
}
