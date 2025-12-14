/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107137
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += var_13;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [i_2] [i_0] = (max(((max((arr_7 [i_1 + 4] [i_1 + 4] [i_2] [i_2 + 1]), (arr_9 [i_1 + 4] [i_0] [19])))), ((18 ? -18 : (arr_2 [i_1 - 3])))));
                    var_18 = (((-33 ? (arr_7 [i_1 + 4] [i_1] [i_2 - 3] [i_0]) : -32)));
                }
            }
        }
    }
    #pragma endscop
}
