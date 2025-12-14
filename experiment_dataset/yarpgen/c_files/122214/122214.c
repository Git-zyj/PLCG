/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122214
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= (var_4 + var_6);
    var_21 = var_1;
    var_22 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            {
                arr_6 [i_1] = 672723347;
                var_23 = (arr_2 [i_0] [i_0]);
                var_24 *= ((((arr_3 [2] [i_1 + 2]) & (arr_3 [2] [i_1 + 1]))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 7;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4] = 1349358101;
                                arr_16 [i_0] [i_1] [i_2] [7] [i_4] [i_4] [i_1] = (((arr_2 [i_4 + 2] [i_4]) > (arr_2 [i_4 + 2] [i_4 + 1])));
                                var_25 -= (arr_10 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4]);
                                arr_17 [i_0] [i_1 + 2] [i_2] [i_1] [i_4 - 1] = -1;
                                var_26 = ((((arr_8 [i_1]) >= (arr_13 [0] [i_1] [9]))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
