/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115636
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((var_4 - 51507) ? var_10 : ((-((5467 ? var_5 : var_7))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_8 [i_1] [i_0] = ((!(arr_6 [i_3 + 1] [i_3] [i_3])));
                            arr_9 [i_0] [i_1] [18] [i_1] [i_2 + 2] [i_3] = var_12;
                            var_17 = (min(var_17, 1));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_18 = var_15;
                            var_19 -= 3310772870;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
