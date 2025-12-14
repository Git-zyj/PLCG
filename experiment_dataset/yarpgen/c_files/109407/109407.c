/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109407
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_0;
    var_19 = (max(var_19, (((-31188 ? var_16 : 227)))));
    var_20 = ((var_10 ? ((var_14 ? (((max(var_1, var_11)))) : (min(var_5, var_16)))) : ((((((-1846 ? var_13 : var_17)) == var_4))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    var_21 = (min(var_21, var_10));
                    var_22 = (min(var_22, var_5));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
                {
                    var_23 = (((arr_4 [i_0] [i_0 + 2]) ? (arr_4 [i_0] [i_0 - 1]) : (arr_4 [i_0] [i_0 + 2])));
                    var_24 = (((arr_2 [i_0 + 1] [i_0 + 1] [i_0]) ? var_0 : (arr_2 [i_0 + 2] [i_0 + 1] [i_0])));
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
                {
                    arr_12 [i_0] [i_0] [i_0] = ((-(((!(arr_0 [i_0] [i_0]))))));
                    arr_13 [i_0] = (((arr_10 [i_0 + 2] [i_0 + 1] [i_0 + 2]) ? 227 : (arr_10 [i_0 + 2] [i_0] [i_0 - 1])));
                    var_25 = (((arr_11 [i_0] [i_0] [i_0 + 1] [i_0]) ? (arr_8 [i_0]) : (arr_1 [i_0 - 1] [i_0 + 2])));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    var_26 ^= var_5;
                    var_27 = ((2096193057 ? 103 : -2096193057));
                    arr_18 [i_5] [i_5] |= ((var_1 ? 684675457 : -var_16));
                }
                /* LoopNest 3 */
                for (int i_6 = 1; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 12;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            {
                                arr_27 [i_0] [i_0] [i_6] = (((arr_21 [i_0] [i_0] [8] [i_7 + 2] [i_8]) ? ((-103 ? 96 : 2096193026)) : ((var_15 ? 1 : -2096193022))));
                                arr_28 [i_8] [i_7 - 1] [i_0] [i_0] [i_1] [i_0 + 2] = (min((arr_0 [i_0] [i_0]), (max(((0 ? 102 : var_9)), (((arr_6 [i_0] [1] [i_1] [i_0]) ? var_0 : var_16))))));
                            }
                        }
                    }
                }
                arr_29 [i_0] [i_1] = (min((arr_4 [i_0] [i_0]), ((27510 ? 189 : -1984464702717268413))));
            }
        }
    }
    #pragma endscop
}
