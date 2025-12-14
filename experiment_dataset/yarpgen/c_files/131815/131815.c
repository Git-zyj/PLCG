/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131815
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 9223372036854775803;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_1] [i_2 - 1] = (((max(var_9, 9223372036854775807)) > ((((arr_8 [i_0 - 1] [i_0] [i_0] [i_2 - 1]) ? (arr_0 [i_0 - 1]) : -491262784)))));
                    var_18 = -24876;
                }
            }
        }
    }
    #pragma endscop
}
