/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104347
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_19 = ((var_3 > (var_13 / var_15)));
        var_20 = -var_10;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 4; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 20;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 18;i_4 += 1)
                    {
                        for (int i_5 = 3; i_5 < 18;i_5 += 1)
                        {
                            {
                                var_21 = ((var_17 ? var_14 : var_12));
                                arr_15 [i_2] [i_2] [i_4] [1] [i_2] [i_2] [i_2] = (!var_5);
                            }
                        }
                    }
                    var_22 = (((~var_4) + ((var_2 ? var_14 : var_12))));
                    var_23 = ((var_15 ? var_15 : var_15));
                }
            }
        }
        var_24 = (((var_1 == var_5) ? ((var_16 ? var_11 : var_3)) : (var_16 | var_13)));
    }
    for (int i_6 = 4; i_6 < 13;i_6 += 1)
    {
        arr_18 [i_6 + 1] [i_6] = (((min(var_18, var_7))));
        var_25 &= ((((((var_13 != var_7) ? ((var_7 ? var_1 : var_6)) : var_1))) ? ((~(!var_14))) : var_1));
        var_26 += ((((var_1 + var_17) > ((var_16 ? var_17 : var_0)))) ? var_8 : (((((var_0 ? var_4 : var_17))) ? (!var_0) : ((var_5 ? var_16 : var_12)))));
        arr_19 [i_6 - 1] [i_6] = (((max(((-5918592372608206156 ? -1866049009 : 637884497)), (9223372036854775807 < -41))) == (!var_16)));
    }
    for (int i_7 = 2; i_7 < 9;i_7 += 1)
    {
        arr_22 [6] [7] = (max((((!-605470856) ? var_3 : (!-126))), (((var_3 == (~var_9))))));

        /* vectorizable */
        for (int i_8 = 2; i_8 < 8;i_8 += 1)
        {
            arr_26 [i_8] [i_8] = var_5;
            var_27 = (min(var_27, -var_5));
            var_28 *= var_8;
            arr_27 [i_8] [i_8 - 2] [5] = (var_14 ^ var_0);
            arr_28 [i_7] [i_8] = ((var_2 ? ((var_0 ? var_6 : var_14)) : (!var_2)));
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 10;i_9 += 1)
        {
            var_29 = (((!var_0) + ((var_14 ? var_2 : var_14))));
            /* LoopNest 2 */
            for (int i_10 = 1; i_10 < 8;i_10 += 1)
            {
                for (int i_11 = 1; i_11 < 6;i_11 += 1)
                {
                    {
                        arr_35 [i_7] [i_9] [i_9] [i_11] = (var_11 & var_15);
                        var_30 = (((var_15 - var_18) ? var_5 : var_3));
                        arr_36 [i_7] [i_9] [i_7] [i_11] = -7237;
                        arr_37 [i_7] |= ((var_13 ? var_3 : var_14));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_12 = 0; i_12 < 10;i_12 += 1)
        {
            /* LoopNest 2 */
            for (int i_13 = 1; i_13 < 8;i_13 += 1)
            {
                for (int i_14 = 3; i_14 < 7;i_14 += 1)
                {
                    {
                        var_31 = ((var_9 ? var_18 : var_5));
                        arr_45 [i_12] [3] [i_13] [i_13] = ((0 ? 127 : 5972806174577882665));
                    }
                }
            }
            var_32 = (((4503599627370495 - -4652619707104585513) ? (!var_10) : ((var_3 ? var_10 : var_8))));
            arr_46 [i_12] [i_12] [i_12] = ((~var_14) - (((356437478 ? -26076 : (-2147483647 - 1)))));
        }
        var_33 = (~-28348);
        var_34 = (min(var_34, ((max((min((var_5 % var_5), var_16)), (((!(((var_14 ? var_12 : var_16)))))))))));
    }
    var_35 = (((((var_8 > var_7) - var_7)) | var_8));
    #pragma endscop
}
