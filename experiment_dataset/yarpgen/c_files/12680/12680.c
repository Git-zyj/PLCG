/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12680
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_0;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_11 = 12571705983668830034;
        var_12 = (((arr_0 [i_0 + 1]) - (arr_0 [i_0 + 1])));
        arr_3 [i_0] [i_0] = (((arr_2 [i_0 + 2] [i_0 + 1]) ? (arr_2 [i_0 + 2] [i_0]) : (arr_2 [i_0 + 1] [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_13 = -8482237858305173918;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 9;i_3 += 1)
            {
                {
                    var_14 = var_3;
                    var_15 = (!var_4);
                    var_16 = ((-((-(arr_10 [1] [i_2] [i_1] [i_1])))));
                }
            }
        }
        arr_11 [i_1] = 0;
        arr_12 [i_1] = ((var_7 ? (arr_4 [i_1]) : 1687247256700928232));
        var_17 = (arr_6 [i_1] [i_1] [3]);
    }
    for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
    {

        for (int i_5 = 2; i_5 < 11;i_5 += 1)
        {
            arr_18 [i_4] [i_5] = ((var_0 ? ((min(var_9, -8482237858305173918))) : (min((~var_0), (arr_1 [i_5 + 1] [i_5 + 2])))));
            arr_19 [10] &= var_0;
        }
        for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
        {
            var_18 &= -var_6;

            /* vectorizable */
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                arr_26 [i_4] [i_4] [i_4] = (arr_4 [i_4]);
                var_19 = (arr_15 [i_4] [i_7]);
            }
            var_20 -= var_6;
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 13;i_8 += 1) /* same iter space */
        {
            var_21 = (12571705983668830034 == 12571705983668830044);

            for (int i_9 = 0; i_9 < 13;i_9 += 1)
            {
                var_22 = (arr_17 [i_4] [i_8] [i_9]);
                var_23 = (((arr_5 [i_8] [i_8]) ? var_5 : (arr_5 [i_4] [i_4])));
                arr_32 [i_4] = (arr_23 [i_4] [i_9]);
                var_24 = (min(var_24, var_5));
            }
            for (int i_10 = 1; i_10 < 11;i_10 += 1)
            {
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 13;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 13;i_12 += 1)
                    {
                        {
                            var_25 = 1;
                            var_26 = ((-(arr_2 [i_11] [i_4])));
                            arr_42 [i_4] [i_8] [i_10] [i_8] [i_4] = ((5875038090040721582 ? var_3 : (arr_0 [i_10 - 1])));
                        }
                    }
                }
                arr_43 [i_4] [i_4] = (arr_8 [i_4] [i_8] [i_8] [i_10 + 2]);

                for (int i_13 = 3; i_13 < 12;i_13 += 1)
                {
                    var_27 = (max(var_27, ((((arr_40 [11] [i_13] [i_13 + 1] [i_13]) ? (!var_0) : (arr_44 [i_13 - 3] [4] [i_13 + 1] [i_13 - 2]))))));
                    arr_46 [i_4] [i_8] [i_4] [i_8] [8] [i_8] &= (arr_14 [i_4] [i_10 + 1]);
                }
                for (int i_14 = 1; i_14 < 12;i_14 += 1)
                {
                    arr_49 [i_4] [i_4] = ((-(((var_0 != (arr_39 [i_4]))))));
                    arr_50 [3] = (arr_24 [i_14 + 1] [i_14] [2] [i_14]);
                    arr_51 [i_4] = ((5516392052050276712 ? (arr_22 [i_10 + 1] [i_14 + 1] [8]) : var_1));
                    arr_52 [i_14 - 1] [i_10 - 1] [i_4] [i_4] = var_1;
                }
                var_28 -= var_8;
                var_29 = var_3;
            }
            arr_53 [i_4] [7] [i_8] = 3421109871083461623;
        }
        /* vectorizable */
        for (int i_15 = 0; i_15 < 13;i_15 += 1) /* same iter space */
        {
            var_30 = -var_4;

            for (int i_16 = 1; i_16 < 1;i_16 += 1)
            {
                arr_59 [1] [i_4] [1] [i_16] = var_9;
                var_31 = 406286392;
                var_32 = (2199023255551 <= 36562);
            }
            for (int i_17 = 0; i_17 < 13;i_17 += 1)
            {
                arr_62 [11] [3] [i_15] [i_17] = 1;

                for (int i_18 = 0; i_18 < 13;i_18 += 1)
                {
                    var_33 = (max(var_33, var_6));
                    arr_67 [i_4] [6] [i_4] = (arr_9 [i_15]);
                }
                arr_68 [i_4] [6] [6] [i_17] = (arr_14 [i_15] [i_4]);
                var_34 ^= (arr_61 [10] [i_15] [i_17] [i_17]);
            }
        }
        arr_69 [i_4] = ((1 ? (arr_16 [i_4] [i_4]) : 1));
        arr_70 [i_4] = ((~(((arr_57 [i_4]) ? (arr_23 [i_4] [i_4]) : var_4))));
    }
    var_35 = (~(-242414386963317303 * var_8));
    var_36 = var_1;
    #pragma endscop
}
