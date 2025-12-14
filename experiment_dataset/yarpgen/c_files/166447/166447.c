/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166447
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((-((-(var_12 / -702746008402761844)))));
    var_18 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] = ((+-702746008402761843) * (arr_2 [i_0]));
                                arr_15 [i_0] [i_0] [i_1] [i_2] [i_3] [i_3] [i_0] = (arr_11 [i_0] [i_4] [i_2 - 1] [i_0] [18] [i_4] [i_2 - 1]);
                            }
                        }
                    }
                }
                var_19 = var_6;
            }
        }
    }
    #pragma endscop
}
