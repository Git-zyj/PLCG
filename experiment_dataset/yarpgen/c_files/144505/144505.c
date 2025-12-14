/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144505
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_6;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = (max((max(var_1, (arr_0 [i_0]))), ((-1069732374273878369 ^ (((-13803 ? 13786 : 468531405)))))));
        arr_3 [i_0] = 0;
        arr_4 [i_0] = (max(var_10, (65535 / var_6)));
        arr_5 [i_0] [i_0] = ((((max(-13774, var_14))) ? (max(((1993583364 ? var_12 : var_14)), (var_17 / var_18))) : (((((max(65323, var_13))) ? (min(-1060026656, var_8)) : ((var_16 ? var_7 : var_8)))))));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            {
                arr_11 [i_1] [i_2] [i_1] = (min(((((arr_7 [i_1]) ? 13796 : var_10))), ((13331 ? var_1 : 5623870362963089300))));
                arr_12 [i_1] [i_2] [i_2] = 65535;
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        {
                            arr_18 [i_2] [i_3] = ((((((((var_8 << (32767 - 32749)))) ? var_17 : var_6))) / (34 ^ 1966837701)));
                            arr_19 [i_4] [i_2] [i_3] = ((((((((arr_8 [i_3]) == var_13)) ? var_11 : (-5623870362963089280 != 1895614539)))) * (min(var_8, (7754134870212707784 / var_1)))));
                            arr_20 [i_1] [i_2] [i_1] [i_3] [i_2] [i_3] = (max((((min(var_12, -1993583368)) & (~var_8))), (max((144215094 != var_6), ((~(arr_8 [i_1])))))));
                            arr_21 [i_1] [i_2] [i_4] [i_4] = (((-57 / -16213) != var_11));
                        }
                    }
                }
                arr_22 [i_2] [i_2] [1] = (((var_6 && var_4) ? 60334 : ((var_4 ? -1060026655 : (arr_15 [i_1] [i_1] [i_1] [i_2])))));
                arr_23 [16] [13] = ((!(((var_1 ? (arr_7 [i_1]) : (arr_16 [i_2] [i_1] [i_2] [i_1] [i_1] [i_1]))))));
            }
        }
    }
    #pragma endscop
}
