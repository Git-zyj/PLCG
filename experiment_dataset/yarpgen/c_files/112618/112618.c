/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112618
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_5;
    var_11 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_12 += var_2;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_1] [i_1] [i_1] [i_1] [i_3] = var_4;
                            var_13 = var_0;

                            for (int i_4 = 0; i_4 < 12;i_4 += 1)
                            {
                                var_14 = var_1;
                                var_15 -= var_8;
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 12;i_5 += 1)
                            {
                                arr_19 [i_1] [i_1] [5] = var_8;
                                var_16 = var_8;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
