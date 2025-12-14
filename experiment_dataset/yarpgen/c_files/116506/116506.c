/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116506
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((min(-4294967295, (0 + -994225649894081035))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 9;i_2 += 1)
            {
                {
                    var_11 = (min(var_11, (--12515)));
                    arr_9 [i_0] [i_1] [i_1] [3] = ((24919 ? -81 : 248));
                }
            }
        }
    }
    #pragma endscop
}
