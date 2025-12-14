/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116131
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += (1798186726 ? 6750 : (max(-1798186726, -1798186726)));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_16 = var_10;

            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {

                for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
                {
                    var_17 = 16080804195489677801;
                    arr_9 [5] [i_0] [5] [i_1] [i_0] [i_0] = ((!(arr_8 [i_0] [i_2] [i_2 + 2] [i_0])));
                }
                for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
                {
                    var_18 = -1798186737;

                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        arr_15 [i_0] [i_0] [i_1] [0] [i_0] = (78 - 0);
                        arr_16 [i_0] [12] [i_0] [0] [i_5] [i_2] [i_5] = ((var_0 ? -997671590 : (arr_4 [i_0])));
                    }
                }
                for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
                {
                    var_19 *= (~1798186726);
                    var_20 = (((-1 | 458752) ? var_14 : 0));
                    arr_19 [1] [1] [i_2 - 1] [i_6] [i_0] = (~4294967286);
                }
                for (int i_7 = 0; i_7 < 14;i_7 += 1) /* same iter space */
                {

                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        arr_24 [i_0] [i_0] [i_0] [i_2] [i_2] [i_2] = (1656035282 && 4294967295);
                        var_21 *= ((-(!var_0)));
                        var_22 = -32760;
                    }
                    for (int i_9 = 2; i_9 < 11;i_9 += 1)
                    {
                        arr_29 [12] [i_9] [1] [i_9] [i_0] |= 22;
                        arr_30 [i_0] [i_1] [i_0] [11] [i_9] = 56143;
                        var_23 = (((((15 ? -762442549 : 65535))) ? 0 : 18052));
                        var_24 = -18564;
                    }
                    for (int i_10 = 0; i_10 < 14;i_10 += 1)
                    {
                        var_25 = var_14;
                        var_26 = (18446744073709551614 / 207331362800921085);
                        var_27 *= ((((((arr_7 [i_7]) ? var_13 : 18446744073709551610))) ? (arr_32 [i_0] [i_1] [i_0] [i_0 + 1] [i_2 + 1] [7] [i_2]) : (!-27348)));
                    }
                    arr_33 [i_0] [i_1] [i_1] [i_0] = (!-9);
                    arr_34 [i_0] [i_0] [3] [i_0] = (var_8 <= 4036271694);
                }
                arr_35 [i_0] [i_0] = 35;
                arr_36 [i_0 - 1] [i_0] = ((!(arr_0 [i_2 - 1] [i_0])));
            }
        }
        for (int i_11 = 0; i_11 < 14;i_11 += 1) /* same iter space */
        {

            for (int i_12 = 0; i_12 < 14;i_12 += 1)
            {
                arr_43 [i_0] [i_11] [i_0] = 78;
                var_28 = (max(var_28, (((var_4 ? (arr_4 [i_11]) : (arr_11 [i_11] [i_0 + 1] [i_11]))))));
                var_29 = ((7 ? var_11 : (arr_22 [i_0] [i_0] [i_0] [i_0] [i_0 + 1])));

                for (int i_13 = 1; i_13 < 12;i_13 += 1)
                {
                    arr_46 [i_0] [i_11] [i_0] [i_0] [i_12] [i_13] = var_10;
                    arr_47 [i_0] [i_11] [i_0] [i_11] [i_0] = 65535;
                    arr_48 [i_0] [i_0] = (1001402493 | (arr_17 [i_13] [i_12] [i_0] [i_11] [i_0]));
                    var_30 = (~1);
                }
            }
            for (int i_14 = 0; i_14 < 14;i_14 += 1) /* same iter space */
            {
                var_31 ^= (((~var_5) ? (((var_9 & (arr_17 [i_0] [i_11] [i_11] [i_11] [i_11])))) : var_5));
                arr_51 [i_0] [i_0] [i_0] = (arr_39 [i_14] [i_0 - 1] [i_0 - 1]);
            }
            for (int i_15 = 0; i_15 < 14;i_15 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 1;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 14;i_17 += 1)
                    {
                        {
                            var_32 = (max(var_32, -1001402474));
                            var_33 = 258695581;
                            arr_60 [i_0] [i_0] [i_11] [i_0] [i_0] [i_17] = 5250017968792695429;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 14;i_18 += 1)
                {
                    for (int i_19 = 4; i_19 < 12;i_19 += 1)
                    {
                        {
                            arr_66 [i_0] [i_11] [i_0] [i_11] [i_18] [1] [i_0] = -var_14;
                            var_34 = var_2;
                            var_35 *= 5520058644302977025;
                            var_36 &= (~var_7);
                            arr_67 [i_19] [i_19] [i_15] [0] [i_0] = var_8;
                        }
                    }
                }
            }
            var_37 = ((!(-2147483647 - 1)));
            var_38 = ((~((1152921503533105152 ? 32766 : (arr_37 [i_0 - 1] [i_11] [i_0 + 1])))));
            var_39 += (65535 / 1966485697466506515);
        }
        for (int i_20 = 0; i_20 < 14;i_20 += 1) /* same iter space */
        {
            var_40 = ((((18446744073709551588 << (((arr_32 [i_0] [i_0] [i_0] [i_20] [i_20] [i_0] [i_20]) - 1418231066)))) < (~27)));
            var_41 &= (arr_54 [i_0] [13] [i_0 - 1] [i_0] [i_20]);
        }
        var_42 = (arr_4 [i_0]);
        var_43 = ((91 ? 5250017968792695429 : -988226090));
    }
    #pragma endscop
}
