/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172161
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_13 = ((((max(((9223372036854775807 ? -32764 : 10)), (min(23263, (arr_2 [i_0])))))) ? 18446744073709551608 : (((((arr_1 [i_0] [i_0]) && var_11)) ? var_1 : (arr_0 [i_0])))));
        arr_4 [1] [1] = ((-((((arr_0 [i_0]) && (arr_0 [i_0]))))));
        var_14 = var_12;
    }
    for (int i_1 = 2; i_1 < 21;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 19;i_3 += 1)
            {
                {
                    var_15 = (min(var_15, (((min((arr_6 [i_1 - 1]), (arr_6 [i_1 + 1])))))));
                    var_16 &= (min((arr_12 [i_1] [i_3 - 1] [i_1]), (((1565103765 == (arr_12 [i_1] [i_3 - 1] [i_1]))))));
                    arr_13 [i_2] [i_2] = -1;
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 20;i_4 += 1)
                    {
                        for (int i_5 = 4; i_5 < 20;i_5 += 1)
                        {
                            {
                                arr_21 [i_2] [i_4] [i_3] [i_1] [i_2] [i_1] [i_2] = (((arr_12 [i_2] [4] [i_2]) ? (((arr_7 [i_1]) ? (((1 ? (arr_18 [i_1] [1]) : var_9))) : 2727380341)) : ((((!(((5 ? (arr_16 [i_2] [0] [0] [i_2] [i_2]) : -1063113733)))))))));
                                var_17 = (min(var_17, ((((((((((arr_11 [i_2] [i_2] [i_4 + 1] [i_5 + 1]) - (arr_15 [i_1] [8] [i_1] [12] [16])))) ? (max(266338304, var_8)) : 14))) | (((arr_11 [i_3 - 1] [i_3 - 1] [i_4 - 1] [i_5 - 1]) ? 9223372036854775807 : -999839658563964456)))))));
                                var_18 += 578686642;
                                var_19 = (max(var_19, ((max((((arr_17 [i_4] [i_4] [i_3] [i_5] [i_5 + 2]) ? -7311571869698738302 : (arr_8 [i_1]))), (((!(((-5140201930641380256 ? 18446744073709551601 : (arr_10 [i_1]))))))))))));
                                arr_22 [i_2] [i_3] [i_3 + 1] [i_4] [6] = (max(4294967295, 2147483647));
                            }
                        }
                    }
                }
            }
        }
        arr_23 [i_1] [i_1] = var_11;
    }
    var_20 |= (min(var_10, 2727380341));
    #pragma endscop
}
