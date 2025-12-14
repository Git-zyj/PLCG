/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174782
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_16 = (max((((arr_1 [i_0]) ? (arr_1 [i_0]) : var_11)), 9763167501091656749));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_17 = (((min(((1161 ? 65507 : -26534)), 1))) ? var_5 : (((arr_5 [i_0] [i_1] [i_2]) ? (var_1 / var_2) : ((((arr_4 [i_0]) * var_9))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_18 = 16316072504359371873;
                                arr_12 [i_0] [i_0] [i_0] [i_3] [i_4] &= ((-((-49 ? -191 : (min(var_2, (arr_0 [i_0] [i_0])))))));
                            }
                        }
                    }
                }
            }
        }
        var_19 = ((!(((4756316974204357860 ? (!var_0) : 735117975)))));
        var_20 = (((~735117975) ? 29 : (min(var_13, -88))));
        var_21 = (31345 - 1);
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            var_22 = 118;
            arr_17 [i_6] = (((!var_14) - (var_11 - 31)));
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 12;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 12;i_8 += 1)
            {
                {
                    arr_23 [i_5] [i_5] [i_5] [i_5] = (var_2 - var_7);
                    arr_24 [i_5] = (86 - -1191338454);
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 18;i_9 += 1)
    {
        var_23 = (max(var_23, -1191338461));
        var_24 -= (((min(var_4, (arr_27 [i_9] [i_9])))) ? (~21010) : ((var_2 ^ (((arr_25 [i_9]) | (arr_28 [i_9]))))));
    }
    for (int i_10 = 0; i_10 < 23;i_10 += 1)
    {
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 23;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 23;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 23;i_13 += 1)
                {
                    {
                        var_25 = (var_6 - 0);
                        var_26 -= 4145814819;
                        var_27 += 228928158;
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 23;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 23;i_15 += 1)
            {
                {
                    arr_45 [i_10] [i_10] [i_10] [i_10] = (((var_14 + var_9) - 99));
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 23;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 23;i_17 += 1)
                        {
                            {
                                var_28 &= 160;
                                var_29 = (((var_2 - 1191338461) ? ((var_5 - (!18564))) : (((-2851110324922774969 - 5) ? -81 : -5))));
                                arr_51 [i_16] [i_16] [i_17] [i_17] [17] = var_7;
                                var_30 = -24224;
                                var_31 *= (99633862 - 874);
                            }
                        }
                    }
                    var_32 = var_10;
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 23;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 23;i_19 += 1)
                        {
                            {
                                var_33 = (max(var_33, ((((min(1, 354308939)) - var_5)))));
                                var_34 = var_2;
                                var_35 = 65527;
                            }
                        }
                    }
                }
            }
        }
    }
    var_36 = var_6;
    #pragma endscop
}
