/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120953
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_11 = (max((((((arr_3 [i_4]) ^ 406523445)) % var_1)), var_3));
                                arr_13 [i_0] [i_0] [i_0] = var_10;
                                var_12 |= ((((var_8 == var_4) ? (((max(var_3, var_8)))) : ((var_2 ? var_9 : var_4)))));
                                var_13 *= var_6;
                                arr_14 [i_4] [i_1] [i_3] [i_1] = (((((arr_7 [i_0] [8] [i_0] [i_4]) + 2147483647)) >> (((arr_12 [i_4] [i_3] [i_2] [i_2] [i_1] [i_0]) + 308152177))));
                            }
                        }
                    }
                }
                var_14 = var_8;
                var_15 *= var_2;
            }
        }
    }
    var_16 = (((min(((var_1 ? 1 : var_1)), (~var_0))) != ((max(((var_9 ? var_10 : var_4)), var_8)))));
    #pragma endscop
}
