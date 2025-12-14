/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172504
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] [i_2] [i_2] = (min((((((arr_2 [i_2] [i_1] [i_2]) + var_6)))), (arr_1 [i_1])));
                    var_13 = (((((-93 ? (arr_1 [i_0]) : 3274483752)) & (-93 & var_2))));
                }
            }
        }
    }
    var_14 = -3271432145638190743;
    var_15 = var_4;
    #pragma endscop
}
