/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17360
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_1, ((var_5 ? ((min(var_12, var_8))) : ((max(var_12, var_1)))))));
    var_14 = var_2;

    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        var_15 = (max(var_15, var_12));
        arr_3 [i_0 - 1] [i_0 - 2] = (min((min(var_11, var_7)), ((max(var_3, var_1)))));
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 19;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1 + 2] = (((~var_6) ? var_0 : var_7));
        var_16 = ((var_7 << (var_11 - 187260519468161219)));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                {
                    var_17 = (max(var_17, (((var_9 ? var_8 : var_1)))));
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 20;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 17;i_5 += 1)
                        {
                            {
                                var_18 = ((15804 ? 45 : -46));
                                var_19 = ((var_6 ? var_5 : var_3));
                                var_20 = (min(var_20, (1 | -24391)));
                                arr_16 [i_1] [i_3] [i_3] [i_3] [i_5] = ((var_12 ? var_12 : var_1));
                            }
                        }
                    }
                    arr_17 [i_3] [i_2] [i_3] = ((var_8 ? var_8 : var_3));
                }
            }
        }

        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            var_21 -= (~var_3);

            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                var_22 -= (var_2 | var_8);
                arr_22 [i_7] [i_6] [i_6] [i_1 - 1] = ((var_12 ? var_11 : var_0));
                /* LoopNest 2 */
                for (int i_8 = 2; i_8 < 20;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        {
                            arr_27 [i_1 - 1] [i_1] [i_9] [i_1] [i_1] = ((var_0 ? var_0 : var_7));
                            var_23 = ((!(var_6 % var_9)));
                        }
                    }
                }
                arr_28 [i_1] [i_6] [i_1] [i_7] = -var_9;

                for (int i_10 = 0; i_10 < 21;i_10 += 1)
                {
                    var_24 = ((var_8 ? var_11 : var_11));
                    var_25 = (((var_11 * var_10) ? ((var_0 ? var_7 : var_11)) : var_4));
                    var_26 -= (!var_11);
                    arr_31 [i_1] [i_1] [i_6] [i_1] [i_1] = (var_10 ^ var_8);
                }
                for (int i_11 = 0; i_11 < 21;i_11 += 1)
                {
                    var_27 = (max(var_27, (45 == 1)));
                    var_28 = var_2;
                    arr_35 [i_1] [i_1] [i_1] [i_7] [i_1] = ((var_10 ? var_8 : var_0));
                }
            }
            var_29 = (((var_0 ? var_0 : var_3)) & var_3);

            for (int i_12 = 0; i_12 < 21;i_12 += 1)
            {
                var_30 = (max(var_30, 18642));

                for (int i_13 = 0; i_13 < 21;i_13 += 1)
                {
                    var_31 = (var_6 <= var_9);
                    var_32 ^= ((var_0 ? (~var_6) : (~var_10)));
                }
            }
        }
        for (int i_14 = 0; i_14 < 1;i_14 += 1)
        {
            var_33 |= (-var_7 ? var_11 : var_7);
            var_34 = ((var_6 * (!var_5)));
        }
        for (int i_15 = 0; i_15 < 21;i_15 += 1)
        {
            var_35 ^= (((-24391 + 2147483647) << (169 - 169)));
            var_36 = (var_6 ^ var_7);
            var_37 = (var_3 - var_2);
            arr_46 [i_1] [i_15] [i_15] = ((var_9 ? var_6 : var_9));
            var_38 = var_4;
        }
        /* LoopNest 2 */
        for (int i_16 = 0; i_16 < 21;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 21;i_17 += 1)
            {
                {
                    var_39 = (((((101 ? 62486 : 4357645140820856237))) / var_0));
                    var_40 = var_7;
                    arr_53 [i_1 - 4] [i_16] = ((var_10 >> (var_4 - 83)));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_18 = 4; i_18 < 19;i_18 += 1) /* same iter space */
    {
        var_41 = ((((var_0 ? var_2 : var_9)) / var_3));
        var_42 ^= ((var_10 ? var_9 : var_12));
        var_43 = (~var_5);

        for (int i_19 = 2; i_19 < 20;i_19 += 1)
        {

            for (int i_20 = 4; i_20 < 20;i_20 += 1)
            {
                arr_64 [i_18] [i_18] = ((var_5 ? (((var_2 ? var_9 : var_6))) : (var_7 + var_0)));
                var_44 = (max(var_44, (((var_12 ? var_11 : var_6)))));
                var_45 = (max(var_45, (!var_4)));
                var_46 = (max(var_46, (((var_1 ? var_12 : var_4)))));
            }
            var_47 = (min(var_47, (var_2 / var_6)));
        }
        for (int i_21 = 0; i_21 < 21;i_21 += 1)
        {
            arr_67 [i_18 - 3] [i_18] = ((var_3 >> (var_6 - 218)));
            arr_68 [i_18] [i_18] = ((var_2 ? var_11 : var_7));
            var_48 = ((24391 ? -1518150705 : -2022327885));
        }
    }
    #pragma endscop
}
