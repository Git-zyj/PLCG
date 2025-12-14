/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13065
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (max((min(var_8, (arr_2 [i_0 + 1]))), (arr_2 [i_0 + 1])));
        var_11 = (max(var_11, -41));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 0;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 3; i_2 < 12;i_2 += 1)
        {
            arr_9 [i_1] [i_1] [i_1] = (((arr_2 [i_2]) + var_0));
            arr_10 [i_1] [6] [i_1] = (!-11503);
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    {
                        arr_17 [i_1] = ((((((arr_13 [i_1] [i_1] [i_1] [i_1]) ? (arr_16 [i_1]) : 214))) ? ((var_0 ? 222 : var_1)) : (~var_8)));
                        var_12 = ((215 ? ((20 ? var_7 : 52998)) : 214));
                    }
                }
            }
            arr_18 [2] [2] &= 12537;
        }
        for (int i_5 = 4; i_5 < 11;i_5 += 1)
        {
            arr_23 [i_1] [i_1] = 192;
            arr_24 [i_1] = (((arr_7 [i_5 - 4]) != (arr_7 [i_5])));
        }
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            arr_28 [i_1] [i_6] [i_6] = 41;

            for (int i_7 = 1; i_7 < 12;i_7 += 1)
            {
                var_13 &= ((((((arr_22 [i_1] [i_6] [i_7]) ? 27 : 63))) ? (arr_22 [i_7] [i_1 + 1] [i_1 + 1]) : ((((var_9 + 2147483647) << (((var_9 + 21199) - 16)))))));
                arr_31 [i_1] [i_6] [i_1] [i_1] = arr_7 [i_6];
            }
            arr_32 [i_1] = ((110 ? var_7 : 189));
            arr_33 [i_1] = (arr_7 [i_1 + 1]);
        }

        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            /* LoopNest 3 */
            for (int i_9 = 4; i_9 < 11;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 13;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        {
                            arr_45 [i_1 + 1] [i_1] [i_9 - 4] [i_9 + 2] [i_10] [i_11] [i_11] = ((((((arr_37 [i_10]) ? 63 : (arr_35 [i_1] [i_8] [i_9 + 2])))) || (arr_40 [i_11] [i_1] [i_1])));
                            var_14 = ((var_1 ? (~var_5) : ((var_9 ? var_3 : var_4))));
                            arr_46 [i_1 + 1] [i_1] [i_8] [i_1] [11] [i_10] [i_11] = (arr_20 [i_1] [i_1 + 1] [i_9 - 4]);
                            arr_47 [i_1] [i_1] [i_1] [i_1 + 1] = ((!(~63)));
                            arr_48 [i_1] [i_1] [7] [i_1 + 1] = (-(arr_1 [i_1] [i_1]));
                        }
                    }
                }
            }
            var_15 *= (((arr_22 [i_1] [i_1] [5]) ? ((184544129576474086 ? 21116 : 241)) : (arr_20 [i_1 + 1] [i_1 + 1] [i_1 + 1])));
        }
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 13;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 13;i_13 += 1)
            {
                {
                    arr_56 [7] [i_1] [i_13] = (arr_36 [1] [i_1 + 1]);
                    var_16 = (max(var_16, 2603));

                    for (int i_14 = 0; i_14 < 13;i_14 += 1)
                    {
                        arr_61 [i_1] [i_12] [i_13] [i_1] = 64;
                        var_17 = (max(var_17, 187));
                        arr_62 [i_1] [i_1] [i_1] [i_1] = ((0 | (arr_14 [i_1 + 1] [i_12] [i_13] [i_14])));
                    }
                    for (int i_15 = 0; i_15 < 13;i_15 += 1)
                    {
                        arr_66 [i_15] [i_15] [i_1] [i_1] [i_1 + 1] [i_1 + 1] = (var_0 >= var_8);
                        arr_67 [i_1 + 1] [7] [7] [i_1] = (1 || 21122);
                        var_18 += (((arr_1 [i_12] [i_12]) ? ((var_1 ? 21 : var_8)) : (arr_15 [i_15] [i_12] [i_13] [i_1] [i_12] [i_1])));
                    }
                }
            }
        }
    }
    var_19 = var_4;
    var_20 = var_4;
    #pragma endscop
}
