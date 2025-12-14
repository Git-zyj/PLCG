/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16883
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_18 = 1;
                    var_19 = (min(var_13, 1));
                }
            }
        }
    }
    var_20 = (min((((!((max(1, var_9)))))), var_6));
    #pragma endscop
}
