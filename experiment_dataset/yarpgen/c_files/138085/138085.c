/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138085
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_14 = (min(var_14, ((-(!var_9)))));
                                var_15 *= (arr_1 [i_0]);
                                var_16 = ((min(var_2, (arr_11 [i_1] [i_1] [i_1] [i_1] [i_1]))));
                            }
                        }
                    }
                    var_17 *= 0;
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            {
                                var_18 = ((!(((4063232 ? (arr_5 [9] [i_0]) : 479307022)))));
                                var_19 = (min(var_19, var_1));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_7 = 0; i_7 < 23;i_7 += 1)
    {
        var_20 *= ((~((-(arr_17 [i_7])))));
        var_21 = (arr_18 [i_7]);
    }
    for (int i_8 = 0; i_8 < 24;i_8 += 1)
    {
        var_22 *= (((-(arr_21 [i_8]))));
        arr_22 [i_8] = (arr_20 [i_8]);
    }
    for (int i_9 = 3; i_9 < 16;i_9 += 1)
    {
        var_23 = (!(arr_20 [i_9]));
        /* LoopNest 2 */
        for (int i_10 = 1; i_10 < 17;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 17;i_11 += 1)
            {
                {
                    var_24 = (min(var_24, (arr_19 [i_9 - 1])));
                    var_25 = var_7;
                }
            }
        }

        for (int i_12 = 0; i_12 < 18;i_12 += 1) /* same iter space */
        {
            var_26 = -var_5;

            for (int i_13 = 0; i_13 < 18;i_13 += 1)
            {
                /* LoopNest 2 */
                for (int i_14 = 1; i_14 < 16;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 18;i_15 += 1)
                    {
                        {
                            var_27 = (((arr_17 [i_9 - 1]) ? 63505 : ((max((arr_17 [i_9 - 2]), 1)))));
                            var_28 = (((-(arr_38 [i_9] [i_14 - 1]))));
                        }
                    }
                }
                var_29 = min((arr_20 [i_9]), ((20538 ? 4063232 : 0)));
            }
            /* LoopNest 3 */
            for (int i_16 = 3; i_16 < 17;i_16 += 1)
            {
                for (int i_17 = 2; i_17 < 16;i_17 += 1)
                {
                    for (int i_18 = 2; i_18 < 16;i_18 += 1)
                    {
                        {
                            var_30 = (!479307034);
                            arr_48 [i_9] [i_12] [i_16] [5] [7] = max((!1), (min(479307022, var_6)));
                        }
                    }
                }
            }
        }
        for (int i_19 = 0; i_19 < 18;i_19 += 1) /* same iter space */
        {
            var_31 = -1;
            var_32 = (min(var_32, (~-4063232)));
        }
        for (int i_20 = 0; i_20 < 18;i_20 += 1)
        {
            /* LoopNest 2 */
            for (int i_21 = 0; i_21 < 18;i_21 += 1)
            {
                for (int i_22 = 1; i_22 < 14;i_22 += 1)
                {
                    {
                        var_33 *= ((~(~1)));
                        var_34 *= var_0;
                        var_35 = ((-(((arr_27 [i_20]) ? var_12 : 1261128672))));
                    }
                }
            }
            arr_59 [i_9] [i_9] [i_9] = (!-var_5);
            var_36 = (((--2043963874) ? var_1 : 2970755641));
        }
        for (int i_23 = 2; i_23 < 16;i_23 += 1)
        {
            var_37 = arr_57 [i_9 - 3] [i_9 - 3] [i_9];
            /* LoopNest 2 */
            for (int i_24 = 0; i_24 < 18;i_24 += 1)
            {
                for (int i_25 = 1; i_25 < 17;i_25 += 1)
                {
                    {
                        var_38 = 1;
                        var_39 = ((~(((!(arr_28 [i_23] [i_23 + 2] [i_9]))))));
                    }
                }
            }
        }
    }
    for (int i_26 = 0; i_26 < 22;i_26 += 1)
    {
        arr_69 [i_26] [11] = 44998;
        arr_70 [i_26] = 56;
        var_40 = 20528;
    }
    #pragma endscop
}
