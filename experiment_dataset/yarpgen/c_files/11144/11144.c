/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11144
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= ((((((~128) || 127))) / -18460));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_0] |= (((arr_4 [i_0 - 1] [i_0] [i_1 - 1]) ? (min((arr_4 [i_0 - 3] [i_0 - 3] [i_1 + 1]), var_6)) : (((min((arr_4 [i_0 - 2] [6] [i_1 + 1]), (arr_4 [i_0 + 2] [i_0 + 2] [i_1 + 1])))))));
                var_17 = (arr_0 [i_0 + 2] [12]);
            }
        }
    }
    var_18 = (~var_4);
    #pragma endscop
}
