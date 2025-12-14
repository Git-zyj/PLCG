/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135838
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_1;
    var_19 = (max(-79, var_6));

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_20 += ((~((~(arr_0 [i_0 + 2] [i_0 + 2])))));
        arr_2 [1] = ((214 ^ (((var_17 ? (min((arr_0 [i_0] [i_0]), var_4)) : var_15)))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_21 += 609;
        arr_6 [i_1] = (((((max(-11, 18565))) ? (var_15 <= -2150182444297152450) : (arr_3 [i_1]))));
        arr_7 [i_1] [5] = 1287988855;
        var_22 ^= ((!(arr_3 [8])));
    }
    for (int i_2 = 1; i_2 < 22;i_2 += 1)
    {
        var_23 = (min(var_23, (((!(25 != 1287988855))))));
        var_24 = (((arr_11 [i_2 + 1]) ? 1287988855 : var_10));
        arr_12 [i_2] = (-3126637250957300847 ? 0 : 1349897394812894738);
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_25 |= (max(var_14, (min(var_17, (arr_4 [i_3])))));
        var_26 = (max(var_26, (((3006978441 ? (((!(arr_3 [13])))) : (((var_11 && (arr_9 [i_3])))))))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                {
                    arr_24 [i_3] = (max((arr_13 [i_5] [i_4]), ((72057594037927935 | (-90 | 3006978440)))));
                    arr_25 [i_3] [i_3] [i_5] [i_4] = 0;
                }
            }
        }
    }
    var_27 = (-1349897394812894735 < (((((var_4 / var_15) || var_3)))));
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 20;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            {
                                arr_40 [7] [i_7] [i_8] [i_9] [i_10] = (!1287988855);
                                arr_41 [17] [i_7] [i_8] [i_9] [i_9] = 1;
                            }
                        }
                    }
                }
                var_28 = (min(((-1220584467 ? 1287988855 : 3480917736)), ((var_1 ? (0 ^ var_13) : (arr_38 [i_6] [i_6] [17] [17] [i_6] [6] [9])))));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 0;i_11 += 1)
                {
                    for (int i_12 = 3; i_12 < 19;i_12 += 1)
                    {
                        {
                            var_29 = ((!((min(var_4, (arr_47 [13] [i_11] [i_11] [i_11 + 1]))))));
                            arr_49 [i_12] [i_11] [i_11] [i_6] = 3006978440;
                            var_30 -= (arr_47 [i_6] [i_7] [i_6] [18]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_13 = 3; i_13 < 18;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 20;i_14 += 1)
                    {
                        {
                            var_31 = (min(var_31, 1));
                            arr_55 [0] [i_13] [0] [17] [i_7] = -8;
                            arr_56 [i_13] = var_10;
                        }
                    }
                }
                arr_57 [i_6] |= 0;
            }
        }
    }
    #pragma endscop
}
