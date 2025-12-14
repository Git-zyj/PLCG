/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160674
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                var_13 = var_1;

                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {

                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        var_14 = (min(var_14, (arr_0 [i_2])));
                        arr_11 [i_0] [i_1] [3] [i_3] [i_3] [i_4] = ((var_2 ? var_6 : var_6));
                        var_15 = (var_11 | var_6);
                        arr_12 [i_0] [i_0] [i_3] [i_0] [i_0] = (((var_11 <= var_4) ? var_2 : (arr_2 [i_0] [i_1])));
                    }
                    var_16 = (min(var_16, (((((arr_8 [12] [1] [12] [i_1] [i_1]) ? var_0 : var_9))))));
                }
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    arr_15 [0] [i_2] [i_1] [6] [i_0] = (((!(arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]))));
                    var_17 ^= (((arr_2 [i_0] [i_2]) ? (arr_2 [i_0] [i_2]) : var_9));
                    var_18 = var_2;
                }
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    arr_18 [i_6] [i_2] [i_0] = var_12;
                    arr_19 [i_0] [i_1] [i_2] [i_6] = ((1 ? var_10 : var_7));
                    var_19 -= var_4;
                }
                for (int i_7 = 3; i_7 < 10;i_7 += 1)
                {

                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        var_20 = ((!(((var_7 ? 3895111445 : (arr_4 [i_1] [i_1] [i_1] [i_1]))))));
                        arr_26 [i_7] [i_1] [i_2] [i_7] [i_8] = ((((arr_25 [8] [4] [i_8] [4] [i_0] [i_0] [2]) ? var_6 : var_2)));
                        var_21 = (((!var_6) / (((arr_8 [i_8] [i_7] [10] [i_7] [i_0]) ? var_6 : var_9))));
                    }
                    for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
                    {
                        var_22 = ((!(((var_9 ? var_10 : var_3)))));
                        var_23 &= (((arr_14 [5] [i_2] [6] [5]) ? (arr_4 [i_0] [i_0] [i_0] [i_0]) : (arr_23 [i_0] [i_1] [i_1] [i_2] [9] [i_9] [i_9])));
                        var_24 ^= var_8;
                    }
                    for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
                    {
                        var_25 = var_8;
                        var_26 = 1073217536;
                    }

                    for (int i_11 = 0; i_11 < 14;i_11 += 1)
                    {
                        var_27 ^= ((((8 ? var_8 : var_2)) | var_2));
                        arr_34 [9] [i_7] [i_7] [i_1] = var_1;
                    }
                    var_28 = (arr_30 [i_0] [i_0] [i_0] [i_0] [i_0]);
                    var_29 = ((((((arr_17 [i_0] [8] [i_2] [i_7]) ? var_8 : var_0))) ? (!var_7) : (var_6 | var_11)));
                    arr_35 [i_0] [i_7] [i_7] = var_12;
                }
            }
            for (int i_12 = 0; i_12 < 14;i_12 += 1)
            {
                var_30 = (var_3 > var_1);

                for (int i_13 = 2; i_13 < 13;i_13 += 1)
                {
                    var_31 += ((((399855867 ? 1 : var_2)) / 106));
                    var_32 = var_3;
                    var_33 = (min(var_33, (((var_11 <= ((var_1 ? (arr_14 [i_0] [i_1] [i_12] [i_13 + 1]) : var_8)))))));
                }
            }
            arr_40 [i_0] [i_0] = var_9;
        }
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 1;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 14;i_15 += 1)
            {
                {

                    for (int i_16 = 1; i_16 < 13;i_16 += 1)
                    {
                        var_34 *= ((((((arr_6 [i_0] [2] [i_15] [i_16 - 1]) ^ var_9))) ? var_7 : var_5));
                        var_35 = (min(var_35, var_11));
                    }
                    for (int i_17 = 0; i_17 < 14;i_17 += 1)
                    {
                        var_36 = 93;
                        arr_50 [i_0] [i_0] [i_14] [i_17] = var_10;
                        arr_51 [i_14] [i_14] [1] [i_14] = (~((var_10 | (arr_4 [i_0] [1] [1] [i_0]))));
                        arr_52 [6] [i_14] [i_14] [i_14] [i_14] [i_17] = (!var_6);
                    }

                    for (int i_18 = 0; i_18 < 1;i_18 += 1)
                    {
                        arr_57 [i_0] [i_0] [i_14] = var_6;
                        var_37 += (!44);
                        var_38 = var_11;
                        arr_58 [i_14] = (var_4 | var_3);
                    }
                    for (int i_19 = 3; i_19 < 11;i_19 += 1)
                    {
                        var_39 = ((((((arr_16 [i_0] [i_14] [i_15] [i_19]) & (arr_1 [i_14] [1])))) ? ((((!(arr_56 [i_14] [i_14] [i_15] [i_15]))))) : var_5));
                        arr_61 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14] = (arr_60 [i_14] [i_15] [i_14] [3] [i_0] [i_14]);
                        arr_62 [i_0] [1] [11] [i_19 - 2] [i_19 + 3] [i_14] = (((arr_22 [i_14] [i_15] [i_15] [i_14] [i_0]) | (arr_5 [i_0] [i_14] [i_15] [11])));

                        for (int i_20 = 0; i_20 < 14;i_20 += 1)
                        {
                            arr_67 [i_15] [i_14] = var_6;
                            arr_68 [i_14] [i_14] [10] [i_19] [i_19] [i_15] = 2147483647;
                            arr_69 [i_0] [i_0] [i_14] [i_19] [i_20] = ((((arr_16 [1] [12] [12] [i_20]) % var_2)));
                        }
                        arr_70 [i_0] [i_14] [9] [i_14] [i_19] = var_3;
                    }
                    for (int i_21 = 0; i_21 < 14;i_21 += 1)
                    {
                        arr_73 [0] [2] [i_15] [i_14] = (!var_1);
                        var_40 += ((arr_44 [i_14] [i_15] [i_21]) % (((arr_7 [i_0] [i_14] [i_15] [i_15]) ? var_12 : var_5)));
                    }

                    for (int i_22 = 0; i_22 < 1;i_22 += 1)
                    {
                        arr_77 [i_14] [12] [i_15] [i_22] = (!var_9);
                        var_41 = (((arr_47 [i_22] [i_14] [i_15] [i_15] [i_15] [i_14]) ? (arr_38 [i_0]) : var_12));
                    }
                    var_42 = (arr_64 [i_14] [i_14]);
                    var_43 = ((((2147483647 ? var_5 : (arr_8 [i_0] [i_0] [i_0] [i_14] [i_0]))) << (((var_0 && (arr_71 [2] [8] [i_14] [8]))))));
                }
            }
        }
    }
    var_44 = (((((var_1 ? 1 : var_11))) ? var_5 : -var_0));
    #pragma endscop
}
