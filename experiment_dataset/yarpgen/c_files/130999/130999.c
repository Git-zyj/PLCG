/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130999
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += var_9;
    var_12 = 4294967295;
    var_13 = (max(var_13, var_7));

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_14 = (min(var_14, 0));
                    var_15 = (max(var_15, var_10));
                }
            }
        }
        var_16 -= (~var_10);
        var_17 = var_1;
        var_18 += var_4;
        var_19 |= var_7;
    }
    for (int i_3 = 1; i_3 < 11;i_3 += 1)
    {
        var_20 = (max(var_20, 192));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 4; i_5 < 10;i_5 += 1)
            {
                {
                    var_21 -= var_8;

                    for (int i_6 = 3; i_6 < 11;i_6 += 1)
                    {
                        var_22 = (max(var_22, (((min(var_7, 10129118134483613212))))));
                        arr_22 [i_3] [i_4] [i_3] [i_4] = var_9;
                        var_23 += (min(((var_6 ? var_5 : var_6)), var_0));
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 3; i_8 < 13;i_8 += 1)
                        {
                            {
                                var_24 -= ((207 ? 4294967295 : var_2));
                                var_25 -= ((-(!var_6)));
                            }
                        }
                    }
                    var_26 *= var_4;
                    var_27 += var_7;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 15;i_9 += 1)
    {
        /* LoopNest 2 */
        for (int i_10 = 1; i_10 < 12;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 15;i_11 += 1)
            {
                {

                    for (int i_12 = 3; i_12 < 13;i_12 += 1)
                    {
                        var_28 |= var_9;
                        var_29 |= var_5;
                        var_30 = (min(var_30, (!var_7)));
                    }
                    for (int i_13 = 2; i_13 < 13;i_13 += 1)
                    {
                        var_31 += ((~(!var_4)));
                        var_32 = (min(var_32, var_3));

                        for (int i_14 = 1; i_14 < 14;i_14 += 1) /* same iter space */
                        {
                            arr_42 [2] [2] [i_9] [5] [i_14 - 1] = var_10;
                            arr_43 [i_9] [i_10 + 3] [i_11] [i_13] [i_14] = ((6978390306925151300 ? 4294967295 : var_7));
                            var_33 += var_8;
                        }
                        for (int i_15 = 1; i_15 < 14;i_15 += 1) /* same iter space */
                        {
                            var_34 = (max(var_34, (((-420856429 ? 131071 : var_8)))));
                            var_35 += var_10;
                            var_36 = ((1 ? 162 : var_1));
                        }
                        for (int i_16 = 1; i_16 < 14;i_16 += 1) /* same iter space */
                        {
                            var_37 += ((var_1 ? var_10 : ((var_1 ? var_5 : var_10))));
                            var_38 -= var_6;
                        }
                        for (int i_17 = 1; i_17 < 14;i_17 += 1)
                        {
                            var_39 += var_4;
                            var_40 = var_1;
                        }
                        var_41 |= var_5;
                    }
                    var_42 -= -4294967292;
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 1;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 15;i_19 += 1)
                        {
                            {
                                arr_57 [i_9] [6] |= -var_4;
                                arr_58 [i_9] [i_9] [10] [1] [3] = var_4;
                                var_43 += var_8;
                                var_44 = (min(var_44, (((var_10 ? 15 : ((4294967282 ? 4294967292 : 4)))))));
                            }
                        }
                    }
                    var_45 = (min(var_45, var_1));
                    /* LoopNest 2 */
                    for (int i_20 = 0; i_20 < 15;i_20 += 1)
                    {
                        for (int i_21 = 1; i_21 < 1;i_21 += 1)
                        {
                            {
                                var_46 = ((!(((var_8 ? 4294967292 : var_10)))));
                                var_47 += (!0);
                                var_48 = var_6;
                                var_49 -= var_0;
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_22 = 0; i_22 < 15;i_22 += 1)
        {
            for (int i_23 = 0; i_23 < 15;i_23 += 1)
            {
                {
                    var_50 = var_3;
                    var_51 -= ((4294967292 ? 1 : 420856438));
                    /* LoopNest 2 */
                    for (int i_24 = 0; i_24 < 15;i_24 += 1)
                    {
                        for (int i_25 = 1; i_25 < 12;i_25 += 1)
                        {
                            {
                                var_52 = var_6;
                                arr_75 [i_9] [i_22] [i_9] [i_24] [i_25] = 420856429;
                                var_53 = var_5;
                                var_54 = var_4;
                            }
                        }
                    }
                    var_55 -= var_5;
                }
            }
        }
        var_56 = (min(var_56, (!107)));
    }
    var_57 *= (((((~((min(var_10, -9995)))))) ? ((var_8 ? var_4 : var_8)) : (max(var_0, (~var_0)))));
    #pragma endscop
}
