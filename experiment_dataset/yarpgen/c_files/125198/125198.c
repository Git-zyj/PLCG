/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125198
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        {
                            var_10 = ((((var_5 ? 0 : var_4)) & var_1));
                            var_11 ^= ((-18155 ? 1 : -100));
                        }
                    }
                }
            }
            var_12 = 1;
            arr_15 [i_0] [i_0] = var_5;
            var_13 = (((arr_9 [i_1] [2] [i_1] [3]) + ((1 ? var_9 : var_7))));
        }
        for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
        {
            var_14 = ((!((!(arr_5 [i_0] [i_5] [i_0])))));

            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                var_15 = (max(var_15, ((((((1070195003 ? 4177419728857481521 : 1))) ? 15168012696557914216 : 17024479562493060033)))));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 0;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 8;i_8 += 1)
                    {
                        {
                            var_16 += max((((((-3 ? 1 : -9293)) != ((var_9 ? var_1 : var_9))))), var_9);
                            var_17 = (max(((var_5 ? (arr_14 [i_7 + 1] [i_7] [i_7 + 1] [i_8 + 2] [i_8 + 2] [i_8 + 1]) : (arr_11 [i_6] [i_7] [i_7] [i_7] [i_7 + 1]))), 1));
                            arr_30 [i_7] = -var_9;
                            var_18 = ((14213728484368774596 ? (5897 ^ 23733) : -12));
                        }
                    }
                }

                for (int i_9 = 0; i_9 < 10;i_9 += 1)
                {
                    var_19 = ((var_0 || (arr_31 [i_0] [i_0] [i_0] [i_0] [1] [i_0])));
                    var_20 ^= var_2;
                    arr_33 [i_9] [0] [i_5] [1] = var_1;
                    var_21 = 13700;
                    arr_34 [i_0] [i_0] = ((((!var_0) ? var_3 : (((!(arr_6 [6] [i_9] [i_6])))))));
                }
            }
            for (int i_10 = 0; i_10 < 10;i_10 += 1) /* same iter space */
            {
                var_22 = 4742305572312458265;
                var_23 -= (~424918840);
                arr_38 [i_10] [i_10] [i_10] [i_10] = 9;
            }
            /* vectorizable */
            for (int i_11 = 0; i_11 < 10;i_11 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_12 = 3; i_12 < 6;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 10;i_13 += 1)
                    {
                        {
                            arr_45 [i_12] [i_12] [8] [i_5] [i_12] = (arr_2 [2] [i_11]);
                            var_24 = var_9;
                        }
                    }
                }
                var_25 = ((var_1 ? var_2 : (var_0 * 2782665568757180554)));
                var_26 = (arr_6 [i_0] [i_5] [i_0]);
            }
            /* vectorizable */
            for (int i_14 = 3; i_14 < 8;i_14 += 1)
            {
                var_27 = (min(var_27, (var_4 * -var_7)));
                arr_48 [7] [9] [i_14] [7] = (var_4 & 1);
            }
            arr_49 [i_0] [6] [i_0] = (max(238, (((arr_47 [i_5]) ? (arr_47 [i_5]) : var_6))));
        }
        for (int i_15 = 0; i_15 < 10;i_15 += 1) /* same iter space */
        {
            var_28 = ((-22 ? 0 : -88));
            var_29 = min(57437, (max((max(6573730512766060388, 22)), -1)));
            var_30 = ((((((min(var_1, var_6))))) ? (var_3 + 11) : 11259746583522804988));
        }
        var_31 = (min(var_31, ((((((233 ? var_3 : var_7))) ? ((var_0 ? -4678416221913362575 : 6549740671919309772)) : ((((!var_8) ? var_6 : 8))))))));
        /* LoopNest 2 */
        for (int i_16 = 0; i_16 < 1;i_16 += 1)
        {
            for (int i_17 = 3; i_17 < 6;i_17 += 1)
            {
                {
                    var_32 = (((arr_3 [i_0]) ^ (arr_13 [i_17 + 2] [0] [i_16] [i_17] [i_17 + 2])));
                    var_33 ^= (arr_40 [i_0]);
                    var_34 += (max((max((var_6 & 75), (arr_54 [i_17 + 3] [i_17 - 3] [i_17 - 3]))), 31168));
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 10;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 10;i_19 += 1)
                        {
                            {
                                var_35 = var_1;
                                var_36 += (((!var_5) || ((var_4 && ((!(arr_21 [i_16] [7] [i_18])))))));
                                arr_62 [i_0] [i_0] [9] [i_0] [i_16] = (max(var_0, (((!(((12182843973403277362 ? var_9 : var_8))))))));
                            }
                        }
                    }
                }
            }
        }

        for (int i_20 = 1; i_20 < 9;i_20 += 1)
        {
            /* LoopNest 3 */
            for (int i_21 = 1; i_21 < 1;i_21 += 1)
            {
                for (int i_22 = 0; i_22 < 1;i_22 += 1)
                {
                    for (int i_23 = 2; i_23 < 8;i_23 += 1)
                    {
                        {
                            arr_72 [i_0] [i_0] [i_0] [i_20] = (((((arr_17 [i_0]) ? var_5 : ((var_9 >> (var_9 - 31720)))))) > 24943);
                            arr_73 [i_0] [i_20] [i_0] = (-542985389 ^ -424918841);
                            var_37 = (((((89 ? (arr_22 [i_23 + 1] [i_23] [i_23 + 1]) : (arr_17 [i_21 - 1])))) ? (!var_6) : ((226 ? 31168 : 9520))));
                        }
                    }
                }
            }
            arr_74 [i_20] [i_20 - 1] = (((0 | -var_5) < (~-var_9)));
            var_38 = (min(var_38, (arr_63 [0] [i_0] [0])));
            var_39 = ((((-89 ? (-4283041503949231449 && var_6) : (!var_6))) - ((min(var_7, 11259746583522804988)))));
        }
    }
    for (int i_24 = 0; i_24 < 10;i_24 += 1) /* same iter space */
    {
        var_40 &= ((-((((var_5 ? var_8 : var_7))))));
        var_41 = (min(var_41, ((-((((1 + 875468450) == 30842)))))));
        var_42 = (-12332060232775839786 ? (min((max(18415412553866979635, 1)), (~213))) : -var_8);
        var_43 = (max(var_2, (((((min((arr_26 [i_24] [i_24] [i_24] [i_24] [i_24] [i_24]), 2065010989))) ? var_9 : (var_9 + var_1))))));
    }
    for (int i_25 = 0; i_25 < 21;i_25 += 1)
    {
        var_44 = ((var_9 && ((((arr_78 [i_25]) / var_8)))));
        /* LoopNest 2 */
        for (int i_26 = 1; i_26 < 20;i_26 += 1)
        {
            for (int i_27 = 0; i_27 < 1;i_27 += 1)
            {
                {
                    var_45 = (min((max(((var_4 ? 3338 : 1506498532996973270)), (((7850 ? 158 : 18154))))), ((min(var_1, var_6)))));
                    var_46 = (min(var_46, ((min(-var_0, var_4)))));
                }
            }
        }
    }
    var_47 = (max(var_47, ((((((var_3 ? -1432298009 : 24953))) ^ ((46026 ? (var_8 + var_9) : (((min(var_9, 0)))))))))));
    #pragma endscop
}
