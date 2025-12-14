/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189413
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (var_13 - (~var_13));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        arr_10 [i_0] [i_0] [i_2] [i_0 - 1] [i_0] [i_0] = (max(((min(-1583411580, (arr_1 [i_0 - 1] [i_2])))), var_16));
                        arr_11 [i_2] [i_2] [i_1] [i_2] = (max(((((((arr_2 [i_0 + 1]) >> (((arr_2 [i_0]) - 844288499))))) ? (min(var_5, (arr_5 [i_2] [i_2 + 1] [i_1] [i_2]))) : ((((!(arr_5 [i_2] [9] [i_1] [i_2]))))))), ((var_14 | (((var_16 ? var_17 : var_8)))))));
                        var_19 = 1;
                    }
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        var_20 = (min(((((-1583411607 && 1) && var_14))), (((arr_4 [i_0 + 2]) & (arr_4 [i_1])))));
                        var_21 = (arr_4 [8]);
                    }
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        var_22 = 2247634837477492859;
                        arr_17 [i_2] [i_2] = ((!((((arr_16 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_2 - 1]) ? 3048273295 : (arr_12 [i_2] [i_0 + 1] [i_0 - 1] [i_2]))))));
                    }
                    arr_18 [i_0] [i_2] [i_2] = -32;
                    arr_19 [i_0] [i_0 + 2] [8] [8] |= max((((arr_9 [i_0]) * -203198297)), (((var_6 == (arr_15 [i_0 + 2] [i_0 + 2] [i_0 - 1] [8])))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        for (int i_7 = 4; i_7 < 7;i_7 += 1)
                        {
                            {
                                var_23 = ((!((max((max(805306368, (arr_14 [i_0] [i_2] [i_2 - 1] [i_2]))), (min(var_10, var_6)))))));
                                arr_26 [i_2] [i_2 - 1] [i_2] [3] [i_2] = ((+(((arr_21 [i_7 - 2] [i_1] [i_1] [i_1]) - var_4))));
                            }
                        }
                    }
                    var_24 = var_7;
                }
            }
        }
    }
    #pragma endscop
}
