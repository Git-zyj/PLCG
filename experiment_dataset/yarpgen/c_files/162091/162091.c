/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162091
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, (((min((~76), 193))))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_17 = ((~((((arr_0 [i_0]) || (arr_2 [i_0]))))));
        var_18 -= (~48);
        var_19 = 208;
        var_20 = ((((max(((((arr_0 [i_0]) >= 5602672382974975519))), (min(var_8, (arr_2 [i_0])))))) ? (min(2064384, 78)) : (min((~57), ((max(15, 75)))))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 17;i_2 += 1) /* same iter space */
        {
            var_21 -= (max(((~(arr_3 [i_2 + 2]))), ((max((arr_3 [i_2 - 1]), (arr_3 [i_2 - 1]))))));
            arr_8 [13] [2] [i_2 - 1] = (max(((var_9 ? (min((arr_6 [i_1] [i_2]), var_12)) : (arr_3 [i_1]))), (((min(-120, var_3))))));
        }
        for (int i_3 = 1; i_3 < 17;i_3 += 1) /* same iter space */
        {
            var_22 = (min(var_22, ((min(-var_11, -5433737992300567486)))));
            arr_11 [i_1] [i_1] = (max((arr_7 [i_1] [i_3 + 1]), ((-((var_2 ? var_15 : var_7))))));
            var_23 = 7279677967779202463;
            var_24 = (((min((arr_6 [i_3] [i_3 + 1]), (arr_6 [i_1] [i_3]))) | ((((var_3 >= var_4) ? (0 >> 0) : ((((arr_9 [i_1]) <= (arr_5 [i_1])))))))));
            var_25 = (((!((max(1, (arr_3 [i_1])))))));
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            var_26 = (arr_12 [i_1] [i_4]);

            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                arr_17 [i_1] [i_4] [i_4] [i_5] = (max((max((arr_10 [i_1]), var_14)), (((((((arr_12 [i_5] [i_4]) >> (var_6 - 17778465386261367593)))) && (arr_6 [i_1] [i_1]))))));
                var_27 |= 44;
            }
            for (int i_6 = 0; i_6 < 19;i_6 += 1)
            {
                var_28 = (max(var_28, (((((max((~var_10), (max(24, var_5))))) ? (max((max((arr_18 [i_1] [i_1] [i_1] [i_1]), (arr_5 [i_1]))), (arr_13 [i_1] [i_4] [i_4]))) : ((((~(arr_4 [i_1] [i_4]))) >> (((16507318068876253293 & var_1) - 562073686)))))))));
                var_29 = ((~(-var_3 / var_14)));
            }
            /* vectorizable */
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                var_30 = (((~-1902160462) ? (arr_21 [i_7] [i_4]) : 62));
                var_31 = var_7;
            }
            for (int i_8 = 2; i_8 < 15;i_8 += 1)
            {
                arr_24 [i_8] = 204;
                arr_25 [i_8] = ((~((((~(arr_15 [i_1] [i_1])))))));
                var_32 = -66;
            }
        }
        var_33 = ((((((-2064385 ? var_12 : -2064385))) ? 6879098501574026983 : (((arr_10 [i_1]) ^ -7279677967779202464)))) << ((~(~1))));
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 19;i_9 += 1)
        {
            for (int i_10 = 3; i_10 < 18;i_10 += 1)
            {
                {
                    var_34 = ((-((max((arr_23 [i_10 - 1] [i_10 + 1] [i_10]), (arr_23 [i_10 + 1] [i_10 - 3] [i_10 - 3]))))));
                    var_35 = (max(var_35, (!-7279677967779202473)));
                }
            }
        }
        arr_30 [i_1] = ((133 | (max(((~(arr_16 [i_1] [i_1]))), 28873))));
    }
    for (int i_11 = 2; i_11 < 13;i_11 += 1)
    {
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 14;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 14;i_13 += 1)
            {
                {
                    var_36 = (min(var_36, ((min(((((arr_23 [i_11 - 2] [i_11 + 1] [i_11 - 1]) >= (arr_33 [i_11 - 2] [i_11 - 1])))), (max((arr_33 [i_11 - 1] [i_11 - 1]), (arr_33 [i_11 - 1] [i_11 + 1]))))))));
                    var_37 = (min(var_37, ((((((!(((11277241032239041880 ? var_7 : var_6)))))) / ((((var_2 ? (arr_27 [i_11] [i_11] [i_13]) : (arr_13 [i_13] [i_12] [i_12]))) ^ (arr_9 [i_11]))))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_14 = 2; i_14 < 12;i_14 += 1)
        {
            for (int i_15 = 1; i_15 < 1;i_15 += 1)
            {
                {
                    var_38 = (!1);
                    arr_45 [i_11 - 2] [i_14] [i_14] [i_15] = ((min(-7279677967779202464, (arr_33 [i_15 - 1] [i_14 - 1]))));
                    var_39 = ((min(18446744073709551615, ((10051810711512871009 ? -1502241858 : (arr_16 [i_11 - 1] [i_11 - 1]))))));
                    arr_46 [i_11] [i_11] [i_11 - 2] [i_11] = var_9;
                }
            }
        }
    }
    for (int i_16 = 0; i_16 < 18;i_16 += 1)
    {
        arr_50 [i_16] = (arr_16 [i_16] [i_16]);
        var_40 = -6590165858703063019;
        arr_51 [i_16] = ((((((arr_48 [i_16]) ? -1 : (arr_9 [i_16])))) > (((var_6 ^ (arr_13 [18] [i_16] [18]))))));
        var_41 -= (min(-1827957780, (min((max((arr_16 [i_16] [i_16]), -22829)), var_13))));
    }
    var_42 = (((((max(var_7, var_7)) & 42215)) >= ((((-1827957772 ^ var_3) * (!var_13))))));
    #pragma endscop
}
