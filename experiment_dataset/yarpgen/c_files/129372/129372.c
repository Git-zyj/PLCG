/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129372
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [5] = (((arr_0 [i_0] [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0] [i_0])));

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_12 = (max(var_12, (arr_4 [i_0])));

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        {
                            var_13 -= (arr_4 [i_0]);
                            arr_15 [i_1] [i_1] = ((var_4 ? (arr_5 [i_1] [i_2] [22]) : (arr_5 [i_0] [i_0] [i_2])));
                            var_14 = (max(var_14, (arr_7 [i_3] [12] [20])));
                            var_15 = ((-(arr_14 [i_2] [i_1] [i_4])));
                        }
                    }
                }
                var_16 = (arr_11 [i_0] [i_1] [i_1] [i_2]);
                var_17 *= (arr_11 [i_0] [i_1] [i_2] [i_2]);
            }
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                var_18 = ((((((arr_9 [i_1] [i_1]) ? var_1 : 368206855))) / (arr_12 [i_0] [1] [i_5] [i_0])));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 23;i_7 += 1)
                    {
                        {
                            arr_25 [i_7 - 1] [15] [i_1] [i_1] [i_0] = (((arr_24 [i_7 + 2] [i_7] [i_7] [14] [i_7 - 1] [i_7 + 1] [1]) ? (arr_20 [i_7 + 2] [i_7 + 2] [i_7 + 1] [i_7] [24] [i_7 + 2]) : (arr_20 [i_0] [i_0] [i_0] [i_7 - 1] [i_0] [i_0])));
                            arr_26 [i_0] [i_7 + 2] [3] [i_0] [i_1] [23] [i_1] = ((((arr_9 [i_1] [i_1]) ? (arr_4 [i_1]) : var_6)) < (~var_6));
                        }
                    }
                }
            }
            var_19 = (min(var_19, ((((arr_2 [i_0] [i_1]) ? (arr_4 [i_0]) : (arr_2 [i_0] [i_1]))))));
        }
        for (int i_8 = 3; i_8 < 23;i_8 += 1)
        {
            var_20 &= (arr_10 [i_0] [i_8 - 3] [i_8 - 3]);
            var_21 = (((arr_5 [i_8] [i_8 + 2] [23]) ? (arr_5 [i_0] [i_8 + 1] [i_8]) : (arr_5 [i_0] [i_8 - 2] [i_8 - 2])));
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    {
                        arr_36 [22] [i_8] [i_8] = ((-(arr_6 [13] [i_0])));
                        arr_37 [i_8] [i_8] [i_8] [i_8] [i_0] = ((~(arr_24 [i_0] [23] [i_9] [i_8 - 3] [1] [23] [i_9])));
                        var_22 = (arr_28 [i_0] [i_8]);
                    }
                }
            }
            var_23 &= ((3926760449 ? (((arr_2 [5] [i_0]) / (arr_10 [1] [i_8] [i_8]))) : (((~(arr_30 [i_0] [i_0] [i_0] [i_8]))))));
        }
        for (int i_11 = 0; i_11 < 25;i_11 += 1)
        {

            for (int i_12 = 1; i_12 < 1;i_12 += 1)
            {
                var_24 = ((var_1 ? var_1 : 2434076733));
                var_25 *= arr_14 [i_0] [i_11] [i_12 - 1];
            }

            for (int i_13 = 0; i_13 < 25;i_13 += 1)
            {
                var_26 = ((((((arr_0 [i_0] [i_0]) ? 878868092 : var_6))) ? (~var_11) : (arr_43 [1] [i_11] [1] [i_13])));
                arr_47 [i_0] [18] [i_0] = ((-(arr_38 [i_13] [i_11] [i_0])));
            }
            var_27 = (-76 & 368206823);
        }
        arr_48 [i_0] [i_0] = -var_10;
        arr_49 [i_0] = ((!(arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
        var_28 ^= (arr_46 [i_0] [23] [i_0]);
    }
    for (int i_14 = 0; i_14 < 19;i_14 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 19;i_15 += 1)
        {
            for (int i_16 = 2; i_16 < 17;i_16 += 1)
            {
                {
                    arr_57 [i_16] [i_16] [i_16] = ((!(((-(arr_18 [i_16 + 2] [i_16] [1]))))));
                    var_29 = 878868109;
                }
            }
        }
        arr_58 [i_14] = ((-((var_8 ? (arr_0 [i_14] [i_14]) : (arr_0 [i_14] [1])))));
    }
    for (int i_17 = 0; i_17 < 19;i_17 += 1) /* same iter space */
    {
        var_30 -= (arr_13 [i_17] [i_17] [i_17] [1] [2]);
        arr_63 [0] = (-20811 ? ((125829120 ? 0 : 1)) : (!2384290715));
        var_31 = arr_40 [i_17] [i_17];
    }
    var_32 = 2384290715;
    #pragma endscop
}
