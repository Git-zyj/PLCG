/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120545
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_12 = (max(var_12, ((min(var_10, (14377926288017921631 / var_7))))));
        var_13 = max(((min((arr_2 [i_0]), (arr_2 [i_0])))), (max(var_1, 127)));

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_14 = (min(((max(var_8, var_4))), var_9));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        var_15 = (min(5614827111045261510, var_4));
                        arr_12 [i_1] [i_1] [i_1] [i_1] = (arr_8 [i_0] [i_1] [i_3]);
                        arr_13 [i_3] [i_3] [i_3] [7] [i_1] [i_0] = ((((((arr_3 [i_0] [i_1] [i_2]) ? 48 : ((7179012291493425846 ? var_0 : var_3))))) ? (max(var_7, (min(var_10, var_5)))) : ((((arr_1 [i_0] [i_1]) - 1)))));

                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            var_16 = (max(46, ((493152555 ? 11619766503192403173 : 110))));
                            arr_18 [i_2] [2] [i_2] [i_1] [i_0] = (max(((var_3 >> (((min(4294967295, 4282066367)) - 4282066336)))), (((max(var_8, var_4))))));
                        }
                    }
                }
            }
            arr_19 [i_0] [i_1] = (min(0, ((-3 ? 17408 : 36028762659225600))));
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        {
                            arr_29 [i_7] [i_1] [i_0] = ((min((~2147483647), 1)));
                            var_17 = (arr_27 [i_0] [i_1] [i_5] [i_6] [i_1] [i_5]);
                        }
                    }
                }
            }
            arr_30 [i_0] = var_3;
        }
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 11;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 11;i_10 += 1)
                {
                    {
                        var_18 = var_9;
                        var_19 = var_3;
                        arr_42 [i_10] [i_9] [i_8] [i_0] = (((min((((93 ? var_11 : -1809518826))), (min(var_1, 9223372036854775807))))) ? ((124 ? (arr_8 [i_0] [i_8] [i_9]) : (max(1813919723697225838, 939176240050564515)))) : (((max((arr_10 [i_9] [i_8] [i_0]), (min(var_3, 128)))))));
                        var_20 = ((((min(-122, var_9))) ? (min(var_7, var_11)) : ((var_5 ? 48128 : 27))));
                        var_21 = 1;
                    }
                }
            }
            arr_43 [i_0] [i_8] [i_8] = var_2;
        }
    }
    for (int i_11 = 0; i_11 < 19;i_11 += 1)
    {
        var_22 = var_4;
        var_23 = (min(var_23, 109));
    }

    for (int i_12 = 0; i_12 < 19;i_12 += 1)
    {
        var_24 = (min(((((max(var_3, 255))) / (((arr_49 [i_12]) / -42)))), 123));
        var_25 = (((((max(-42, -9132319905178721791)))) - (max((var_6 % 139), ((min(0, (arr_49 [i_12]))))))));
        arr_50 [i_12] = ((((min(((max((arr_45 [i_12] [i_12]), 4726))), ((0 ? var_2 : var_2))))) ? (max(((min(var_1, var_6))), 4728)) : (((((min(var_0, var_7))) ? ((min((arr_49 [15]), (arr_45 [i_12] [i_12])))) : var_2)))));
        var_26 = ((((max((max(var_4, var_2)), ((var_9 ? var_0 : 1))))) ? (((28571 ? 4726 : (arr_49 [i_12])))) : var_0));
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 24;i_13 += 1)
    {
        var_27 = (~var_10);

        for (int i_14 = 0; i_14 < 24;i_14 += 1)
        {
            var_28 = var_3;
            var_29 = ((var_9 ? -46 : 9995));
            var_30 = (arr_56 [i_14] [i_13]);
            arr_57 [i_13] &= var_0;
        }
    }
    for (int i_15 = 0; i_15 < 20;i_15 += 1)
    {
        var_31 = (min(var_4, 1381031542));
        var_32 = var_4;
    }
    /* LoopNest 3 */
    for (int i_16 = 0; i_16 < 13;i_16 += 1)
    {
        for (int i_17 = 0; i_17 < 13;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 13;i_18 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_19 = 0; i_19 < 13;i_19 += 1)
                    {
                        var_33 = (max(var_33, ((((arr_49 [i_19]) ? ((2297348517556678495 ? 9 : 11211680624131144358)) : (((-939176240050564516 ? 1549319819 : 5300451785300715523))))))));
                        arr_73 [i_16] [i_17] [i_16] = (((((var_8 ? var_9 : var_11))) ? var_2 : ((6472216038201105409 ? 0 : 64343))));

                        for (int i_20 = 0; i_20 < 13;i_20 += 1)
                        {
                            var_34 = var_8;
                            var_35 = (~var_1);
                        }
                        for (int i_21 = 0; i_21 < 13;i_21 += 1)
                        {
                            var_36 = ((arr_48 [i_18]) ? (arr_48 [i_16]) : (arr_55 [i_17] [i_19]));
                            var_37 = (((((var_9 ? var_1 : var_5))) ? 939176240050564516 : 6826977570517148443));
                            arr_81 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16] = (var_6 < var_7);
                            var_38 = (arr_78 [i_17]);
                        }
                        arr_82 [i_16] [i_17] [i_17] [i_17] [i_19] = (((arr_62 [i_18] [i_17]) ? (~var_3) : var_11));
                    }
                    /* LoopNest 2 */
                    for (int i_22 = 0; i_22 < 13;i_22 += 1)
                    {
                        for (int i_23 = 0; i_23 < 13;i_23 += 1)
                        {
                            {
                                arr_88 [i_16] [i_17] [i_17] [i_23] = var_8;
                                var_39 = ((2147483643 ? var_4 : (min(2764074706, -3264807066202350582))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
