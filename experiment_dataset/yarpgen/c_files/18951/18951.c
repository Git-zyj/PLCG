/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18951
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            var_15 = var_4;
            arr_6 [i_0] [i_0] [4] = -1;
            var_16 = (max(((((arr_3 [i_1] [i_0] [i_0]) != var_8))), (min(-var_2, (min(var_0, var_2))))));
        }
        for (int i_2 = 3; i_2 < 9;i_2 += 1)
        {
            var_17 = (arr_1 [i_0] [i_0]);
            var_18 = ((arr_2 [i_0] [i_0] [i_2]) / (max((arr_3 [i_2 + 2] [i_2] [i_2 - 1]), ((var_10 ? var_4 : 18446744073709551615)))));
        }
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            arr_13 [i_3] = -4294967295;

            /* vectorizable */
            for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
            {
                var_19 = (min(var_19, ((((arr_9 [i_0]) ? var_9 : 1722242644)))));
                var_20 += var_0;
                arr_16 [1] [i_0] [i_3] = (((arr_8 [i_0] [i_3] [i_0]) || (arr_8 [i_0] [i_3] [i_0])));
            }
            /* vectorizable */
            for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
            {
                var_21 = 77;

                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {

                    for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
                    {
                        arr_24 [i_3] [i_6] [i_6] [i_5] [i_3] [i_3] = ((26 ? -28212 : ((28212 ? var_14 : -28212))));
                        var_22 = (max(var_22, var_8));
                        var_23 += ((-(arr_19 [i_0] [1] [i_5] [i_6])));
                    }
                    for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
                    {
                        var_24 = (min(var_24, -1));
                        var_25 = (min(var_25, var_13));
                        var_26 = -28212;
                    }
                    for (int i_9 = 0; i_9 < 0;i_9 += 1)
                    {
                        var_27 -= -41650;
                        arr_30 [i_3] [i_9] = -21;
                        arr_31 [i_0] [0] [i_5] [i_3] [i_9 + 1] = 21216;
                        arr_32 [i_3] = ((-(arr_27 [i_9 + 1] [i_9 + 1] [i_3] [i_0] [0])));
                    }
                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        var_28 = (i_3 % 2 == zero) ? (((1 << (((arr_9 [i_3]) + 8961312543754185755))))) : (((1 << (((((arr_9 [i_3]) - 8961312543754185755)) + 8166142861052965805)))));
                        var_29 = (min(var_29, 4294967295));
                        var_30 += -1;
                        var_31 = (max(var_31, (((-6 ? 18446744073709551615 : 32767)))));
                    }

                    for (int i_11 = 0; i_11 < 0;i_11 += 1)
                    {
                        arr_38 [i_3] [i_3] [i_5] [i_11] [i_11] = 31;
                        var_32 = (((var_9 / var_3) ? (((var_3 <= (arr_36 [i_0] [i_3] [i_3] [i_6] [i_3])))) : -41656));
                        var_33 = (var_0 % var_5);
                    }
                    for (int i_12 = 0; i_12 < 11;i_12 += 1)
                    {
                        var_34 = (min(var_34, (arr_20 [i_0] [6] [i_5] [i_12])));
                        arr_41 [i_0] [4] [i_6] &= -28;
                    }
                    for (int i_13 = 0; i_13 < 11;i_13 += 1) /* same iter space */
                    {
                        var_35 = (max(var_35, ((((arr_28 [i_3] [i_3] [i_5] [i_0] [i_6] [i_3] [i_0]) ? var_8 : (((!(arr_37 [i_0] [i_0] [i_5] [i_13])))))))));
                        arr_44 [i_3] [i_3] [i_5] [i_6] [i_5] = var_7;
                    }
                    for (int i_14 = 0; i_14 < 11;i_14 += 1) /* same iter space */
                    {
                        var_36 = (max(var_36, (((var_6 ? (arr_21 [8] [i_3] [i_3] [i_3] [i_3]) : (arr_21 [i_0] [i_0] [i_5] [i_6] [i_14]))))));
                        var_37 -= ((var_9 ? (arr_40 [i_0] [i_0] [i_0] [i_6] [i_14]) : (arr_40 [i_0] [i_0] [i_5] [i_6] [i_14])));
                    }
                }
                for (int i_15 = 3; i_15 < 8;i_15 += 1)
                {
                    arr_49 [i_3] [i_15] = (((arr_7 [i_0]) == 3767101126));
                    var_38 = (min(var_38, var_4));
                    var_39 = (((arr_19 [i_5] [i_5] [i_5] [i_5]) ? var_14 : var_4));
                    var_40 = (min(var_40, var_5));
                }
            }
        }
        var_41 = var_11;
        var_42 += var_13;
    }
    /* vectorizable */
    for (int i_16 = 0; i_16 < 22;i_16 += 1)
    {
        /* LoopNest 2 */
        for (int i_17 = 1; i_17 < 20;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 22;i_18 += 1)
            {
                {
                    var_43 = (max(var_43, (18446744073709551615 || var_14)));
                    /* LoopNest 2 */
                    for (int i_19 = 2; i_19 < 21;i_19 += 1)
                    {
                        for (int i_20 = 1; i_20 < 18;i_20 += 1)
                        {
                            {
                                arr_61 [i_20] [i_20] [i_18] [i_18] [i_17 + 2] [i_16] = var_4;
                                var_44 = (((arr_59 [i_16] [i_16] [i_17 - 1] [i_19 - 1] [i_18] [i_19]) ? (arr_60 [i_16] [i_17 + 2] [i_19 + 1] [1] [i_20 + 1] [i_20 + 4]) : -var_3));
                            }
                        }
                    }
                }
            }
        }
        var_45 = var_8;

        for (int i_21 = 0; i_21 < 22;i_21 += 1)
        {
            var_46 *= var_14;
            var_47 *= arr_55 [i_16] [i_21] [i_21];
            arr_64 [i_16] [16] [i_16] = (var_4 ? var_9 : var_6);
            var_48 = (arr_55 [i_21] [i_21] [3]);
        }
        for (int i_22 = 3; i_22 < 21;i_22 += 1)
        {

            for (int i_23 = 0; i_23 < 22;i_23 += 1)
            {
                arr_69 [i_22] [i_22] [i_22] = (((((7 ? 18446744073709551615 : var_4))) ? 5 : 36028797018963967));
                var_49 = -28;
            }
            arr_70 [i_16] [i_22 - 2] [i_22] = (arr_51 [i_22 - 2] [i_22 - 3]);
        }
        for (int i_24 = 0; i_24 < 22;i_24 += 1)
        {
            arr_74 [i_16] = (((arr_60 [i_16] [i_16] [i_24] [i_24] [i_16] [i_24]) ? var_9 : 36028797018963967));
            arr_75 [i_16] = (arr_71 [i_16] [i_24] [i_24]);

            for (int i_25 = 0; i_25 < 22;i_25 += 1)
            {
                arr_78 [i_16] [i_24] [i_25] [i_24] = 3438208509;
                var_50 = (min(var_50, 31));
                /* LoopNest 2 */
                for (int i_26 = 0; i_26 < 22;i_26 += 1)
                {
                    for (int i_27 = 0; i_27 < 22;i_27 += 1)
                    {
                        {
                            var_51 = 1;
                            var_52 &= (4161097897804150953 ? 1475814608 : 4294967295);
                        }
                    }
                }
            }
        }
    }
    var_53 = ((((-((max(var_1, var_13))))) <= ((((min(var_7, var_5)) <= -5504114672634475752)))));
    #pragma endscop
}
