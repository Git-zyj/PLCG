/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175731
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((var_6 * 2622615129729536107) ? ((var_3 ? (~var_8) : 0)) : var_10));
    var_15 = (~var_9);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_2] [i_1] = (~4580514431138242521);
                    arr_8 [i_0] [i_1] [i_2] = (arr_6 [i_2] [i_1]);
                    var_16 = (~var_8);

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        arr_11 [i_0] [i_0] [i_0] = var_9;
                        var_17 &= (~var_10);
                        arr_12 [i_0] = (((((((arr_6 [i_0] [i_0]) | 215716879)) ^ (((var_5 ? var_2 : 217))))) & (arr_9 [i_2 + 1] [i_1] [i_2] [i_2] [i_1] [i_2])));
                        var_18 ^= ((((((arr_10 [i_2 + 1] [i_2 + 2]) ? var_10 : (arr_10 [i_2 + 1] [i_2 + 1])))) ? (((~var_6) / (~var_13))) : 114));
                    }
                    for (int i_4 = 3; i_4 < 20;i_4 += 1)
                    {
                        arr_15 [i_0] [i_0] = (max((arr_2 [i_0] [i_1]), (arr_0 [10])));
                        var_19 = (((((((-(arr_3 [3] [i_1])))) ? (arr_9 [i_2 - 1] [i_2] [1] [i_2] [i_2 - 1] [i_2]) : var_0)) << (((var_9 >> 1) - 1624))));
                        arr_16 [i_0] [8] [6] = (arr_10 [i_1] [i_2 - 1]);
                        var_20 = (min(var_20, ((max(((((arr_2 [i_2 + 1] [i_4 - 2]) ? 215716890 : var_5))), (max((max(var_8, var_12)), (!var_11))))))));
                    }
                    for (int i_5 = 1; i_5 < 21;i_5 += 1)
                    {
                        arr_19 [i_5] [i_1] [i_2] [i_5] = (arr_13 [i_5] [i_2 - 1] [20] [i_0]);
                        arr_20 [10] [0] [i_1] [0] [i_2] [i_5] = (((((arr_13 [i_5 + 1] [i_2 + 1] [i_2 - 1] [i_1]) ^ 15824128943980015509)) > (arr_3 [i_0] [i_0])));
                        arr_21 [i_5] [i_5] [i_2] [i_5 + 1] = var_2;
                        var_21 = ((~(min((arr_13 [i_0] [i_5 + 1] [i_2 + 1] [i_5 - 1]), var_0))));
                        arr_22 [i_0] [i_0] [i_0] [i_5] = (((((var_4 ? -1822411021785058491 : (arr_5 [i_5 + 1] [i_5 - 1] [i_5 - 1] [i_5])))) ? (((!215716890) % (~-4580514431138242521))) : var_2));
                    }
                    arr_23 [i_0] [7] [6] = (min((arr_6 [i_2 + 2] [i_1]), (((arr_6 [i_2 + 2] [i_2 + 2]) * (arr_6 [i_2 + 2] [i_1])))));
                }
            }
        }
    }
    var_22 = var_10;
    #pragma endscop
}
