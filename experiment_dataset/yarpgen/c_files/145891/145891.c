/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145891
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 81;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            arr_4 [i_1] = (arr_0 [i_1] [22]);

            for (int i_2 = 1; i_2 < 24;i_2 += 1)
            {
                var_20 = (((12 && 2873370216746171939) && (((-1 ? (arr_3 [i_2]) : (arr_0 [i_2] [i_1]))))));
                arr_7 [i_1 + 1] [i_1 + 1] [i_1 + 1] = (arr_6 [i_1 - 1]);

                for (int i_3 = 3; i_3 < 24;i_3 += 1)
                {
                    var_21 = -251397645;
                    arr_12 [i_0] [i_0] [i_0] [i_0] [i_0 - 3] = (((arr_0 [i_0] [i_0]) == var_2));
                }
                for (int i_4 = 1; i_4 < 24;i_4 += 1) /* same iter space */
                {
                    arr_17 [i_0] [i_0] [i_2 - 1] [i_4] [i_4] [i_1 - 1] = ((8388607 > ((var_1 ? var_6 : (arr_5 [i_0 + 1] [i_0] [i_0])))));
                    arr_18 [19] [i_2] [i_1 + 1] [i_0] = var_10;
                    var_22 -= var_12;
                }
                for (int i_5 = 1; i_5 < 24;i_5 += 1) /* same iter space */
                {
                    arr_21 [i_5] [i_1] = var_3;
                    var_23 += (((((0 ? -101 : 65535))) ? ((((!(arr_9 [i_0] [i_1] [i_1] [i_5]))))) : var_2));
                }
            }
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                arr_25 [i_0] [i_1] [i_1] [i_0 + 1] = (~var_14);
                arr_26 [i_0] [i_0] = var_15;
                var_24 = ((!(arr_24 [i_6] [i_0] [i_0])));

                for (int i_7 = 1; i_7 < 1;i_7 += 1) /* same iter space */
                {
                    var_25 = (((arr_9 [i_7 - 1] [i_6] [i_0] [i_0]) * (arr_9 [i_0] [i_1] [i_6] [i_7])));
                    arr_29 [i_0] [i_0] [i_6] [6] &= (((arr_0 [i_6] [23]) ? (arr_2 [i_1 - 1] [i_1]) : var_7));

                    for (int i_8 = 2; i_8 < 23;i_8 += 1) /* same iter space */
                    {
                        var_26 = ((var_1 == (arr_2 [i_0 - 2] [i_1 - 1])));
                        arr_32 [i_6] [i_7] = ((-(arr_20 [i_1 + 1] [i_1 + 1] [i_6])));
                    }
                    for (int i_9 = 2; i_9 < 23;i_9 += 1) /* same iter space */
                    {
                        var_27 = 81;
                        var_28 += (arr_10 [i_0 - 2] [i_0 - 1] [i_0] [i_0] [8]);
                        var_29 = ((var_7 ? (78 == 10) : (((arr_16 [i_0]) ^ 15313505428018387381))));
                    }
                    for (int i_10 = 2; i_10 < 23;i_10 += 1) /* same iter space */
                    {
                        var_30 = (((~var_10) ? -15313505428018387381 : var_18));
                        arr_37 [i_0 - 3] [i_0 - 3] [i_7] [i_0] [i_0] = (~-2);
                    }
                }
                for (int i_11 = 1; i_11 < 1;i_11 += 1) /* same iter space */
                {
                    arr_40 [i_0] [i_1] [i_1] [i_11] [i_6] [i_1] = var_7;
                    arr_41 [i_11] [i_6] [i_1] [i_0 - 2] |= (arr_30 [i_11 - 1] [i_11 - 1] [i_11] [i_11] [i_11] [i_11]);
                }
                for (int i_12 = 0; i_12 < 25;i_12 += 1)
                {
                    var_31 += var_13;

                    for (int i_13 = 1; i_13 < 1;i_13 += 1)
                    {
                        arr_47 [i_13] [i_12] [i_6] [i_1 - 1] [i_0] = var_5;
                        arr_48 [i_13] [24] [i_12] [i_6] [i_1] [i_0] = ((((((arr_31 [i_12] [i_1] [10] [i_12] [i_12]) ? var_8 : var_3))) ? var_18 : (arr_5 [i_12] [i_13 - 1] [i_1 - 1])));
                        var_32 = ((!((((arr_13 [i_0] [i_6] [6] [i_12] [i_6]) << 0)))));
                    }
                    for (int i_14 = 0; i_14 < 25;i_14 += 1) /* same iter space */
                    {
                        var_33 &= var_12;
                        arr_53 [i_6] [i_1] [i_6] [19] [19] [i_6] = -0;
                    }
                    for (int i_15 = 0; i_15 < 25;i_15 += 1) /* same iter space */
                    {
                        var_34 = var_4;
                        var_35 = ((~(arr_54 [i_0 - 3])));
                    }
                    arr_57 [i_0] [i_0] = (arr_28 [i_0] [i_0] [i_12] [i_0] [i_0]);
                    var_36 = (arr_1 [i_0]);
                    var_37 += ((-(arr_52 [i_1 - 1] [i_1 + 1] [i_0 + 1] [i_0 + 1] [i_0 - 2])));
                }
            }
            for (int i_16 = 4; i_16 < 22;i_16 += 1)
            {
                var_38 = ((-(arr_28 [i_1] [i_0 + 1] [i_16] [i_16 - 2] [i_1 + 1])));
                var_39 = arr_50 [i_0 - 3] [i_0 + 1] [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_16 - 1];
                var_40 = ((6782498221455733693 ? (arr_33 [i_0] [i_1] [i_16 + 3] [i_0] [24]) : 1274004418));
            }
            for (int i_17 = 0; i_17 < 25;i_17 += 1)
            {
                var_41 = ((!(arr_34 [i_0] [i_0] [16] [i_0 + 1] [i_0] [16])));
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 25;i_18 += 1)
                {
                    for (int i_19 = 1; i_19 < 24;i_19 += 1)
                    {
                        {
                            arr_69 [i_0] [i_1] [i_1] [i_18] = 37;
                            var_42 = ((((arr_62 [i_0] [i_1]) ? var_12 : var_11)));
                            arr_70 [i_19 - 1] [i_19] [i_18] [i_17] [i_1] [i_1] [i_0] = (~65528);
                            var_43 = (arr_64 [i_19] [i_1 - 1]);
                        }
                    }
                }
            }
        }
        var_44 *= ((~(arr_65 [i_0 - 3])));
        arr_71 [7] = ((4294967295 < (arr_50 [i_0] [i_0] [i_0 - 1] [i_0] [i_0 + 1] [i_0])));
        arr_72 [i_0 - 1] = (!1);
    }

    /* vectorizable */
    for (int i_20 = 0; i_20 < 11;i_20 += 1)
    {
        var_45 += var_11;
        var_46 = var_17;
    }
    #pragma endscop
}
