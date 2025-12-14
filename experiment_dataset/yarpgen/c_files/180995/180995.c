/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180995
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= var_4;

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] [i_0 - 1] = (((min(var_13, var_6))));
        var_16 = (max(var_16, 32251));
        arr_3 [i_0] = (387858653535317541 >= var_12);
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            arr_8 [i_2] = (~35841);
            arr_9 [22] [i_2] [i_1] = -var_14;
        }
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            arr_13 [i_1] [i_3] [i_3] = (!-var_12);
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {
                        arr_19 [i_3] [i_3] [22] [i_5] = 65535;
                        arr_20 [22] [i_3] [i_4] [i_3] [i_5] |= (~var_13);
                    }
                }
            }
        }
        arr_21 [i_1] [i_1] |= ((var_11 ^ (~7119837849140671837)));

        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            var_17 = (~var_12);

            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 24;i_8 += 1)
                {
                    for (int i_9 = 4; i_9 < 23;i_9 += 1)
                    {
                        {
                            arr_34 [i_7] [i_8] [i_6] [i_6] [i_7] = -2060366418;
                            arr_35 [i_7] [i_7] [i_7] [i_7] [i_1] = (!-20932);
                        }
                    }
                }
                var_18 *= (!8494773879119702076);
            }
        }
        for (int i_10 = 0; i_10 < 24;i_10 += 1)
        {
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 24;i_12 += 1)
                {
                    {
                        arr_46 [i_1] [i_11] [i_11] [i_12] = (((!(~var_0))));
                        arr_47 [i_11] [i_11] [i_12] = var_6;
                    }
                }
            }
            var_19 *= ((65535 >> (-24 + 78)));
        }

        /* vectorizable */
        for (int i_13 = 0; i_13 < 24;i_13 += 1)
        {
            arr_52 [i_13] [0] = var_4;
            var_20 = var_2;
        }
        for (int i_14 = 4; i_14 < 21;i_14 += 1)
        {
            var_21 = ((~(max(-var_8, var_10))));
            /* LoopNest 3 */
            for (int i_15 = 0; i_15 < 24;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 24;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 24;i_17 += 1)
                    {
                        {
                            var_22 = (669322237614027711 == var_8);
                            arr_65 [i_1] [i_1] [i_16] [i_16] [i_17] [i_17] = (var_12 * 1);
                        }
                    }
                }
            }
            arr_66 [i_1] [i_14] [19] = ((1040187392 ^ (~var_10)));
        }
        /* vectorizable */
        for (int i_18 = 0; i_18 < 24;i_18 += 1)
        {
            arr_70 [i_1] [14] [23] = (~var_3);
            var_23 = (+-10997870205368223198);
            arr_71 [i_1] [i_18] = (~5975);
        }
        /* vectorizable */
        for (int i_19 = 0; i_19 < 24;i_19 += 1)
        {
            var_24 = (min(var_24, var_10));

            for (int i_20 = 0; i_20 < 24;i_20 += 1)
            {

                for (int i_21 = 0; i_21 < 24;i_21 += 1)
                {
                    arr_78 [i_20] [i_1] [i_19] [i_20] [i_19] = -23069;
                    arr_79 [i_20] [4] [i_21] = (!var_9);
                }
                /* LoopNest 2 */
                for (int i_22 = 0; i_22 < 1;i_22 += 1)
                {
                    for (int i_23 = 0; i_23 < 24;i_23 += 1)
                    {
                        {
                            var_25 = (~586335173);
                            var_26 = 1;
                        }
                    }
                }
                var_27 = (min(var_27, (((!(9223372036854775807 % var_8))))));
            }
            for (int i_24 = 3; i_24 < 23;i_24 += 1)
            {
                arr_86 [i_1] [i_1] [i_24 + 1] [i_24] |= (1 || 864691128455135232);

                for (int i_25 = 0; i_25 < 24;i_25 += 1)
                {
                    var_28 = (max(var_28, (~var_12)));
                    arr_90 [i_25] [i_19] [i_19] [2] [10] = var_14;

                    for (int i_26 = 0; i_26 < 24;i_26 += 1)
                    {
                        arr_95 [i_1] [i_19] [i_24] [9] [i_25] = -586335158;
                        var_29 *= 669322237614027688;
                    }
                }
                for (int i_27 = 1; i_27 < 22;i_27 += 1)
                {
                    arr_100 [i_1] [i_1] [i_1] [i_1] [21] [i_1] = (~var_2);
                    arr_101 [7] [19] [i_1] [i_19] [i_1] = (!var_4);
                    arr_102 [i_1] [i_1] [i_1] [i_24] [i_27] [18] = ((!(~var_3)));
                }
                arr_103 [i_1] [1] [i_19] [i_24] = 8824;
                arr_104 [i_19] [i_19] [i_1] |= (((((((-2147483647 - 1) == 0)))) < (var_12 + 3339016656)));
            }
            arr_105 [i_19] [i_1] [i_1] = var_14;
            arr_106 [i_1] [i_1] = (!var_5);
        }
    }
    for (int i_28 = 1; i_28 < 9;i_28 += 1)
    {
        /* LoopNest 3 */
        for (int i_29 = 0; i_29 < 10;i_29 += 1)
        {
            for (int i_30 = 0; i_30 < 10;i_30 += 1)
            {
                for (int i_31 = 0; i_31 < 10;i_31 += 1)
                {
                    {

                        for (int i_32 = 0; i_32 < 10;i_32 += 1)
                        {
                            var_30 = (min((1217651560 / var_14), var_8));
                            var_31 *= var_10;
                        }
                        for (int i_33 = 0; i_33 < 10;i_33 += 1)
                        {
                            var_32 = (!var_0);
                            arr_124 [1] [i_28] [i_31] [i_30] [i_28] [i_28] [1] = (min(var_0, var_14));
                        }
                        for (int i_34 = 3; i_34 < 7;i_34 += 1)
                        {
                            arr_128 [i_28] [i_29] [8] [i_31] [i_31] [i_31] = ((~((-101 - (!var_2)))));
                            arr_129 [i_28] [i_30] [i_30] [i_31] [i_31] [0] &= (~(min(var_4, var_8)));
                        }
                        for (int i_35 = 0; i_35 < 10;i_35 += 1)
                        {
                            arr_133 [i_35] [9] [i_28] [i_28] [i_28] [i_28] [i_28] = (max(-var_1, var_10));
                            var_33 = (max(var_33, -var_13));
                        }

                        /* vectorizable */
                        for (int i_36 = 0; i_36 < 10;i_36 += 1) /* same iter space */
                        {
                            arr_138 [4] [i_29] [1] [i_36] [i_28] = (~var_11);
                            arr_139 [i_30] [i_29] [i_30] &= ((-var_10 * (-3827 / var_11)));
                            arr_140 [i_28] [i_28] [i_30] [3] [i_28] = (~3077315736);
                            arr_141 [i_28] [i_29] [8] [i_28] [i_36] = (~var_1);
                        }
                        for (int i_37 = 0; i_37 < 10;i_37 += 1) /* same iter space */
                        {
                            var_34 = (min(var_34, var_10));
                            arr_144 [i_28] [i_28] [i_28] = -669322237614027718;
                        }
                        arr_145 [i_28] [i_29] [i_29] [i_30] [i_31] = (!var_13);
                        arr_146 [i_29] [i_28] = ((((~var_9) || var_2)));
                    }
                }
            }
        }
        arr_147 [i_28] = -3339016656;
        arr_148 [0] |= (~-var_2);
    }
    #pragma endscop
}
