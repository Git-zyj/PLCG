/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105575
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((-(var_10 && var_4)));
    var_15 = (!-26963);
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_16 = (max(var_16, (arr_3 [0] [i_1] [16])));
                arr_5 [i_0] [i_0] [i_0] = ((((-(arr_2 [i_0]))) >= (max((arr_0 [i_0] [i_1]), (arr_2 [i_0])))));
            }
        }
    }
    #pragma endscop
}
