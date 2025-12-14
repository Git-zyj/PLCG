/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179056
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((1628295492 - (~var_0))));
    var_12 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_9 [i_2] = (arr_1 [i_2]);
                    arr_10 [i_2] [i_1] [i_0] = (!3497534000173106777);

                    for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
                    {
                        arr_13 [i_0] [i_1] [i_1] [i_0] [i_1] [i_0] = 1734647016;

                        for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
                        {
                            arr_18 [i_0] [i_1] [i_0] [i_3] = ((3497534000173106777 ? 2147483647 : -59464309));
                            var_13 = (min(var_13, ((max((((!(arr_5 [i_4] [i_4] [i_4])))), (min((min(var_7, (arr_8 [i_0] [i_0] [i_0] [i_0]))), (!16383))))))));
                            var_14 = (min(var_14, 379458354));
                            arr_19 [i_0] [i_0] = ((((max((((-6201 + 2147483647) >> (var_0 - 32347771))), (var_10 == var_4)))) || 3497534000173106780));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
                        {
                            arr_22 [i_0] [i_1] [i_0] [i_2] [i_0] [i_0] = -8265236949239525768;
                            var_15 = (!56397);
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
                        {
                            arr_25 [i_2] [i_2] = ((!(((var_6 << (((arr_14 [i_6] [i_3] [i_2] [i_0] [i_0]) - 18425)))))));
                            var_16 = -777948815;
                            arr_26 [i_0] [i_0] [i_2] [i_0] [i_0] = (((arr_24 [i_6] [i_3] [i_0] [i_0] [i_0] [i_0]) ? -8265236949239525752 : (arr_24 [i_0] [i_1] [i_1] [i_3] [i_6] [i_6])));
                            arr_27 [i_0] = (!2147483647);
                            var_17 = (min(var_17, (((var_4 ? 8265236949239525767 : var_3)))));
                        }
                    }
                    for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
                    {
                        arr_31 [i_0] = (min(1567021359, (arr_2 [i_0] [i_0])));
                        var_18 = max((~var_0), (((arr_2 [i_7] [i_1]) | (arr_2 [i_0] [i_0]))));
                    }
                    for (int i_8 = 0; i_8 < 23;i_8 += 1) /* same iter space */
                    {
                        arr_34 [i_8] [i_2] [i_2] = ((((min(var_10, var_8))) ? ((((2001330033247325735 < (arr_8 [i_0] [i_1] [i_2] [i_8]))))) : (((!15962985836885467980) ? (~var_6) : 18446744073709551615))));

                        for (int i_9 = 0; i_9 < 23;i_9 += 1) /* same iter space */
                        {
                            var_19 = (min(var_19, var_9));
                            arr_37 [i_1] [i_8] [i_2] [i_8] [i_9] [i_8] = ((((-1 - (!16777215)))) ? ((1 ? 8 : -1193604307)) : 32767);
                        }
                        for (int i_10 = 0; i_10 < 23;i_10 += 1) /* same iter space */
                        {
                            var_20 = (min(var_20, ((((63 ^ -2147483641) != -255)))));
                            var_21 = var_1;
                            arr_40 [i_8] [i_8] = (-1 / var_8);
                        }
                        for (int i_11 = 2; i_11 < 20;i_11 += 1)
                        {
                            arr_43 [i_0] [i_8] [i_0] = ((var_1 ? (((((9922 ? -57 : -933702465))) ? var_3 : ((var_10 ? (arr_39 [i_0] [i_0] [i_0] [i_8] [i_0] [i_8]) : var_9)))) : ((((((-5836742852607768474 ? -2037221709 : var_9))) ? (~122) : ((var_10 ? 233 : 115)))))));
                            var_22 = (min(var_22, (((~((52 ? 16384 : ((64 ? 16384 : 1)))))))));
                            var_23 ^= (17546921172552294583 < 6202);
                        }
                        for (int i_12 = 0; i_12 < 23;i_12 += 1)
                        {
                            arr_48 [i_0] [i_0] [i_0] [i_12] &= 0;
                            var_24 = (((10 != var_7) + (max(((-6188 ? 933702477 : 16)), (((var_7 ? 9 : 47891)))))));
                            var_25 |= ((225 ? 0 : -1));
                            var_26 = ((((!(arr_4 [i_0]))) ? (-942818067 / 3312948374) : (var_4 + -50)));
                            var_27 = (((942818067 ? (arr_30 [i_0] [i_0] [i_8] [i_0] [i_0]) : (arr_30 [i_0] [i_1] [i_12] [i_8] [i_12]))));
                        }
                    }
                    for (int i_13 = 0; i_13 < 23;i_13 += 1)
                    {
                        var_28 = ((43 ? (min((arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]), var_0)) : (24180 - -123)));
                        var_29 = var_2;
                        arr_52 [i_13] [i_0] = var_5;
                        arr_53 [i_0] [i_13] [i_0] = 146335962;
                        var_30 = ((+((-(((arr_41 [i_13] [i_1] [i_2] [i_13] [i_2] [i_2] [i_13]) + var_5))))));
                    }
                }
            }
        }
    }
    var_31 = (min(var_8, ((var_6 ? (min(var_8, var_5)) : ((var_10 ? var_0 : 6))))));
    #pragma endscop
}
