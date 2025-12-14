/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164118
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_18 = (min(var_18, ((min((4261412864 | 18446744073709551588), var_5)))));
        var_19 = (min(var_19, ((((max(((var_9 ? var_9 : (arr_0 [i_0]))), (arr_1 [i_0]))) >= (((var_17 ? 32 : 1))))))));
        arr_2 [i_0] = var_3;
        var_20 = var_10;
        var_21 *= ((-var_5 && ((min(var_10, (arr_0 [i_0]))))));
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 15;i_3 += 1)
            {
                {
                    var_22 = ((((min((arr_10 [i_3] [i_3 - 2] [i_3] [i_2]), (arr_10 [i_3] [i_3 + 1] [i_3] [i_2])))) >= (((arr_10 [i_3] [i_3 + 2] [i_3] [i_2]) ? (arr_10 [i_3] [i_3 - 3] [i_3] [i_2]) : var_8))));
                    arr_11 [i_1] [i_1] [i_2] [i_1] = ((~(max((var_0 ^ -26), ((((arr_6 [i_1]) == 51)))))));
                    var_23 += (min(var_6, (((-((max(var_11, (arr_3 [i_1] [i_2])))))))));
                }
            }
        }
    }
    var_24 = (max(var_24, ((((((!(!var_13)))) >> ((((max(((max(var_10, var_8))), (min(var_7, var_5))))) - 215)))))));

    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    var_25 = ((((28 <= ((-1942427995 ? -9223372036854775785 : 742167569395316096)))) ? var_17 : ((var_4 ? var_2 : -var_17))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 12;i_8 += 1)
                        {
                            {
                                arr_23 [i_7] [i_5] = (((((arr_16 [i_5 + 1] [i_5 + 1]) <= (max((arr_6 [i_6]), (arr_19 [i_7] [i_7] [i_7]))))) ? var_2 : (arr_19 [i_4] [i_4] [i_7])));
                                var_26 = 15;
                                var_27 ^= 34;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 2; i_9 < 11;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 12;i_10 += 1)
                        {
                            {
                                var_28 = (min(var_28, ((((2059309986 <= -35) ? (((((arr_19 [i_5] [i_5 - 1] [i_10]) == var_6)))) : (min((arr_14 [i_5] [i_5 - 1] [i_10]), var_6)))))));
                                var_29 = (min(var_29, 4));
                                var_30 = (((((-((var_17 ? (arr_7 [i_9]) : var_4))))) * (min(((var_1 ? (arr_25 [i_10] [i_9] [i_6] [i_5]) : var_12)), var_4))));
                                var_31 &= 1;
                                arr_30 [i_4] [i_4] = (max((((16 ? (arr_5 [i_9 - 1] [i_5 + 1]) : (arr_5 [i_9 + 1] [i_5 - 1])))), (max(-3993321538366983481, -98))));
                            }
                        }
                    }
                    arr_31 [i_4] [i_4] [i_4] |= (arr_20 [i_6] [i_5] [i_4] [i_4]);
                }
            }
        }
        var_32 = ((((max(var_10, (arr_9 [i_4] [i_4] [i_4] [i_4])))) ? (max((((var_12 ? var_16 : var_10))), (arr_6 [i_4]))) : ((((~var_9) ? (!var_9) : ((max((arr_19 [i_4] [i_4] [i_4]), var_4))))))));
    }
    for (int i_11 = 1; i_11 < 15;i_11 += 1)
    {

        for (int i_12 = 1; i_12 < 15;i_12 += 1)
        {
            var_33 *= ((-1942428003 ? 55 : -3993321538366983453));
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                for (int i_14 = 1; i_14 < 15;i_14 += 1)
                {
                    {
                        arr_41 [i_11] [i_12] [i_13] [0] &= (((arr_39 [i_11] [i_12] [i_13] [i_14]) & (((var_12 ^ var_16) ? ((max(var_14, (arr_6 [i_11])))) : ((231 ? 274877906936 : 1942427995))))));
                        var_34 = (min(var_34, (((4237721902566504654 ? -94 : 2298803010)))));
                        var_35 ^= var_6;
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_15 = 4; i_15 < 12;i_15 += 1)
        {

            for (int i_16 = 3; i_16 < 15;i_16 += 1)
            {
                arr_48 [i_11] [i_15] [i_16] [i_16] = var_17;
                var_36 = ((((var_4 ? (arr_36 [6] [i_15] [6]) : var_3)) + (arr_45 [i_11 - 1] [i_11])));
                /* LoopNest 2 */
                for (int i_17 = 3; i_17 < 13;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 1;i_18 += 1)
                    {
                        {
                            var_37 = (min(var_37, var_10));
                            var_38 |= 65535;
                        }
                    }
                }
            }
            var_39 = (max(var_39, (arr_1 [i_11 + 1])));
        }

        for (int i_19 = 0; i_19 < 16;i_19 += 1) /* same iter space */
        {
            var_40 = (min(var_40, (arr_53 [i_11] [i_11] [i_11 - 1] [i_11] [i_19] [i_19] [i_19])));
            var_41 *= (((arr_6 [i_11 - 1]) <= (!var_17)));
            var_42 = var_11;
        }
        /* vectorizable */
        for (int i_20 = 0; i_20 < 16;i_20 += 1) /* same iter space */
        {
            var_43 = (((arr_39 [i_20] [i_11 - 1] [i_11 + 1] [i_11 + 1]) ? (arr_39 [i_20] [i_11 - 1] [i_11 - 1] [i_11 - 1]) : var_4));

            for (int i_21 = 1; i_21 < 15;i_21 += 1)
            {
                var_44 *= ((var_17 ? (arr_45 [i_21 - 1] [i_11 + 1]) : var_3));
                var_45 = (((arr_53 [i_21] [i_21] [i_21] [i_21] [i_21] [i_21 - 1] [i_20]) ? var_12 : (arr_53 [i_21] [i_21] [i_21] [i_21] [i_21] [i_21 + 1] [i_20])));
                var_46 += var_9;
            }
            for (int i_22 = 2; i_22 < 14;i_22 += 1)
            {
                arr_64 [i_11] [i_11] = var_3;
                var_47 += ((((((arr_42 [i_11] [i_22]) + var_2))) ? ((38 ? 15 : 62)) : var_11));
            }
            for (int i_23 = 0; i_23 < 16;i_23 += 1)
            {
                var_48 -= -16;
                arr_67 [i_23] [i_20] [i_20] [i_11] = (((arr_36 [i_23] [i_20] [i_23]) + (arr_47 [i_23] [i_20] [i_11 - 1])));
                var_49 -= var_16;
            }
        }
        var_50 = (min(var_50, (((((~(max(var_8, var_3)))) < 4139424024)))));
    }
    var_51 = ((!(min((var_4 != 21), (var_2 <= var_9)))));
    #pragma endscop
}
