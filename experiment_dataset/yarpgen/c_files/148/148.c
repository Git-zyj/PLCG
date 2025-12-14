/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= (max((((var_0 / var_1) ? var_3 : var_12)), ((var_2 ? ((min(var_0, var_6))) : ((var_6 ? var_4 : var_5))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_14 *= (min((max(-var_8, (arr_9 [i_1 + 2] [i_2] [i_2] [i_1 + 2]))), (max((arr_10 [i_3] [i_3] [0] [i_3] [11] [7]), (((arr_8 [i_3] [i_1] [i_0]) >> (((arr_8 [i_3] [i_3] [1]) - 51))))))));
                            var_15 = (arr_5 [i_2]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 14;i_5 += 1)
                    {
                        {
                            var_16 -= (((((var_8 / var_1) % (min(var_11, var_10)))) ^ var_2));
                            arr_19 [i_0] [i_4] = (((((var_5 ? var_11 : var_5)) % (((arr_0 [i_0] [i_1]) ? (arr_10 [i_0] [i_0] [11] [i_1] [i_0] [i_5]) : (arr_16 [i_0] [i_1] [i_4 - 1] [i_1]))))) ^ (min(((min(153, 3644))), var_2)));
                        }
                    }
                }
                var_17 = ((var_0 ? (min((arr_11 [i_1 + 2] [i_1 - 1] [i_1 - 3]), (arr_14 [i_0] [i_1] [i_1 + 1] [i_0]))) : (((-(arr_17 [i_1] [16]))))));
                var_18 = (max(var_18, var_10));
            }
        }
    }
    var_19 += ((17870283321406128128 ? 17870283321406128127 : -1));
    #pragma endscop
}
