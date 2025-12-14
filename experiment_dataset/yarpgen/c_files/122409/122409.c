/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122409
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_15 [i_4] [i_3] [0] [0] [i_0] = (arr_9 [i_2] [i_4]);
                                var_18 = -8213657703317414789;
                            }
                        }
                    }
                }
                var_19 = (max(var_19, (arr_4 [i_0] [5])));
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            {
                                arr_24 [i_7] [i_7] [i_5] [i_5] [i_5] [i_5] [i_5] = (max((max((((arr_8 [15] [i_0] [i_5]) ? var_14 : var_15)), 1)), (((((arr_2 [1]) & 30245)) << 1))));
                                arr_25 [i_7] [i_7] [i_5] [i_7] [i_0] = (max(0, -19533));
                                var_20 = var_13;
                            }
                        }
                    }
                }
                var_21 = (arr_19 [i_0] [i_1] [i_1] [i_1]);
            }
        }
    }
    #pragma endscop
}
