/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113761
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_1] [i_1] = 4;
                    arr_10 [i_1] [i_1] = (max((min(var_9, 395952814)), -2097152));
                    var_12 = 1023;
                }
            }
        }
    }
    var_13 = 4194303;
    var_14 = 65531;
    #pragma endscop
}
