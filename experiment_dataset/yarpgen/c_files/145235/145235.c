/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145235
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
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_14 *= -26742;

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        var_15 = (min(var_15, ((((max((arr_1 [i_0] [i_1]), var_5)) << ((((arr_9 [8] [i_1] [i_0] [i_0] [0]) == (arr_1 [i_2] [14])))))))));
                        arr_12 [i_0] [i_1] [i_2] [i_2] = 32759;
                        arr_13 [i_2] [i_3] = ((((min((arr_1 [i_2] [4]), 65521))) ? (arr_1 [i_0] [i_0]) : (((((arr_3 [i_2]) >= (-9223372036854775807 - 1)))))));
                    }
                    var_16 |= (max(0, (max(((-(arr_1 [i_0] [i_1]))), ((((-2147483647 - 1) || (arr_3 [i_0]))))))));
                }
            }
        }
    }
    var_17 = (((((var_2 ? var_7 : ((75 ? var_13 : (-9223372036854775807 - 1)))))) ? (var_4 && var_6) : -32759));
    #pragma endscop
}
