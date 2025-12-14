/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130690
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = var_15;

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_7 [10] = var_18;
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
                        {
                            var_20 -= var_16;
                            var_21 = (min(var_21, var_13));
                            var_22 = var_12;
                            var_23 ^= ((((var_19 ? var_12 : var_3))) ? ((var_14 ? var_0 : var_7)) : ((var_13 ? var_2 : var_11)));
                        }
                        for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
                        {
                            var_24 = ((var_0 ? ((var_15 ? var_15 : var_4)) : var_4));
                            var_25 += ((var_7 ? ((var_11 ? var_14 : var_7)) : ((var_11 ? var_5 : var_12))));
                            var_26 &= var_15;
                        }
                        arr_19 [i_0] [i_2] [i_2] [i_2] = var_14;
                        arr_20 [19] [i_2] [i_2] [i_2] = var_0;
                        var_27 = ((var_4 ? var_17 : var_1));
                        var_28 = var_15;
                    }
                }
            }
        }
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            var_29 = (min(var_29, (((((var_17 ? var_7 : var_11))) ? var_0 : var_18))));
            arr_23 [13] [i_6] = var_1;
            var_30 = (max(var_30, var_7));
        }
        arr_24 [i_0] = var_11;

        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {
            var_31 ^= ((var_16 ? var_2 : var_3));
            var_32 -= var_3;
            var_33 = var_18;
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 21;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 21;i_9 += 1)
                {
                    {
                        var_34 = var_17;
                        arr_32 [i_8] = var_0;
                    }
                }
            }
        }
        for (int i_10 = 0; i_10 < 21;i_10 += 1)
        {
            var_35 = (var_17 ? (((var_5 ? var_8 : var_1))) : ((var_2 ? var_14 : var_16)));
            var_36 -= ((var_6 ? var_1 : var_13));
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 21;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 21;i_12 += 1)
                {
                    {
                        var_37 = (max(var_37, var_7));
                        var_38 -= var_15;
                    }
                }
            }
            var_39 = (min(var_39, (((var_7 ? (((var_0 ? var_6 : var_6))) : ((var_3 ? var_13 : var_10)))))));
        }
        for (int i_13 = 0; i_13 < 21;i_13 += 1)
        {
            var_40 = (min(var_40, var_8));
            arr_43 [i_13] = var_14;
            /* LoopNest 3 */
            for (int i_14 = 0; i_14 < 21;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 21;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 21;i_16 += 1)
                    {
                        {
                            var_41 = var_10;
                            var_42 = ((var_16 ? var_11 : var_5));
                        }
                    }
                }
            }
        }
        for (int i_17 = 0; i_17 < 1;i_17 += 1)
        {
            var_43 = var_19;
            var_44 = (min(var_44, var_15));
        }
    }
    /* vectorizable */
    for (int i_18 = 0; i_18 < 1;i_18 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_19 = 0; i_19 < 1;i_19 += 1)
        {
            for (int i_20 = 0; i_20 < 21;i_20 += 1)
            {
                {
                    arr_64 [i_18] [20] [12] = ((-2147483647 - 1) ? 4294967291 : 8);
                    /* LoopNest 2 */
                    for (int i_21 = 0; i_21 < 21;i_21 += 1)
                    {
                        for (int i_22 = 0; i_22 < 21;i_22 += 1)
                        {
                            {
                                var_45 *= var_7;
                                arr_71 [i_18] [i_18] [i_20] [i_21] [i_21] = ((var_13 ? ((var_14 ? var_3 : var_5)) : ((var_10 ? var_12 : var_5))));
                            }
                        }
                    }
                }
            }
        }
        var_46 = (min(var_46, (((var_4 ? var_19 : (((var_7 ? var_4 : var_1))))))));
        arr_72 [5] = var_10;
    }
    var_47 = (min(var_47, ((max(var_12, (((((var_6 ? var_7 : var_4))) ? (max(var_18, var_10)) : (((var_12 ? var_11 : var_14))))))))));
    var_48 = var_2;
    #pragma endscop
}
