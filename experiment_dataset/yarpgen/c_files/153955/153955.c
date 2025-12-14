/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153955
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
                {
                    arr_8 [i_1] [i_1] [i_1] [i_2] = var_4;
                    arr_9 [i_1] [i_1] = var_9;
                }
                for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                var_13 = (min(var_13, var_0));
                                arr_18 [i_0] [i_1] [i_3] [i_4] [i_5] = var_0;
                                var_14 = var_0;
                            }
                        }
                    }
                    var_15 = var_1;

                    for (int i_6 = 2; i_6 < 19;i_6 += 1)
                    {
                        var_16 = (max(var_16, var_2));

                        /* vectorizable */
                        for (int i_7 = 1; i_7 < 19;i_7 += 1)
                        {
                            arr_25 [i_1] [i_1] [i_3] [i_1] [i_1] = var_11;
                            arr_26 [i_1] [i_7 + 1] = var_10;
                        }
                    }
                    /* vectorizable */
                    for (int i_8 = 1; i_8 < 18;i_8 += 1)
                    {
                        var_17 = var_12;
                        var_18 = var_5;
                    }
                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {
                        var_19 += var_1;
                        arr_34 [i_1] [i_1] [i_1] = var_8;
                    }
                }
                arr_35 [i_0] [i_1] [i_1] = var_6;
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 20;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        {
                            var_20 = var_1;

                            /* vectorizable */
                            for (int i_12 = 2; i_12 < 19;i_12 += 1)
                            {
                                var_21 = var_5;
                                arr_45 [i_1] [i_11] [i_0] [13] [i_1] = var_8;
                            }
                            for (int i_13 = 2; i_13 < 18;i_13 += 1)
                            {
                                arr_49 [i_0] [i_10] [12] [i_11] [i_1] [i_1] = var_8;
                                var_22 = var_11;
                            }

                            for (int i_14 = 2; i_14 < 17;i_14 += 1) /* same iter space */
                            {
                                var_23 = var_12;
                                var_24 = var_0;
                            }
                            for (int i_15 = 2; i_15 < 17;i_15 += 1) /* same iter space */
                            {
                                var_25 = var_3;
                                arr_56 [i_1] [i_1] [i_10] = var_5;
                            }
                            for (int i_16 = 2; i_16 < 17;i_16 += 1) /* same iter space */
                            {
                                arr_61 [i_1] [i_1] [i_11] = var_4;
                                var_26 = var_2;
                                arr_62 [i_0] [i_1] [4] [0] [i_1] [10] = var_3;
                            }
                            arr_63 [i_1] [i_1] [i_1] [i_10] [i_11] = var_0;

                            /* vectorizable */
                            for (int i_17 = 0; i_17 < 20;i_17 += 1)
                            {
                                var_27 = var_3;
                                arr_68 [i_1] [i_1] = var_7;
                                arr_69 [13] [i_1] [i_10] [i_1] [i_1] [i_0] = var_6;
                            }
                        }
                    }
                }
            }
        }
    }
    var_28 = var_4;
    var_29 = var_3;
    var_30 = (max(var_30, var_8));
    var_31 -= var_7;
    #pragma endscop
}
