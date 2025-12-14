/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15949
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_13 = ((((((!(arr_0 [i_0]))) && (arr_0 [i_0]))) || (((18446744073709551614 || -32206) || 13001285241199812817))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        arr_9 [i_0] [i_0] [i_0] [5] [i_1] [i_3] = arr_7 [i_0] [11];
                        arr_10 [i_0] [i_0] [i_0] = ((!((((arr_0 [1]) ? (arr_8 [i_0] [i_0] [i_2] [i_3] [1] [i_3]) : (arr_8 [i_0] [i_0] [i_1] [i_1] [i_2] [i_1]))))));
                    }
                    arr_11 [i_2] = ((((min((arr_7 [i_0] [i_0]), (arr_8 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))) ? var_0 : (((((arr_0 [i_1]) ? (arr_1 [1]) : 313982157)) + ((var_4 + (arr_0 [i_1])))))));
                    /* LoopNest 2 */
                    for (int i_4 = 4; i_4 < 12;i_4 += 1)
                    {
                        for (int i_5 = 4; i_5 < 12;i_5 += 1)
                        {
                            {
                                arr_17 [i_5] [i_2] [i_5] = (arr_15 [i_0] [i_0] [1] [i_4] [i_5]);
                                arr_18 [i_0] [i_1] [i_2] [i_5] [i_5] = ((((max((0 == var_9), 111))) ? ((52165 ? 4294967278 : 6809053120173625527)) : 1));
                            }
                        }
                    }
                }
            }
        }
        arr_19 [i_0] = (((((~((7 ? (arr_8 [i_0] [i_0] [6] [i_0] [i_0] [i_0]) : (arr_13 [6] [i_0])))))) ? (((((6317 ? (arr_0 [i_0]) : 23585))) ? ((~(arr_3 [i_0]))) : var_5)) : (((~(((arr_14 [i_0]) ? -18886 : (arr_5 [8] [i_0] [i_0]))))))));
        arr_20 [i_0] [i_0] = (min((((-(arr_8 [9] [9] [9] [9] [i_0] [i_0])))), (((((-6 ? (arr_5 [i_0] [i_0] [i_0]) : var_0))) * (arr_3 [i_0])))));
    }
    for (int i_6 = 4; i_6 < 22;i_6 += 1)
    {
        var_14 = ((((arr_22 [i_6 - 1] [i_6]) > (arr_22 [i_6 + 1] [i_6]))) ? (((!(arr_22 [i_6 + 1] [i_6 - 2])))) : ((-(arr_22 [i_6 + 1] [i_6]))));
        var_15 = (min(((((max(var_9, 5))) ? (max(16, var_7)) : (0 % 1))), ((((max((arr_23 [i_6]), var_1)) >> ((0 ? (arr_23 [i_6]) : 7)))))));
        var_16 |= (min((min((arr_21 [i_6 + 1]), (arr_21 [i_6 + 2]))), (arr_21 [i_6 - 3])));
        arr_24 [1] = min((((((((!(arr_21 [i_6]))))) == 0))), ((((((arr_23 [i_6]) ^ var_1))) ? ((~(arr_21 [i_6]))) : ((var_1 ? var_10 : (arr_21 [i_6]))))));
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        arr_29 [i_7] = (max((((!(((var_1 ? 115 : (arr_26 [i_7]))))))), (min((arr_25 [i_7]), ((63 ? 24 : -18881))))));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 25;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 25;i_9 += 1)
            {
                {
                    var_17 = ((((((((var_0 ? (arr_31 [i_9] [i_7] [i_9]) : 5))) ? (((!(arr_31 [i_9] [10] [i_7])))) : var_0))) ? (max((arr_26 [i_8]), 4294967286)) : (((min(65528, -14807))))));
                    arr_36 [i_7] [i_7] [i_9] = ((((min((((var_6 ? 1 : (arr_27 [i_7])))), (arr_30 [i_7] [i_7])))) ? ((var_6 ? (arr_30 [i_7] [i_8]) : (arr_30 [i_7] [i_9]))) : (-127 - 1)));
                    var_18 = ((2040 || (~var_11)));
                    var_19 = ((!((min(74, 1)))));
                    arr_37 [i_9] [i_8] [i_9] = (max(2147483632, (~1)));
                }
            }
        }
        var_20 = ((~(((arr_25 [i_7]) ? (max(var_6, (arr_34 [i_7] [i_7] [i_7]))) : var_10))));
    }
    var_21 = var_4;
    var_22 &= ((var_4 ? var_7 : (((max(var_0, var_0))))));
    #pragma endscop
}
