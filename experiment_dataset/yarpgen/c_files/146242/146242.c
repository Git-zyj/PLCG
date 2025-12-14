/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146242
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    arr_9 [i_1] = (max((arr_6 [i_0] [10] [i_0] [i_0 + 3]), var_9));
                    var_13 ^= (((((((((arr_7 [i_0 + 2] [10] [10]) <= var_8))) ^ var_12))) ? ((max(((~(arr_8 [i_0] [3] [i_0 - 1] [i_0]))), -0))) : ((-1 / (arr_4 [i_2] [i_2 + 1])))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            {
                arr_15 [i_3] = (234 ? (((0 ? 0 : (arr_10 [i_3] [i_4])))) : var_7);
                var_14 -= var_12;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 15;i_6 += 1)
        {
            {
                var_15 = (((((var_7 - (arr_20 [i_5]))) ^ (0 | var_5))));
                var_16 = 14336;

                for (int i_7 = 2; i_7 < 16;i_7 += 1)
                {

                    for (int i_8 = 1; i_8 < 18;i_8 += 1)
                    {
                        var_17 = (((((-6932497867484287650 ? (arr_18 [i_7] [i_7]) : var_2)) * var_0)));
                        var_18 = ((((var_8 / (arr_23 [i_8 + 1] [i_6] [i_7 + 3] [i_6 - 2]))) == (((max(53454, 6161))))));
                        arr_28 [i_5] [i_6] [i_5] [i_5] = (((min(4319, 6193209306833519955)) | (8 & 2)));
                    }
                    var_19 = (max(var_19, var_3));
                }
                for (int i_9 = 0; i_9 < 19;i_9 += 1) /* same iter space */
                {
                    var_20 = (max(var_20, 0));
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 17;i_10 += 1)
                    {
                        for (int i_11 = 2; i_11 < 16;i_11 += 1)
                        {
                            {
                                arr_36 [17] [i_6] = ((var_5 & (var_12 + 1051962284)));
                                var_21 = (((((arr_34 [i_5] [2] [6] [2] [i_6] [3]) ? (arr_23 [i_5] [i_6] [i_11] [i_10]) : (var_1 + 0))) ^ ((var_3 ? (arr_33 [i_6] [i_6] [i_6] [i_6]) : var_1))));
                                var_22 = ((((!(~var_8))) ? (arr_27 [i_5]) : ((var_7 / (max(var_10, (arr_23 [i_9] [7] [i_9] [18])))))));
                                var_23 |= ((((var_11 ? var_3 : var_11))) / (var_8 / var_3));
                            }
                        }
                    }

                    for (int i_12 = 4; i_12 < 18;i_12 += 1)
                    {
                        arr_39 [17] [17] [17] [i_6] [13] [i_12] = (min((((arr_17 [i_5]) ? 65535 : (arr_17 [i_12 + 1]))), (((arr_17 [i_5]) ? 143 : (arr_17 [i_6 - 1])))));
                        var_24 = (((arr_33 [1] [i_6] [2] [i_12]) ? (24894 / 14336) : 24897));
                        var_25 = (((((65535 ? 170 : 14))) ^ ((((((arr_35 [10] [10] [i_9] [i_9] [i_9] [i_6] [i_6]) + (arr_16 [14])))) ? (arr_21 [i_12] [i_12] [i_6]) : (max((arr_18 [5] [i_12 - 3]), 72055395014672384))))));
                    }
                    arr_40 [i_5] [i_6] = ((!(((arr_17 [i_6 + 1]) || (arr_17 [i_6 + 3])))));
                }
                for (int i_13 = 0; i_13 < 19;i_13 += 1) /* same iter space */
                {
                    var_26 = var_0;
                    var_27 |= ((((((var_1 && var_0) < var_7))) <= ((min(var_6, (arr_32 [i_13] [i_5] [i_6] [18] [i_5] [i_5]))))));
                    var_28 = (max(var_28, ((~(((arr_38 [i_5] [i_5] [i_6 - 2]) ? var_5 : var_3))))));
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 19;i_14 += 1)
                    {
                        for (int i_15 = 1; i_15 < 15;i_15 += 1)
                        {
                            {
                                var_29 = ((!(arr_42 [i_14] [i_5] [i_5])));
                                var_30 = ((arr_18 [i_5] [i_5]) ? (((var_3 / (arr_45 [5] [i_6 - 3] [5] [i_6] [i_6 - 2] [16])))) : var_8);
                                var_31 = ((min((((arr_18 [i_5] [i_6]) ? (arr_43 [i_5] [i_5] [i_5] [i_5]) : var_11)), (arr_33 [3] [i_6] [i_6 - 2] [i_6]))));
                                arr_49 [i_6] [i_6] [i_13] [i_5] [i_15] [13] [15] = (arr_19 [i_5]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 19;i_16 += 1)
                    {
                        for (int i_17 = 3; i_17 < 18;i_17 += 1)
                        {
                            {
                                arr_56 [i_5] [i_6] [i_13] [7] [i_6] [12] = (((min(7984443202930798927, 15))) ? ((var_10 ? var_10 : (((40628 ? 57887 : -32482))))) : 10);
                                arr_57 [i_6] [i_6] [15] [i_16] [i_5] [i_13] [2] = -15;
                            }
                        }
                    }
                }
            }
        }
    }
    var_32 = var_4;
    #pragma endscop
}
