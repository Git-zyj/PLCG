/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172480
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (1 && 1);
    var_16 = (min(var_16, (((((min(-9167647762255139520, var_1)) & (var_11 >= 1)))))));
    var_17 = (8 + 30841);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_1] [i_2] [i_2] = ((var_4 ? (arr_2 [i_0 - 2]) : ((((34698 ? 1 : 1))))));
                    arr_10 [i_0] [i_1] [i_2] = (min(((~(arr_5 [i_2] [i_0 + 1] [i_0 - 1] [i_0 + 1]))), (arr_0 [i_0 - 1])));
                }
            }
        }
    }
    #pragma endscop
}
