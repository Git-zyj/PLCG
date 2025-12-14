/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13566
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] = var_8;

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            arr_7 [i_1] = var_10;

            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                arr_10 [i_2] [i_1] [i_0] = var_3;
                arr_11 [i_0] [i_0] [i_0] = var_7;
            }
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                var_16 = var_0;
                var_17 = var_9;

                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    arr_17 [i_0] [i_0] [i_1] [i_3] [i_4] = var_10;
                    var_18 = var_8;
                }
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] = var_12;
                    var_19 = var_15;

                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        arr_24 [i_1] [i_1] [i_1] [i_1] [i_1] = var_2;
                        var_20 = var_15;
                        arr_25 [i_0] [i_0] [i_0] [i_0] [5] = var_7;
                    }
                }
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    arr_29 [i_7] [i_3] [i_1] [11] [11] = var_2;
                    arr_30 [12] [i_1] [0] [i_1] = var_3;
                }
                var_21 = var_1;
            }
            for (int i_8 = 2; i_8 < 14;i_8 += 1)
            {
                var_22 = var_14;
                var_23 = var_12;
                arr_33 [i_0] [i_1] [i_8 + 4] [i_8 + 4] = var_13;
            }
            var_24 = var_4;
            var_25 = var_5;
            var_26 = var_11;
        }
        arr_34 [i_0] [i_0] = var_11;
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 18;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 18;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 18;i_11 += 1)
                {
                    {
                        var_27 = var_3;

                        /* vectorizable */
                        for (int i_12 = 2; i_12 < 17;i_12 += 1)
                        {
                            var_28 = var_7;
                            arr_47 [i_12] [i_11] [i_11] [11] [i_9] [i_0] [i_0] = var_8;
                            var_29 = var_13;
                        }
                        arr_48 [i_0] [i_9] [i_0] [i_0] [i_11] [i_10] = var_12;
                    }
                }
            }
        }
        var_30 = var_5;
    }
    for (int i_13 = 0; i_13 < 21;i_13 += 1) /* same iter space */
    {
        arr_52 [i_13] [i_13] = var_7;
        var_31 = var_3;
        var_32 = var_8;
    }
    for (int i_14 = 0; i_14 < 21;i_14 += 1) /* same iter space */
    {
        var_33 = var_11;
        var_34 = var_12;
    }

    /* vectorizable */
    for (int i_15 = 3; i_15 < 13;i_15 += 1)
    {
        var_35 = var_11;
        var_36 = var_2;
        var_37 = var_14;
    }

    /* vectorizable */
    for (int i_16 = 2; i_16 < 19;i_16 += 1)
    {
        var_38 = var_9;
        arr_60 [i_16] = var_11;
        var_39 = var_8;
    }
    #pragma endscop
}
