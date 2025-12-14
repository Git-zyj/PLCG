/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100494
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_16 += ((max((((var_13 ? 1 : 0))), ((var_6 ? var_9 : (arr_0 [i_0]))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_9 [i_2] [i_1] [3] [9] [i_1] [i_1] = ((~(min((arr_1 [i_1 + 1] [i_1]), 1))));
                            var_17 = (((((((arr_0 [i_0]) / (arr_5 [i_0] [i_2] [i_2]))))) ? (((((max(1, (arr_3 [i_0])))) ? (min(4294967295, 22)) : ((((arr_0 [i_3]) ? 1 : var_6)))))) : (min((arr_8 [i_0] [i_1] [i_2] [i_3]), (((var_2 ? (arr_7 [i_3] [i_3] [i_2] [i_1 + 1] [i_0]) : (arr_6 [1] [i_1] [i_2]))))))));
                        }
                    }
                }
            }
        }
    }
    var_18 = var_0;
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 9;i_5 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 10;i_8 += 1)
                        {
                            {
                                var_19 = (min((arr_14 [i_4]), (((arr_12 [i_5 - 1] [i_5 + 1]) ^ (arr_0 [14])))));
                                var_20 ^= var_0;
                                var_21 -= ((!(((((((arr_22 [i_4] [i_4]) >> (18446744073709551615 - 18446744073709551601)))) ? ((var_2 ? 0 : (arr_3 [i_4]))) : (33776997205278720 / var_3))))));
                            }
                        }
                    }
                }
                var_22 = ((~(min(7269742956950002625, 23))));
            }
        }
    }
    #pragma endscop
}
