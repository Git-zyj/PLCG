/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_12 |= var_3;

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_13 = 2005880478;
            var_14 = (!255);
            arr_8 [2] |= (arr_2 [i_0]);
        }
        arr_9 [i_0] [i_0] = ((var_2 ? ((((max(2216615441596416, (arr_5 [i_0])))) ? 2005880490 : 18444527458267955202)) : (min((2147483647 & 65532), (~2216615441596414)))));
    }
    var_15 = 38212;

    /* vectorizable */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 15;i_4 += 1)
            {
                {
                    arr_20 [6] [i_3] [i_2] [i_2] = var_8;

                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_16 = (arr_10 [i_2] [i_4 - 2]);
                        var_17 = ((arr_10 [i_2] [i_4 - 1]) + (arr_10 [i_2] [i_4 - 2]));
                    }
                    for (int i_6 = 3; i_6 < 14;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            arr_29 [1] [i_7] [12] [12] [i_2] [i_2] |= var_10;
                            arr_30 [i_2] [1] [i_6] [i_2] = ((~(arr_25 [i_4 - 1] [i_2] [9] [i_6 + 2] [i_7] [9])));
                            var_18 = 0;
                        }
                        arr_31 [i_2] [i_2] [i_2] [i_6] [i_3] = (-var_10 & 42545);
                        arr_32 [i_2] [i_2] = (arr_25 [i_2] [i_2] [13] [i_2] [13] [i_6 + 1]);
                        arr_33 [i_3] [i_4 - 2] [i_4] [i_2] [10] = -1;
                        arr_34 [i_2] [i_2] [i_4] [i_2] [i_3] = ((var_0 ? var_2 : (~2147483647)));
                    }
                    for (int i_8 = 3; i_8 < 14;i_8 += 1)
                    {
                        var_19 = (min(var_19, (arr_35 [i_4] [i_8])));
                        var_20 = (((~var_4) < var_7));
                        var_21 = (-7004991706075094567 - var_0);

                        for (int i_9 = 3; i_9 < 13;i_9 += 1)
                        {
                            arr_39 [1] [i_2] = ((!(var_10 & var_5)));
                            var_22 = (~-2147483647);
                            var_23 += (((arr_28 [i_2] [i_3] [i_4 - 1] [i_4 - 1] [i_4 - 1]) ? ((~(arr_18 [i_2] [10] [i_8 - 2]))) : var_0));
                        }
                        for (int i_10 = 2; i_10 < 13;i_10 += 1)
                        {
                            var_24 = (arr_16 [i_2] [i_2]);
                            arr_43 [i_2] [i_2] [0] [i_3] [i_4] [i_8] [i_10 + 2] = (arr_37 [i_2] [i_8 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1]);
                            arr_44 [i_8] [i_4] [i_4 - 2] [i_8 + 1] [i_10] [i_2] = ((((((arr_13 [i_10]) > 58643))) < 108));
                        }
                        for (int i_11 = 2; i_11 < 15;i_11 += 1) /* same iter space */
                        {
                            var_25 = (((((var_3 ? 63 : var_3))) ? var_11 : (-1955701474 & 11290)));
                            arr_47 [1] [i_3] [1] [i_4] [i_2] [1] = (-(1959 > var_2));
                            arr_48 [i_11 + 1] [0] [i_4] [0] [i_2] |= (((arr_7 [i_4 - 1] [i_8 + 1] [6]) ? (arr_7 [i_4 - 1] [i_8 + 2] [14]) : (arr_7 [i_4 + 1] [i_8 - 1] [6])));
                        }
                        for (int i_12 = 2; i_12 < 15;i_12 += 1) /* same iter space */
                        {
                            arr_53 [i_8] [6] [i_8] [6] [i_8] [i_8] [6] |= ((!(((1 ? 1 : (arr_10 [6] [1]))))));
                            var_26 = 1;
                        }
                    }
                    for (int i_13 = 2; i_13 < 12;i_13 += 1)
                    {
                        var_27 = (arr_14 [i_2] [i_13]);
                        var_28 = ((-(((var_2 < (arr_7 [i_2] [i_13] [i_2]))))));
                    }

                    for (int i_14 = 3; i_14 < 13;i_14 += 1) /* same iter space */
                    {
                        var_29 = (((!760035379848385251) ? var_9 : ((31298 ? 42545 : -5433554180654803931))));

                        for (int i_15 = 3; i_15 < 14;i_15 += 1)
                        {
                            var_30 = var_1;
                            var_31 = 31320;
                        }
                    }
                    for (int i_16 = 3; i_16 < 13;i_16 += 1) /* same iter space */
                    {
                        var_32 = ((-(arr_50 [i_2])));
                        var_33 = 12356797103152562240;
                    }
                    for (int i_17 = 3; i_17 < 13;i_17 += 1) /* same iter space */
                    {
                        var_34 = ((var_8 ? (arr_37 [i_2] [i_3] [i_4 - 1] [i_4] [i_17 + 3] [13]) : (arr_14 [i_2] [i_2])));

                        for (int i_18 = 1; i_18 < 13;i_18 += 1) /* same iter space */
                        {
                            var_35 = var_4;
                            arr_69 [i_2] [i_4] [i_2] = var_9;
                            var_36 = 108;
                        }
                        for (int i_19 = 1; i_19 < 13;i_19 += 1) /* same iter space */
                        {
                            var_37 = (arr_63 [i_2] [i_3] [i_3] [i_17] [i_2] [i_2]);
                            arr_72 [13] [13] [i_2] [i_17] [i_17] [13] [i_17 - 3] = ((-var_2 ? (arr_35 [1] [1]) : (arr_38 [i_2] [i_2] [i_2] [i_17] [i_19])));
                        }
                        for (int i_20 = 3; i_20 < 14;i_20 += 1)
                        {
                            var_38 = ((var_7 ? (arr_65 [i_2] [i_4 - 2] [i_4] [i_20 - 2]) : ((var_0 ? var_5 : var_0))));
                            arr_75 [13] [i_2] = (arr_73 [i_2] [i_2] [6] [i_4] [i_17] [11] [1]);
                        }
                        for (int i_21 = 1; i_21 < 12;i_21 += 1)
                        {
                            arr_79 [9] [9] [i_2] = ((~(18444527458267955202 && var_1)));
                            var_39 += 28672;
                        }
                    }
                    for (int i_22 = 3; i_22 < 13;i_22 += 1) /* same iter space */
                    {

                        for (int i_23 = 3; i_23 < 15;i_23 += 1)
                        {
                            var_40 |= var_2;
                            arr_85 [i_2] = ((((141 ? 31670 : 21))) ? (arr_76 [i_3] [i_3] [i_4] [i_3] [i_4 + 1] [i_23 - 1]) : (arr_42 [14] [i_2] [i_4 - 2] [i_22 - 1]));
                        }
                        for (int i_24 = 0; i_24 < 16;i_24 += 1)
                        {
                            var_41 = (((arr_12 [i_2]) ? (arr_3 [i_2]) : (arr_3 [i_2])));
                            arr_88 [i_24] [i_2] [i_3] [i_2] [i_2] = ((var_8 ? 42434 : (!var_3)));
                            var_42 = (arr_26 [i_2] [i_22] [i_2] [i_2] [i_2]);
                        }
                        var_43 = (~var_2);
                        arr_89 [i_2] [0] [0] [i_4 - 1] [i_22] |= ((-((var_11 ? (arr_11 [i_4]) : (arr_76 [i_2] [i_2] [i_3] [i_4] [i_22] [i_22 - 2])))));
                    }
                }
            }
        }
        var_44 -= 21;
    }
    /* LoopNest 3 */
    for (int i_25 = 0; i_25 < 25;i_25 += 1)
    {
        for (int i_26 = 3; i_26 < 21;i_26 += 1)
        {
            for (int i_27 = 2; i_27 < 22;i_27 += 1)
            {
                {
                    var_45 = ((var_10 ? (((!(((45970 ? 462441214 : (arr_98 [i_25] [i_25] [i_27]))))))) : ((min(31286, (min(1, 20)))))));
                    var_46 = -18444527458267955200;
                }
            }
        }
    }
    #pragma endscop
}
