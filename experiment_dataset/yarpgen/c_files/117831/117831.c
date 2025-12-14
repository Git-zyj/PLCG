/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117831
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 5897861508576232339;
    var_12 = -19727;
    var_13 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                var_14 ^= -27151;
                var_15 = (arr_3 [i_0]);
                var_16 *= var_9;
                var_17 = -5319;
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_2] [i_3] [i_3] [i_3] = var_4;
                                var_18 = (arr_4 [i_2] [i_1 + 2] [i_0]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 *= 1;
    #pragma endscop
}
