/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119517
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, (~var_5)));

    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        arr_4 [8] |= ((~(((!(~var_11))))));
        var_20 = -var_6;
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_1] = ((~((~(~var_6)))));
                    var_21 ^= (!var_10);
                    var_22 = -90;
                    var_23 = (!var_11);
                }
            }
        }
        arr_10 [0] = var_1;
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 8;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                {
                    arr_17 [i_3] |= ((13959827287943070082 ? var_14 : var_8));

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        var_24 = (max(var_24, (~var_16)));
                        arr_21 [i_5] [i_4] [i_4] [i_0 - 1] = (!-var_13);
                        arr_22 [0] [i_4] [0] [7] = ((-(!var_3)));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        arr_25 [8] [i_0] [i_3] [i_4] [i_4] [i_6] = var_0;
                        var_25 = var_17;

                        for (int i_7 = 1; i_7 < 9;i_7 += 1) /* same iter space */
                        {
                            var_26 = (!var_16);
                            var_27 &= var_1;
                        }
                        for (int i_8 = 1; i_8 < 9;i_8 += 1) /* same iter space */
                        {
                            arr_32 [6] [i_4] [i_4] [i_3] [i_3] [i_4] [i_0] = (!(~var_5));
                            var_28 = (max(var_28, (!var_11)));
                        }
                        arr_33 [i_0 + 4] [i_6] [i_4] [i_6] &= -var_8;
                    }
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 20;i_9 += 1)
    {

        for (int i_10 = 2; i_10 < 18;i_10 += 1)
        {
            /* LoopNest 3 */
            for (int i_11 = 0; i_11 < 20;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 20;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 20;i_13 += 1)
                    {
                        {
                            arr_49 [i_11] [i_10] [i_10] [i_12] [i_10] = ((+((var_14 ? (~var_10) : (~var_10)))));
                            var_29 = (~var_11);
                            arr_50 [i_9] [i_9] [i_9] = ((1 ? ((((205 ? 1 : -70)))) : (~var_2)));
                            arr_51 [i_9] [i_10 - 2] [19] [i_9] [1] [i_12] [1] = (((((~(!var_15)))) ? (!var_14) : ((-var_10 ? (~var_9) : ((var_15 ? var_6 : var_10))))));
                        }
                    }
                }
            }
            var_30 = (((~((var_11 ? var_13 : var_15)))));
        }
        for (int i_14 = 0; i_14 < 20;i_14 += 1)
        {
            /* LoopNest 2 */
            for (int i_15 = 1; i_15 < 18;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 20;i_16 += 1)
                {
                    {
                        var_31 = ((~((var_13 ? (~var_1) : var_1))));

                        for (int i_17 = 4; i_17 < 19;i_17 += 1)
                        {
                            var_32 = (max(var_32, ((((var_3 ? var_14 : var_1))))));
                            var_33 = (~var_13);
                        }
                        /* vectorizable */
                        for (int i_18 = 0; i_18 < 20;i_18 += 1) /* same iter space */
                        {
                            arr_64 [i_9] [1] [i_14] [i_15] [i_16] [i_9] = ((-(~var_11)));
                            var_34 = (!var_9);
                            var_35 = var_7;
                        }
                        for (int i_19 = 0; i_19 < 20;i_19 += 1) /* same iter space */
                        {
                            var_36 = var_13;
                            arr_68 [11] [i_14] [i_14] [i_14] [i_14] [i_14] = (((((var_9 ? (!var_1) : var_3))) ? var_7 : (((var_0 ? var_1 : var_3)))));
                            var_37 &= var_9;
                        }
                        for (int i_20 = 0; i_20 < 20;i_20 += 1) /* same iter space */
                        {
                            var_38 = var_17;
                            var_39 = (!var_17);
                            var_40 = (!-var_10);
                        }
                        arr_71 [i_16] [i_15] [16] [i_14] [i_9] &= (((var_17 ? var_3 : (~var_8))));
                        var_41 *= var_15;
                    }
                }
            }

            for (int i_21 = 3; i_21 < 19;i_21 += 1)
            {
                arr_74 [i_9] [0] [i_21 - 1] [i_21] = (~var_5);
                arr_75 [i_21] [i_14] [i_9] = ((-((var_9 ? var_3 : var_9))));
            }
            for (int i_22 = 0; i_22 < 1;i_22 += 1)
            {
                /* LoopNest 2 */
                for (int i_23 = 0; i_23 < 20;i_23 += 1)
                {
                    for (int i_24 = 0; i_24 < 20;i_24 += 1)
                    {
                        {
                            var_42 = (~(~var_13));
                            arr_84 [6] [i_23] [7] [i_22] [i_23] [14] [i_24] = (!var_15);
                        }
                    }
                }
                arr_85 [1] [i_22] = (~-var_14);
            }
            for (int i_25 = 0; i_25 < 20;i_25 += 1)
            {
                arr_89 [i_9] [i_14] = ((~(!-var_4)));
                arr_90 [i_9] [i_9] [i_9] = ((!((((((var_12 ? var_15 : var_10))) ? var_3 : ((var_0 ? var_17 : var_3)))))));
            }
            /* LoopNest 2 */
            for (int i_26 = 0; i_26 < 20;i_26 += 1)
            {
                for (int i_27 = 0; i_27 < 20;i_27 += 1)
                {
                    {
                        arr_96 [1] [i_27] [i_27] [i_9] = ((-((~(!var_7)))));
                        var_43 *= -var_5;
                    }
                }
            }
        }
        var_44 = ((~((((var_0 ? var_4 : var_12))))));
    }
    for (int i_28 = 2; i_28 < 12;i_28 += 1)
    {
        /* LoopNest 2 */
        for (int i_29 = 0; i_29 < 1;i_29 += 1)
        {
            for (int i_30 = 0; i_30 < 14;i_30 += 1)
            {
                {
                    var_45 = var_3;
                    var_46 = 52;
                }
            }
        }
        arr_104 [i_28] = (~var_13);
    }
    var_47 &= (~var_1);
    #pragma endscop
}
