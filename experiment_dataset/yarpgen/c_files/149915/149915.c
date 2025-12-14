/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149915
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_12 = ((+(min((arr_1 [i_0 - 1] [i_0]), ((max(-114, 0)))))));
                    var_13 = (min(((122 * (arr_1 [i_0 + 1] [i_1 + 1]))), (((arr_1 [i_0 + 1] [i_1 + 2]) ? (arr_1 [i_0 + 1] [i_1 + 1]) : 32747))));
                }
            }
        }
    }
    var_14 = var_6;
    #pragma endscop
}
