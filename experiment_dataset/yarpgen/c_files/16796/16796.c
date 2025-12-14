/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16796
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_17 = var_16;
                    arr_9 [i_2] [i_0] [i_0] = var_1;
                    var_18 = (min((((arr_3 [i_0 + 3] [i_0 + 1] [i_0 + 3]) ? (arr_3 [i_0 + 1] [i_0 - 1] [i_0 - 2]) : var_0)), (((min((arr_5 [i_0] [i_0] [i_0] [i_2]), 6195))))));
                    var_19 = var_9;
                    var_20 = (min(var_4, (!-9217033888542803487)));
                }
            }
        }
    }
    var_21 ^= 56;
    var_22 = -var_4;
    #pragma endscop
}
