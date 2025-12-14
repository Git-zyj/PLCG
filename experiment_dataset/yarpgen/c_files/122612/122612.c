/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122612
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((!43914) && 5599058750077946139)));
    var_20 = (((((var_0 ? ((1 ? var_16 : var_5)) : (!var_18)))) ? (((21172 >= var_9) * (min(var_12, 0)))) : ((((!(~var_5)))))));

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_21 = (((~-207) ? 48 : (arr_0 [i_0])));
                    var_22 = ((!(((((((arr_6 [i_0]) ? var_18 : (arr_3 [i_0] [i_0])))) ? (((47836 ? var_13 : 0))) : (arr_1 [i_0 + 3]))))));
                }
            }
        }
        var_23 = ((((min((arr_0 [i_0 + 2]), (arr_0 [i_0 + 3])))) ? 511 : ((var_13 ? ((1605879119125176965 >> (1635889233 - 1635889202))) : var_14))));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_24 = ((((((arr_0 [i_3]) ? (arr_6 [i_3]) : 0))) % (((arr_6 [i_3]) ? (((127 ? (arr_8 [i_3]) : var_8))) : (min((arr_5 [i_3] [i_3] [i_3] [i_3]), 8946606850983064756))))));
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                {
                    arr_14 [i_4] [i_4 - 1] = -115;
                    var_25 = (((var_5 % (((arr_8 [i_3]) ? 44364 : 16840864954584374651)))));
                    arr_15 [i_3] [i_4 + 4] [i_4 - 1] [i_4] = ((~(((arr_11 [i_5]) ? ((((arr_8 [i_5]) ? (arr_8 [i_4 - 1]) : (arr_10 [i_5] [1])))) : ((8454625273074231277 % (arr_13 [i_4] [i_4 + 3] [i_4 + 1])))))));
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 22;i_6 += 1)
    {
        var_26 = ((-(min(((((arr_17 [i_6] [16]) * 0))), ((8564 ? (arr_1 [i_6]) : var_16))))));
        var_27 = ((~(((!((min((arr_17 [i_6] [i_6]), 26))))))));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            for (int i_8 = 4; i_8 < 18;i_8 += 1)
            {
                {
                    arr_22 [i_6] [10] [i_8] [i_8] = ((21172 ? -10964 : 127));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            {
                                arr_29 [2] [2] [4] [i_9] [2] = var_15;
                                var_28 = ((-75 ? 44364 : 9223372036854775807));
                                var_29 = ((!((((arr_0 [i_8 - 1]) ? ((((arr_25 [i_6] [i_7] [i_6]) >> 0))) : (arr_24 [i_8 + 3] [i_8 + 4] [i_8 - 2] [i_8 - 3]))))));
                                var_30 = ((-((((max((arr_16 [i_6]), 4212799862250553732)) != var_0)))));
                            }
                        }
                    }

                    for (int i_11 = 0; i_11 < 22;i_11 += 1)
                    {
                        arr_33 [i_11] [i_6] [i_7] [i_7] [i_6] [i_6] = ((-((((arr_30 [i_8 - 2] [i_7] [i_8] [i_8]) < ((2147483647 ? var_14 : var_9)))))));
                        var_31 = arr_30 [1] [i_7] [i_7] [6];
                    }
                }
            }
        }
    }
    var_32 = (max(var_32, (((((max(((var_8 ? var_16 : var_0)), (11889402240287417 > 0)))) ? ((-1635889233 >> ((var_1 ? 0 : 280925220896768)))) : ((((!((max(var_12, var_8))))))))))));
    #pragma endscop
}
