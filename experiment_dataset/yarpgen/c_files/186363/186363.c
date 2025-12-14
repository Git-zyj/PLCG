/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186363
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_19 *= (max((max(16320, var_18)), (109 % 16301)));

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            arr_7 [i_0] = max((arr_2 [i_0]), ((~(max(7, 16320)))));
            var_20 += (max(-var_1, (((arr_5 [i_0]) / (arr_5 [i_1])))));
            var_21 *= (max(((min(var_16, 8205434817319806465))), (((arr_5 [i_0]) ? var_10 : var_15))));
        }
        var_22 = (max((min(((var_10 ? var_9 : var_17)), (arr_3 [i_0] [i_0] [i_0]))), var_14));
        var_23 ^= ((1 && ((max(1, var_13)))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    {
                        var_24 |= ((~(max(var_1, (arr_5 [i_0])))));

                        for (int i_5 = 2; i_5 < 14;i_5 += 1)
                        {
                            var_25 |= ((((max(var_17, (arr_14 [i_0])))) ? (((~(arr_14 [i_0])))) : (max(var_0, (arr_5 [i_2])))));
                            var_26 = max((((((arr_5 [i_3]) ? var_6 : var_12)) / 1073741824)), ((max(((var_0 ? var_9 : var_2)), ((max((arr_6 [i_2]), 72)))))));
                        }
                        for (int i_6 = 1; i_6 < 14;i_6 += 1)
                        {
                            arr_23 [i_0] [i_2] [i_2] [i_3 - 1] [i_3] [i_4] [i_6] = ((max(2850424848, (((255 ? var_17 : var_14))))) ^ var_14);
                            var_27 = ((~((~(arr_3 [i_3 - 1] [i_3 - 1] [i_3 - 1])))));
                            arr_24 [i_0] [i_2] [i_4] [i_4] [i_3] = ((!((max(var_4, (arr_2 [i_6 + 2]))))));
                        }
                        /* vectorizable */
                        for (int i_7 = 1; i_7 < 12;i_7 += 1)
                        {
                            arr_27 [12] [i_2] [i_3] [i_4] [i_7] &= (arr_15 [i_0] [i_0] [i_0] [i_0] [9] [i_0]);
                            var_28 = 7861785245832060595;
                        }
                        for (int i_8 = 0; i_8 < 0;i_8 += 1)
                        {
                            var_29 -= (max(var_9, var_9));
                            var_30 -= var_17;
                            arr_30 [i_2] [i_3] = var_14;
                        }
                        var_31 ^= -1116479248;
                    }
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 23;i_9 += 1)
    {
        arr_33 [i_9] [i_9] = ((!-1444542448) ? (max(var_5, var_2)) : (arr_31 [i_9]));
        arr_34 [i_9] = var_1;
    }
    var_32 = (max(150214625, (((max(var_10, var_18))))));
    #pragma endscop
}
