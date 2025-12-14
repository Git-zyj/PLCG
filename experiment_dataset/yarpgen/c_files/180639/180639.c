/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180639
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_20 = (max(8251059390914744932, 1));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_21 = 4078612660;
                                var_22 = (arr_2 [i_2] [i_4]);
                            }
                        }
                    }
                }
                arr_15 [i_0] = (((9223372036854775807 && 8) + ((((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]) <= (arr_11 [i_0] [i_0] [i_0] [4] [i_0]))))));
                arr_16 [3] [i_1] = var_4;
            }
        }
    }
    var_23 = ((var_11 << (((var_7 % 216354636) - 60507))));
    /* LoopNest 3 */
    for (int i_5 = 2; i_5 < 16;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                {
                    arr_25 [i_5] [1] = (!var_10);
                    arr_26 [i_5] [i_5 - 2] [i_5] = (((((-(arr_17 [9])))) ? -96 : var_17));
                }
            }
        }
    }
    #pragma endscop
}
