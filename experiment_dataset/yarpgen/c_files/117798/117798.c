/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117798
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = var_9;
        var_14 = (((((1969197981 ? 4086601985 : 17052715145124225080))) ? 2325769340 : (var_1 ^ var_10)));
        var_15 -= (var_12 == 1969197966);
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_16 = (max(var_16, (-5510626399666554454 != var_11)));
                    arr_8 [i_0] [i_1] [i_2] = (var_2 > var_9);
                }
            }
        }
    }
    for (int i_3 = 2; i_3 < 16;i_3 += 1)
    {
        var_17 = (min(1763795927, 1572864));
        var_18 = (min(var_18, (((((min(var_9, var_8))) ? -var_11 : (~var_10))))));
    }
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        var_19 |= ((min(((var_5 ? 17421953680628245966 : var_3)), (var_7 ^ var_11))) | (min(((var_8 ? var_10 : var_8)), -948899900)));
        var_20 = var_3;
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 18;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 16;i_6 += 1)
            {
                {

                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        arr_26 [i_4] [i_4] [18] [i_6] [i_6] [i_7] = (min((((73 ? (5510626399666554459 + var_12) : ((min(var_12, var_9)))))), var_8));
                        var_21 = var_7;
                    }
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        var_22 = var_5;
                        var_23 = (max(var_23, ((((min(var_4, var_2)) < 1558231846)))));
                        var_24 = var_9;
                    }
                    for (int i_9 = 2; i_9 < 16;i_9 += 1)
                    {
                        var_25 = ((((((min(2325769357, 2325769340))) ? ((var_13 ? var_11 : var_9)) : var_5)) / (((min(-5510626399666554444, var_6)) + (4040084116 | var_11)))));
                        var_26 = (max(var_26, -2325769352));
                        arr_32 [i_4] [i_4] [i_4] [i_4] [i_9] = (((min(var_1, var_12)) == var_7));
                    }
                    for (int i_10 = 0; i_10 < 19;i_10 += 1)
                    {
                        var_27 = ((((((((var_4 << (var_9 - 33)))) | 3878122733))) % (var_9 * 10215656133660310937)));
                        arr_35 [i_4] [i_10] = var_5;
                    }

                    for (int i_11 = 0; i_11 < 19;i_11 += 1)
                    {
                        arr_38 [9] [5] [i_5] = (min((66 | var_8), (min(var_11, 12441460252848775667))));
                        var_28 += var_2;
                    }
                    /* vectorizable */
                    for (int i_12 = 2; i_12 < 15;i_12 += 1) /* same iter space */
                    {
                        var_29 = (var_0 ? var_8 : -1);
                        arr_43 [i_5] &= (948899918 < var_0);

                        for (int i_13 = 0; i_13 < 19;i_13 += 1)
                        {
                            var_30 = (max(var_30, var_4));
                            var_31 *= (!var_11);
                            var_32 = var_2;
                        }
                    }
                    for (int i_14 = 2; i_14 < 15;i_14 += 1) /* same iter space */
                    {
                        var_33 = (min(var_33, var_12));

                        for (int i_15 = 0; i_15 < 19;i_15 += 1)
                        {
                            var_34 = (min(var_34, var_6));
                            var_35 = ((((((min(var_10, var_3)) > 184))) ^ ((min((var_12 || 10594798885614423518), var_1)))));
                        }
                        for (int i_16 = 2; i_16 < 16;i_16 += 1)
                        {
                            var_36 = (((min(var_8, var_4)) < var_4));
                            var_37 = (max(var_37, ((min(10796754205359070332, (min(var_2, var_8)))))));
                            arr_57 [15] [15] [i_16] [i_14] [11] = 2234207627640832;
                            var_38 = (max(var_38, ((min(var_4, -5510626399666554459)))));
                        }
                        var_39 = ((((((min(var_6, var_8)) + (var_5 - var_2)))) || (((2709671287171096548 ? 728538967546149889 : 2216640722420953857)))));
                    }
                    var_40 += -9223372036854775793;
                }
            }
        }
    }
    var_41 = var_7;
    var_42 = (min((((((var_7 ? 3013221463170308869 : var_8))) ? (72 != var_6) : (min(var_10, -149801847352185646)))), (((255 / (min(255, -5510626399666554472)))))));
    var_43 = ((16383 ? var_12 : var_0));
    #pragma endscop
}
