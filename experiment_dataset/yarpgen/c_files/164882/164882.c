/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164882
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_16 = (max(1, 9223372036854775781));
                    arr_6 [i_1] [i_0] = ((3358435811 ? (((min(-23204, var_0)))) : (((arr_1 [i_2] [i_2]) / (((arr_3 [i_2] [i_1] [i_0]) * 3358435811))))));
                }
            }
        }
    }
    var_17 = ((~((((65529 <= 92) == (!-896803869))))));
    var_18 = ((((((min((!896803868), -23204))) + 2147483647)) << (var_8 - 29758)));
    #pragma endscop
}
