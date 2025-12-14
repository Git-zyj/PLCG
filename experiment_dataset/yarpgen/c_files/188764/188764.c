/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188764
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_4 [23] [23] [3] = ((!(((~(arr_3 [i_0] [1] [i_1]))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_12 = ((!((max(var_2, var_3)))));
                            var_13 = 2602792985;
                        }
                    }
                }
            }
        }
    }
    var_14 = max(((((max(var_8, var_6))) ? var_0 : var_7)), ((max(var_11, var_10))));
    var_15 -= (!var_5);
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 23;i_5 += 1)
        {
            {
                var_16 = var_6;
                var_17 = max((arr_13 [i_5 + 1] [i_5 - 1]), ((var_8 ? (arr_13 [i_5 - 1] [i_5 - 1]) : -1101977919)));
                var_18 = ((arr_11 [i_4]) ? ((max(var_6, var_10))) : (((arr_13 [i_4] [i_5 + 1]) ? var_0 : (arr_11 [i_4]))));
            }
        }
    }

    for (int i_6 = 3; i_6 < 21;i_6 += 1)
    {
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 24;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 24;i_9 += 1)
                {
                    {
                        var_19 = (arr_1 [i_9]);
                        arr_26 [i_9] [i_8] [i_7] [13] = ((-(arr_5 [i_6 - 3] [5] [10])));

                        for (int i_10 = 0; i_10 < 24;i_10 += 1)
                        {
                            var_20 = 6212879186643186699;
                            var_21 = ((!(!-var_8)));
                        }
                        for (int i_11 = 3; i_11 < 22;i_11 += 1)
                        {
                            arr_32 [i_6] [i_6] [i_6] [i_6] = (arr_19 [i_7] [i_7] [i_11]);
                            var_22 = 100;
                        }
                        /* vectorizable */
                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            arr_36 [14] [i_12] [i_9] [i_8] [i_8] [i_7] [i_6 + 1] = ((14105051943459605644 ? 1 : -105));
                            var_23 = (~var_11);
                        }
                        var_24 = (((arr_5 [i_6] [i_7] [18]) == (((-(arr_14 [i_6 - 2] [i_6 + 1] [i_6 + 1]))))));
                        var_25 ^= (((~var_1) / (((arr_8 [i_6 + 1] [i_6 + 1] [i_6 - 3] [i_6 + 2] [i_6]) ? (arr_8 [i_6 - 2] [i_6 - 3] [i_6 + 1] [i_6 + 1] [i_6 + 1]) : -56))));
                    }
                }
            }
        }
        arr_37 [22] = (arr_14 [i_6] [i_6] [i_6]);
    }
    for (int i_13 = 2; i_13 < 23;i_13 += 1)
    {
        arr_40 [0] [i_13] = 127;
        arr_41 [i_13 - 2] = (~20450);
    }
    #pragma endscop
}
