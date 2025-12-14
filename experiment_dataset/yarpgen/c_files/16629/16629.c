/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16629
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] = ((~(((28 ? 65535 : 25045)))));

                /* vectorizable */
                for (int i_2 = 2; i_2 < 13;i_2 += 1)
                {
                    arr_9 [i_2] [i_1] [i_0] = 94;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_15 [i_1] [i_2] [i_1] [i_2] = (!-3785237072627248381);
                                arr_16 [i_0 - 1] [i_1] [i_0 - 1] = -10;
                            }
                        }
                    }
                }
            }
        }
    }
    var_11 = (((~var_0) >= (min(1, 49228))));
    var_12 = var_9;
    #pragma endscop
}
