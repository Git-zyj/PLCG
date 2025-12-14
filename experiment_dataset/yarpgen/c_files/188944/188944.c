/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188944
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_6;
    var_15 ^= (((-9223372036854775807 - 1) + ((131071 ? (max(0, 9223372036854775807)) : -var_9))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_16 = (min((arr_1 [i_0 + 1]), (((((-(arr_2 [i_2] [i_2])))) % (arr_6 [i_2] [i_0 + 1])))));
                    var_17 = (max(var_17, 131071));
                    var_18 = (arr_2 [i_1] [i_0]);
                }
            }
        }
    }
    #pragma endscop
}
