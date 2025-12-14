/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175462
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 98;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_17 = var_14;

        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            arr_5 [i_0] [i_0] [i_0] = (((var_7 + 9223372036854775807) << (((arr_4 [i_0] [i_1 + 1]) - 1))));
            arr_6 [i_0] [i_1] [i_1] = 255;
            var_18 = (((arr_1 [i_1 + 1]) * 9));

            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                arr_11 [i_0] [i_0] [i_2] = 235;
                arr_12 [6] [i_0] [6] [i_2] = ((((3 ? var_12 : 2260388944)) * 0));
            }
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                var_19 = (var_6 ? ((0 ? 159 : var_10)) : var_5);
                var_20 += (arr_13 [i_0] [5] [i_3]);
                var_21 += ((var_9 ? 64336 : 16078276923144441738));
            }
        }
        for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
        {
            arr_18 [i_0] [i_4] [i_4] = ((16255143400883299217 ? (arr_4 [i_4] [i_0]) : 23));
            var_22 += 13598022403964555946;
        }
        for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
        {
            var_23 = 0;
            arr_23 [i_0] &= (((((7 ? -11 : (arr_8 [i_5] [i_0] [i_0])))) ? 39320 : var_1));
            arr_24 [i_0] [i_0] [i_0] = (90 >> 0);
        }
        for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
        {

            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                var_24 = var_8;
                var_25 += 0;

                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    var_26 = (max(var_26, (((45654 >> ((((var_3 << (((arr_2 [i_0] [i_0] [9]) - 10787163404797477976)))) - 2489052432726753270)))))));
                    arr_34 [i_0] [i_8] = -8307544656059547827;
                    var_27 = (~4294967295);
                    var_28 = ((27 ? (3100 | 12594747013366370121) : (20 / var_6)));
                    var_29 = ((-(arr_33 [i_0] [i_0] [i_0])));
                }
            }
            var_30 = (((arr_13 [i_0] [i_0] [i_6]) / 54337));

            for (int i_9 = 0; i_9 < 11;i_9 += 1)
            {
                var_31 = -9088542316156675755;
                var_32 = (((14153 ? 236 : var_11)));
                arr_38 [i_0] [i_6] [i_0] [6] = (var_6 > 0);
            }
            for (int i_10 = 3; i_10 < 9;i_10 += 1)
            {
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 11;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 11;i_12 += 1)
                    {
                        {
                            var_33 = ((1 ? var_1 : -8502));
                            var_34 = var_9;
                        }
                    }
                }
                arr_49 [i_10] [i_10] [i_10 + 2] = (~var_12);
            }
            for (int i_13 = 0; i_13 < 11;i_13 += 1)
            {
                var_35 = -4154090592;
                var_36 = (arr_26 [9] [i_6] [3]);
                var_37 = 16712659853272769272;
            }
        }
        arr_54 [i_0] = (((arr_1 [i_0]) ? -175 : var_14));
        var_38 |= ((var_8 ? var_0 : 41));
        arr_55 [i_0] = ((1 << (5341969280861747789 - 5341969280861747776)));
    }
    /* LoopNest 2 */
    for (int i_14 = 0; i_14 < 24;i_14 += 1)
    {
        for (int i_15 = 0; i_15 < 24;i_15 += 1)
        {
            {
                var_39 = (min(var_39, ((((arr_57 [i_14] [i_15]) ? (((((0 ^ var_14) <= (((min(var_8, var_13)))))))) : 8937403119871946909)))));
                arr_63 [i_14] [8] [i_14] = (max((0 / 18446744073709551591), 60230));
            }
        }
    }
    #pragma endscop
}
