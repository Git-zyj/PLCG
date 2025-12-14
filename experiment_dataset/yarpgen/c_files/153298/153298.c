/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153298
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_10 = (min((~var_3), ((3210257151784259662 + (((700142283 ? 31066 : var_0)))))));
        var_11 = ((((max(var_9, 140)) & 1)));
    }
    for (int i_1 = 2; i_1 < 20;i_1 += 1)
    {
        var_12 = ((var_3 ? ((21424 & ((var_5 ? 3745185439 : var_8)))) : (min(var_7, (var_8 - var_0)))));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                {
                    var_13 = (((((((var_9 ? 1 : var_3)) & var_6))) & ((var_0 << (var_9 - 706904500)))));
                    var_14 = ((((var_3 ? (min(3163920935, 1256764075)) : (((var_2 ? var_1 : var_7))))) < (((1876549834 | (min(-1997088044, var_3)))))));

                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_15 = (((((!var_4) >= ((var_6 << (var_9 - 706904505)))))) / ((-((max(var_1, -22355))))));

                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 20;i_5 += 1)
                        {
                            var_16 -= -32585;
                            var_17 = (max(var_17, (!var_1)));
                            arr_15 [i_3] [i_4] [17] [i_2] [i_2] [i_1] [i_3] = -var_8;
                            var_18 = var_4;
                        }
                        var_19 = (~var_4);
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 4; i_7 < 20;i_7 += 1)
                        {
                            {
                                arr_21 [i_3] [i_3] = ((1 ? ((-(~var_3))) : ((-(var_0 >= var_7)))));
                                var_20 = ((156 || var_0) | (var_6 <= var_2));
                                var_21 = (max((~var_1), 1));
                            }
                        }
                    }
                    var_22 = (!var_9);
                }
            }
        }
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 25;i_8 += 1)
    {

        for (int i_9 = 3; i_9 < 23;i_9 += 1)
        {
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 25;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 25;i_11 += 1)
                {
                    for (int i_12 = 2; i_12 < 24;i_12 += 1)
                    {
                        {
                            var_23 = (var_0 >= var_0);
                            arr_37 [i_8] [i_8] [i_8] [i_8] [i_8] = (var_0 ^ (var_7 || var_3));
                            arr_38 [i_12] [i_11] [i_10] [i_9 - 3] [i_9 - 1] [13] = var_7;
                            var_24 = 1;
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 25;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 25;i_14 += 1)
                {
                    {
                        var_25 = (((((var_9 ? var_5 : 0))) ? var_1 : 1));
                        var_26 += (var_1 & var_6);
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_15 = 0; i_15 < 1;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 25;i_16 += 1)
                {
                    for (int i_17 = 4; i_17 < 21;i_17 += 1)
                    {
                        {
                            arr_51 [23] [9] [i_8] [i_9] [i_8] = ((var_7 / ((var_3 ? 45324665 : var_4))));
                            var_27 = (min(var_27, (var_2 <= var_6)));
                            var_28 = (((-1669215170 % -22355) ? var_5 : ((var_3 ? -5107489554152192324 : -12069))));
                            var_29 = (min(var_29, (~var_8)));
                            arr_52 [i_17] [i_17] [0] [i_17] [i_17] [2] = (((-22340 < var_5) & var_9));
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_18 = 1; i_18 < 24;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 1;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 25;i_20 += 1)
                    {
                        {
                            var_30 = (((-22354 - var_9) ? (var_3 <= var_3) : (var_4 || var_0)));
                            var_31 = (((var_4 > var_9) + (-3210257151784259662 & 15743849)));
                            arr_59 [i_19] [i_19] [6] [i_18] [i_9] [i_8] [i_19] = var_1;
                        }
                    }
                }
            }
        }
        for (int i_21 = 0; i_21 < 25;i_21 += 1)
        {
            var_32 += ((2891 ? var_2 : -var_0));
            /* LoopNest 2 */
            for (int i_22 = 1; i_22 < 24;i_22 += 1)
            {
                for (int i_23 = 0; i_23 < 25;i_23 += 1)
                {
                    {
                        var_33 = ((1997088044 ? -1 : 1053945310));
                        arr_71 [i_8] [i_21] [i_21] [i_21] [i_23] = (var_1 ^ 166);
                        arr_72 [1] [1] = ((((var_6 ? var_9 : var_2)) % var_9));
                        var_34 += (((var_0 & -11667) ? ((var_1 ? var_3 : 1)) : (26 ^ var_6)));
                        var_35 = ((var_0 << (-3210257151784259662 + 3210257151784259677)));
                    }
                }
            }
        }
        var_36 = var_7;
    }

    for (int i_24 = 3; i_24 < 20;i_24 += 1)
    {
        var_37 = (((((max(var_5, var_3)) ? (var_3 && var_6) : (!16652))) | (((var_2 & var_0) ? (max(var_6, var_1)) : (var_6 | var_8)))));
        var_38 -= (min((((var_7 ? var_7 : var_3))), var_9));
    }
    for (int i_25 = 0; i_25 < 14;i_25 += 1)
    {
        arr_77 [i_25] = max((~var_6), ((var_7 ? -358782916 : ((358782895 ? -26154 : 1876549852)))));
        arr_78 [i_25] = ((~(~var_9)));
    }
    for (int i_26 = 1; i_26 < 16;i_26 += 1)
    {
        var_39 = (max(var_39, ((((var_5 != var_5) << ((var_7 ? var_8 : var_7)))))));
        var_40 = var_8;
        /* LoopNest 3 */
        for (int i_27 = 1; i_27 < 14;i_27 += 1)
        {
            for (int i_28 = 2; i_28 < 16;i_28 += 1)
            {
                for (int i_29 = 1; i_29 < 15;i_29 += 1)
                {
                    {
                        arr_88 [i_27] [i_28 + 1] [i_29] = ((!(((max(1, -489220131)) < var_5))));
                        var_41 = (max(var_41, (((var_9 ? ((var_3 ? var_6 : var_8)) : var_7)))));
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_30 = 2; i_30 < 11;i_30 += 1)
    {
        for (int i_31 = 1; i_31 < 1;i_31 += 1)
        {
            for (int i_32 = 0; i_32 < 14;i_32 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_33 = 0; i_33 < 1;i_33 += 1) /* same iter space */
                    {
                        var_42 = (max(var_42, ((((15743840 & 40) ? (var_9 >= 1) : ((-231349058 ? var_2 : var_8)))))));
                        arr_101 [i_33] [i_31] [i_31] = ((-1 || (~var_0)));
                        var_43 = (!var_7);
                    }
                    for (int i_34 = 0; i_34 < 1;i_34 += 1) /* same iter space */
                    {
                        arr_105 [i_31] = ((-(max(var_4, var_6))));
                        arr_106 [7] [i_31] [i_31] [i_31] [i_30] = (!var_0);
                        arr_107 [i_30] [i_31] [i_31] [i_30] = ((~((min(41, var_2)))));
                    }
                    var_44 = (((((408 ? 1 : -461925045))) ? (((((var_4 ? var_6 : var_3))) ? 77 : (max(var_4, 16652)))) : (var_5 || var_8)));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_35 = 1; i_35 < 16;i_35 += 1)
    {
        var_45 = (min(var_45, (var_5 && var_5)));
        var_46 |= 3210257151784259661;
    }
    #pragma endscop
}
