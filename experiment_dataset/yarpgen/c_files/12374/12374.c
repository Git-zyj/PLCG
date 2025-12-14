/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12374
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 19;i_4 += 1)
                            {
                                var_13 = ((362249859 ? var_6 : ((var_7 << (var_11 - 6373820198233761446)))));
                                var_14 ^= (((arr_2 [i_2]) * ((var_2 ? var_7 : (arr_7 [i_1])))));
                            }
                            for (int i_5 = 0; i_5 < 19;i_5 += 1)
                            {
                                var_15 = ((((((var_3 | (arr_6 [i_0] [i_0] [i_3] [i_5]))) & (((max(var_10, 231)))))) & ((min(var_8, 125)))));
                                arr_16 [i_0] [i_1] [i_2] [i_1] [i_5] = (min(((max(var_10, (max((arr_0 [i_1]), 27218))))), (((87 <= var_11) | var_6))));
                            }
                            for (int i_6 = 0; i_6 < 1;i_6 += 1)
                            {
                                var_16 ^= var_12;
                                arr_19 [i_0] [i_1] [3] [i_3] [i_3] = ((((-791864092 & (arr_13 [i_0] [i_0] [i_2] [i_3] [i_6]))) << (((((max(-82, -4938116627499728378)) + 116)) - 32))));
                            }
                            arr_20 [i_1] [i_1] [2] [i_3] = (min(var_2, ((((max(var_2, var_1))) ? -27218 : ((var_9 ? 65535 : var_0))))));
                            var_17 *= ((((((((var_3 ? var_10 : var_3))) ? (arr_13 [i_0] [i_1] [i_1] [5] [i_3]) : (arr_14 [i_1])))) < (min(10120558781330034088, 0))));
                        }
                    }
                }
                arr_21 [1] = (((max((1 * var_10), var_0)) + (((1 / 3943) >> (((arr_4 [17] [i_0] [i_0]) - 166))))));
                var_18 = (((min((arr_13 [i_0] [i_0] [i_0] [i_0] [14]), -94)) <= 4266148052));
            }
        }
    }
    var_19 -= var_12;
    #pragma endscop
}
