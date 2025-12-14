/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_14 [i_0] [i_1] = -37;
                            arr_15 [i_1] [i_1] [1] = max((max(97, 0)), 65);
                            var_21 = (max(43956, ((37 + (((-127 - 1) ? (arr_7 [i_2] [i_1]) : -1))))));
                        }
                    }
                }
                var_22 -= ((!(arr_7 [16] [i_0])));
            }
        }
    }
    var_23 = var_0;
    #pragma endscop
}
