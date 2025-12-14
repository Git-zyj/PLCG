/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162778
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_0] [i_0] = (((arr_2 [i_0] [i_1] [i_1]) & ((((var_3 ? 0 : var_12))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_13 [i_2] [0] = var_4;
                                arr_14 [i_2] [i_1] [i_1] [i_3] [i_4] = (~48822);
                                var_16 ^= 1;
                            }
                        }
                    }
                }
                var_17 = (max(var_17, (arr_10 [i_0])));
            }
        }
    }
    var_18 |= (((var_4 / var_7) % var_1));
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                {
                    var_19 ^= 1;
                    arr_23 [1] [i_6] [i_7] = (arr_11 [i_5] [i_5] [i_6] [i_5] [i_5]);
                }
            }
        }
    }
    #pragma endscop
}
