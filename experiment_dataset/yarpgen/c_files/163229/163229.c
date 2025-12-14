/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163229
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_19 = ((max(29709, var_5)) & (max((max(var_2, var_11)), (arr_2 [i_0] [i_1] [i_0]))));
                            var_20 -= (((max((arr_7 [i_0] [i_1 + 2] [i_3]), 510)) * (min((((arr_7 [i_3] [i_3] [i_2]) / (arr_4 [i_0] [i_3]))), -var_0))));
                        }
                    }
                }
                var_21 = (max(var_21, ((max(((min((arr_9 [i_0] [i_1] [i_0] [i_1 + 2]), -511))), -0)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 22;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        {
                            arr_20 [i_6] [i_5] [i_6] [i_4] [i_7] [i_4] = (min((((573006423 >= (-511 / var_7)))), -2019308690968957929));
                            var_22 = (max(var_22, var_12));
                            arr_21 [i_4] [i_5] [i_6] [i_7] [i_5] [i_5] = var_18;
                        }
                    }
                }
                var_23 = ((((arr_12 [i_4]) * ((max((arr_19 [i_4] [i_5] [i_5]), -511))))));
                arr_22 [i_4] [i_4] [i_5] = (max(-510, (arr_12 [i_4])));
                var_24 = ((-((min(48914, 27)))));
            }
        }
    }
    #pragma endscop
}
