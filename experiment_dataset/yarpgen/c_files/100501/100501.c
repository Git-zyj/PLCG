/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100501
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_18 = (min(var_18, (((-(arr_5 [i_1] [i_1] [i_2 - 3]))))));
                            var_19 = (min(1527431177, (!0)));
                            var_20 = ((((((min(-18, 1)) ^ var_9))) ? (max(var_10, (min((arr_2 [i_1] [i_1]), 0)))) : ((((arr_5 [i_2 + 2] [i_2 - 2] [i_2 + 2]) | (arr_5 [i_2 - 1] [i_2 - 3] [i_2 - 3]))))));
                            var_21 = (((~-1) - (min(((0 & (arr_5 [i_0] [i_1] [i_2 + 2]))), (min(var_17, var_7))))));
                        }
                    }
                }
                var_22 = (arr_3 [16]);
            }
        }
    }
    var_23 *= var_8;
    #pragma endscop
}
