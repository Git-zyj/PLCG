/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133616
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, ((((((min(var_1, var_5)))) << (((((max(var_8, var_7)) / (max(var_5, var_10)))) + 212811233135065)))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] = ((((arr_0 [i_0]) >= var_2)));
        var_13 = (var_9 > (((-(arr_3 [i_0] [i_0])))));
        arr_5 [i_0] = var_1;
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] [i_1] = ((((max(195, 47633))) << (((max((min(var_7, (arr_7 [i_1] [i_1]))), ((max(var_8, (arr_3 [i_1] [i_1])))))) - 12665))));
        var_14 += (min((max((arr_6 [i_1]), (var_11 + var_4))), (max(var_4, ((min(var_11, var_8)))))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 14;i_4 += 1)
                {
                    {
                        var_15 = (min(var_15, var_4));
                        var_16 -= (arr_15 [i_3 - 1] [i_3 + 1] [i_4 - 1]);
                    }
                }
            }
        }
        arr_16 [i_1] [i_1] = (((arr_12 [i_1] [i_1] [i_1] [i_1]) || (var_11 & var_8)));
    }
    for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
    {

        for (int i_6 = 1; i_6 < 14;i_6 += 1)
        {
            var_17 += 96;
            var_18 += (((arr_17 [i_5] [i_5]) ? var_7 : (max((max((arr_0 [i_6]), (arr_9 [i_6]))), ((min(var_3, 3834798072)))))));

            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                var_19 = (max(var_2, ((max((((var_7 > (arr_9 [i_7])))), var_9)))));
                var_20 = 3834798072;
            }
            for (int i_8 = 0; i_8 < 15;i_8 += 1) /* same iter space */
            {

                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    arr_32 [i_5] [i_6] [i_9] [i_5] [i_6] = ((460169224 / var_6) ? (max((((!(arr_7 [i_9] [i_6])))), (max(var_0, 252)))) : (((max(245, (max(var_2, 1)))))));

                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 15;i_10 += 1)
                    {
                        arr_36 [i_5] [i_6] [i_8] [i_5] [i_10] [i_8] |= ((!(arr_17 [i_5] [i_6 + 1])));
                        arr_37 [i_10] [i_9] [i_5] [i_6] [i_5] = (((-13 ^ (arr_28 [i_5] [i_5] [i_8] [i_10] [i_10] [i_10]))));
                        var_21 = ((var_0 ? var_5 : (arr_2 [i_5] [i_5])));
                        arr_38 [i_10] [i_10] [i_9] [i_8] [i_6 + 1] [i_5] [i_5] = (arr_14 [i_6 - 1]);
                        var_22 = var_6;
                    }
                    for (int i_11 = 1; i_11 < 14;i_11 += 1)
                    {
                        arr_43 [i_11] [i_11] [i_9] [i_8] [i_8] [i_6] [i_11] = (min(4, -26117));
                        var_23 = (((min(((max((arr_3 [i_5] [i_5]), var_11))), (max((arr_13 [i_11] [i_6]), -22899)))) ^ ((max(((max(var_8, var_8))), var_7)))));
                        arr_44 [i_5] &= (max((1 <= 1), (min((arr_19 [i_11 - 1] [i_11 + 1] [i_6 - 1]), var_0))));
                        var_24 = (((max(247, (arr_22 [i_5] [i_9] [i_11])))));
                    }
                    for (int i_12 = 0; i_12 < 15;i_12 += 1) /* same iter space */
                    {
                        var_25 -= (max((min((arr_29 [i_6 - 1] [i_6 + 1] [i_6 + 1]), (max(var_7, var_0)))), (max((460169235 < var_0), (min((arr_25 [i_5] [i_5] [i_9]), var_5))))));
                        arr_49 [i_5] [i_6] [i_6] [i_5] [i_6] [i_9] [i_9] = (min(((var_2 & (min(7890965326082680818, (arr_35 [i_12] [i_9] [i_9] [i_8] [i_6 - 1] [i_5]))))), -var_0));
                        arr_50 [i_5] [i_5] [i_8] [i_9] [i_9] [i_12] = (min((max(var_5, (var_6 - 1))), ((max((arr_29 [i_5] [i_6] [i_8]), (arr_46 [i_5] [i_6 - 1] [i_8] [i_9] [i_12]))))));
                        var_26 = var_4;
                    }
                    for (int i_13 = 0; i_13 < 15;i_13 += 1) /* same iter space */
                    {
                        arr_54 [i_5] [i_5] [i_6] [i_8] [i_9] [i_9] [i_9] = ((1 ? 0 : -30176));
                        var_27 -= (arr_19 [i_6 + 1] [i_6 - 1] [i_8]);
                        arr_55 [i_5] [i_6] [i_8] [i_9] = ((var_2 | (10981864368979863974 ^ 23)));
                    }
                }

                for (int i_14 = 4; i_14 < 12;i_14 += 1)
                {
                    var_28 = (max(var_11, (((var_10 * var_0) / (((max(var_2, var_1))))))));
                    arr_59 [i_5] [i_5] [i_8] [i_14] = var_1;
                    var_29 += (min(var_0, (max(-67, (min(104, var_5))))));
                    var_30 -= ((((max((((arr_41 [i_5] [i_6] [i_8] [i_6] [i_8]) & var_5)), (var_1 - var_7)))) ? (max((min(var_5, var_3)), -30291)) : (max((var_7 % var_0), ((min(var_10, var_3)))))));
                }

                for (int i_15 = 4; i_15 < 12;i_15 += 1)
                {
                    arr_63 [i_6 + 1] [i_15] [i_6 + 1] [i_15] [i_6 + 1] [i_6 - 1] = ((var_5 ? ((min(((min(-104, var_9))), var_10))) : ((max(var_11, var_2)))));
                    var_31 = (9 && 127);
                    arr_64 [i_8] [i_6] [i_15] [i_8] [i_15] [i_15] = (arr_14 [i_8]);
                }
            }
            /* vectorizable */
            for (int i_16 = 0; i_16 < 15;i_16 += 1) /* same iter space */
            {
                arr_68 [i_5] [i_6] = (((!var_7) >> (((var_10 & var_9) - 33))));
                var_32 = ((var_11 ? (var_4 | var_6) : var_3));
            }
        }
        var_33 += (max((~6092829069806583367), (max(-7890965326082680792, ((~(arr_53 [i_5])))))));
        var_34 = (((-var_6 && (((var_8 ? var_8 : var_2))))));
        arr_69 [i_5] = (min(((max(254, 2))), ((max(var_6, var_1)))));
    }
    #pragma endscop
}
