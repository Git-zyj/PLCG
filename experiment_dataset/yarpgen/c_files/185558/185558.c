/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185558
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (var_13 * var_0);
    var_17 = (((((max(19476, -425293764)) * var_0))) ? ((((11187 ? var_0 : 11187)) * var_0)) : ((((max(-1, 1455402518))) ? var_14 : ((var_2 ? 10640 : var_4)))));
    var_18 = 1;
    var_19 = ((var_6 ? 11811 : 11815));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (!var_11);
        var_20 = (arr_2 [i_0]);
        var_21 = (max(var_21, 1));
        arr_5 [i_0] [i_0] = ((var_13 ? ((1674 * (arr_3 [i_0]))) : ((var_12 ? (arr_0 [i_0] [i_0]) : -29099))));
    }
    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {
        arr_8 [1] = ((((((arr_7 [i_1]) | ((((arr_3 [1]) && 29112)))))) ? (((!(arr_2 [14])))) : (29111 - -var_14)));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 15;i_3 += 1)
            {
                {
                    var_22 = ((((((arr_9 [i_1 + 1] [i_3]) ? (((arr_12 [10] [i_2] [i_1] [i_2]) * -28956)) : (arr_6 [i_2] [i_1 - 1])))) ? ((((-11188 | (arr_9 [i_2] [i_3]))))) : (((arr_6 [11] [i_1]) - var_12))));
                    var_23 = ((((!(arr_12 [i_1] [i_2] [i_1] [i_2]))) ? 15093218402964339045 : ((((arr_9 [i_3] [i_2]) >> (-var_14 + 61902))))));
                    arr_14 [i_1] [1] = (((max(((var_7 ? (arr_6 [i_1 - 1] [8]) : 14545)), (18320 * 1))) * ((+((-28137 ? (arr_7 [i_3]) : var_2))))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        arr_17 [i_4] [i_4] = (arr_15 [i_4]);
        arr_18 [i_4] [i_4] = (~1);
        var_24 = var_3;
    }
    #pragma endscop
}
