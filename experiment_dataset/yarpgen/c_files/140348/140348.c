/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140348
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 948111122;
    var_21 = (min(var_21, (((((((~((var_10 ? var_8 : var_16)))) + 2147483647)) >> (var_16 - 12138))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1 + 2] [i_3] [14] [i_3] [10] = var_14;
                                var_22 |= ((~(arr_1 [i_0] [i_4])));
                            }
                        }
                    }
                    var_23 = var_12;
                }
                var_24 ^= (arr_6 [1] [i_1 - 4]);
                var_25 = (min(-var_16, (arr_3 [i_0])));
            }
        }
    }
    var_26 = ((((-3440479789012930395 >= (!var_0))) ? (((var_13 >= var_19) & (~var_13))) : var_7));
    #pragma endscop
}
