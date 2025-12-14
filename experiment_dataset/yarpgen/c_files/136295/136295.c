/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136295
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = -866567853;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_17 [i_1] [1] [1] = (arr_16 [i_0] [i_1] [i_1] [0] [i_4]);
                                var_11 = (max(var_11, (((-(max((arr_7 [i_4] [i_1]), (min((arr_11 [i_4] [i_0] [i_0] [i_1]), 9223372036854775807)))))))));
                                arr_18 [i_1] [i_1] [i_1] [i_1] [i_1] = var_3;
                            }
                        }
                    }
                    var_12 ^= (arr_13 [i_2] [i_2] [i_0] [i_2] [i_0] [i_0] [i_0]);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                var_13 = (-(((arr_16 [i_0] [11] [i_2] [i_1] [i_0]) ? (((-(arr_21 [i_0] [i_1] [13] [i_5] [i_0])))) : (min(65535, 5090240100218543032)))));
                                var_14 -= ((!(~442005188)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 = -var_8;
    #pragma endscop
}
