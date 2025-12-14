/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161709
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, 62907));
    var_21 = 65522;
    var_22 = -6557252917724993892;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] [12] = (120 - 1);
        var_23 -= ((((~(max(var_9, -8017795167216345029)))) | (((-11937 ? var_8 : (arr_1 [9]))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_24 = (arr_5 [i_1]);
        arr_6 [i_1] = (arr_4 [i_1]);
    }
    for (int i_2 = 2; i_2 < 20;i_2 += 1)
    {
        arr_10 [i_2] = var_14;
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    {
                        var_25 ^= ((((max(((((arr_11 [i_4]) || (arr_15 [11] [11] [7])))), var_15))) ? (arr_12 [i_4] [i_5]) : (((((-(arr_9 [i_3] [i_3])))) ? (((arr_16 [i_5] [i_4] [i_2] [i_2]) / (arr_9 [i_3] [i_3]))) : var_5))));
                        var_26 = ((var_13 > ((1 ? var_11 : (((arr_12 [i_4] [i_5]) % (arr_11 [1])))))));
                    }
                }
            }
        }
        arr_18 [i_2 - 1] = ((-20233 ? 65519 : 1));
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        var_27 = (max(((max((max(var_11, var_7)), var_7))), ((var_19 ? (arr_20 [i_6]) : -1477039756))));

        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {
            var_28 = (((max((arr_13 [i_6]), var_10)) / (((var_17 ? var_3 : (arr_14 [i_7] [i_6] [i_6]))))));
            arr_24 [i_7] [i_6] [i_6] &= (((!((max(var_16, (arr_20 [i_6])))))));
            arr_25 [i_7] [i_7] [i_6] = ((!(((var_6 ? var_10 : var_6)))));
        }
    }
    #pragma endscop
}
