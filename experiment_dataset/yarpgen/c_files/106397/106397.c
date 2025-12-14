/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106397
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 12;i_2 += 1)
            {
                {
                    var_15 = 5727;
                    arr_6 [i_0] [6] [i_2] [i_1 + 2] = 12;
                }
            }
        }
    }
    var_16 = 32752;
    var_17 = (var_8 ^ var_1);
    #pragma endscop
}
