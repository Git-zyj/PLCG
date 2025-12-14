/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187296
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((max(-3900023192852863188, var_6)))) ? ((~(min(var_7, var_14)))) : var_12));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 15;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        arr_11 [i_0 + 1] [i_1 - 1] [i_1] [i_3] = (((!var_7) ? 1792478174 : -15790));
                        var_20 += (((~var_12) >= -25));
                        var_21 = -28542;
                        var_22 = var_1;
                    }
                    for (int i_4 = 1; i_4 < 14;i_4 += 1)
                    {
                        arr_16 [14] [i_0] [i_2] [i_0] [i_1] [i_4 + 1] = (11 * 62531);
                        var_23 = (~1781421551);
                    }
                    var_24 ^= ((var_14 ? var_18 : 253));

                    for (int i_5 = 2; i_5 < 15;i_5 += 1)
                    {
                        var_25 |= -2147483647;
                        arr_19 [i_1] [i_1 - 1] = ((var_3 << (26031 - 26020)));
                    }
                    for (int i_6 = 2; i_6 < 13;i_6 += 1)
                    {
                        var_26 += ((53977 >> (2147483644 - 2147483620)));
                        var_27 += ((26056 ? 1 : 255));
                    }
                    arr_24 [i_1] [i_1] = (32139 ? var_7 : -var_13);
                }
            }
        }
        arr_25 [i_0 - 1] = 6748566617455306311;
        var_28 |= 250;
        arr_26 [i_0 - 2] = 56265;

        for (int i_7 = 2; i_7 < 12;i_7 += 1)
        {
            arr_31 [i_0] [11] [i_7] = (~var_10);

            for (int i_8 = 2; i_8 < 15;i_8 += 1) /* same iter space */
            {
                var_29 |= ((-55 ? 2473179 : 35859));
                arr_35 [i_0] [i_0 - 1] = ((!(((53992 ? 28 : 192)))));
            }
            for (int i_9 = 2; i_9 < 15;i_9 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_10 = 1; i_10 < 1;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 0;i_11 += 1)
                    {
                        {
                            arr_44 [i_10] [i_7] [3] = 1;
                            arr_45 [i_0] [3] [i_0 - 2] [i_10] [i_0] [i_0] = 1687198096;
                            var_30 = (max(var_30, (((7680 ? var_13 : 29678)))));
                            arr_46 [i_10] [i_7] [3] [i_11] = 25;
                        }
                    }
                }
                arr_47 [3] [i_0] [i_9] [3] &= (67 ? 50640 : var_3);
                arr_48 [i_9] [i_7] [11] = (~-16802);
            }
        }
        for (int i_12 = 2; i_12 < 15;i_12 += 1)
        {
            var_31 = ((!(var_10 ^ 1)));
            var_32 = (max(var_32, 7680));
        }
    }
    for (int i_13 = 2; i_13 < 15;i_13 += 1) /* same iter space */
    {
        var_33 = (((((280288570 ? var_15 : (var_9 << var_15)))) ? (~0) : (~-67)));

        /* vectorizable */
        for (int i_14 = 1; i_14 < 13;i_14 += 1)
        {

            for (int i_15 = 1; i_15 < 15;i_15 += 1)
            {
                arr_60 [i_13] [i_14] [i_13 - 1] [i_13] = (!var_4);

                for (int i_16 = 1; i_16 < 1;i_16 += 1)
                {
                    var_34 = 1400043742785100284;
                    var_35 = (-9223372036854775807 - 1);
                    var_36 = (min(var_36, (!5311)));
                }
                for (int i_17 = 2; i_17 < 14;i_17 += 1)
                {
                    arr_67 [i_13] [1] [i_13] = var_9;
                    var_37 += (((-2147483647 + 2147483647) >> (244 - 215)));
                    arr_68 [i_13] [i_14] [i_15 - 1] [i_17] = -var_3;
                }
                var_38 += ((-2147483647 ? 28 : 58));
            }
            for (int i_18 = 1; i_18 < 14;i_18 += 1) /* same iter space */
            {
                var_39 -= ((((67 >> (1370846951 - 1370846924))) <= var_12));
                var_40 = var_16;

                for (int i_19 = 3; i_19 < 15;i_19 += 1)
                {

                    for (int i_20 = 2; i_20 < 13;i_20 += 1)
                    {
                        var_41 = (!var_12);
                        var_42 ^= -var_13;
                        arr_76 [i_13] [1] |= ((!(var_3 && var_3)));
                    }
                    arr_77 [15] [i_14 + 1] [i_13] [i_19] = (var_3 ? (-29320 | 15915846917787586910) : 1);
                    var_43 = (((-1106950351 + 2147483647) << (59839 - 59839)));
                }
                for (int i_21 = 1; i_21 < 15;i_21 += 1) /* same iter space */
                {
                    arr_80 [i_13] [i_18] [i_14] [i_13] = (~-16947);
                    var_44 = 97;
                    var_45 -= ((var_0 ? 230 : var_12));
                }
                for (int i_22 = 1; i_22 < 15;i_22 += 1) /* same iter space */
                {
                    var_46 += (294551994 == 30280);

                    for (int i_23 = 1; i_23 < 15;i_23 += 1) /* same iter space */
                    {
                        var_47 = -var_9;
                        arr_87 [i_13] [i_13] [i_18] [1] [i_23] = (!-1);
                    }
                    for (int i_24 = 1; i_24 < 15;i_24 += 1) /* same iter space */
                    {
                        arr_91 [6] [0] [i_18] [i_14] [i_24] [i_24] &= 3479134519027396833;
                        var_48 = (2305843009213693952 + 200);
                    }
                    for (int i_25 = 1; i_25 < 15;i_25 += 1) /* same iter space */
                    {
                        var_49 = (var_1 <= 1);
                        arr_94 [i_13] [i_13] [i_13] [i_13] [14] = -var_6;
                        var_50 = var_3;
                    }
                    arr_95 [i_13] [i_14] [i_13] = var_14;
                    arr_96 [13] [i_14] [i_14] [6] [i_22] [i_13] = (var_0 + 64);
                }
            }
            for (int i_26 = 1; i_26 < 14;i_26 += 1) /* same iter space */
            {
                arr_100 [i_13] [i_13] [9] = 10134903406215647162;
                arr_101 [i_13] [i_13] [i_13] [i_26 + 2] = var_13;
                var_51 = ((27981 >> ((((var_1 ? var_10 : 2147479552)) - 2242223631))));
            }
            var_52 = ((5267 >= ((var_16 ? var_5 : var_1))));
        }
        arr_102 [i_13] = (9271 == 2147483646);
    }
    for (int i_27 = 2; i_27 < 15;i_27 += 1) /* same iter space */
    {
        var_53 = (max(var_53, ((min((var_6 & 46701), (var_7 >= 9283))))));
        var_54 = (max(var_54, var_14));
    }
    var_55 = (max(var_55, ((((max(1889441145, (2147483629 ^ 0))) >= (((((-4 ? 19 : var_18))) ? -1 : var_1)))))));
    var_56 |= ((-(var_13 % var_2)));
    #pragma endscop
}
