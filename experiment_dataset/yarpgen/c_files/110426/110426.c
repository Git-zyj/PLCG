/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110426
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [11] = ((1 ? (6180268299188875186 && 43373) : (((((var_5 ? var_4 : var_9))) ? 1 : var_2))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_13 [i_4] [i_1] [i_1 - 2] [i_1] [i_1 + 1] = (43377 - 13307);
                                var_12 = ((127 | (var_3 * var_9)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_13 = var_0;
    #pragma endscop
}
