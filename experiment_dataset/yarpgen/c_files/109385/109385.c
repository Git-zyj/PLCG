/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109385
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        var_15 += -var_8;
                        var_16 = ((var_8 ? var_8 : var_11));
                        arr_11 [i_3] [i_1] [i_3] = (!var_5);
                        var_17 ^= ((27428 ? 16225767222026639451 : 1473290234));
                    }
                    var_18 ^= ((var_2 ? var_3 : var_13));
                }
            }
        }
        var_19 ^= var_12;

        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            var_20 = ((var_10 ? var_12 : var_1));
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 21;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        {
                            var_21 = -var_14;
                            var_22 = (var_8 ? var_6 : var_13);
                        }
                    }
                }
            }
            var_23 = (min(var_23, var_14));
        }
        var_24 &= var_9;
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 22;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 22;i_9 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 22;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 22;i_11 += 1)
                    {
                        {
                            var_25 = (((((var_0 ? var_12 : var_8))) ? var_6 : -var_8));
                            arr_33 [i_10] [i_9] [i_9] [i_9] [i_10] = var_9;
                        }
                    }
                }
                var_26 &= (!var_10);
                var_27 = var_10;
            }
        }
    }
    var_28 = (~((var_0 ? var_12 : var_1)));
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 13;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 13;i_13 += 1)
        {
            {

                for (int i_14 = 0; i_14 < 13;i_14 += 1)
                {
                    var_29 = ((!(((var_14 ? var_2 : var_5)))));

                    for (int i_15 = 0; i_15 < 13;i_15 += 1) /* same iter space */
                    {
                        var_30 -= (((!var_0) ? -var_13 : ((var_13 ? var_6 : var_6))));
                        var_31 &= (-((var_7 ? var_9 : var_7)));
                        var_32 = ((!(!var_3)));
                    }
                    for (int i_16 = 0; i_16 < 13;i_16 += 1) /* same iter space */
                    {

                        /* vectorizable */
                        for (int i_17 = 0; i_17 < 13;i_17 += 1)
                        {
                            var_33 = ((var_6 ? -var_9 : var_1));
                            var_34 = (min(var_34, -var_5));
                            var_35 = (min(var_35, -var_14));
                        }
                        var_36 |= (((((11750 ? -9083801319192813624 : 17764))) ? -var_5 : -var_5));
                        var_37 -= ((!(!var_8)));
                        var_38 = ((var_0 ? (((((var_6 ? var_3 : var_3))) ? (!var_10) : -var_3)) : -21431));
                    }
                }
                for (int i_18 = 0; i_18 < 13;i_18 += 1)
                {
                    var_39 = ((-((var_13 ? var_14 : var_12))));
                    var_40 = ((-1940172760 ? var_4 : -var_2));

                    for (int i_19 = 0; i_19 < 13;i_19 += 1)
                    {
                        var_41 = ((!(!-460171230)));
                        var_42 = (((((var_10 ? var_9 : var_8))) ? 245 : ((var_2 ? var_0 : var_0))));
                    }
                    for (int i_20 = 1; i_20 < 1;i_20 += 1) /* same iter space */
                    {
                        var_43 = (min(var_43, var_6));
                        arr_59 [i_20 - 1] [i_20 - 1] [i_20] [i_20] [11] [11] = (2147483647 ? 4073799011 : 255);
                    }
                    /* vectorizable */
                    for (int i_21 = 1; i_21 < 1;i_21 += 1) /* same iter space */
                    {
                        var_44 = (max(var_44, ((var_1 ? var_11 : var_2))));
                        var_45 ^= var_0;
                    }
                    /* vectorizable */
                    for (int i_22 = 4; i_22 < 12;i_22 += 1)
                    {
                        var_46 = ((var_0 ? var_1 : var_13));

                        for (int i_23 = 1; i_23 < 12;i_23 += 1)
                        {
                            var_47 = var_0;
                            var_48 = (min(var_48, (!var_0)));
                        }
                        for (int i_24 = 0; i_24 < 13;i_24 += 1)
                        {
                            var_49 = ((var_0 ? var_1 : var_4));
                            var_50 = (min(var_50, (((var_8 ? var_3 : var_6)))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_25 = 0; i_25 < 13;i_25 += 1)
                {
                    for (int i_26 = 0; i_26 < 13;i_26 += 1)
                    {
                        for (int i_27 = 0; i_27 < 13;i_27 += 1)
                        {
                            {
                                var_51 = -var_4;
                                var_52 = ((-(+-1940172761)));
                                var_53 = ((-((var_4 ? (!var_1) : ((var_14 ? var_3 : var_11))))));
                                var_54 = (((var_14 ? var_8 : var_11)));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_28 = 0; i_28 < 13;i_28 += 1)
                {
                    for (int i_29 = 0; i_29 < 13;i_29 += 1)
                    {
                        {
                            var_55 = (max(var_55, var_14));
                            var_56 *= (((((-((var_14 ? var_4 : var_11))))) ? (!var_5) : ((var_1 ? ((var_10 ? var_3 : var_11)) : -var_3))));
                            var_57 = (min(var_57, -var_11));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
