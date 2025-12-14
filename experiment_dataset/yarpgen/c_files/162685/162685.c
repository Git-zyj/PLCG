/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162685
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_5 == ((var_10 ? var_1 : ((var_1 ? var_13 : -9402))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_15 += -9402;

        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            var_16 = (max(var_16, (((arr_2 [i_0] [i_0]) / (arr_2 [i_1 - 1] [i_0])))));

            for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
            {
                var_17 -= -9402;
                var_18 = var_12;
                var_19 = ((-(arr_5 [i_1 - 1] [6] [2] [i_2])));

                for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
                {
                    var_20 = (~var_11);
                    arr_8 [i_0] [5] [i_2] [5] = (arr_7 [i_0] [i_0] [12] [i_0] [i_0] [i_0]);
                }
                for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
                {

                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        arr_16 [i_0] [i_1 - 1] [i_0] = (((arr_10 [1] [3] [i_1 + 2] [8]) ? (arr_10 [i_5] [i_4] [13] [i_1 + 1]) : (arr_10 [i_5] [i_4] [i_1 + 1] [i_0])));
                        var_21 ^= (-var_5 > var_7);
                        var_22 = ((arr_15 [i_0] [i_1 - 2] [i_2] [i_4] [15]) & (arr_15 [i_0] [i_1 + 1] [12] [12] [12]));
                        var_23 = ((-(arr_4 [i_1 - 1] [i_1] [i_0] [3])));
                    }
                    arr_17 [i_4] [i_2] [i_2] [i_1 - 1] [i_0] [i_0] = (!147);
                    arr_18 [i_0] [i_0] [i_4] = (arr_2 [i_1 - 2] [i_1 - 2]);
                }
            }
            for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
            {
                arr_23 [1] [i_1] = (arr_6 [i_0] [i_0] [i_6] [i_1 + 1]);
                arr_24 [i_0] [i_0] [i_0] = (arr_1 [i_1 - 1]);
            }
            var_24 = (~(arr_15 [i_0] [i_0] [i_1] [i_1] [i_1 - 2]));
        }
        for (int i_7 = 2; i_7 < 13;i_7 += 1)
        {

            for (int i_8 = 2; i_8 < 14;i_8 += 1)
            {
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 15;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 14;i_10 += 1)
                    {
                        {
                            var_25 = -9401;
                            var_26 = (((arr_1 [i_8 - 1]) ? 103 : var_0));
                        }
                    }
                }
                arr_34 [i_0] [9] [i_0] [i_8] &= -4638714786112610801;

                for (int i_11 = 0; i_11 < 16;i_11 += 1)
                {
                    var_27 = ((!(arr_33 [i_0] [i_0] [i_0] [i_8 + 2] [i_11])));

                    for (int i_12 = 1; i_12 < 14;i_12 += 1)
                    {
                        var_28 += (arr_39 [i_0] [8] [12] [i_11] [i_12 - 1]);
                        var_29 = ((((arr_5 [i_7] [2] [i_7] [13]) ? -8293758563762888220 : 730407046)));
                        var_30 = (~(arr_30 [i_8 + 1] [i_12 - 1] [8]));
                    }
                    for (int i_13 = 2; i_13 < 13;i_13 += 1) /* same iter space */
                    {
                        arr_45 [9] [i_7 - 1] [11] [i_7] [i_7] [i_7] = 1218128820;
                        arr_46 [i_13] [i_13] [i_8 + 1] [i_13] = var_5;
                    }
                    for (int i_14 = 2; i_14 < 13;i_14 += 1) /* same iter space */
                    {
                        var_31 &= (~1208799042722353086);
                        arr_51 [i_0] [i_7] [12] [i_14] = (((arr_13 [i_0] [i_0] [i_11]) ? var_11 : (arr_2 [i_0] [i_0])));
                    }
                    for (int i_15 = 2; i_15 < 13;i_15 += 1) /* same iter space */
                    {
                        var_32 *= (arr_5 [i_0] [i_7] [i_8] [i_8]);
                        arr_54 [i_0] [i_0] [i_0] = (arr_27 [i_0] [i_0]);
                    }
                }
            }
            var_33 &= 2181733735578622438;
            var_34 = (arr_10 [i_7 + 3] [i_7 - 2] [i_7 - 2] [9]);
            var_35 = ((~(arr_25 [i_7] [1] [i_7 + 1])));
            var_36 &= ((-264428395 ? var_13 : (arr_42 [i_7 + 2] [15] [i_7 - 2] [i_7] [i_7])));
        }
    }
    /* vectorizable */
    for (int i_16 = 0; i_16 < 19;i_16 += 1)
    {
        var_37 = (min(var_37, ((((arr_55 [i_16]) ? (~-9406) : (arr_56 [i_16]))))));

        for (int i_17 = 3; i_17 < 17;i_17 += 1)
        {
            /* LoopNest 2 */
            for (int i_18 = 0; i_18 < 19;i_18 += 1)
            {
                for (int i_19 = 2; i_19 < 18;i_19 += 1)
                {
                    {
                        arr_63 [5] [i_17] [1] [i_19] = (arr_60 [i_16] [i_16]);
                        var_38 = arr_60 [i_16] [i_16];
                        var_39 = (~-8293758563762888220);
                        var_40 = (arr_62 [i_17 + 1]);
                    }
                }
            }
            arr_64 [i_16] &= (arr_61 [i_17 - 1] [i_17 - 1] [i_17 + 1]);
        }
    }
    var_41 = var_0;
    var_42 = var_4;
    #pragma endscop
}
