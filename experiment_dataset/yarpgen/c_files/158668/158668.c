/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158668
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_14 = (arr_9 [i_0] [4]);
                            var_15 = 4694182532386509037;
                            var_16 += (((max((arr_7 [i_0] [i_0 - 2] [i_1] [i_3 + 3]), -1070447658236116320)) == ((((var_8 >= ((650189932 ? var_3 : (arr_5 [i_1])))))))));
                        }
                    }
                }
                var_17 = (((max(var_2, var_12)) != (arr_6 [i_1])));
                arr_11 [i_0] = ((~(((arr_8 [i_0] [i_0 - 1] [i_0] [i_0]) & var_6))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            {

                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    var_18 += 0;
                    arr_20 [i_4] = ((var_5 << ((((-1070447658236116320 ? var_11 : 1070447658236116320)) - 112))));
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    var_19 += (16 + var_11);
                    var_20 = (!var_1);

                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        var_21 = (arr_13 [i_4] [i_4]);
                        var_22 = (max(var_22, (238 ^ var_6)));
                        arr_27 [i_4] [i_5] [i_5] [i_8] [i_8] [i_5] = (9025798630459555580 - 48198);
                    }
                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {

                        for (int i_10 = 1; i_10 < 11;i_10 += 1)
                        {
                            var_23 = (((arr_18 [i_4] [i_5] [i_7] [3]) ? 34123 : var_12));
                            arr_34 [i_4] [i_4] [i_7] [i_7] = 25002;
                            arr_35 [i_4] = (arr_21 [i_4] [i_5]);
                            arr_36 [i_4] [11] [i_4] = ((var_0 << (var_9 - 1494895047369356936)));
                        }
                        for (int i_11 = 1; i_11 < 11;i_11 += 1)
                        {
                            var_24 = -var_1;
                            arr_39 [i_4] [i_4] [i_7] [i_7] [i_9] [i_9] [i_11] = var_10;
                            var_25 = (min(var_25, (var_7 >= 1526879974)));
                            var_26 = 8737800525623208252;
                        }
                        var_27 = var_6;
                    }
                    for (int i_12 = 0; i_12 < 12;i_12 += 1)
                    {
                        arr_43 [i_4] [i_5] [4] [i_4] = 9025798630459555580;
                        arr_44 [i_5] [i_4] = 150;
                    }
                }
                var_28 = ((0 ? (((var_0 ? (0 == var_12) : -var_10))) : (arr_2 [i_4])));
            }
        }
    }

    /* vectorizable */
    for (int i_13 = 0; i_13 < 10;i_13 += 1)
    {
        var_29 = var_6;
        var_30 = var_6;
        var_31 = (min(var_31, -1));
        var_32 = (arr_10 [i_13] [i_13] [12] [i_13] [1]);
        var_33 = (var_9 == -var_6);
    }
    for (int i_14 = 0; i_14 < 1;i_14 += 1) /* same iter space */
    {
        arr_49 [6] &= var_12;

        /* vectorizable */
        for (int i_15 = 0; i_15 < 10;i_15 += 1) /* same iter space */
        {
            var_34 = ((((((arr_4 [i_14] [i_14]) - 62244))) ? (arr_8 [i_14] [i_15] [i_15] [i_14]) : 1028305547));
            arr_53 [i_14] = (((var_12 ? var_3 : var_13)));
            arr_54 [i_14] [i_14] = 0;
        }
        for (int i_16 = 0; i_16 < 10;i_16 += 1) /* same iter space */
        {
            arr_58 [i_14] = (((926004521720754497 ? var_9 : -1)));
            var_35 = var_1;
            var_36 += -1070447658236116320;
        }
    }
    /* vectorizable */
    for (int i_17 = 0; i_17 < 1;i_17 += 1) /* same iter space */
    {
        var_37 *= var_6;
        var_38 = var_12;
    }

    /* vectorizable */
    for (int i_18 = 0; i_18 < 24;i_18 += 1)
    {

        for (int i_19 = 0; i_19 < 24;i_19 += 1)
        {
            arr_67 [i_18] = ((~(1 | 45096)));
            var_39 -= var_13;
        }
        var_40 = (((!0) < (236 >= var_5)));
    }
    #pragma endscop
}
