/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187443
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((var_4 & var_0) / var_0));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_17 = (min(var_17, var_1));
                arr_4 [i_1] [i_1] [i_0] = var_7;

                /* vectorizable */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    var_18 ^= (var_6 / var_12);
                    var_19 = var_8;
                    var_20 = (var_13 + var_4);
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    arr_9 [i_1] [i_1] [i_1] [i_3] = (((var_4 > var_0) >> (var_15 >= var_3)));
                    arr_10 [i_0] [i_1] [i_1] [i_1] = ((var_10 != (3436575543 & 9223372036854775807)));
                    var_21 = var_1;
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 20;i_6 += 1)
                        {
                            {
                                arr_17 [i_1] = (((var_13 && var_12) - (var_12 != var_3)));
                                arr_18 [i_0] [i_0] [i_4] [i_4] [i_5] [i_1] [i_6 - 2] = var_2;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
