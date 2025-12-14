/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147979
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_14 &= (min((((!((max(var_3, 776448261)))))), (((36522 ? 11853299479133907506 : 1440811117)))));
                arr_6 [1] [i_0] [i_1] &= ((var_6 <= (arr_1 [i_0] [i_0])));
                var_15 += -8649;
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
    {
        var_16 ^= ((11853299479133907483 ? var_6 : (arr_0 [i_2])));
        var_17 = (arr_1 [i_2] [i_2]);
        arr_11 [11] = (arr_8 [i_2] [1]);
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
    {
        var_18 = (~var_5);
        arr_15 [i_3] = ((((arr_14 [i_3] [i_3]) ? (arr_5 [11] [i_3] [13]) : var_3)));
        arr_16 [i_3] = (((arr_14 [i_3] [1]) ? ((((6593444594575644131 ? var_10 : 1849710365)))) : (((arr_8 [i_3] [10]) ? 6593444594575644107 : (arr_8 [i_3] [i_3])))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                {
                    var_19 = (~6911539144736009067);
                    var_20 = (min(var_20, -88));
                    var_21 += ((((min((((255 ? (arr_21 [i_3] [i_3]) : -88))), ((3693826640 ? 6593444594575644101 : 6593444594575644107))))) ? var_5 : ((((((-7 * (arr_3 [i_5] [i_4] [i_5])))) ? (((arr_0 [6]) / var_1)) : (arr_0 [i_3]))))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
    {
        var_22 = (max(var_22, ((((arr_5 [i_6] [i_6] [i_6]) == var_7)))));
        var_23 = ((((((arr_8 [i_6] [i_6]) ? 68 : 1023))) ? (arr_5 [i_6] [i_6] [7]) : (((arr_18 [14] [14] [i_6]) ? 11853299479133907496 : (arr_7 [i_6])))));
    }
    for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_8 = 4; i_8 < 12;i_8 += 1)
        {
            for (int i_9 = 3; i_9 < 13;i_9 += 1)
            {
                {
                    arr_32 [i_8] = (min(0, ((255 ? 5442545741947870427 : 601140656))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 16;i_11 += 1)
                        {
                            {
                                var_24 = ((3663662768299246821 ? (((33 ? 116742625 : 24))) : (min((min(601140679, 6593444594575644110)), 11853299479133907511))));
                                arr_40 [i_9] [i_9] [2] [i_7] = ((((!(arr_27 [i_7] [i_7]))) ? -82 : (arr_9 [i_8])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 16;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 1;i_13 += 1)
                        {
                            {
                                arr_47 [i_7] [i_7] [10] [i_7] [i_7] = (arr_34 [4] [i_8] [i_9]);
                                var_25 &= ((((((arr_42 [i_7] [2] [i_9] [i_12]) ? ((((-57390677 + 2147483647) >> (((arr_33 [i_7]) - 17894782997797715050))))) : (max(var_7, var_10))))) ? ((max(192, 169))) : 41));
                            }
                        }
                    }
                }
            }
        }
        arr_48 [i_7] = (arr_35 [i_7] [i_7] [i_7] [i_7] [i_7]);
        arr_49 [i_7] = ((+(max((arr_19 [4] [i_7] [i_7]), (arr_19 [i_7] [i_7] [i_7])))));
        arr_50 [5] = (((var_2 ? (arr_17 [i_7]) : 64)));
    }
    var_26 = ((-((max((24125 == 8720732068080572683), var_0)))));
    #pragma endscop
}
