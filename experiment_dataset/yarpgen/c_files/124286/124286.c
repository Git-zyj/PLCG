/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124286
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (-(((((var_1 ? 34 : var_3))) ? (((-8734 ? 168684061 : -25))) : (min(var_5, -425205474)))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    arr_7 [i_2] [i_0] [i_0] = ((-((min((((var_8 == (arr_0 [i_1])))), var_8)))));
                    arr_8 [i_0] [i_1] [17] [i_2] = arr_4 [1] [21];

                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        arr_11 [i_3] [i_2] [i_1] [i_0] = (((((((var_4 ? (arr_10 [i_0] [i_1] [i_1] [18] [i_1] [1]) : var_9)) | ((-425205474 ? (arr_10 [i_0 - 3] [i_0] [i_0 - 3] [15] [i_0] [4]) : var_0))))) ? (((arr_2 [i_0 - 4]) + var_7)) : (var_2 <= var_4)));
                        arr_12 [13] [14] = ((((min((-16 - var_9), (arr_9 [i_2])))) ? ((((max(var_8, 26781))) ? (-1038338073 > var_3) : (((arr_1 [i_0]) >> (37187 - 37126))))) : ((((((max((arr_5 [i_0 + 2] [i_1]), 26781))) && (arr_2 [i_2])))))));

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            arr_16 [i_0] [21] [i_2] [11] [8] [i_4] [6] = ((-((((arr_10 [12] [13] [i_4] [i_3] [i_3 + 3] [9]) == var_1)))));
                            arr_17 [i_0] [4] [i_2] [21] [i_4] = (max(((((((-5294494330912934280 ? var_7 : -29705))) && 29690))), ((((min((arr_10 [20] [i_0] [i_0] [i_0] [i_0 - 4] [i_0]), var_1))) ? ((4851560138801990984 ? var_9 : var_0)) : (!29795)))));
                            arr_18 [i_0] [i_0 + 1] [19] [i_0] [18] [7] = ((!(~18446744073709551612)));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
                        {
                            arr_21 [i_0] [i_0] [i_5] [i_0] [i_5] = 28;
                            arr_22 [i_5] = ((~((((arr_14 [i_0] [i_0] [i_0] [i_2] [i_0] [15] [i_5]) <= var_6)))));
                            arr_23 [i_0 - 4] [i_5] [7] [i_0 - 2] [i_0 - 4] [i_0] [i_0 - 4] = var_4;
                            arr_24 [16] [i_3 - 1] [i_3] [i_5] [i_3] [18] = (((arr_6 [i_0] [i_0] [i_0] [i_0 - 2]) == var_5));
                        }
                        for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
                        {
                            arr_28 [i_6] [i_6] [i_2] [i_2] [i_2] = var_3;
                            arr_29 [i_0] [i_6] = ((((min((!6170), (arr_14 [i_0] [i_0 - 2] [19] [i_0] [i_0] [i_0] [i_0 + 2])))) ? (var_4 | var_8) : var_9));
                            arr_30 [7] [21] [i_3] [i_6] = ((var_6 ? var_9 : (!9)));
                        }
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
                    {
                        arr_33 [i_0] [i_0 - 3] = (((arr_27 [i_0 + 2]) <= (arr_27 [i_0 - 1])));
                        arr_34 [i_7] [i_2] [i_2] [i_0 - 1] [i_0 - 1] = (var_2 != var_1);
                        arr_35 [i_0] [i_0] [i_0] [i_0 + 1] [i_0] = (((~29795) ? -16673 : var_6));
                        arr_36 [11] [6] [19] [i_2] [i_7] = ((((((arr_2 [i_0 - 3]) && 1))) / var_3));
                    }
                    for (int i_8 = 0; i_8 < 22;i_8 += 1) /* same iter space */
                    {
                        arr_39 [1] [1] [i_1] [1] = (((40545 > 1) >> (var_7 - 852118325)));
                        arr_40 [i_2] [i_2] [19] [19] = ((!(((40546 ^ (max(var_7, 208)))))));
                        arr_41 [5] [5] = ((((65535 ? ((((arr_15 [i_1] [i_1]) ? var_2 : -16673))) : ((var_0 ? var_6 : 1)))) + ((min(-16, var_7)))));
                    }
                    for (int i_9 = 0; i_9 < 22;i_9 += 1) /* same iter space */
                    {
                        arr_45 [19] [21] [i_1] [i_0] [i_0] [i_0] = ((1 >> (14472786935250951389 - 14472786935250951359)));
                        arr_46 [i_2] [i_2] [4] = (min(-69, (((24052 | 1) ? (!6953) : (arr_25 [i_0 + 2] [i_0 + 2] [i_0 - 3] [i_0 + 2] [i_9])))));
                    }
                    arr_47 [i_0 - 2] [i_1] [i_2] [i_2] = (~15350621640836589327);
                    arr_48 [i_0] [i_0] [i_0] [i_2] = var_2;
                }
                arr_49 [i_1] [i_0] [i_0] = var_2;
            }
        }
    }
    var_11 = (-var_0 && var_8);
    #pragma endscop
}
