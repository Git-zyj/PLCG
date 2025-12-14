/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109422
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                {
                    var_18 = (max((max((arr_6 [i_2 + 2] [i_2 - 1] [i_2 + 2]), 9151314442816847872)), ((max(((((arr_2 [i_0]) && var_1))), (((arr_4 [i_1]) << 1)))))));
                    var_19 |= (arr_0 [i_0] [i_0]);
                }
            }
        }
    }
    var_20 = (-2147483647 - 1);
    #pragma endscop
}
