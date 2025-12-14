/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106998
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_15 = (min(var_15, ((65535 * (arr_2 [i_0] [i_1 - 1])))));
                var_16 = min((max(132356757, 0)), (max((arr_5 [i_0]), (arr_5 [i_0]))));
                arr_6 [18] [i_1] = (max(((((min(65535, var_12))) ? (arr_0 [i_0]) : ((var_13 ^ (arr_0 [i_0]))))), ((0 ? (min((arr_1 [i_0] [i_0]), var_0)) : (min((arr_2 [i_0] [i_1 + 1]), 2841892556))))));
                arr_7 [i_0] [i_1] [i_1] = var_6;
            }
        }
    }
    #pragma endscop
}
