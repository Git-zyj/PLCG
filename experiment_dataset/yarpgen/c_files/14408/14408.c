/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14408
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_15 = var_14;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_16 = (((max(((((arr_6 [i_1] [i_1] [i_4 + 1]) < (arr_9 [i_0])))), -var_5)) & (((-(min((arr_13 [i_4] [i_2] [i_4 - 1]), (arr_7 [i_2] [i_3] [i_4]))))))));
                                var_17 = (arr_2 [i_0] [9] [i_4 + 1]);
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 20;i_7 += 1)
            {
                {
                    var_18 &= (max(1, ((194 != (((arr_15 [i_6] [15]) ? (arr_15 [i_5] [i_6]) : (arr_2 [i_5] [1] [i_7])))))));
                    var_19 = 1;
                    var_20 = max((arr_13 [i_6] [12] [i_6]), (!var_8));
                    var_21 = -var_13;
                    var_22 = var_9;
                }
            }
        }
    }
    #pragma endscop
}
