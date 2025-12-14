/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16387
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    arr_7 [i_0] = (max(-5268656256618728108, ((min(1, var_7)))));
                    var_17 += (!var_5);
                }
            }
        }
    }
    var_18 = (max(var_18, var_7));
    #pragma endscop
}
