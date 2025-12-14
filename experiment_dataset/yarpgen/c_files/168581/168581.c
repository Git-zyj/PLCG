/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168581
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((max(48119, 148)));
    var_19 = (max(var_19, 12684088627759458274));

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_20 = (1768873573712783415 ? (arr_4 [i_0]) : (arr_5 [i_0] [i_0]));
            var_21 = ((((((~(arr_2 [i_0]))) + 2147483647)) >> ((((var_3 ? (arr_3 [i_0] [i_0]) : var_9)) - 5964190140830450926))));
            var_22 = var_15;
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_23 = ((var_6 ^ ((((min(var_2, var_12))) ? (~17416) : var_2))));
            arr_8 [i_0] [i_0] = (arr_1 [i_2]);
            var_24 = (((((~(arr_0 [i_2])))) ? ((max((arr_5 [i_0] [i_0]), (((arr_3 [i_2] [i_0]) ? -1309205737 : (arr_5 [i_0] [i_2])))))) : ((~(arr_6 [i_0] [i_0] [i_0 - 1])))));
        }
        var_25 = (max(var_25, (((min(((max(var_6, (arr_7 [i_0] [i_0 - 2])))), ((17411 / (arr_0 [i_0])))))))));
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 11;i_3 += 1)
    {

        for (int i_4 = 1; i_4 < 13;i_4 += 1)
        {
            var_26 -= 255;
            var_27 |= ((-(arr_0 [i_3 + 4])));
        }
        arr_14 [i_3] = (((arr_10 [i_3 + 3]) ? ((((arr_7 [i_3] [i_3]) ? (arr_11 [i_3 + 4] [i_3]) : (arr_13 [i_3 + 3])))) : (((arr_3 [i_3 + 2] [i_3]) ? (arr_6 [i_3] [i_3] [i_3]) : (arr_5 [i_3] [i_3])))));
        arr_15 [i_3 + 1] = var_4;
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 14;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 14;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 4; i_7 < 14;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 15;i_8 += 1)
                        {
                            {
                                var_28 = (~(arr_7 [i_3] [i_5 - 1]));
                                var_29 -= ((var_10 % ((var_13 ? 1309205736 : var_2))));
                            }
                        }
                    }
                    var_30 |= ((-var_3 ? (((arr_22 [i_3] [i_5 + 1]) ? (arr_19 [i_3] [i_5] [i_6]) : 16677870499996768191)) : (((var_2 ? 48112 : var_12)))));
                    var_31 = (max(var_31, (1309205736 & 1)));
                    var_32 = (min(var_32, ((((arr_13 [i_5 - 1]) ? (arr_26 [i_5] [i_3] [i_5 - 1] [i_5 - 1] [i_3] [i_3] [4]) : (arr_26 [12] [i_3] [i_5 - 1] [i_3] [i_3 + 3] [i_3] [0]))))));

                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {

                        for (int i_10 = 2; i_10 < 14;i_10 += 1)
                        {
                            var_33 -= (arr_20 [i_3] [i_6 + 1] [i_10]);
                            arr_33 [i_3] [i_5 - 1] [i_6] [i_9] [i_10] = -3094370292029246415;
                        }
                        for (int i_11 = 1; i_11 < 13;i_11 += 1)
                        {
                            var_34 = (max(var_34, (86 + var_17)));
                            var_35 += ((~(arr_7 [i_3] [1])));
                            arr_36 [i_6] [i_5 - 1] [i_6] [i_5 - 1] [i_6] = ((17416 * (arr_17 [i_3] [i_3] [i_3])));
                            var_36 += var_1;
                        }
                        for (int i_12 = 0; i_12 < 15;i_12 += 1)
                        {
                            var_37 = (~1);
                            arr_39 [i_3] [i_3 + 2] [i_3] [i_3 + 1] [10] [i_6] = -1509974189;
                        }
                        arr_40 [i_3] [1] [i_3] [i_3] [i_3] [i_3] |= (var_13 / var_16);
                        arr_41 [i_3] [i_6] [i_6] [12] [i_9] = (((~var_8) ? -148 : (((var_13 || (arr_22 [i_9] [i_5 + 1]))))));
                    }
                    for (int i_13 = 0; i_13 < 1;i_13 += 1) /* same iter space */
                    {
                        var_38 = (arr_22 [i_3 - 2] [i_5]);
                        var_39 = (max(var_39, (((0 ? 1509974188 : 1)))));

                        for (int i_14 = 0; i_14 < 15;i_14 += 1)
                        {
                            var_40 = (min(var_40, (arr_37 [i_3] [i_5 + 1] [i_6] [i_3] [i_3] [i_13] [i_5])));
                            var_41 = (arr_20 [i_3] [i_5 - 1] [i_6]);
                            var_42 |= var_5;
                            arr_49 [i_3] &= ((~(arr_28 [i_5] [i_5] [i_6 - 1] [i_3] [6] [i_13])));
                        }
                    }
                    for (int i_15 = 0; i_15 < 1;i_15 += 1) /* same iter space */
                    {
                        var_43 &= (((arr_25 [i_3] [i_5 + 1] [i_3] [i_15] [i_5]) ? ((1509974189 ^ (arr_7 [11] [i_3]))) : var_9));
                        var_44 |= ((var_6 ? ((var_9 ? var_7 : -1309205737)) : (arr_25 [i_3] [i_5 - 1] [i_5 - 1] [0] [i_15])));
                        var_45 = (arr_18 [i_6]);
                    }
                }
            }
        }
    }
    var_46 += var_3;
    var_47 = (((!var_2) ? var_8 : (((((var_1 ? var_0 : 4762259379050446829))) ? (~var_4) : (max(-1509974189, var_3))))));
    #pragma endscop
}
