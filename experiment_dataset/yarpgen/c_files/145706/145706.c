/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145706
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_5;
    var_11 -= ((~((min(var_1, var_3)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {
                    var_12 = (arr_2 [4] [i_1]);
                    var_13 = (-9091 > -9091);
                }
            }
        }
    }
    var_14 = -var_4;
    var_15 &= var_9;
    #pragma endscop
}
