/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170539
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, -400785084));

    for (int i_0 = 1; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_15 = ((((var_13 ? (arr_1 [i_0 + 2] [i_0]) : 3894182212))) ? (3894182195 & 3894182231) : (~4277127107));
        arr_2 [i_0] [i_0] = (((2013265920 || 0) ? (7449606358353827162 || 1285703707) : (((!(arr_0 [i_0 - 1] [i_0]))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_16 += 3894182212;
                                arr_15 [i_4] [i_3] [i_2] [i_2] [i_1] [i_0] = (arr_9 [i_0 + 2] [i_1] [i_2 + 1] [i_3]);
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        arr_20 [i_0] [i_0] [i_1] [i_2] [i_5] = (((~-16751) < (~var_0)));
                        arr_21 [i_0] [i_1] = ((9 ? (arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : -1783294324));
                    }
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        arr_25 [i_0] [i_1] = 133;
                        arr_26 [i_0] [i_1] [i_1] [i_2] [i_6] [i_6] = ((!(arr_10 [i_2 - 1] [i_0 + 1] [i_0] [i_6])));
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 4; i_7 < 16;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 18;i_8 += 1)
                        {
                            {
                                arr_33 [i_0] [i_1] = ((!((max((((arr_4 [i_2]) ? 119 : (arr_19 [i_0] [i_1] [i_2] [i_2] [i_7] [i_8]))), ((max(136, 134))))))));
                                var_17 += (((min((arr_19 [i_0] [i_0 - 1] [i_7 - 1] [i_8] [i_8] [i_8]), var_6))) ? (arr_19 [i_0] [i_0 - 1] [i_7 - 3] [i_8] [i_8] [i_8]) : ((((arr_19 [i_0] [i_0 + 1] [i_7 - 3] [i_7] [i_7] [i_8]) / var_10))));
                                var_18 = 37;
                            }
                        }
                    }
                    arr_34 [i_2] [i_2] = (max((-1783294324 % -var_10), var_1));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_9 = 1; i_9 < 16;i_9 += 1) /* same iter space */
    {
        var_19 = ((var_9 ^ (arr_5 [i_9] [i_9 - 1] [i_9 + 1])));
        arr_37 [i_9] = var_7;
        var_20 = -32761;
        /* LoopNest 2 */
        for (int i_10 = 3; i_10 < 14;i_10 += 1)
        {
            for (int i_11 = 3; i_11 < 16;i_11 += 1)
            {
                {
                    var_21 = 18990;
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 18;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 18;i_13 += 1)
                        {
                            {
                                arr_49 [i_9] [i_9] [i_9] [i_9] [i_9] = (((arr_10 [i_12] [i_11 - 2] [i_10] [i_10]) - (arr_10 [i_12] [i_11 - 3] [i_11] [i_10])));
                                arr_50 [i_9] [i_9] [i_11] [i_12] [i_9] [i_13] [i_12] = (141 + -1559);
                                var_22 = (((var_6 ^ -1338616046094985377) ? (var_13 == 10997137715355724453) : var_12));
                            }
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_14 = 1; i_14 < 16;i_14 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_15 = 4; i_15 < 17;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 18;i_16 += 1)
            {
                {
                    var_23 = (!124);
                    var_24 = 134;
                }
            }
        }
        var_25 = (((arr_29 [i_14] [i_14] [i_14] [i_14] [i_14]) ? (arr_56 [i_14] [i_14 - 1] [i_14] [i_14 + 1]) : (~136)));
        var_26 = (((arr_10 [i_14 + 2] [i_14 + 2] [i_14] [i_14]) > var_3));
        var_27 = ((!(7655572896462957385 - 32768)));
        arr_59 [i_14] = ((136 << (var_7 - 29413)));
    }
    #pragma endscop
}
