/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150566
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min((--2398010644), (~-2986122227988786614)));
    var_16 *= ((~(((var_5 && var_1) ? var_3 : (max(var_14, (-32767 - 1)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 21;i_2 += 1)
            {
                {
                    var_17 = (max(var_17, (((-(arr_6 [i_0] [12] [0]))))));
                    var_18 = (max(var_8, (max((-188148113 <= 2891105186), 3126737127812248583))));
                }
            }
        }
    }
    #pragma endscop
}
