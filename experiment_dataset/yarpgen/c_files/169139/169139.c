/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169139
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= var_10;
    var_19 = (min((!-1986512186), ((((-33554432 ? 3369493471 : -1)) - var_3))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    var_20 ^= ((-(min((arr_5 [i_0 - 2] [i_0 + 3] [i_1] [i_2 + 1]), 28))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_21 = (min(var_21, ((((!(((-77 ? 1 : var_13))))) ? (((var_5 + 38132) ? (((min(var_16, var_14)))) : (max(var_0, 1)))) : (((((min(var_12, 44047))) ? var_13 : (1 == 1))))))));
                                arr_13 [i_0] [i_0] [i_0 + 3] [i_0 + 3] [i_0] = ((!((((((((arr_4 [i_1] [i_2] [1]) ? -500538020 : var_16)) + 2147483647)) >> 0)))));
                            }
                        }
                    }
                    var_22 ^= 3369493450;
                }
            }
        }
    }
    var_23 = (min(var_23, 38138));
    #pragma endscop
}
