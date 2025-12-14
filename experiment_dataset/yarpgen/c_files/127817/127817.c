/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127817
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                var_13 += 1;
                var_14 = (max((max((arr_3 [i_1 - 3] [i_1 - 2] [i_0]), (arr_3 [i_1 - 3] [0] [i_0]))), (arr_3 [i_1 - 3] [i_1] [i_0])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 13;i_5 += 1)
                    {
                        {
                            var_15 = (((((arr_4 [i_2 - 1]) & (arr_4 [i_2 - 1]))) >> ((((~(arr_4 [i_2 - 3]))) - 11662661515515912234))));
                            var_16 = ((((min(var_12, (arr_10 [i_4 + 1] [i_5 - 2] [i_2 - 1])))) | (8 == 2147483630)));
                            arr_14 [5] [i_4 + 4] [5] [i_2] |= var_5;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 14;i_7 += 1)
                    {
                        {
                            arr_19 [i_2 - 2] [i_3] [0] [i_7] = (max(18446744073709551604, (((((((var_9 + 2147483647) << (var_1 - 206)))) ? (252 % var_1) : (min((arr_18 [i_2 + 1] [i_3] [i_2 + 1] [i_7 - 1]), 248)))))));
                            var_17 = 18446744073709551604;
                            arr_20 [i_6] [i_3] [i_2] = 18446744073709551601;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
