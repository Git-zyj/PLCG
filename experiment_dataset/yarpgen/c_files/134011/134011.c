/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134011
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_20 = (min(var_20, 25));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        var_21 = (!var_8);
                        var_22 = (min(var_22, (((~(arr_7 [i_1] [i_3] [i_3]))))));
                        var_23 |= -29900;
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 16;i_5 += 1)
            {
                {
                    var_24 = (max(var_24, (!163)));

                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        arr_18 [i_0] [1] [i_5] [i_6] = (~116);
                        arr_19 [i_0] [i_4] = ((29893 ? 745015583 : (((arr_14 [i_0] [i_4] [i_4] [i_6]) ? var_19 : var_17))));
                        var_25 |= 227;
                    }
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        arr_22 [i_0] [i_0] &= var_12;
                        var_26 += ((!(!-29900)));
                        var_27 = (min(var_27, ((((var_9 ? var_9 : 29900))))));

                        for (int i_8 = 2; i_8 < 15;i_8 += 1)
                        {
                            var_28 = 78;
                            var_29 = var_0;
                            arr_25 [i_8] [i_4] [i_8] [i_7] [i_8] = (~-var_1);
                            arr_26 [i_0] [i_4] [9] [i_8] [i_8] [i_8] = (--29921);
                        }
                        for (int i_9 = 0; i_9 < 17;i_9 += 1)
                        {
                            var_30 = (min(var_30, var_13));
                            arr_29 [i_0] [i_4 - 3] [i_4 - 3] [i_5 - 1] [i_4 - 3] [i_7] [i_9] = ((108 ? (arr_20 [i_7] [15] [i_4 + 1] [i_7]) : ((var_15 ? var_13 : var_6))));
                        }
                        arr_30 [i_0] [i_0] [i_4] [8] [i_5] [i_0] = var_19;
                    }
                    for (int i_10 = 2; i_10 < 14;i_10 += 1)
                    {
                        var_31 = (min(var_31, 3973809157));
                        arr_33 [i_10] [i_4 - 3] [i_4 - 3] [i_10] = (var_17 / var_14);
                    }
                    for (int i_11 = 0; i_11 < 17;i_11 += 1)
                    {
                        var_32 = 321158133;
                        arr_36 [i_0] [i_11] = 83;
                        var_33 += (var_8 - 236);
                        var_34 = ((1610199355232575762 ? (((158 ? -29878 : var_16))) : (arr_32 [i_4] [i_5] [i_11])));
                    }
                }
            }
        }

        for (int i_12 = 2; i_12 < 16;i_12 += 1)
        {
            var_35 = (min(var_35, (arr_15 [i_0])));
            var_36 = (((arr_31 [i_12] [i_12 - 2] [i_12] [i_12] [i_12 + 1] [12]) + (var_17 || var_9)));
            var_37 = (min(var_37, 49763));
            /* LoopNest 3 */
            for (int i_13 = 2; i_13 < 16;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 17;i_14 += 1)
                {
                    for (int i_15 = 1; i_15 < 15;i_15 += 1)
                    {
                        {
                            var_38 += (~3973809163);
                            arr_46 [i_12] [i_12 - 2] [15] [i_13] [i_13] [i_14] [i_15] = var_19;
                            var_39 = (((((var_13 ? var_16 : var_11))) ? (~var_0) : 321158132));
                        }
                    }
                }
            }
        }
    }
    var_40 = (min(var_40, var_2));
    var_41 = 1085182131884792899;
    var_42 = (max(var_11, ((max(((var_16 ? var_10 : 8325017227744231130)), var_18)))));
    #pragma endscop
}
