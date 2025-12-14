/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115096
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_1] = (((((-91 && var_8) ? (arr_4 [21] [1] [i_2]) : (((arr_5 [i_1]) / (arr_7 [i_0] [13] [1] [10]))))) < (arr_7 [17] [i_2] [i_1] [17])));
                    arr_9 [i_0] [20] [i_1] = (!var_9);

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {

                        for (int i_4 = 3; i_4 < 21;i_4 += 1)
                        {
                            var_19 = ((((((var_8 ? var_6 : 1)))) ? (max(3031797846, -3022144705353264087)) : (((-(arr_15 [i_1] [5]))))));
                            arr_16 [6] [i_1] [1] [9] [i_4] [i_3] [21] = -27466;
                            var_20 += ((((!var_8) ? ((var_8 ? -6000855726381986476 : 8774955280975726827)) : 1)));
                        }
                        var_21 = (max(var_21, var_18));
                    }
                    var_22 = (min(var_22, ((max(var_17, (arr_0 [i_0]))))));
                }
            }
        }

        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            arr_20 [11] = ((~(((((1 ? (arr_0 [12]) : -2068493107604611233))) ? (min(var_11, var_6)) : var_17))));
            arr_21 [i_0] = ((var_10 ? (((arr_11 [i_0] [i_5] [i_5] [22] [i_0]) ? (arr_11 [1] [i_5] [i_0] [22] [i_5]) : (arr_11 [i_0] [10] [i_0] [12] [10]))) : (max(var_9, -9223372036854775803))));
            var_23 -= (min((((arr_7 [22] [i_0] [i_5] [i_5]) / -6000855726381986471)), (((((((!(arr_19 [i_0]))))) & ((2854948395 ? var_13 : var_7)))))));
        }
        arr_22 [i_0] = ((~(-9223372036854775807 - 1)));
    }
    var_24 &= (max((((!var_13) ? (!var_7) : (min(var_7, var_3)))), 18929));
    var_25 += var_3;
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 10;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 9;i_8 += 1)
            {
                {
                    arr_32 [9] [i_7] [i_8] = var_8;
                    arr_33 [i_8] [6] = ((((((var_14 ? (arr_24 [i_6]) : 0)))) ? ((((arr_17 [i_8] [i_8 - 2] [i_8 - 1]) ? var_12 : (arr_17 [1] [i_8 - 2] [i_8 + 1])))) : (((((var_1 ? (arr_12 [6] [i_7] [11] [15]) : (arr_23 [3] [i_8])))) | (0 & 0)))));
                    var_26 = ((max(var_15, 750507827)));
                    arr_34 [i_6] [3] [i_8] = var_4;
                }
            }
        }
    }
    #pragma endscop
}
