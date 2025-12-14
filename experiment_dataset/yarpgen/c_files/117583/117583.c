/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117583
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= ((((-var_0 ? ((var_8 ? var_2 : 0)) : (((var_3 ? 4096 : var_9)))))) + -1458496138425651515);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] [i_1] = ((((((((((arr_0 [i_0]) + 2147483647)) >> (var_0 + 6283112033340356198)))) ? (((arr_2 [i_0] [i_0]) ? var_7 : 64312778582852490)) : 6)) / var_1));
                    var_13 &= (((((~(((-2247940267628198459 == (arr_7 [i_0] [1] [i_2]))))))) ? ((-7272931287407228081 ? (-32767 - 1) : 22741)) : ((~((var_5 ? var_3 : var_3))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_2] [i_0] [i_3] [i_3] [i_4] = (((((((min(var_1, 27))) ? (arr_5 [i_0]) : ((var_6 ? (arr_5 [i_3]) : 0))))) ? ((var_5 ? ((56143 ? 0 : 34854)) : var_4)) : (((arr_7 [2] [i_1] [i_2]) ? var_8 : var_4))));
                                arr_14 [i_0] [i_0] [i_2] = var_1;
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        var_14 = var_0;
                        arr_17 [i_1] [i_5] = (~3);
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        arr_21 [7] [7] [7] [7] [i_6] = (-67 < -1749701539);
                        var_15 = ((((min(-31572, (((arr_9 [i_0] [15] [i_0] [i_0] [i_0]) | var_6))))) ? 4294967291 : (arr_12 [i_1])));
                        arr_22 [1] = ((((((((var_5 ? var_11 : var_11))) ? var_8 : (((arr_3 [i_0] [i_2]) ? -2147483640 : (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])))))) && (-9223372036854775807 - 1)));
                        var_16 = (((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]) ? 0 : (arr_15 [i_0] [i_0] [i_2] [13] [i_6])));
                    }
                }
            }
        }
    }
    var_17 = var_7;
    #pragma endscop
}
