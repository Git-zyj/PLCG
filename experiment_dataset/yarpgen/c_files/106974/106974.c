/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106974
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_1] = (max((arr_3 [i_0 - 1] [i_0 - 1]), 35944));
                arr_7 [i_0] [i_0] = ((!(((arr_1 [i_0] [i_0 - 1]) < (((1 ? 0 : 1)))))));
            }
        }
    }
    var_18 = ((var_12 ? ((min(17, 178343399))) : (min(-5974575177614254036, var_7))));
    #pragma endscop
}
