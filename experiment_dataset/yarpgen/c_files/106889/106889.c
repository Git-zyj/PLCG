/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106889
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((!var_7) ? var_6 : ((var_6 ? var_1 : var_9)))) & var_1));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 17;i_1 += 1) /* same iter space */
        {
            arr_5 [i_0] [2] [i_1] = 4294967292;
            var_11 = (min(var_11, (!var_6)));
            var_12 -= var_9;
            var_13 = var_9;
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 17;i_4 += 1)
                    {
                        {
                            var_14 -= ((14218240690493711710 ? var_0 : var_3));
                            var_15 = var_0;
                            arr_13 [i_3] [i_2] [i_0] = (!59337);
                            var_16 = (var_7 / -var_5);
                        }
                    }
                }
            }
        }
        for (int i_5 = 1; i_5 < 17;i_5 += 1) /* same iter space */
        {
            arr_17 [i_5] = var_3;
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 17;i_8 += 1)
                    {
                        {
                            arr_28 [i_0] [i_5] [i_0] [i_0] = (!var_1);
                            var_17 = var_0;
                            var_18 -= (((~var_1) ? (~var_1) : var_3));
                        }
                    }
                }
            }
            var_19 += -var_7;
        }
        for (int i_9 = 0; i_9 < 18;i_9 += 1)
        {
            arr_33 [i_0] [i_9] [i_0] = ((var_6 ? 255 : var_5));
            var_20 = var_8;
            arr_34 [i_0] [i_9] = (var_9 == 32743);
            var_21 = (!(((0 ? var_9 : var_9))));
        }
        var_22 = (!var_7);
        var_23 = ((!(var_4 | 65535)));
    }
    for (int i_10 = 1; i_10 < 10;i_10 += 1)
    {
        arr_37 [i_10] = var_2;
        var_24 = 3404991081;
        /* LoopNest 2 */
        for (int i_11 = 1; i_11 < 11;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 13;i_12 += 1)
            {
                {
                    arr_43 [i_10] = (min(var_7, (!var_5)));
                    var_25 = ((-1831309216623075245 <= ((~(var_7 / var_1)))));
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 13;i_14 += 1)
                        {
                            {
                                var_26 = var_0;
                                var_27 = (max(-var_2, var_1));
                                var_28 = (min((((-(max((-2147483647 - 1), 1))))), (max(var_8, var_6))));
                                arr_48 [i_10] [i_11] [i_12] [i_10] [i_14] = ((!((max(-var_7, var_8)))));
                                var_29 ^= var_0;
                            }
                        }
                    }
                    var_30 = (max((min(-1862318424, var_6)), var_0));
                }
            }
        }
    }
    var_31 = (min(var_31, (!var_8)));
    /* LoopNest 2 */
    for (int i_15 = 0; i_15 < 11;i_15 += 1)
    {
        for (int i_16 = 2; i_16 < 7;i_16 += 1)
        {
            {

                /* vectorizable */
                for (int i_17 = 1; i_17 < 10;i_17 += 1)
                {
                    var_32 = (var_7 ^ var_4);
                    var_33 = (min(var_33, var_4));
                    arr_57 [i_15] [i_17] [i_17] = 2147483647;
                }
                arr_58 [i_15] [i_16] [i_15] &= ((-(var_4 / var_3)));
                arr_59 [i_15] = ((!(((-((2147483647 ? var_5 : var_1)))))));
                var_34 = min((((!(((var_9 ? var_5 : var_8)))))), 2147483647);
                /* LoopNest 3 */
                for (int i_18 = 0; i_18 < 11;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 11;i_19 += 1)
                    {
                        for (int i_20 = 2; i_20 < 7;i_20 += 1)
                        {
                            {
                                var_35 = var_6;
                                var_36 = var_9;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
