/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111015
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = var_18;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_20 = (max(var_20, (((1926422449 >> (var_17 - 146))))));
                    arr_7 [4] [i_0] = (((arr_3 [i_0] [i_0]) ? ((((var_8 || (-32767 - 1))) ? var_9 : 4294967295)) : (arr_4 [i_0 + 2] [i_0 - 2])));
                    arr_8 [i_2] [2] [i_2] [i_2] |= 0;
                }
            }
        }

        for (int i_3 = 1; i_3 < 16;i_3 += 1)
        {
            arr_13 [i_0] [i_0] [i_3] = ((!(((min(0, -126))))));
            arr_14 [i_0] = (max((min((arr_9 [i_0 - 2] [i_0 - 2] [4]), 3776539174)), (0 - 102)));
        }
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            arr_19 [2] [i_0] = (-32767 - 1);
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 14;i_6 += 1)
                {
                    {
                        var_21 = (max(var_21, (((var_12 > ((((arr_3 [i_4] [i_4]) ? (arr_10 [i_0 + 2] [i_0 - 2] [i_6 + 1]) : (arr_10 [i_0 + 2] [i_0 + 1] [i_6 + 2])))))))));
                        arr_24 [0] [i_0] [i_5] [i_6] = ((((arr_9 [i_0 + 2] [i_0 - 2] [i_6 + 1]) + 1)));
                        arr_25 [9] [i_0] [i_4] [i_5] [i_0] = (((arr_11 [i_0] [i_0]) ? var_6 : (((1 ? 1 : (arr_23 [i_0] [i_4] [15]))))));
                        var_22 ^= ((max(1, (max(var_15, -126)))));
                        var_23 = (min(var_23, (arr_11 [i_4] [16])));
                    }
                }
            }
            arr_26 [8] [i_4] [i_4] |= 2929579905086166937;
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {

            for (int i_8 = 1; i_8 < 15;i_8 += 1)
            {
                var_24 = ((-((var_2 ? 1 : 1131813044))));
                arr_31 [i_0 + 1] [i_0] [16] = ((var_16 ? 15073394715937927458 : 0));
                /* LoopNest 2 */
                for (int i_9 = 3; i_9 < 16;i_9 += 1)
                {
                    for (int i_10 = 2; i_10 < 13;i_10 += 1)
                    {
                        {
                            arr_37 [i_0] [10] [i_10] = var_12;
                            var_25 = (17592186040320 & 0);
                            arr_38 [i_0] [1] [0] [1] [i_0] = (var_11 != 1);
                        }
                    }
                }
            }
            var_26 = (min(var_26, ((((arr_29 [12] [i_7]) ? 1 : (arr_28 [i_0 + 2] [i_7]))))));
        }
        var_27 = 323971395;
    }
    for (int i_11 = 3; i_11 < 9;i_11 += 1)
    {
        var_28 = (var_1 || var_16);
        var_29 = (max(var_29, ((((var_14 ^ 11) ? (((!(arr_32 [i_11] [i_11 + 1] [i_11] [i_11 - 1] [i_11 - 1] [i_11 - 3])))) : 1039669855)))));
        var_30 -= (arr_32 [2] [1] [i_11 - 1] [i_11] [i_11] [i_11]);
    }
    var_31 = (min(((15025 ? ((-5247321082774596599 ? 12 : var_4)) : 0)), ((((var_0 ? -30070 : 108))))));
    #pragma endscop
}
