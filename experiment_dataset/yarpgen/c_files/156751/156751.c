/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156751
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [i_0] = ((((((!(215187901 > var_1))))) >= ((var_7 ? (max(6, (arr_1 [i_0]))) : (342267486 + var_15)))));
                arr_7 [i_1] = ((var_7 != (max(116, var_12))));
                arr_8 [i_1] [i_1] = 116;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            {
                arr_16 [0] [i_3] = ((110 ? ((342267486 ? (((arr_13 [i_2] [i_2]) ? var_2 : var_3)) : (arr_14 [i_3]))) : (((255 ^ ((max(146, (arr_9 [i_2] [i_2])))))))));
                arr_17 [i_2] [i_2] = (max(var_0, (max((arr_12 [i_2 + 1]), (arr_12 [i_2 + 1])))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        {
                            arr_24 [i_2] [i_2] = ((((max(28, (arr_9 [i_2] [i_2])))) && (!4193026168)));
                            arr_25 [i_2] [i_3] [i_2] = ((~((2932288748 ? (arr_23 [i_2] [i_2 + 2] [i_2 + 2] [i_2 + 2]) : var_3))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 17;i_7 += 1)
                    {
                        {
                            arr_30 [4] = (max(((-(arr_23 [i_2] [8] [i_2 + 2] [i_7 - 1]))), 253));
                            arr_31 [8] [i_2] [i_2] [6] [i_2] = ((!((max(var_1, ((var_12 ? var_15 : 107)))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 18;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 18;i_9 += 1)
                    {
                        {
                            arr_39 [8] [i_8] [i_8] [i_3] [i_2] = ((((((arr_29 [i_9] [i_8] [i_8] [i_9]) >> ((((var_11 ? 37 : (arr_27 [i_2] [i_3] [i_8]))) - 36))))) > (((max(var_11, 1696956100)) >> (var_4 % var_4)))));
                            arr_40 [13] [i_9] [i_8] [i_2] [i_3] = ((!(((arr_11 [i_2]) && 110))));
                            arr_41 [i_2] [i_8] = ((3486101010 || (((((2396119431 ? var_14 : (arr_35 [i_2] [i_9] [i_8] [i_9])))) && (arr_32 [i_2] [i_2] [i_2 + 2] [i_2])))));
                        }
                    }
                }
            }
        }
    }
    var_18 = var_7;
    var_19 = (var_8 ? var_6 : (max(var_14, var_14)));
    #pragma endscop
}
