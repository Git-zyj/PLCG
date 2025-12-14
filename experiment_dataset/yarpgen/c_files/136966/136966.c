/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136966
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_1;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_9 [i_0] [10] [i_0] [i_0] = var_3;
                        var_19 = (((((var_3 ? var_11 : var_2))) ? -var_4 : (var_5 / var_9)));
                    }
                    var_20 = var_7;
                }
            }
        }

        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            var_21 = (((((0 ? 255 : 0))) ? ((var_8 ? var_6 : var_5)) : (((var_16 ? var_1 : var_12)))));
            arr_12 [11] [i_0] [1] = ((-(-1235790986265095035 / var_12)));

            for (int i_5 = 1; i_5 < 14;i_5 += 1)
            {

                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    arr_20 [i_0] [i_0] = (-var_6 < -var_13);
                    arr_21 [1] [i_0] [i_0] [i_0] = (((((var_1 ? var_3 : var_4))) ? var_16 : var_16));
                }
                for (int i_7 = 3; i_7 < 13;i_7 += 1) /* same iter space */
                {

                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        var_22 = ((var_0 ? var_14 : -var_7));
                        arr_29 [i_0] [i_4] [i_4] [i_4] [i_4] = -var_17;
                        arr_30 [i_0] [10] [i_0] [i_0] [i_0] [i_0] = ((~var_3) ? -var_12 : -var_12);
                        var_23 = ((((1 ? 4622718901495606695 : 13824025172213944933))) ? 1 : 4622718901495606670);
                    }
                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {
                        arr_33 [11] [i_0] [12] [i_7 - 2] = (((((101 ? 255 : -2000190008))) ? ((9991411332761300436 ? 85 : -53)) : (var_12 != var_4)));
                        var_24 = ((0 < 63) ? ((var_11 ? var_16 : var_17)) : -var_16);
                        var_25 = ((((var_4 ? var_5 : var_17))) ? ((var_17 ? var_8 : var_10)) : (var_1 == var_10));
                        var_26 = (--3820585017);
                        var_27 = -var_7;
                    }
                    var_28 = ((-var_13 ? var_10 : -var_10));
                }
                for (int i_10 = 3; i_10 < 13;i_10 += 1) /* same iter space */
                {

                    for (int i_11 = 0; i_11 < 15;i_11 += 1)
                    {
                        var_29 = -var_9;
                        arr_40 [i_0] [i_0] [i_0] [13] [5] [4] = ((89 ? ((232 ? -1256556119 : 7859342789940999506)) : 3781446164024500279));
                    }
                    for (int i_12 = 0; i_12 < 15;i_12 += 1)
                    {
                        arr_43 [i_0] [i_0] [i_0] [10] [i_0] = (((var_16 != var_15) ? (((var_16 ? var_5 : var_8))) : -var_10));
                        arr_44 [1] [1] [i_0] = (((((var_1 ? var_0 : var_3))) ? ((var_2 ? var_4 : var_7)) : ((var_16 ? var_6 : var_9))));
                    }
                    for (int i_13 = 1; i_13 < 12;i_13 += 1)
                    {
                        var_30 = ((-((var_8 ? var_10 : var_12))));
                        arr_49 [i_10 + 1] [i_0] [i_10 - 2] [0] [i_10] [i_10 - 2] [5] = ((-(~var_0)));
                        arr_50 [0] [i_4] [i_0] [i_4] [3] [i_4] [13] = (((((var_15 ? var_7 : var_3))) ? (var_8 * var_4) : (~var_9)));
                        var_31 = -var_4;
                        var_32 = var_4;
                    }
                    var_33 = (((13824025172213944914 / var_16) ? (((var_14 ? var_16 : var_16))) : ((var_12 ? var_15 : var_14))));
                }
                for (int i_14 = 3; i_14 < 13;i_14 += 1) /* same iter space */
                {
                    var_34 = var_11;
                    arr_53 [i_0] [i_0] [9] [i_5 - 1] [i_14 - 2] [i_14 + 2] = (((((var_6 ? var_16 : var_14))) ? var_16 : var_8));
                    arr_54 [i_0] [8] [i_0] [i_14] = ((~((var_14 ? var_13 : var_9))));
                }
                var_35 = (~1235790986265095035);
            }
            for (int i_15 = 0; i_15 < 15;i_15 += 1)
            {
                var_36 = (-var_3 % -var_9);
                var_37 = ((-((var_1 ? var_5 : var_0))));
                arr_59 [i_0] = ((-((var_9 ? var_10 : var_13))));
            }
            arr_60 [i_0] = ((67092480 ? 67092509 : 1));
        }
        for (int i_16 = 0; i_16 < 15;i_16 += 1)
        {
            var_38 = ((~(var_17 & var_10)));
            arr_64 [i_0] [i_0] = var_11;
            /* LoopNest 3 */
            for (int i_17 = 0; i_17 < 15;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 15;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 15;i_19 += 1)
                    {
                        {
                            var_39 = (((var_3 <= var_0) != (var_13 / var_14)));
                            arr_73 [i_0] [i_0] [i_0] [i_0] [i_0] = ((-((var_16 ? var_14 : var_10))));
                            arr_74 [i_0] = (((((var_14 ? var_10 : var_6))) ? (var_14 % var_4) : -var_5));
                        }
                    }
                }
            }
            var_40 = (((((var_2 ? var_5 : var_13))) ? var_9 : (((var_2 ? var_17 : var_8)))));
        }
        for (int i_20 = 3; i_20 < 14;i_20 += 1)
        {
            arr_78 [i_0] = ((~(~var_0)));
            var_41 = ((-((var_12 ? var_7 : var_17))));
        }
        arr_79 [i_0] = (((var_6 & var_10) ? -var_8 : ((var_1 ? var_5 : var_6))));
        var_42 = ((var_13 ^ ((var_17 >> (var_7 - 9327874314413409065)))));
    }
    #pragma endscop
}
