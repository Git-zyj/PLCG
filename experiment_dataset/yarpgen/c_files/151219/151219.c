/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151219
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((~(~4294967295)));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] = (max(7, 6));

        for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_11 = (min(var_11, (((38492 ? (((~3) | (arr_8 [i_1] [i_2 + 1] [i_2 - 3] [i_0]))) : 210728375)))));
                        var_12 = ((109 ? 3541526630 : 0));
                    }
                }
            }
            var_13 = (((34359607296 ? (arr_2 [i_0] [i_1]) : 4294967290)));

            /* vectorizable */
            for (int i_4 = 1; i_4 < 16;i_4 += 1) /* same iter space */
            {
                arr_17 [i_1] = (((arr_10 [i_4 + 1] [i_1] [i_1]) ? 34359607296 : (arr_7 [i_1] [i_4] [i_4] [i_4 + 2])));
                arr_18 [i_0] [i_1] [i_0] |= ((1851865758 <= (arr_8 [i_4 + 2] [i_4 + 1] [i_4 + 1] [i_0])));
                arr_19 [i_1] = (18446744039349944319 <= 6);

                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {

                    for (int i_6 = 1; i_6 < 16;i_6 += 1)
                    {
                        arr_25 [i_0] [i_4] [i_4 + 1] [i_4] [i_4 - 1] [i_4 + 1] |= (734244991 - 2755202876);
                        var_14 = 22186;
                    }
                    var_15 = (max(var_15, ((((arr_5 [i_4 + 2] [i_4 + 2]) & (arr_5 [i_4 - 1] [i_4 + 1]))))));
                }
                for (int i_7 = 0; i_7 < 0;i_7 += 1) /* same iter space */
                {
                    var_16 = 18446744039349944319;
                    arr_28 [i_0] [i_1] [i_1] [i_1] [i_7 + 1] [i_7] = (((arr_12 [i_1] [i_4] [i_1] [i_1]) | 10031391613496515299));
                }
                for (int i_8 = 0; i_8 < 0;i_8 += 1) /* same iter space */
                {
                    arr_32 [i_1] [i_8 + 1] [i_4 + 2] [i_4] [i_0] [i_1] = (~406);

                    for (int i_9 = 0; i_9 < 18;i_9 += 1)
                    {
                        var_17 = 4294967295;
                        var_18 = (((arr_27 [i_9] [i_1] [i_8] [i_1] [i_8]) ? (~var_8) : (arr_24 [i_9] [i_4] [i_9])));
                        var_19 = (((arr_30 [i_4 + 1] [i_9]) | (arr_30 [i_4 + 1] [i_4])));
                    }
                }
                arr_36 [i_1] [i_1] [i_4] = (var_6 & (arr_9 [i_4 + 1] [i_1]));
            }
            for (int i_10 = 1; i_10 < 16;i_10 += 1) /* same iter space */
            {
                var_20 *= (5 | 4294967290);
                arr_40 [i_1] [i_1] [i_10] = ((-((-0 ? 127 : 2755202864))));
            }
            arr_41 [i_1] = (!(arr_39 [i_1] [i_0] [i_0] [i_0]));
        }
        for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
        {
            var_21 |= (4294967286 & 20);
            var_22 = ((max(-4701138584663606766, -6)));
            arr_44 [i_11] = (((~var_6) ? (arr_31 [i_0] [i_0] [i_11] [i_11]) : ((min((arr_23 [i_0]), (arr_23 [i_0]))))));
            var_23 = (min(var_23, ((((max(-11, 6))) >> ((((arr_16 [i_0] [i_11] [i_0]) == (arr_16 [i_0] [i_0] [i_0]))))))));
        }
        arr_45 [i_0] |= arr_4 [i_0] [i_0];
        /* LoopNest 2 */
        for (int i_12 = 1; i_12 < 17;i_12 += 1)
        {
            for (int i_13 = 2; i_13 < 16;i_13 += 1)
            {
                {
                    var_24 = (min(var_24, -9));
                    arr_52 [i_13] [i_12] [i_13] = (((((arr_39 [i_12 - 1] [i_12 - 1] [i_13 - 2] [i_13 - 2]) - (arr_15 [i_12 + 1] [i_12 - 1]))) - -512));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_14 = 1; i_14 < 1;i_14 += 1)
    {
        arr_55 [i_14 - 1] = var_3;
        var_25 = (min(var_25, 0));
        arr_56 [i_14] [i_14] = ((var_8 & 0) ? (arr_49 [i_14] [i_14]) : (1 & 6));
        var_26 *= (((!16376) || (arr_29 [i_14 - 1])));
    }
    /* LoopNest 2 */
    for (int i_15 = 2; i_15 < 20;i_15 += 1)
    {
        for (int i_16 = 2; i_16 < 19;i_16 += 1)
        {
            {
                var_27 = (min(var_27, (~18446744073709551615)));
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 21;i_17 += 1)
                {
                    for (int i_18 = 3; i_18 < 18;i_18 += 1)
                    {
                        {
                            var_28 = (min(var_28, ((min(170, (((((-7738672543218020989 ? 2755202864 : -4701138584663606774))) ^ ((3 ? 6038279818606350824 : 25412)))))))));
                            var_29 *= (((((arr_57 [i_15 - 2]) | (~0)))) & 1796999006);
                        }
                    }
                }

                for (int i_19 = 3; i_19 < 20;i_19 += 1)
                {
                    var_30 |= ((~(max(var_3, (max(178, 34359607279))))));
                    var_31 = (min(var_31, (arr_65 [i_19] [i_19 + 1] [i_16 + 2] [i_16])));
                    var_32 = (min(var_32, ((-((34 ? 0 : -5731070585829122643))))));
                    /* LoopNest 2 */
                    for (int i_20 = 0; i_20 < 21;i_20 += 1)
                    {
                        for (int i_21 = 0; i_21 < 21;i_21 += 1)
                        {
                            {
                                var_33 = (18 & -98);
                                var_34 = (min(var_34, (((!((var_7 || (arr_74 [i_15] [i_15] [i_21] [i_15] [i_20] [i_16] [i_19 - 3]))))))));
                            }
                        }
                    }
                    var_35 |= (min(-4701138584663606764, (max((115 / 4701138584663606765), 1359430914))));
                }
                arr_76 [i_15 - 1] [i_16] [i_16 - 1] = var_7;
            }
        }
    }
    #pragma endscop
}
