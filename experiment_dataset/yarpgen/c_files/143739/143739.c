/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143739
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_13;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_19 += ((-(min(-2603692382437790302, var_11))));
        arr_2 [i_0] = ((!((max(1048576, var_3)))));
    }
    var_20 = var_2;

    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 11;i_2 += 1)
        {
            var_21 = (!471266949998929741);
            var_22 = var_7;
            var_23 -= 2603692382437790301;
        }
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            var_24 &= 1;

            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                arr_13 [i_1] = var_16;

                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    var_25 |= -779141295;
                    var_26 = 1;
                    var_27 = (!var_7);
                }
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    arr_18 [i_1] [i_3] [i_4] [i_6] = var_0;
                    arr_19 [i_3] [9] [i_3] [i_3] [1] = (min((!var_13), var_5));
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    var_28 = var_15;
                    arr_22 [i_7] [i_3] [i_3] [0] [1] [1] = 25656;
                    arr_23 [i_1] [i_3] [i_3] [i_7] &= var_16;
                    var_29 ^= 11864;
                    arr_24 [i_1] [1] [i_4] [i_4] [i_4] [i_7] = 25657;
                }
            }

            for (int i_8 = 0; i_8 < 12;i_8 += 1)
            {
                arr_27 [i_8] [i_8] [i_8] [i_1] = var_2;
                arr_28 [i_3] [i_8] = (((!var_13) + 65535));
            }
            for (int i_9 = 0; i_9 < 12;i_9 += 1)
            {
                var_30 = (min(var_30, var_15));
                var_31 = ((var_16 * (!1)));
            }
            /* vectorizable */
            for (int i_10 = 0; i_10 < 12;i_10 += 1)
            {
                arr_33 [i_1] [i_3] [i_10] = var_17;
                var_32 = 65535;
                var_33 = var_0;
            }
            var_34 |= ((!((min(-2147483642, var_1)))));
        }
        for (int i_11 = 0; i_11 < 12;i_11 += 1)
        {
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 12;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    {
                        var_35 ^= var_10;
                        arr_40 [i_1] [i_13] = (!2119670013708972644);
                        arr_41 [i_1] [i_11] [i_13] [i_13] = var_10;
                    }
                }
            }
            var_36 -= 2603692382437790301;
            arr_42 [i_1] [i_1] |= var_5;
        }
        arr_43 [i_1] [i_1] = ((~var_6) + 2119670013708972644);
        var_37 = (max(var_37, var_8));
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 12;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 1;i_15 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_16 = 0; i_16 < 12;i_16 += 1) /* same iter space */
                    {
                        var_38 = ((var_6 * (!1)));
                        var_39 = (max(var_39, var_8));
                        arr_53 [i_1] [i_14] [i_15] [i_16] = (((!2119670013708972644) >> (((var_2 << 0) - 3553928670))));
                    }
                    for (int i_17 = 0; i_17 < 12;i_17 += 1) /* same iter space */
                    {
                        var_40 ^= (min((!var_8), (!1)));
                        var_41 = (!(!var_0));
                        var_42 = (var_12 >> var_9);
                        var_43 ^= (!-1768969227);
                    }
                    for (int i_18 = 0; i_18 < 12;i_18 += 1) /* same iter space */
                    {
                        arr_59 [i_18] [i_15] [i_15] [i_14] [i_1] = min(var_12, (min(var_12, var_9)));
                        var_44 = (65520 == var_3);
                        var_45 = (min(var_45, (!var_6)));
                    }

                    for (int i_19 = 0; i_19 < 12;i_19 += 1)
                    {
                        arr_63 [i_1] [i_1] [i_14] [i_1] [i_14] = ((var_14 == (!65316)));
                        arr_64 [i_1] = ((var_6 - (var_4 || var_8)));
                        var_46 = (max(var_46, 22));
                    }
                    var_47 = var_6;
                    arr_65 [i_1] [i_1] [i_15] = (((!(!var_17))));

                    for (int i_20 = 0; i_20 < 1;i_20 += 1)
                    {
                        arr_68 [1] [1] |= (((min(var_17, -17426))));
                        arr_69 [2] [i_1] [i_14] [10] [i_20] = var_6;
                        var_48 = (min(var_48, ((min(((max(var_4, 1))), (max(55553, 39877)))))));
                        var_49 |= var_12;
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_21 = 0; i_21 < 12;i_21 += 1)
        {
            for (int i_22 = 1; i_22 < 9;i_22 += 1)
            {
                for (int i_23 = 0; i_23 < 12;i_23 += 1)
                {
                    {
                        var_50 &= var_12;
                        var_51 = var_9;
                    }
                }
            }
        }
    }
    #pragma endscop
}
