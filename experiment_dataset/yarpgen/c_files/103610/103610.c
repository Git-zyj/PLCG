/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103610
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((~746303821) ? -var_6 : (var_0 & 9333)));
    var_11 = ((~(max(var_3, (~3381460276335057607)))));
    var_12 = (min(var_12, var_5));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_13 = (-((-(8766030683162172789 ^ 65535))));
                    var_14 ^= (((((-var_0 ? var_5 : (var_3 / var_5)))) ? ((min(var_2, (arr_5 [i_0] [i_0] [i_0])))) : (((((var_8 - 1) || ((var_1 && (arr_3 [i_1] [i_0])))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_15 [i_2] [i_2] [i_2] [i_3] [i_4] = ((var_1 < (((65418 < (arr_2 [i_0] [i_0]))))));
                                arr_16 [i_0] [i_0] [i_2] [i_0] [i_2] [i_3] [i_4 - 2] = (((((var_1 ? ((1 ? var_3 : var_0)) : (((~(arr_11 [i_0] [3] [i_2] [i_3] [12]))))))) ? (((arr_1 [i_4 + 1]) * 3548663474)) : (max((((arr_0 [i_3]) ? var_4 : var_8)), (0 >= var_0)))));
                                arr_17 [i_2] [i_1] [i_2] [i_1] = var_8;
                                var_15 += (((((var_0 ? -9333 : (((arr_14 [1] [i_1] [i_1] [i_0] [i_2] [1] [i_4]) ? 1 : var_7))))) ? (((min((arr_3 [i_0] [i_3]), var_0)) >> ((((var_7 ? (arr_4 [i_0] [i_4 - 1]) : var_2)) - 36)))) : ((((arr_11 [i_0] [i_1] [i_0] [i_1] [i_1]) / ((~(arr_1 [i_1]))))))));
                            }
                        }
                    }
                    var_16 = (min(var_16, (1 == 3730930289)));
                }
            }
        }
    }
    #pragma endscop
}
