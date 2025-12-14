/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180528
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                var_16 = (min(var_16, (((var_1 ? var_14 : ((var_14 ? var_9 : var_9)))))));
                var_17 ^= (~var_3);
            }
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                var_18 *= ((var_10 ? var_9 : var_1));
                var_19 *= ((var_8 ? (~var_7) : ((var_13 ? var_13 : var_10))));
                var_20 = (max(var_20, var_0));
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 4; i_5 < 10;i_5 += 1)
                    {
                        {
                            var_21 = (min(var_21, (((var_3 ? var_14 : var_2)))));
                            var_22 = var_6;
                        }
                    }
                }
            }
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                arr_18 [i_1] [i_1] [i_1] = ((var_8 ? ((var_1 ? var_13 : var_15)) : (!var_15)));
                var_23 = ((var_8 ? var_3 : (((var_3 ? var_0 : var_14)))));
            }
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        {
                            var_24 = ((var_9 ? var_10 : var_14));
                            var_25 ^= var_15;
                        }
                    }
                }
            }
            var_26 = (min(var_26, (((-((48 ? 31660 : 31669)))))));
        }
        var_27 ^= (((((var_12 ? var_10 : var_1))) ? (!var_12) : ((-((var_8 ? var_1 : var_0))))));
        var_28 = (((!-var_8) ? (((var_9 ? var_4 : var_14))) : ((var_15 ? var_1 : var_3))));
    }

    for (int i_10 = 0; i_10 < 18;i_10 += 1)
    {
        var_29 = var_9;

        /* vectorizable */
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            var_30 = (min(var_30, ((((-2147483647 - 1) ? (-127 - 1) : 14943227413189316564)))));

            for (int i_12 = 2; i_12 < 17;i_12 += 1)
            {
                arr_33 [i_10] [i_11] [i_11] [10] = ((var_4 ? var_15 : var_14));

                for (int i_13 = 0; i_13 < 18;i_13 += 1) /* same iter space */
                {
                    var_31 = (max(var_31, ((var_1 ? var_0 : var_0))));
                    arr_37 [i_10] [i_11] [i_12 + 1] [i_13] [i_11] = ((var_12 ? var_8 : var_4));
                    var_32 = (min(var_32, var_6));
                }
                for (int i_14 = 0; i_14 < 18;i_14 += 1) /* same iter space */
                {
                    var_33 = ((((var_4 ? var_6 : var_7))) ? var_8 : var_12);
                    var_34 *= (!var_10);
                }
                for (int i_15 = 2; i_15 < 16;i_15 += 1)
                {

                    for (int i_16 = 0; i_16 < 18;i_16 += 1)
                    {
                        var_35 = ((!(((var_13 ? var_15 : var_2)))));
                        var_36 ^= (((((var_7 ? var_7 : var_7))) ? var_7 : var_2));
                        var_37 = (!var_14);
                        arr_46 [6] [i_11] [i_11] [i_11] [i_16] = (((((var_10 ? var_5 : var_15))) ? -var_3 : (!var_14)));
                    }
                    var_38 = (max(var_38, (((var_8 ? var_10 : ((var_1 ? var_12 : var_15)))))));
                }
                for (int i_17 = 0; i_17 < 18;i_17 += 1)
                {
                    arr_49 [i_11] [i_11] [i_11] = ((var_15 ? var_3 : var_14));
                    arr_50 [i_11] [i_11] [i_12] = (((((var_15 ? var_15 : var_13))) ? ((var_15 ? var_5 : var_15)) : ((var_7 ? var_14 : var_9))));
                }
                arr_51 [i_10] [i_10] [i_10] [i_11] = var_14;
            }
            for (int i_18 = 0; i_18 < 18;i_18 += 1)
            {
                var_39 = ((var_1 ? var_9 : var_8));
                arr_56 [i_10] [i_11] [i_11] = ((var_6 ? var_7 : (!var_5)));
                var_40 ^= ((-var_6 ? var_8 : var_7));
            }
            for (int i_19 = 0; i_19 < 18;i_19 += 1) /* same iter space */
            {

                for (int i_20 = 1; i_20 < 16;i_20 += 1) /* same iter space */
                {
                    var_41 ^= ((var_6 ? var_13 : var_11));

                    for (int i_21 = 0; i_21 < 18;i_21 += 1)
                    {
                        arr_66 [i_11] [i_11] [i_19] [i_20] [i_11] = ((var_11 ? var_6 : (~-86)));
                        var_42 = (((((-5468303270401579854 ? (-127 - 1) : (-2147483647 - 1)))) ? ((var_12 ? var_5 : var_11)) : var_0));
                    }
                    for (int i_22 = 4; i_22 < 14;i_22 += 1)
                    {
                        var_43 = var_3;
                        var_44 = (max(var_44, (!var_0)));
                        arr_69 [i_10] [i_11] [i_11] = -var_7;
                        var_45 *= -var_8;
                    }
                    for (int i_23 = 1; i_23 < 17;i_23 += 1)
                    {
                        var_46 = var_3;
                        arr_72 [i_23 - 1] [i_11] [i_19] [i_11] [i_23] [i_11] [i_19] = -var_8;
                    }
                }
                for (int i_24 = 1; i_24 < 16;i_24 += 1) /* same iter space */
                {
                    var_47 ^= (((((var_6 ? var_5 : var_13))) ? var_13 : var_4));

                    for (int i_25 = 0; i_25 < 18;i_25 += 1)
                    {
                        arr_77 [i_24] [i_11] = ((var_14 ? var_4 : var_8));
                        var_48 = (min(var_48, (((31666 ? (-127 - 1) : -23574)))));
                    }
                    var_49 = (max(var_49, var_7));
                    var_50 = ((var_6 ? var_10 : var_4));
                }
                for (int i_26 = 1; i_26 < 16;i_26 += 1) /* same iter space */
                {

                    for (int i_27 = 0; i_27 < 18;i_27 += 1)
                    {
                        arr_83 [i_10] [i_11] [i_11] [i_11] [i_11] [i_11] = 94;
                        var_51 = 21;
                    }
                    var_52 = (min(var_52, (((13 ? -106 : -4)))));
                    var_53 *= ((var_13 ? var_0 : ((var_10 ? var_5 : var_13))));
                    var_54 = (((((var_14 ? var_15 : var_15))) ? -var_7 : ((var_5 ? var_12 : var_10))));
                }
                arr_84 [i_11] [i_11] [i_19] = ((var_5 ? var_0 : var_6));
            }
            for (int i_28 = 0; i_28 < 18;i_28 += 1) /* same iter space */
            {
                var_55 *= var_4;
                var_56 *= ((var_3 ? var_15 : var_10));
                var_57 = (max(var_57, var_1));
            }
            var_58 = (((((var_9 ? var_6 : var_9))) ? var_10 : var_12));
        }
        var_59 = (max(var_59, (((92 ? 23566 : var_2)))));
    }
    for (int i_29 = 1; i_29 < 20;i_29 += 1)
    {
        /* LoopNest 2 */
        for (int i_30 = 0; i_30 < 21;i_30 += 1)
        {
            for (int i_31 = 0; i_31 < 21;i_31 += 1)
            {
                {
                    var_60 ^= ((-(((((var_12 ? var_11 : var_10))) ? var_15 : var_12))));
                    arr_97 [i_29] [i_30] [i_30] = (((!var_12) ? (((((var_4 ? var_2 : var_6))) ? var_9 : ((var_14 ? var_15 : var_14)))) : (!var_9)));
                    arr_98 [i_30] = var_13;
                }
            }
        }
        var_61 = ((((((~var_3) ? (~var_7) : ((var_4 ? var_3 : var_9))))) ? (((-var_5 ? var_2 : ((var_3 ? var_15 : var_0))))) : ((var_8 ? var_3 : var_14))));
        var_62 = (((((var_3 ? var_13 : var_1))) ? ((var_8 ? var_10 : var_3)) : ((var_5 ? var_11 : var_6))));
        var_63 *= var_2;
    }
    var_64 = (min(var_64, ((((((var_8 ? ((var_12 ? var_4 : var_3)) : -var_0))) ? (((((var_1 ? var_14 : var_7))) ? var_6 : ((var_14 ? var_12 : var_12)))) : (~var_5))))));
    var_65 ^= var_13;
    var_66 *= (((var_13 ? ((var_11 ? var_5 : var_2) : ((var_15 ? var_13 : var_11))))));
    #pragma endscop
}
