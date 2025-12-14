/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131392
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [i_0] = max((arr_5 [i_0] [i_0]), ((min(134086656, 4153121938))));
                    var_10 = (-127 - 1);
                }
            }
        }
    }
    var_11 &= var_6;
    #pragma endscop
}
