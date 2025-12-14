/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172315
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (-(67 / var_4));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_0] = (~var_4);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_0] [i_2] [5] = var_0;

                            /* vectorizable */
                            for (int i_4 = 2; i_4 < 14;i_4 += 1)
                            {
                                var_15 = (min(var_15, (arr_1 [i_4 - 1])));
                                var_16 ^= ((((~(arr_0 [i_2] [i_2]))) << (9223372036854775807 >= 67)));
                            }
                            var_17 ^= (arr_8 [i_2] [i_1]);
                            var_18 -= ((~((var_5 ^ ((46 << (var_11 - 232)))))));
                        }
                    }
                }
            }
        }
    }
    var_19 = var_12;
    var_20 ^= (+((+((4866676197061768210 ? (-9223372036854775807 - 1) : 206639846363408920)))));
    #pragma endscop
}
