/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14419
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_17 ^= (((((0 ? var_8 : 0))) ? var_1 : var_4));
                                var_18 = (((max(var_1, ((var_11 ? var_6 : 1))))) ? (max(0, ((1 ? 3099297041983365055 : 826388167)))) : ((4294967295 ? 0 : var_5)));
                                var_19 += ((((var_16 ? var_1 : var_0))) ? 1 : var_5);
                            }
                        }
                    }
                }
                var_20 |= ((((max(var_6, var_11))) ? (((1 ? 1 : var_2))) : (((((33554400 ? var_7 : var_16))) ? var_9 : ((-9223372036854775796 ? 5587871348830157762 : var_10))))));
                arr_16 [i_0] = ((var_2 ? (max(var_14, var_0)) : (max(4519495, var_14))));
                var_21 = ((((((max(1, var_9))) ? (max(var_16, var_16)) : var_8))) ? var_10 : (max(-3099297041983365055, 1)));
            }
        }
    }

    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        arr_19 [i_5] = 0;
        var_22 = (min(var_22, var_3));

        for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
        {
            arr_22 [i_6] = ((1 ? ((1729407419 ? var_1 : var_14)) : var_10));
            var_23 = (max(var_23, (((((var_7 ? 0 : 0))) ? (max(((9223372036854775807 ? var_8 : -3577997467860272824)), ((var_8 ? var_11 : var_3)))) : var_9))));
            var_24 -= var_15;
        }
        for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
        {

            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                var_25 = (((((var_6 ? (max(var_3, 1)) : var_6))) ? var_14 : (-9223372036854775807 - 1)));
                var_26 ^= ((((((((9223372036854775796 ? var_4 : 1))) ? var_8 : var_5))) ? ((var_16 ? var_9 : var_16)) : var_16));
                var_27 = 0;
            }
            var_28 = ((((((((3073040201107722393 ? var_7 : var_4))) ? var_15 : ((var_1 ? 7515916049466443126 : var_12))))) ? ((var_2 ? (((var_9 ? var_13 : 0))) : 9223372036854775797)) : ((var_13 ? var_9 : (((var_5 ? 3722589751 : 3359744551)))))));
        }
        for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_10 = 2; i_10 < 8;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    {
                        var_29 = ((var_9 ? ((var_1 ? var_3 : 4294967295)) : ((var_16 ? var_4 : ((var_8 ? -9223372036854775797 : 0))))));
                        var_30 = var_5;
                    }
                }
            }
            var_31 |= (((max(var_4, 0))) ? var_2 : var_14);
        }

        for (int i_12 = 0; i_12 < 11;i_12 += 1)
        {
            var_32 ^= (((((var_15 ? 3351924965 : var_5))) ? var_14 : 8446484598055129214));

            /* vectorizable */
            for (int i_13 = 0; i_13 < 11;i_13 += 1)
            {
                arr_46 [i_5] [4] [i_5] [0] = 8478756376419416617;
                var_33 += 0;
            }
            /* vectorizable */
            for (int i_14 = 0; i_14 < 11;i_14 += 1)
            {

                for (int i_15 = 3; i_15 < 8;i_15 += 1)
                {

                    for (int i_16 = 2; i_16 < 10;i_16 += 1)
                    {
                        arr_56 [i_15] [1] [i_15] = (var_7 ? var_7 : (((1 ? var_8 : 1))));
                        arr_57 [i_5] [i_15] [i_14] [i_15] [i_15] = var_5;
                    }
                    arr_58 [i_12] [i_12] [i_12] [i_15 + 3] [i_14] &= 0;
                    var_34 = ((1 ? var_10 : var_15));
                }
                arr_59 [i_5] = var_15;
                var_35 = 1;
            }
        }
        for (int i_17 = 2; i_17 < 9;i_17 += 1)
        {
            arr_62 [i_17] = var_6;
            arr_63 [i_5] [i_5] [i_5] = var_4;
        }
    }
    for (int i_18 = 4; i_18 < 13;i_18 += 1)
    {

        for (int i_19 = 0; i_19 < 1;i_19 += 1)
        {
            var_36 = (min(var_36, 1));
            arr_70 [4] [i_18] = var_15;
            arr_71 [1] [i_18] = ((((var_1 ? var_4 : -2495055581365162830))) ? ((-9223372036854775797 ? var_9 : 1)) : ((var_10 ? var_1 : var_3)));
        }
        arr_72 [i_18] [i_18 - 1] = 4294967295;
    }
    var_37 -= (max(var_12, (((((var_1 ? 1 : var_9))) ? var_15 : 2899533459))));
    #pragma endscop
}
