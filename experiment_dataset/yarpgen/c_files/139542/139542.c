/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139542
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_16, ((var_17 ? (max(4294967276, var_19)) : var_0))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_21 = (min(var_21, ((max(var_0, -1)))));
                var_22 = ((52 << (197 - 186)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] |= 33505;
                            arr_12 [i_0] [i_0] [i_0] [i_0] = (max((max((min(7, 178)), (max((arr_2 [i_0] [i_0]), var_5)))), (arr_2 [i_2] [i_2])));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
