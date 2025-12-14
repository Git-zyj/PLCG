/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163557
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, -124));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = (min((arr_2 [i_0] [i_0]), var_3));
                    arr_9 [i_2] [i_1] [i_1] [i_0] = (arr_6 [i_0] [4] [i_2] [i_2]);
                }
            }
        }
    }
    var_17 = var_11;
    var_18 |= min(var_14, (max((!var_0), var_14)));
    #pragma endscop
}
