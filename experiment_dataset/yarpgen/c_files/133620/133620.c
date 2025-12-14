/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133620
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= -2015228538;

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
                    {
                        var_18 = 2015228527;
                        var_19 = (min((((((min(24944, 2015228538))) > var_2))), (((arr_3 [i_2] [i_3]) ? (arr_3 [i_0] [i_0]) : (arr_3 [i_0] [i_0])))));
                    }
                    for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
                    {
                        var_20 |= ((!((min(var_13, var_0)))));
                        var_21 = 2015228538;
                        var_22 = ((max((max(var_14, (arr_1 [i_2] [i_4]))), 6)));
                        var_23 = -var_7;
                    }
                    var_24 = ((((max((arr_0 [i_1]), -2015228562))) ? 2015228538 : (min(var_6, (arr_0 [i_1])))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                var_25 = var_0;
                                var_26 = ((((~(var_8 ^ 2015228549))) + (((!(~2015228538))))));
                                var_27 = (((arr_1 [i_0] [i_5]) ? (arr_3 [i_5] [i_5]) : (var_15 ^ 323276872)));
                            }
                        }
                    }
                }
            }
        }
        var_28 = var_4;

        /* vectorizable */
        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            var_29 |= var_14;
            var_30 |= -2015228524;
            var_31 = (250 | 2015228538);
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 18;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 18;i_9 += 1)
                {
                    {
                        var_32 = (min(var_32, (((var_6 ? var_6 : (arr_16 [i_0] [i_0] [i_0] [i_7] [i_0] [i_0] [i_9]))))));
                        var_33 |= 6;
                        var_34 = 2015228544;
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 18;i_10 += 1)
        {
            var_35 = 3365950245341788490;
            var_36 = ((+((1 ? (arr_21 [i_0] [0] [i_0]) : (arr_4 [i_10])))));
            var_37 = 230;
            var_38 |= (arr_1 [i_10] [i_0]);
            var_39 = var_9;
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 18;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 18;i_13 += 1)
                {
                    {

                        for (int i_14 = 0; i_14 < 18;i_14 += 1)
                        {
                            var_40 = (~var_9);
                            var_41 = (arr_2 [i_13] [i_12]);
                        }
                        var_42 = (((((arr_13 [i_12] [i_12] [i_12]) ? var_16 : 26)) / (arr_9 [i_12] [i_12] [i_12] [i_12])));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_15 = 0; i_15 < 18;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 18;i_16 += 1)
                {
                    {
                        var_43 = 124;
                        var_44 |= (((((212 ? 120 : 2015228538))) & var_1));
                        var_45 |= ((!(arr_0 [i_15])));
                    }
                }
            }
        }
        var_46 = ((6 & ((4836327240495155942 & (~var_7)))));
    }
    for (int i_17 = 0; i_17 < 18;i_17 += 1) /* same iter space */
    {
        var_47 |= -2015228527;
        /* LoopNest 2 */
        for (int i_18 = 0; i_18 < 18;i_18 += 1)
        {
            for (int i_19 = 0; i_19 < 18;i_19 += 1)
            {
                {
                    var_48 |= (!var_5);
                    var_49 |= (11831312793330582829 ? var_12 : ((var_9 ? 1 : var_1)));
                    /* LoopNest 2 */
                    for (int i_20 = 0; i_20 < 18;i_20 += 1)
                    {
                        for (int i_21 = 0; i_21 < 18;i_21 += 1)
                        {
                            {
                                var_50 |= (arr_36 [i_17] [i_18] [i_17] [i_19] [i_20] [i_21]);
                                var_51 = (min(var_51, ((((((+((((arr_19 [i_17] [i_17] [i_17]) == var_13)))))) ? (arr_46 [i_17] [i_17]) : var_13)))));
                                var_52 = 230;
                            }
                        }
                    }

                    for (int i_22 = 0; i_22 < 18;i_22 += 1)
                    {
                        var_53 |= (((((((var_11 ? (arr_14 [i_18] [i_18]) : 6240461975456799240))) ? (arr_12 [i_18] [i_18]) : var_12)) & ((max(((var_14 || (arr_35 [i_17] [i_18] [i_22] [i_22]))), ((-2015228562 <= (arr_26 [i_18] [i_22] [i_18]))))))));
                        var_54 = ((((((((arr_37 [i_17] [4] [i_22] [i_17]) ^ 2015228562))) ? (~-44) : (min((arr_7 [i_18] [9] [i_22]), var_6)))) ^ var_4));
                    }
                    for (int i_23 = 0; i_23 < 18;i_23 += 1)
                    {

                        /* vectorizable */
                        for (int i_24 = 0; i_24 < 18;i_24 += 1)
                        {
                            var_55 |= (((var_1 && 2015228541) ? (((var_10 || (arr_27 [i_24])))) : var_11));
                            var_56 |= (arr_45 [i_23]);
                        }
                        for (int i_25 = 0; i_25 < 18;i_25 += 1)
                        {
                            var_57 = var_1;
                            var_58 = (6240461975456799240 >= 2015228562);
                            var_59 = 6;
                        }
                        var_60 = ((((((arr_33 [i_17] [i_18]) ? (arr_33 [i_17] [i_18]) : var_11))) ? -2015228561 : (((min((arr_33 [i_17] [i_17]), (arr_33 [i_18] [i_18])))))));
                        var_61 |= (max(((124 ? var_5 : var_1)), (((-(arr_42 [i_18] [i_18] [i_18]))))));
                    }
                }
            }
        }
        var_62 = (((12019690854560214851 * var_14) * 1442027797));
    }
    #pragma endscop
}
