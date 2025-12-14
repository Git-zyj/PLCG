/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140609
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_14 = (min(var_14, 3264610263));

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        {
                            arr_13 [i_0] [i_0] [i_2] [i_3] [i_2] = ((var_6 ? 1030357032 : (((-(arr_4 [i_0 - 1] [i_0] [i_0]))))));
                            arr_14 [i_0] [i_1] [1] [i_0] [i_4] = var_13;
                            var_15 ^= (((1 * 0) < ((var_12 ? 63 : var_9))));
                            var_16 = (max(var_16, (((!((max(-27, 4886111688019121162))))))));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    {

                        for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
                        {
                            arr_22 [i_7] [i_6] [i_0] [i_1] [1] = (min(var_10, var_9));
                            var_17 = 1;
                            arr_23 [i_0] [i_6] [11] [i_6] [i_6] [i_5] [i_5] = ((-var_10 ? var_0 : (!0)));
                            var_18 = var_11;
                        }
                        for (int i_8 = 0; i_8 < 16;i_8 += 1) /* same iter space */
                        {
                            var_19 = (min(var_19, ((min(((var_11 * (arr_7 [i_0] [i_1] [i_5] [i_0 - 1]))), (arr_7 [i_0] [i_1] [i_5] [i_0 - 1]))))));
                            var_20 = (1 && 1);
                            var_21 = (min(var_21, (max((min(var_2, var_13)), var_2))));
                            arr_28 [1] [1] [6] [i_0] [1] [7] = 17662389736910509578;
                        }
                        for (int i_9 = 1; i_9 < 14;i_9 += 1)
                        {
                            var_22 = (min(var_22, (((((arr_19 [i_5] [i_9 - 1]) ? var_6 : var_11))))));
                            arr_31 [i_0] [i_1] [i_6] [i_0] [i_1] [i_1] [i_1] = var_8;
                        }

                        for (int i_10 = 0; i_10 < 16;i_10 += 1)
                        {
                            var_23 |= 0;
                            var_24 = var_0;
                        }
                    }
                }
            }

            for (int i_11 = 0; i_11 < 16;i_11 += 1)
            {

                /* vectorizable */
                for (int i_12 = 0; i_12 < 16;i_12 += 1)
                {

                    for (int i_13 = 1; i_13 < 15;i_13 += 1)
                    {
                        arr_40 [i_0] [i_1] [1] [i_0] [i_13 - 1] = (!40);
                        var_25 = -32756;
                        var_26 = ((var_2 > ((7205137100962912875 ? -10 : -4886111688019121171))));
                    }
                    for (int i_14 = 1; i_14 < 1;i_14 += 1) /* same iter space */
                    {
                        var_27 |= var_4;
                        var_28 = (arr_32 [i_0] [15] [i_0 - 1] [13] [i_0] [i_0]);
                        var_29 = (min(var_29, (var_13 * var_13)));
                    }
                    for (int i_15 = 1; i_15 < 1;i_15 += 1) /* same iter space */
                    {
                        arr_47 [i_0] [i_0] [i_11] [i_0] = (((arr_12 [i_1] [i_12] [i_11] [i_12] [i_1] [i_0 - 1] [8]) ? var_10 : (arr_11 [i_0] [i_1])));
                        arr_48 [11] [i_0] [i_11] [i_0] = ((956432022234822100 ? var_13 : (arr_26 [i_1] [i_1] [i_11] [i_0] [i_15 - 1] [i_12])));
                        arr_49 [i_0] [i_0] [i_12] = (1 * 127);
                        var_30 = -var_13;
                    }
                    arr_50 [i_0] [i_1] [14] [i_0] [12] [5] = (4 > var_2);
                }
                var_31 = (max(var_31, 127));
            }
            for (int i_16 = 0; i_16 < 16;i_16 += 1) /* same iter space */
            {

                /* vectorizable */
                for (int i_17 = 0; i_17 < 1;i_17 += 1)
                {
                    var_32 = (arr_5 [i_0] [i_0] [i_0] [i_0]);

                    for (int i_18 = 0; i_18 < 16;i_18 += 1)
                    {
                        var_33 = (((arr_11 [i_0 - 1] [i_0 - 1]) ? (arr_5 [i_0] [i_0 - 1] [i_0] [i_17]) : var_8));
                        arr_60 [i_0] [i_1] [i_16] [i_16] [i_0] = ((2867365068 ? 6609467614822348482 : 0));
                    }
                    arr_61 [i_0 - 1] [i_1] [i_16] [1] [i_17] [i_0] = ((var_6 ? var_0 : -66));
                    arr_62 [i_0] [i_0] [i_1] [13] [13] [i_17] = (~4);
                }
                for (int i_19 = 0; i_19 < 16;i_19 += 1)
                {
                    var_34 = 0;
                    arr_65 [i_0] [5] [i_16] [i_19] = ((671058710 ? var_7 : ((52858 ? (!var_13) : 3623908585))));
                    var_35 = 13;
                    arr_66 [i_19] [i_0] [i_1] [i_1] [i_0] [i_0] = (var_13 ^ 1);
                }
                arr_67 [i_0] [i_16] [i_16] = (((((var_13 ? 10653185202338177218 : 8064))) ? (((arr_44 [5] [5] [i_16] [1] [i_1]) & var_4)) : ((max(1, (arr_44 [i_0 - 1] [i_1] [i_1] [14] [i_16]))))));
            }
            for (int i_20 = 0; i_20 < 16;i_20 += 1) /* same iter space */
            {
                var_36 = (max(var_36, var_12));
                var_37 = 9223372036854775797;
                arr_72 [i_20] [i_0] [i_0] = ((min(var_9, var_4)));
                arr_73 [i_0] = (((((var_11 ? 12677 : (arr_42 [i_0] [i_1] [i_0])))) ? var_12 : 1));
            }
        }
        arr_74 [i_0] [i_0] = (-2007392714 || 5939);
    }
    var_38 = var_9;
    var_39 ^= 18299809644803642857;
    #pragma endscop
}
