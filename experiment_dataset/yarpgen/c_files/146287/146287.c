/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146287
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((-((var_11 ? -7297556518449454684 : var_5)))) / var_5));
    var_14 = (((((-7297556518449454684 ? (~91) : (max(var_10, 32050))))) ? (((!((max(0, 115)))))) : 91));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_15 = ((((((arr_1 [i_0]) ? -5001096247641267521 : 124))) ? (122 % var_0) : (arr_0 [13])));
        arr_2 [i_0] = var_5;
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    {
                        arr_13 [i_1] [i_1] [i_1] [i_3] = ((max((arr_8 [i_1] [i_4]), (arr_12 [10] [i_2] [i_2] [10]))));
                        var_16 += ((!((((((217 ? 1152921504606846975 : 46605))) ? (((-1152921504606846989 ? var_5 : (arr_7 [22] [22])))) : 1152921504606846968)))));
                    }
                }
            }
        }
        arr_14 [7] [9] = (arr_3 [i_1]);

        /* vectorizable */
        for (int i_5 = 2; i_5 < 21;i_5 += 1)
        {
            var_17 = -100;
            var_18 = var_6;
        }
        /* vectorizable */
        for (int i_6 = 2; i_6 < 22;i_6 += 1)
        {
            var_19 = (min(var_19, 1426280288));

            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                arr_22 [i_7] [i_6] = ((var_9 ? (((182 && (arr_7 [i_7] [i_6 + 1])))) : ((131 ? (arr_6 [i_1] [i_1]) : -1426280289))));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    for (int i_9 = 4; i_9 < 19;i_9 += 1)
                    {
                        {
                            var_20 = -9223372036854775803;
                            arr_29 [2] [i_6] [i_6] [i_6] [i_9 - 3] [i_7] [i_6] = var_9;
                        }
                    }
                }
            }
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                arr_33 [i_1] [i_10] [9] = (arr_7 [i_6 - 2] [i_6 - 2]);
                var_21 = 3718523146;
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 23;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 23;i_12 += 1)
                    {
                        {
                            var_22 = (0 | 1984);
                            arr_41 [i_10] [i_10] = ((10718 / (arr_26 [i_12] [i_6] [i_6 + 1] [i_11] [i_6 + 1])));
                        }
                    }
                }
            }
            var_23 -= ((73 ? 34470 : -54792));
        }
        var_24 = ((max(((33554431 ? 33554431 : 116)), 110)));
    }

    for (int i_13 = 0; i_13 < 23;i_13 += 1) /* same iter space */
    {
        var_25 = 389279954;
        arr_45 [i_13] = ((min(137, var_3)));
        var_26 = ((143 ? 23132 : 127));
    }
    for (int i_14 = 0; i_14 < 23;i_14 += 1) /* same iter space */
    {
        var_27 = 9222246136947933184;

        for (int i_15 = 0; i_15 < 23;i_15 += 1)
        {
            var_28 += (((-(max(var_6, -1881265956)))));
            /* LoopNest 3 */
            for (int i_16 = 1; i_16 < 21;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 23;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 23;i_18 += 1)
                    {
                        {
                            var_29 *= ((!((((arr_58 [i_16 + 2] [i_16 + 1] [i_16 + 1] [i_16 + 1] [1] [3]) ? 4611686018427387903 : var_0)))));
                            var_30 = ((((((7168 ? 17 : -1)))) ? -var_11 : (((17 && (~1))))));
                            var_31 = 56;
                        }
                    }
                }
            }
            var_32 = var_9;
        }
    }
    /* vectorizable */
    for (int i_19 = 0; i_19 < 23;i_19 += 1) /* same iter space */
    {
        arr_66 [i_19] = ((var_0 >> (~-1)));
        var_33 = ((-25 ? 10743 : 255));
    }
    var_34 |= (max((((17 ? var_6 : var_3))), var_12));
    #pragma endscop
}
