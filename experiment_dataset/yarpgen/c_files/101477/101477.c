/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101477
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_2] [8] [4] = min(-11, -11);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_13 = var_7;
                                var_14 = (((((arr_4 [i_2] [i_1 - 1] [i_3]) - (arr_4 [i_2] [14] [i_2]))) * (((arr_4 [i_2] [i_2 - 1] [i_2]) ? var_9 : (arr_4 [i_2] [i_1 - 1] [i_1 - 1])))));
                                var_15 |= (((arr_5 [i_3] [2] [i_1 - 1] [i_4 + 1]) ? (80 & -30) : var_9));
                                var_16 = (arr_10 [i_0]);
                            }
                        }
                    }
                    arr_14 [i_0] [i_1] [i_2] = var_1;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            {
                arr_21 [i_5] [i_6] [i_5] = (!var_10);
                var_17 &= (((arr_12 [i_5] [i_5] [14] [5] [i_6] [i_6]) <= (max(80, -2785195109376101002))));
                arr_22 [i_5] [i_6] [2] = var_0;
            }
        }
    }
    #pragma endscop
}
