/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148289
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (!var_3);

    /* vectorizable */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = (((!(arr_1 [i_0]))));

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_12 = (((arr_0 [i_1] [i_0]) ? var_5 : var_9));
            var_13 = arr_1 [i_0 - 1];
            var_14 = ((var_8 <= (!0)));
            arr_7 [i_0] [8] = (((arr_5 [i_0 + 1]) ^ (var_9 - var_3)));
            arr_8 [16] = ((-(arr_3 [i_0 - 2] [i_0 + 1])));
        }
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            arr_11 [i_2] = (((arr_9 [i_2] [i_2] [i_2]) != var_10));
            arr_12 [i_2] = (((arr_5 [i_0 + 1]) * (((arr_0 [2] [i_0 - 1]) % (arr_5 [i_0])))));
            arr_13 [i_2] = (arr_3 [i_0 - 3] [i_0 - 1]);
        }
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        {
                            var_15 = ((var_4 >> (((arr_19 [i_0 - 3] [i_0 + 1] [i_0]) + 49))));
                            arr_25 [i_0] [i_3] = ((var_2 ? var_3 : (arr_20 [i_5 - 1] [i_0 - 3] [i_4] [i_5 - 1] [i_6])));
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 19;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 16;i_9 += 1)
                    {
                        {
                            var_16 = ((var_4 / (arr_6 [i_3] [10] [i_8])));
                            arr_36 [i_0] [18] [12] = (1 != 1);
                            var_17 = (((~0) % var_9));
                        }
                    }
                }
            }
            var_18 = ((-(((arr_29 [i_3] [i_0] [i_0] [i_0]) ? var_9 : (arr_24 [i_0] [i_0] [i_0 + 1] [i_0 - 3] [i_0 - 3] [i_0])))));
            var_19 = 8;
        }
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {

        for (int i_11 = 0; i_11 < 11;i_11 += 1)
        {
            /* LoopNest 2 */
            for (int i_12 = 1; i_12 < 9;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    {
                        var_20 = ((!(arr_14 [i_10] [i_12 - 1] [15])));
                        arr_47 [0] = (-(arr_22 [i_10] [i_10] [i_10] [1] [1] [i_10]));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_14 = 3; i_14 < 10;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 1;i_15 += 1)
                {
                    {
                        var_21 = ((var_8 ? (arr_6 [i_15] [i_14 - 3] [17]) : (((arr_5 [i_10]) << var_8))));
                        var_22 = (arr_26 [14] [i_11] [6]);
                        var_23 = (arr_9 [18] [i_14 - 3] [i_14 + 1]);
                        arr_54 [i_10] [i_10] [i_10] [4] [i_10] = (((((arr_45 [i_14] [i_11]) ? 0 : (arr_10 [i_14]))) < (arr_20 [i_10] [i_11] [i_14 - 3] [i_14 + 1] [i_14 - 2])));
                    }
                }
            }
            arr_55 [i_11] = (+-0);
        }
        for (int i_16 = 0; i_16 < 1;i_16 += 1) /* same iter space */
        {
            var_24 = (((arr_33 [i_16] [i_16] [i_16] [i_16] [i_10] [i_10] [i_10]) ? (arr_31 [i_16]) : ((((arr_52 [i_10] [i_16] [i_16] [i_10] [7] [i_16]) ? var_3 : 1)))));
            var_25 = ((-((var_0 ? (arr_34 [i_10] [i_10] [i_16] [i_16] [i_16]) : var_2))));
            var_26 = var_5;
            var_27 = (arr_32 [i_10] [i_10] [i_10] [i_10]);
        }
        for (int i_17 = 0; i_17 < 1;i_17 += 1) /* same iter space */
        {
            arr_61 [i_10] = ((((((arr_57 [0] [i_10]) < var_2))) ^ var_0));
            arr_62 [7] [i_17] [5] = (((((var_2 + 2147483647) << (((arr_35 [i_10]) - 40)))) - var_2));
            var_28 = (arr_19 [i_17] [i_10] [i_10]);
        }
        var_29 = ((((var_9 ? (arr_46 [i_10] [i_10] [i_10] [i_10]) : var_10)) / (arr_4 [i_10])));
        /* LoopNest 2 */
        for (int i_18 = 0; i_18 < 11;i_18 += 1)
        {
            for (int i_19 = 1; i_19 < 10;i_19 += 1)
            {
                {
                    var_30 = (((var_1 == (arr_32 [i_10] [0] [i_18] [i_19]))));
                    var_31 = (((~-78) - 2));
                }
            }
        }
        var_32 = (max(var_32, ((((!var_2) % (var_5 != var_4))))));
        var_33 = (1 << (((arr_37 [i_10] [i_10]) - 1151757489)));
    }
    for (int i_20 = 0; i_20 < 20;i_20 += 1)
    {
        arr_71 [i_20] = var_10;
        arr_72 [i_20] = 4;
    }
    var_34 = (~-var_2);
    #pragma endscop
}
