/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103064
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, ((max((((((var_5 ? var_8 : 96))) ? var_12 : ((var_13 ? var_4 : var_16)))), 35184372088831)))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 22;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
                        {
                            var_18 -= var_3;
                            arr_13 [i_2] [i_1] [i_4] [i_3] [i_2] = (arr_6 [i_2] [i_1] [i_1 - 1] [i_2]);
                            var_19 |= var_10;
                        }
                        for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
                        {
                            arr_16 [i_0] [i_1] [i_1] [i_1] [i_2] [i_3] [i_5] |= ((var_14 ? (~var_3) : -1480680564450059920));
                            var_20 = (max(var_20, (((15060805078945671728 & (arr_5 [i_0 - 2]))))));
                        }
                        for (int i_6 = 1; i_6 < 22;i_6 += 1) /* same iter space */
                        {
                            var_21 = (var_9 & var_6);
                            var_22 = ((!(var_9 && var_10)));
                        }
                        for (int i_7 = 1; i_7 < 22;i_7 += 1) /* same iter space */
                        {
                            arr_22 [i_0] [i_3] [i_2] [i_7] [i_7] = ((737 && ((((arr_21 [i_7] [i_3] [i_7] [i_7] [i_0] [i_0]) ? -1480680564450059914 : var_10)))));
                            arr_23 [i_0] [i_7] [i_2] [i_2] [i_2] [i_7] [i_7] = 9039;
                        }
                        arr_24 [i_0] = (((arr_1 [i_0]) ? ((9041 ? (arr_0 [i_1]) : -4276085844138914797)) : var_14));
                    }
                }
            }
        }

        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 24;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    {

                        for (int i_11 = 1; i_11 < 1;i_11 += 1)
                        {
                            arr_38 [i_0] [i_8] [i_9] [i_10] [i_9] = (+((((arr_11 [i_0] [i_9] [i_10] [i_11]) < var_1))));
                            arr_39 [i_0] [i_0] [i_0] [i_10] [i_0] [i_0] [i_0] = (~var_14);
                            arr_40 [i_10] [i_0] [i_10] [i_8] [i_9] [i_10] [i_11] = ((129 ? -113 : ((65535 ? var_1 : 9063))));
                        }
                        for (int i_12 = 1; i_12 < 23;i_12 += 1) /* same iter space */
                        {
                            var_23 = var_0;
                            var_24 = 9042001936087983617;
                            var_25 = (min(var_25, 9050));
                            var_26 = 9041;
                        }
                        for (int i_13 = 1; i_13 < 23;i_13 += 1) /* same iter space */
                        {
                            var_27 = -1480680564450059920;
                            arr_48 [i_0] [i_0] [i_10] [i_9] [i_10] [i_10] [i_13] = var_0;
                        }
                        arr_49 [i_10] [i_10] [i_9] [i_10] [i_10] = ((var_13 ? (arr_32 [i_0] [i_10] [i_9]) : 9023));
                        var_28 = ((((56502 ? var_14 : 9061)) * var_9));

                        for (int i_14 = 0; i_14 < 24;i_14 += 1)
                        {
                            var_29 = -1480680564450059920;
                            var_30 = (max(var_30, 9050));
                        }
                        var_31 = (max(var_31, (~var_4)));
                    }
                }
            }
            arr_53 [i_0] [i_8] = ((2 ? -919134039 : var_15));
            var_32 = -var_6;
            /* LoopNest 3 */
            for (int i_15 = 0; i_15 < 24;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 1;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 24;i_17 += 1)
                    {
                        {
                            var_33 = ((((43194 ^ (arr_34 [i_0] [i_0] [i_0] [i_16] [i_0] [i_0]))) >= 56495));
                            arr_62 [i_0] [i_16] = (((9050 + (arr_52 [i_0]))));
                            arr_63 [i_17] [i_0] [i_15] [i_16] [i_17] [i_17] [i_0] = (((1 << (56505 - 56505))));
                        }
                    }
                }
            }
        }
        for (int i_18 = 0; i_18 < 24;i_18 += 1)
        {
            /* LoopNest 2 */
            for (int i_19 = 0; i_19 < 24;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 24;i_20 += 1)
                {
                    {
                        var_34 = (max(var_34, -9));
                        var_35 = (arr_56 [i_0] [i_18] [i_0] [i_20]);
                    }
                }
            }
            var_36 = (max(var_36, ((0 ? 9033 : (arr_19 [i_0] [i_18] [i_0] [i_0] [i_0])))));
            arr_73 [i_0] [i_18] = (((arr_71 [i_0] [i_18] [i_0 - 2] [i_18] [i_0] [i_0]) - 2));
            var_37 = (max(var_37, ((((arr_70 [i_18] [i_0] [i_0] [i_0 + 2]) < (!17647))))));
        }
        arr_74 [i_0] = (((arr_26 [i_0] [i_0 - 1]) | (arr_35 [i_0] [i_0] [i_0 + 1])));
        var_38 = 34;
    }
    for (int i_21 = 0; i_21 < 16;i_21 += 1)
    {
        arr_77 [i_21] [i_21] = ((((max(-var_0, ((1257479098 % (arr_36 [i_21] [i_21] [i_21])))))) ? (((min((arr_72 [i_21] [i_21] [i_21]), 56497)))) : ((var_3 ? 1 : (((-940006592 ? (arr_64 [i_21]) : 19)))))));
        arr_78 [i_21] &= (-(((arr_7 [i_21] [i_21] [i_21] [i_21] [i_21]) ? 9040 : -6112325892709151272)));
        arr_79 [i_21] [i_21] = (arr_30 [i_21] [i_21] [i_21] [i_21]);
        var_39 = ((56486 != 1) <= var_10);
    }
    /* vectorizable */
    for (int i_22 = 0; i_22 < 23;i_22 += 1)
    {
        var_40 = var_12;
        /* LoopNest 3 */
        for (int i_23 = 0; i_23 < 23;i_23 += 1)
        {
            for (int i_24 = 3; i_24 < 22;i_24 += 1)
            {
                for (int i_25 = 0; i_25 < 1;i_25 += 1)
                {
                    {
                        arr_92 [i_22] [6] [i_24] [i_25] &= (((arr_65 [i_24 - 2] [i_24 - 3]) ? ((var_16 ? 130 : var_2)) : (~56486)));
                        arr_93 [i_23] [i_24] [i_23] [i_23] = var_9;
                        var_41 += ((var_14 ? 1646567071 : var_5));
                        var_42 = ((((((arr_91 [i_22] [i_23] [i_22] [i_25] [i_23]) / var_14))) ? 2479 : (arr_42 [i_22] [i_23] [i_22] [i_24 - 2] [i_23])));
                    }
                }
            }
        }
    }
    for (int i_26 = 3; i_26 < 20;i_26 += 1)
    {
        arr_97 [i_26] = var_0;
        arr_98 [i_26] [i_26] = ((((((!((min(var_7, var_7))))))) / -var_6));
    }
    var_43 ^= ((((!(((1257479073 >> (var_6 - 12317758827300342964)))))) ? ((max(var_2, (~0)))) : var_16));
    var_44 = ((0 % (min((5015201367146541899 | -940006610), (~var_11)))));
    #pragma endscop
}
