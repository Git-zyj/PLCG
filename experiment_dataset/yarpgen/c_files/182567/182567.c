/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182567
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_10 = (min((arr_1 [i_0]), (((!(((var_7 ? var_6 : 231))))))));
        var_11 = var_2;
        var_12 = (max(var_12, var_3));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_13 = (!-2318397935826492897);
        var_14 -= (arr_5 [i_1] [i_1]);
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    {
                        var_15 -= var_1;
                        arr_17 [i_1] [i_2] [i_1] [i_4] = ((((((arr_13 [i_3 + 2] [i_3 + 2] [i_3 + 2] [i_3 + 2]) ? 12717 : 61688))) ? (arr_13 [i_3 - 1] [i_3 - 1] [i_3 + 2] [i_3 + 2]) : var_1));
                        var_16 = (((((!var_8) || var_7)) ? 42092 : (((arr_14 [i_1]) ? var_7 : 50782))));
                    }
                }
            }
        }
        var_17 = (42092 / 5);
        arr_18 [i_1] [i_1] = (min((arr_8 [i_1]), (arr_9 [i_1] [i_1] [i_1])));
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        arr_22 [i_5] = (arr_1 [i_5]);
        arr_23 [i_5] = var_0;
        arr_24 [i_5] = ((((min((arr_20 [i_5]), (arr_20 [i_5])))) + (((arr_15 [i_5] [i_5]) ? var_6 : 77))));
        arr_25 [i_5] [i_5] = (min(-1, 25));
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    {
                        arr_35 [i_5] [i_6] [i_5] [i_8] = (((((77 ? 187 : 4294967295))) ? (((((1 ? 5 : var_7))))) : ((var_8 ^ (~var_6)))));
                        var_18 = (min(var_18, ((min((max(85, 2147483637)), (28 && var_4))))));
                    }
                }
            }
        }
    }
    var_19 = (min(var_19, 127));
    /* LoopNest 3 */
    for (int i_9 = 3; i_9 < 23;i_9 += 1)
    {
        for (int i_10 = 2; i_10 < 22;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 24;i_11 += 1)
            {
                {
                    arr_44 [i_9] [i_9] [15] [i_10] = (arr_41 [i_9 - 3] [i_10 + 1] [i_10 + 1]);
                    var_20 = 48262;
                    /* LoopNest 2 */
                    for (int i_12 = 1; i_12 < 21;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 24;i_13 += 1)
                        {
                            {
                                var_21 |= (-28863 + 4095);
                                var_22 = (((max((min(var_6, var_0)), var_2))) ^ 3060);
                                arr_49 [i_9] [i_10] [i_11] [i_12] [i_13] = ((((arr_48 [i_13] [i_12 + 3] [i_11] [i_10 + 2] [i_9 - 3]) ? 21007 : (arr_48 [i_9 + 1] [i_9] [i_9 + 1] [i_9 + 1] [i_9 + 1]))));
                                var_23 = (arr_43 [i_10]);
                                arr_50 [i_10] = var_0;
                            }
                        }
                    }
                    arr_51 [i_10] [i_10] [i_10] = ((((-20216 ? var_0 : (arr_41 [i_9 - 2] [i_9 + 1] [i_10 - 1]))) * (!61688)));
                    /* LoopNest 2 */
                    for (int i_14 = 2; i_14 < 23;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 24;i_15 += 1)
                        {
                            {
                                arr_58 [i_9 - 3] [i_10] [i_11] [i_10] [i_15] = var_6;
                                var_24 = (((arr_40 [i_11]) ? ((((23444 ? var_4 : (arr_46 [i_9] [i_10] [i_9] [i_14 + 1] [15] [i_15]))) ^ (arr_54 [i_15] [i_14 - 2] [i_15] [i_14 - 2]))) : ((min(((-(arr_42 [i_9] [i_10] [i_14] [i_15]))), -0)))));
                                var_25 = (min(var_25, (((!((((((~(arr_41 [i_9] [i_10] [3])))) ? var_3 : 3060))))))));
                                var_26 |= (arr_46 [i_9] [i_14] [i_10 - 2] [i_9] [i_10 - 2] [i_9]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
