/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149055
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] [i_0 + 3] = (max((arr_1 [i_0]), (arr_1 [i_0 + 1])));
        var_16 = (-((var_9 - ((max(107, 1))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 22;i_3 += 1)
                {
                    {
                        var_17 = 4;
                        var_18 += ((var_9 / (arr_1 [i_2])));
                    }
                }
            }
        }
    }
    var_19 ^= var_3;
    #pragma endscop
}
