/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177860
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_17 = (arr_1 [i_0] [i_0]);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_18 = (var_12 + -1);
                        var_19 &= 15360;
                    }
                }
            }
        }
        var_20 = (~1);
    }
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        arr_13 [i_4] = (max((max(4294967274, var_15)), (min(1, -2328710404))));
        arr_14 [i_4] [i_4] = (((min(((var_15 ? (arr_12 [i_4]) : var_1)), var_4)) >> (((max((arr_11 [i_4]), ((22674 << (4542714495806443057 - 4542714495806443051))))) - 1451089))));
        var_21 = var_15;
        arr_15 [i_4] [i_4] &= (((15360 + (max(var_11, var_8)))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                {
                    arr_20 [i_4] [i_4] [i_4] [i_4] = (((max(var_4, (~1))) | var_7));
                    arr_21 [18] [21] = var_11;
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
    {
        arr_25 [i_7] = -4542714495806443037;
        arr_26 [i_7] [i_7] = 21;

        for (int i_8 = 3; i_8 < 19;i_8 += 1)
        {

            for (int i_9 = 3; i_9 < 20;i_9 += 1) /* same iter space */
            {
                arr_31 [i_7] [i_7] [i_7] [i_9] = ((1 ? 0 : 2));
                var_22 = var_16;
                arr_32 [i_9] [i_8 + 3] [i_9] = (max((((-28672 + (((arr_22 [i_7]) - (arr_24 [i_7] [i_7])))))), (var_10 / 3477331792881021521)));
            }
            for (int i_10 = 3; i_10 < 20;i_10 += 1) /* same iter space */
            {
                var_23 = ((((max((arr_22 [i_7]), var_9))) ? (arr_27 [i_7] [i_8] [20]) : 8));

                /* vectorizable */
                for (int i_11 = 0; i_11 < 23;i_11 += 1)
                {
                    arr_37 [i_7] [i_10] [i_10] [i_11] = 0;
                    arr_38 [i_11] [i_11] [i_11] [i_10] = (((arr_28 [1]) + var_10));
                }
                var_24 *= (((var_3 ? var_0 : ((1 ? 25119 : var_16)))));
                var_25 = max(65535, (((var_13 / var_8) / ((((arr_28 [i_7]) / var_12))))));
            }
            for (int i_12 = 3; i_12 < 20;i_12 += 1) /* same iter space */
            {
                arr_43 [i_12 - 1] [i_8] [i_7] = var_5;
                var_26 = (min(var_26, (((((var_16 + (var_5 / 8))) & (var_15 >= var_13))))));
            }
            for (int i_13 = 3; i_13 < 21;i_13 += 1)
            {
                var_27 -= (min(var_7, (max(402653184, -1))));
                arr_47 [i_7] [i_7] [i_7] [i_7] = (max((var_5 < var_15), (max((-127 - 1), (((arr_30 [i_7]) ? var_9 : 65514))))));
                var_28 += ((3438537232832716860 && ((max(((max(var_6, var_14))), (arr_29 [i_7] [i_8 - 1] [i_8 - 1] [i_13]))))));
                var_29 -= 64364;
            }
            var_30 = (min(7, 65535));
        }
        for (int i_14 = 0; i_14 < 23;i_14 += 1)
        {
            arr_50 [i_7] [i_14] = min((~var_5), var_11);
            var_31 = ((+(((arr_36 [i_7]) - (arr_36 [i_7])))));

            for (int i_15 = 1; i_15 < 21;i_15 += 1)
            {
                var_32 -= var_3;
                arr_53 [i_7] [i_15] [i_14] [i_15 + 2] = (arr_24 [i_7] [i_7]);
            }
            /* LoopNest 3 */
            for (int i_16 = 0; i_16 < 23;i_16 += 1)
            {
                for (int i_17 = 2; i_17 < 20;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 1;i_18 += 1)
                    {
                        {
                            var_33 *= (min(((((min((arr_55 [i_16] [i_14] [i_16] [i_16]), (arr_30 [i_7])))) ? ((max(var_4, var_6))) : ((var_4 ? var_7 : var_12)))), (arr_49 [i_7] [i_7] [13])));
                            var_34 = (min(var_34, (max((arr_34 [i_7] [i_17 - 1]), (max((arr_30 [i_17]), 21))))));
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_19 = 0; i_19 < 23;i_19 += 1) /* same iter space */
        {
            arr_63 [i_19] = (arr_24 [i_7] [20]);
            /* LoopNest 3 */
            for (int i_20 = 3; i_20 < 20;i_20 += 1)
            {
                for (int i_21 = 0; i_21 < 23;i_21 += 1)
                {
                    for (int i_22 = 0; i_22 < 23;i_22 += 1)
                    {
                        {
                            arr_72 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [1] |= var_15;
                            arr_73 [i_22] [i_19] [i_20] [i_21] [22] [i_22] = var_14;
                            arr_74 [i_7] [i_7] [i_7] [i_7] [i_7] [i_22] = (!-var_13);
                            var_35 -= (((arr_57 [i_20 - 2] [i_20 - 3] [i_21]) ? (arr_57 [i_20 - 2] [i_20 - 3] [i_20 - 3]) : 2));
                        }
                    }
                }
            }
            var_36 = (min(var_36, var_5));
        }
        /* vectorizable */
        for (int i_23 = 0; i_23 < 23;i_23 += 1) /* same iter space */
        {
            arr_78 [i_7] [i_23] = -0;
            arr_79 [i_7] [i_7] = ((61242 ? (((arr_54 [i_7] [i_7]) + 21064)) : ((var_11 ? var_12 : var_9))));
            var_37 = (min(var_37, var_6));
        }
        /* LoopNest 3 */
        for (int i_24 = 0; i_24 < 23;i_24 += 1)
        {
            for (int i_25 = 0; i_25 < 23;i_25 += 1)
            {
                for (int i_26 = 0; i_26 < 23;i_26 += 1)
                {
                    {
                        var_38 = (((((arr_35 [i_7]) ? (~13) : (arr_55 [i_7] [i_7] [i_25] [3])))) ? 21078 : var_11);
                        arr_88 [i_7] [i_25] [i_24] [i_7] = (((((var_1 ? -4 : (arr_51 [i_24] [i_24] [i_26])))) | ((31 ? (arr_33 [i_7] [i_7] [i_25] [i_25]) : (arr_52 [i_7] [i_7] [i_7] [i_25])))));
                        var_39 = (min(var_39, ((max(var_6, ((((!(arr_85 [i_7] [i_7] [i_7] [i_7]))))))))));
                        var_40 = ((-108 ? 10 : ((((!(arr_55 [i_7] [i_24] [i_24] [i_26])))))));
                        var_41 = (((arr_66 [i_7] [i_24] [i_25] [i_26]) ? (arr_68 [i_7] [i_7] [i_7] [i_7]) : var_16));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_27 = 0; i_27 < 23;i_27 += 1)
        {
            for (int i_28 = 0; i_28 < 23;i_28 += 1)
            {
                for (int i_29 = 0; i_29 < 23;i_29 += 1)
                {
                    {
                        var_42 = (min(var_42, (((((((!var_5) ? (arr_91 [i_7] [i_7] [i_7] [i_7]) : (max((arr_68 [i_7] [i_27] [i_27] [i_29]), -1022605269))))) || ((((((var_5 ? var_2 : var_16))) ? (!62126) : (arr_41 [i_7] [i_7] [16] [13])))))))));
                        arr_96 [i_29] [i_28] [i_27] [i_7] = ((((-1022605262 ? -114 : 21054)) <= var_9));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_30 = 0; i_30 < 23;i_30 += 1) /* same iter space */
    {
        var_43 = var_2;
        var_44 = var_3;
        var_45 = (arr_56 [i_30] [1] [14]);
        var_46 &= (~((-1022605256 ? var_6 : -1381054924625640380)));
    }
    var_47 = (min(var_47, 12159));
    var_48 = -var_5;
    var_49 = var_13;
    var_50 = (min(var_0, (min((~var_4), (1381054924625640397 + 21055)))));
    #pragma endscop
}
