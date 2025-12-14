/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151339
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, 173));
    var_18 = (max(((var_11 ? (var_6 + 0) : var_10)), (~var_4)));
    var_19 = (~var_0);

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_20 = (max(var_20, (arr_0 [i_0])));
        var_21 = (max(var_21, (((+((+(min((arr_0 [i_0]), (arr_1 [i_0]))))))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_22 |= (arr_3 [i_1]);

        for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
        {
            arr_9 [i_2] = ((~(arr_2 [i_2])));
            var_23 = ((var_9 ? ((549755289600 ? var_9 : var_0)) : var_7));
        }
        for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
        {
            arr_12 [20] [i_1] [i_3] = ((~(arr_10 [i_3] [i_3])));
            arr_13 [i_1] [i_3] = ((!(arr_8 [i_3])));
        }
        for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
        {
            arr_16 [i_1] [i_4] [i_4] = ((var_15 ? (arr_15 [i_1] [i_4] [i_1]) : (arr_15 [i_1] [18] [i_4])));
            var_24 = (((var_15 / var_0) & var_6));
            var_25 = ((+(((arr_2 [i_1]) - var_15))));
        }

        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            var_26 = (arr_6 [i_1] [i_5] [1]);
            arr_20 [i_5] = ((+(((arr_14 [i_5] [13]) & var_7))));
            var_27 = (min(var_27, ((~(arr_4 [i_5])))));
        }
        for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
        {
            var_28 = (min(var_28, (arr_23 [i_1] [i_1])));
            var_29 = (((arr_18 [i_1] [0] [i_1]) | (arr_22 [i_1])));
        }
        for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
        {
            var_30 = (-1 ? var_9 : (arr_23 [9] [9]));

            for (int i_8 = 0; i_8 < 23;i_8 += 1)
            {
                arr_29 [i_7] [i_7] = (arr_11 [18] [i_1] [i_1]);
                var_31 = (((arr_15 [i_8] [i_7] [i_1]) || -2397075843776524490));
            }
            var_32 = var_0;
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 23;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 23;i_10 += 1)
                {
                    {
                        var_33 |= ((var_6 ? (arr_28 [i_1] [1] [14]) : (arr_18 [i_7] [10] [i_7])));
                        var_34 = (-78 == -67);
                        var_35 |= (((var_5 == var_15) / ((549755812864 - (arr_7 [i_1] [i_1] [i_10])))));
                        var_36 = ((-35 ? 73 : 0));
                    }
                }
            }
        }
        for (int i_11 = 0; i_11 < 23;i_11 += 1) /* same iter space */
        {
            var_37 |= (((arr_32 [i_1] [4] [i_1] [i_1]) & (arr_32 [i_1] [i_11] [i_1] [i_1])));
            /* LoopNest 3 */
            for (int i_12 = 0; i_12 < 23;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 23;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 23;i_14 += 1)
                    {
                        {
                            arr_46 [i_1] [i_11] [i_12] [i_12] [20] [20] [5] = var_11;
                            var_38 = (arr_28 [20] [2] [2]);
                            var_39 = (max(var_39, var_9));
                            arr_47 [i_1] [i_1] [i_11] [i_1] [1] [1] [i_14] |= ((!((((arr_4 [8]) ? var_7 : -120)))));
                            var_40 |= ((var_0 ? (arr_4 [17]) : 17));
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 1;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 23;i_16 += 1)
            {
                {
                    arr_53 [i_1] [i_16] [i_15] [i_1] |= ((var_7 ? (arr_50 [i_1] [i_16]) : -var_8));
                    var_41 = (((arr_17 [i_1]) ? (arr_17 [i_15]) : var_1));
                }
            }
        }
    }
    var_42 = var_12;
    #pragma endscop
}
