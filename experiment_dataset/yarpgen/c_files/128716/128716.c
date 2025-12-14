/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128716
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0 + 3] [i_0] = var_9;
                var_14 = var_11;

                for (int i_2 = 4; i_2 < 8;i_2 += 1)
                {
                    var_15 = var_7;
                    arr_11 [i_0] [i_1] [i_0] = var_5;
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    arr_14 [i_0] [i_1] [3] = var_6;
                    var_16 += var_5;
                    var_17 = var_5;

                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        arr_18 [i_0 - 2] [i_0] [i_0] = var_6;

                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            arr_21 [i_3] [i_1] [i_4] [i_1] [1] [i_1] |= var_0;
                            var_18 = (max(var_18, var_8));
                            var_19 = var_11;
                            var_20 = var_6;
                        }
                        /* vectorizable */
                        for (int i_6 = 3; i_6 < 7;i_6 += 1)
                        {
                            var_21 = var_12;
                            var_22 = var_11;
                            arr_25 [i_0 + 2] [5] [i_0] [1] = var_13;
                            var_23 = var_10;
                            var_24 = var_11;
                        }
                        for (int i_7 = 3; i_7 < 8;i_7 += 1)
                        {
                            var_25 -= var_13;
                            arr_29 [i_0] [i_1] [i_1] [i_3] [i_0] [i_4] [i_7] = var_6;
                        }
                        var_26 = var_7;
                        var_27 = var_12;
                        var_28 &= var_3;
                    }
                    /* vectorizable */
                    for (int i_8 = 3; i_8 < 8;i_8 += 1)
                    {
                        arr_34 [i_1] [i_3] [i_3] [i_0] = var_10;
                        var_29 = var_11;
                    }
                }
            }
        }
    }
    var_30 = var_12;

    /* vectorizable */
    for (int i_9 = 0; i_9 < 14;i_9 += 1) /* same iter space */
    {
        arr_38 [i_9] [i_9] = var_7;
        var_31 = (max(var_31, var_13));
        var_32 ^= var_5;
    }
    for (int i_10 = 0; i_10 < 14;i_10 += 1) /* same iter space */
    {
        var_33 = var_5;

        for (int i_11 = 0; i_11 < 14;i_11 += 1) /* same iter space */
        {
            var_34 = var_10;
            var_35 = var_0;
            var_36 -= var_10;
        }
        for (int i_12 = 0; i_12 < 14;i_12 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 14;i_13 += 1)
            {
                for (int i_14 = 2; i_14 < 13;i_14 += 1)
                {
                    {
                        arr_55 [i_10] [i_13] [i_13] [i_10] = var_6;
                        var_37 = var_3;
                    }
                }
            }
            var_38 = var_12;
            arr_56 [i_10] [0] [i_10] = var_2;
            var_39 |= var_11;
            var_40 |= var_12;
        }
        /* vectorizable */
        for (int i_15 = 1; i_15 < 1;i_15 += 1)
        {
            var_41 = (min(var_41, var_4));
            arr_59 [i_15] [1] = var_4;
        }
    }
    for (int i_16 = 0; i_16 < 14;i_16 += 1) /* same iter space */
    {
        var_42 = var_0;
        var_43 = var_6;
        arr_62 [1] = var_13;
    }
    #pragma endscop
}
