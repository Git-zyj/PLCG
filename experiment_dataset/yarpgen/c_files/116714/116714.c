/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116714
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 45089;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                var_13 = (min(var_13, ((max(12029376780486723157, (7 + 31))))));
                var_14 = ((max(-35, 18706)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_15 = ((~((46829 ? 46830 : 46803))));

                            for (int i_4 = 1; i_4 < 18;i_4 += 1)
                            {
                                arr_15 [i_0] [i_0] [i_0] [i_0] [13] = (~1);
                                var_16 = (((!(!1610612736))));
                            }
                            var_17 = (max(var_17, (((~(((-123 <= (!42757)))))))));
                        }
                    }
                }
            }
        }
    }
    var_18 = 0;

    for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_6 = 2; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 12;i_8 += 1)
                {
                    {
                        arr_28 [i_5] = ((~(((!((max(255, 31))))))));

                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            var_19 = ((((max(var_1, var_6))) ? (var_9 || var_8) : (~35)));
                            var_20 = (var_0 && 46803);
                            var_21 *= (((18706 >= 57) ? ((var_1 ? (115 > 2684354579) : -var_8)) : 18680));
                        }
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            var_22 -= ((((((((35 ? var_11 : var_5))) && (~14962297013881488929)))) | var_5));
                            arr_35 [i_5] [i_5] [i_5] = var_3;
                            arr_36 [i_5] [i_8] [i_5] = (((((-5961496412881714762 ? var_9 : 6529)))));
                            var_23 *= (!-3539298391119500236);
                            arr_37 [i_5] = ((!(((0 ? 40587 : -6521)))));
                        }
                        for (int i_11 = 1; i_11 < 13;i_11 += 1)
                        {
                            var_24 *= ((((!(~1004795504)))));
                            var_25 -= ((~(min(255, -6555))));
                            var_26 = (max(var_26, -var_0));
                            var_27 = 17661;
                            arr_40 [i_5] [i_5] [i_5] [12] [3] [i_8] [i_11 + 1] = (2 ? -1 : 8488065695073374424);
                        }
                        var_28 = 0;
                        var_29 *= ((~((var_7 ? 27 : 6520))));
                    }
                }
            }
        }
        arr_41 [i_5] = (max(((-97 ? var_2 : var_10)), 25231));
    }
    for (int i_12 = 0; i_12 < 15;i_12 += 1) /* same iter space */
    {
        arr_44 [i_12] [i_12] = (min(((min(-370, var_11))), ((min(0, var_4)))));
        arr_45 [i_12] = ((!((max(3419556038, (~var_11))))));
        /* LoopNest 3 */
        for (int i_13 = 0; i_13 < 15;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 15;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 15;i_15 += 1)
                {
                    {
                        arr_56 [i_12] [i_12] [0] [i_12] [i_14] = var_10;
                        var_30 = (min(var_30, var_6));
                    }
                }
            }
        }
        arr_57 [i_12] = (10864743288427800729 > 0);
    }
    for (int i_16 = 0; i_16 < 15;i_16 += 1) /* same iter space */
    {
        arr_60 [i_16] = 96;
        /* LoopNest 2 */
        for (int i_17 = 0; i_17 < 15;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 1;i_18 += 1)
            {
                {
                    arr_65 [1] [i_17] = var_4;
                    /* LoopNest 2 */
                    for (int i_19 = 0; i_19 < 15;i_19 += 1)
                    {
                        for (int i_20 = 0; i_20 < 15;i_20 += 1)
                        {
                            {
                                arr_70 [i_20] [i_16] [7] [10] [0] [10] [i_20] = var_10;
                                var_31 = ((((min(2331487381, var_8))) ? ((max(9025, 45))) : -112));
                            }
                        }
                    }
                    var_32 = (min(var_32, 5932060619495364987));
                }
            }
        }
    }
    #pragma endscop
}
