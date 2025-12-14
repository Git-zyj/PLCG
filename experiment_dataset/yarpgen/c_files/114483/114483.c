/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114483
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 18446744073709551615;
    var_12 = 87;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_13 = (((arr_1 [i_0]) ? (((!(arr_0 [i_0])))) : (169 > 1665533842730304086)));

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        {
                            arr_13 [i_0] [i_0] [i_0] [i_1] [i_0] [i_3] [i_2] = (arr_10 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 + 1] [i_0 - 2]);
                            var_14 = (~(!46420));
                        }
                    }
                }
            }
            var_15 = ((248 ? 117 : (((arr_9 [i_0] [i_0]) ? 10693 : var_9))));
            var_16 += (((arr_8 [i_0] [i_0] [i_0] [i_0]) >= (arr_0 [i_0 + 1])));
            var_17 = (((arr_12 [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1]) ? 13 : (arr_8 [i_0 - 1] [i_1] [i_1] [i_0 - 2])));
        }
        var_18 |= var_3;
    }
    for (int i_5 = 2; i_5 < 18;i_5 += 1) /* same iter space */
    {
        var_19 = var_8;

        /* vectorizable */
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            var_20 = ((var_6 ? (((arr_2 [i_5]) + var_7)) : var_3));
            var_21 = ((32767 < (arr_11 [i_5 - 2] [i_5 - 1] [i_5 + 1] [i_5 - 1] [i_5 + 1] [i_5 - 1])));
        }
        /* vectorizable */
        for (int i_7 = 3; i_7 < 19;i_7 += 1) /* same iter space */
        {
            var_22 = ((1340645025999406096 ? var_10 : (((arr_3 [i_5] [i_7]) ? 0 : (arr_20 [i_5])))));
            arr_21 [i_5] [i_5] = arr_19 [i_5] [i_5];
            var_23 = (arr_2 [i_5 + 2]);
        }
        /* vectorizable */
        for (int i_8 = 3; i_8 < 19;i_8 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 20;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 20;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 20;i_11 += 1)
                    {
                        {
                            var_24 = -27889;
                            var_25 |= ((var_8 ? (arr_24 [i_5] [i_8 + 1] [i_5 + 1]) : (arr_24 [i_5] [i_8 + 1] [i_5 + 1])));
                            arr_31 [i_5] [i_8 + 1] [i_8 + 1] [i_10] [i_8 + 1] = 16600346189689129993;
                            arr_32 [i_5] [i_5] [i_10] = -16532;
                        }
                    }
                }
            }

            for (int i_12 = 3; i_12 < 18;i_12 += 1)
            {
                var_26 = (arr_23 [i_8 + 1]);
                var_27 |= (((((arr_22 [i_5] [i_5] [i_5]) ? (arr_24 [i_5] [i_5] [i_12 + 2]) : var_2))) ? (arr_22 [i_8] [i_8 - 2] [i_8 - 2]) : ((-(arr_16 [i_12] [i_8] [i_5]))));
                var_28 = 2147483641;
            }
            for (int i_13 = 0; i_13 < 20;i_13 += 1)
            {

                for (int i_14 = 0; i_14 < 20;i_14 += 1)
                {

                    for (int i_15 = 1; i_15 < 16;i_15 += 1)
                    {
                        var_29 = (~773269415);
                        var_30 = (((((var_10 ^ (arr_36 [i_5] [i_5] [i_13] [i_13])))) ? (arr_36 [i_8] [i_8] [i_13] [i_8 - 3]) : (var_4 * var_0)));
                    }
                    for (int i_16 = 1; i_16 < 18;i_16 += 1)
                    {
                        var_31 = (((~(arr_25 [i_13] [i_5] [i_5]))));
                        var_32 = var_1;
                        var_33 = (arr_43 [i_13]);
                    }
                    var_34 = var_9;
                    var_35 = (arr_25 [i_5 + 2] [i_5 + 2] [i_13]);
                }
                var_36 = (2147483641 < var_9);
            }

            for (int i_17 = 0; i_17 < 20;i_17 += 1)
            {
                var_37 = (((~-2147483642) ? (arr_43 [i_5]) : 37));
                var_38 = (((arr_17 [i_17]) ? (arr_10 [i_5 - 1] [i_8] [i_17] [i_5 - 1] [i_8 - 1]) : ((-(arr_25 [i_5] [i_8] [i_5])))));
                var_39 = (max(var_39, ((((arr_36 [i_5] [i_5] [i_5] [i_5]) ? 16781210230979247529 : (arr_36 [i_5] [i_5] [i_5] [i_5]))))));
                var_40 = (((arr_37 [i_5 + 1] [i_5] [i_5] [i_5 + 1]) && (arr_0 [i_5 - 1])));
                var_41 = (max(var_41, (((((16781210230979247553 ? (arr_37 [i_5] [i_5] [i_8 - 3] [i_8 - 3]) : 7240)) == (((!(arr_45 [i_17] [i_8 + 1] [i_8] [i_5])))))))));
            }
            for (int i_18 = 2; i_18 < 19;i_18 += 1)
            {
                var_42 = ((!(arr_29 [i_8] [i_8] [i_8] [i_8 - 3] [i_8])));
                var_43 = (var_6 > 22335);
                arr_51 [i_5 + 1] [i_5 + 1] [i_8] [i_18 - 2] = (arr_35 [i_8] [i_8]);
            }
            for (int i_19 = 2; i_19 < 19;i_19 += 1)
            {
                var_44 = (min(var_44, ((var_6 ? (arr_18 [i_5 + 2]) : (35948 >= var_7)))));
                var_45 = 773269400;
                var_46 = (min(var_46, (arr_18 [i_5 - 2])));
            }
            for (int i_20 = 0; i_20 < 20;i_20 += 1)
            {
                var_47 = var_0;
                var_48 += (!51526);
                /* LoopNest 2 */
                for (int i_21 = 3; i_21 < 18;i_21 += 1)
                {
                    for (int i_22 = 0; i_22 < 20;i_22 += 1)
                    {
                        {
                            var_49 = (var_1 ? (arr_57 [i_20] [i_8 - 3] [i_8 - 3]) : (arr_57 [i_20] [i_8 - 2] [i_20]));
                            var_50 = ((var_2 ? (arr_43 [i_20]) : (arr_58 [i_5] [i_5] [i_5] [i_5 + 2] [i_5 + 2])));
                        }
                    }
                }
            }
        }
        var_51 = -1807749884;
    }
    #pragma endscop
}
