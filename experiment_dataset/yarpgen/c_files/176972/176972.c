/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176972
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, var_15));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                {
                    arr_9 [i_0] [12] [i_2] [i_2] = arr_1 [i_0];
                    arr_10 [i_2] [i_1 - 2] [i_1] [i_2 - 1] = (arr_8 [i_2 + 1] [i_2] [i_2]);
                }
            }
        }
    }
    var_18 |= var_15;
    #pragma endscop
}
