/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135916
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_4;
    var_16 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_1] = (((((1 ? (arr_1 [i_0 + 1]) : (arr_3 [i_0])))) ? var_9 : ((((arr_3 [i_0]) ? (arr_1 [i_1]) : (arr_3 [i_0]))))));
                arr_6 [1] [16] |= (((arr_4 [i_0] [i_0 - 1]) | (min(1666087941449352261, 34232))));
                var_17 = (max(var_17, ((min((((3116493335 ? -126 : (arr_2 [2] [i_1] [i_1])))), 4294967295)))));
            }
        }
    }
    var_18 = ((((max((~var_5), (var_14 <= var_3)))) ? var_2 : var_14));

    for (int i_2 = 1; i_2 < 9;i_2 += 1)
    {
        arr_9 [i_2] = ((var_5 ? (arr_3 [i_2]) : (((arr_2 [i_2] [i_2] [i_2]) ? var_8 : (~var_8)))));
        arr_10 [i_2] = (max((((!((min(var_7, var_11)))))), ((12493 ? (arr_1 [i_2]) : ((var_14 ? (arr_0 [i_2]) : 46108))))));
        arr_11 [i_2] [i_2 - 1] = ((((((arr_7 [i_2]) ? (arr_7 [i_2]) : (arr_3 [i_2])))) ? (((1 ? 1178473945 : 55365))) : ((var_4 ? (max((arr_8 [i_2]), (arr_8 [i_2]))) : (((max((arr_2 [i_2] [i_2] [i_2]), var_0))))))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
    {
        arr_14 [i_3] = ((var_12 ? (arr_3 [i_3]) : var_3));
        var_19 = -1;
    }
    for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
    {
        var_20 = (((arr_1 [i_4]) ? var_5 : (((((31 ? 116 : 1))) ? (min(var_13, (arr_3 [i_4]))) : (arr_16 [i_4])))));
        arr_17 [i_4] = (max((((arr_3 [i_4]) + (arr_3 [i_4]))), (max(var_0, var_5))));
        arr_18 [i_4] [i_4] = ((((((arr_1 [i_4]) ? (arr_3 [i_4]) : 1))) ? (((arr_1 [i_4]) ? (arr_1 [i_4]) : (arr_1 [i_4]))) : ((~(arr_1 [i_4])))));
    }
    /* vectorizable */
    for (int i_5 = 3; i_5 < 20;i_5 += 1)
    {
        arr_21 [i_5] = arr_16 [i_5 + 2];

        for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
        {
            var_21 = (((var_9 == var_3) & ((var_3 ? -125 : var_5))));
            arr_24 [i_5] [i_5] = (arr_20 [i_5 - 2]);
        }
        for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
        {
            arr_29 [i_5] [i_5] [i_7] = (((arr_26 [i_5 + 2] [i_5] [i_5 + 2]) ? 1666087941449352261 : (arr_26 [i_5 + 1] [i_5] [i_5 - 3])));
            arr_30 [i_5] = ((!(arr_22 [i_5 - 2] [i_5 - 1])));
            arr_31 [i_5] [i_7] = ((((1 ? 1 : (arr_27 [i_5] [i_7]))) & (arr_4 [i_5] [i_5 + 1])));

            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 22;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 22;i_10 += 1)
                    {
                        {
                            arr_38 [i_5] [i_7] [i_8] [i_7] [i_9] [i_5] [i_10] = ((var_0 ? (arr_34 [i_5] [i_5 - 2] [i_5] [i_5 - 2] [i_5] [i_10]) : ((var_4 & (arr_33 [i_5 - 2] [i_10])))));
                            arr_39 [i_10] [i_5] [i_8] [i_5] [i_5] = (arr_26 [i_5 - 1] [i_5 - 1] [i_5 - 1]);
                            arr_40 [i_10] [i_5] [i_9] [21] [i_8] [i_5] [i_5] = (((arr_32 [i_5 - 1] [i_5 + 1] [i_5]) ? (arr_32 [i_5 - 1] [i_5 - 3] [i_5]) : (arr_32 [i_5 - 2] [i_5 - 1] [i_5])));
                            arr_41 [i_5] [i_7] [i_8] [i_8] [i_9] [i_5] [i_10] = ((-(arr_16 [i_5 + 2])));
                        }
                    }
                }
                var_22 = (arr_16 [i_5 - 2]);
            }
            for (int i_11 = 0; i_11 < 22;i_11 += 1) /* same iter space */
            {
                arr_44 [i_5] [i_7] [i_5] = ((-((var_3 ? var_1 : (arr_15 [i_7] [19])))));
                arr_45 [i_11] [i_7] [i_11] [i_11] &= ((~(arr_42 [i_7] [i_11])));
            }
            for (int i_12 = 0; i_12 < 22;i_12 += 1) /* same iter space */
            {
                var_23 = 1178473970;
                var_24 = var_9;
                var_25 -= ((!(arr_25 [i_5 - 1])));
            }
            for (int i_13 = 0; i_13 < 22;i_13 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_14 = 1; i_14 < 19;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 22;i_15 += 1)
                    {
                        {
                            arr_57 [i_5] [i_14] [i_5] = var_0;
                            arr_58 [i_5] [i_7] [i_7] = ((var_8 ? (16780656132260199355 == -124) : var_5));
                        }
                    }
                }
                arr_59 [i_5] [i_5] [i_5 - 3] [i_5] = (var_14 ? (var_14 || var_9) : ((var_9 ? 65525 : var_14)));
            }
            var_26 = (max(var_26, (var_8 > var_5)));
        }
        for (int i_16 = 0; i_16 < 1;i_16 += 1) /* same iter space */
        {
            arr_62 [i_5] = var_3;
            var_27 ^= (arr_34 [i_5] [i_5 + 1] [i_5 - 3] [i_5] [i_5 + 1] [i_5 - 3]);
            var_28 = ((var_1 ? var_12 : ((var_12 ? var_9 : -19902719))));
        }
    }
    #pragma endscop
}
