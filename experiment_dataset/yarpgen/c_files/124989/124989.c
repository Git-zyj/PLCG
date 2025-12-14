/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124989
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            var_13 = ((0 ? ((var_5 ? var_10 : -2877960699)) : ((max(-255, 255)))));

            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                var_14 = (2877960690 <= var_9);
                arr_8 [i_0] = var_5;
            }
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                var_15 = (max(var_15, (((var_2 + -217285678) + ((max(-1417006596, (((var_7 ? var_8 : var_10))))))))));
                var_16 = (var_5 ^ ((max((1 || var_6), 203))));
                var_17 += (((max((var_6 >= var_4), (1 < 37689))) ? (max(-255, (max(71, var_11)))) : (((arr_5 [i_3]) ? (((var_9 ? (arr_6 [i_3] [i_3] [i_1] [i_0]) : (arr_5 [i_3])))) : ((var_10 ? var_3 : 26664))))));
            }
        }
        var_18 *= (!var_9);
    }
    var_19 = -8;
    var_20 &= 0;

    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        var_21 = (min(var_21, (arr_13 [i_4])));
        var_22 = (min(var_22, ((((((!var_11) ? var_5 : ((((arr_13 [i_4]) || (arr_13 [i_4])))))) != (((var_6 == 14346226314355774587) | 1191354453)))))));
        var_23 = ((((!(arr_12 [i_4] [i_4]))) ? ((((arr_11 [i_4] [i_4]) % ((18 | (arr_12 [i_4] [i_4])))))) : (-217285680 - 4100517759353777024)));
    }
    /* vectorizable */
    for (int i_5 = 2; i_5 < 18;i_5 += 1)
    {
        var_24 = var_11;
        var_25 = (max(var_25, var_12));
        var_26 = var_6;
        arr_18 [i_5] [i_5] = ((var_0 < (~var_5)));
        var_27 = (min(var_27, var_5));
    }
    for (int i_6 = 2; i_6 < 17;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 18;i_8 += 1)
            {
                {
                    var_28 = ((((var_4 & (arr_27 [i_8 + 1]))) == (((min(var_1, 27856))))));

                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 19;i_9 += 1) /* same iter space */
                    {
                        var_29 = (-217285670 != 0);
                        var_30 = (((arr_28 [i_6] [i_6] [17] [i_6] [i_6] [i_6]) ? (((var_5 ? var_2 : (arr_28 [i_7] [i_7] [i_7] [i_7] [i_7] [2])))) : ((var_3 ? (arr_20 [i_7]) : (arr_27 [i_7])))));
                        var_31 = (max(var_31, ((((var_2 & 1494303699) ? var_5 : var_2)))));
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 19;i_10 += 1) /* same iter space */
                    {
                        var_32 = (max(var_32, (((1794734290 != (arr_25 [i_6 + 1] [i_6 + 1] [i_8 - 1]))))));
                        var_33 = (((arr_15 [i_6 - 2]) ? var_0 : -557659578));
                        var_34 = ((1 ? (arr_14 [i_6 - 1]) : var_7));
                        var_35 = (max(var_35, (((var_10 ? var_3 : var_7)))));
                        var_36 = (4294967295 || var_2);
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 19;i_11 += 1) /* same iter space */
                    {
                        arr_36 [1] = ((14670 ? 0 : (-127 - 1)));
                        var_37 = (max(var_37, ((((arr_32 [i_11] [i_8] [i_7] [i_6] [i_6] [i_6 + 1]) * -19)))));
                        arr_37 [i_6] [i_7] [i_8] [i_6] = ((1 ? 5 : -1));
                        var_38 = var_10;
                    }
                    for (int i_12 = 0; i_12 < 19;i_12 += 1)
                    {
                        arr_40 [i_7] [i_8] = ((((((((var_12 ? var_2 : 1))) ? (var_7 <= 254) : (~5222359931325806601)))) ? var_10 : 0));
                        var_39 = (min(var_39, 1));
                        var_40 = (max(var_40, (!228)));
                    }
                    var_41 = (((((~(arr_26 [i_6 + 1] [i_7] [i_8] [i_8 + 1])))) / (min((arr_24 [i_6] [i_6 + 1] [1]), (arr_34 [i_6 + 2] [i_6 + 2])))));
                    var_42 += var_8;
                }
            }
        }
        var_43 = -1403340121;
    }
    var_44 = (((((!(((var_4 ? var_2 : var_10)))))) * var_10));
    #pragma endscop
}
