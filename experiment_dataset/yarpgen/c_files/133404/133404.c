/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133404
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_12 = -945595969;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_0] [i_2] [i_3] [i_0] = (((min((var_4 & 3466699721691822174), (arr_8 [i_0]))) | var_6));
                            arr_12 [i_0] [i_0] |= 42;
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            {
                var_13 = (max(var_13, ((3466699721691822193 % (arr_0 [i_4])))));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        {
                            arr_23 [i_5] [i_5] [1] [i_4] [14] [i_5] = 268419072;
                            arr_24 [i_7] [i_4] [i_4] [19] = (arr_1 [9] [i_7]);
                            arr_25 [i_4] [10] [16] [i_4] = 6033;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
