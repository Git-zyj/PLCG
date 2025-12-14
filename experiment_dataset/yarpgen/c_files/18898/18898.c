/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18898
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        var_15 = var_12;
                        var_16 = 0;
                        var_17 = (!(arr_6 [i_2] [i_0 + 2] [i_2]));
                        var_18 = ((!(((var_7 ? (min(var_7, var_7)) : (arr_1 [i_0 + 2] [i_1]))))));
                        var_19 = min((max((min(4294967285, 4294967295)), (min(0, 2080374784)))), -0);
                    }
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        var_20 = (max(var_20, var_8));
                        var_21 = (min(var_6, var_1));
                        var_22 = -var_7;
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                var_23 = (min(var_23, 34909));
                                arr_17 [0] [i_1] [i_2] [i_1] [1] = (~-var_8);
                            }
                        }
                    }

                    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                    {

                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            arr_24 [i_2] [i_2] = var_0;
                            var_24 = (max(var_24, (!4294967295)));
                        }
                        for (int i_9 = 0; i_9 < 24;i_9 += 1)
                        {
                            var_25 = var_11;
                            var_26 = (min(var_26, ((max((min(((((arr_12 [i_9]) ? var_7 : (arr_27 [i_0] [i_0] [i_2] [i_9])))), ((686963884549757699 ? (arr_1 [i_1] [i_7]) : (arr_21 [i_9]))))), (((min((arr_5 [i_0] [i_0] [i_2] [i_7]), var_6)))))))));
                        }
                        arr_28 [i_0] [14] [14] [i_2] [i_2] = (min(((((arr_1 [i_0] [2]) * (arr_7 [i_2] [i_0 + 2] [i_0 + 1])))), (((arr_7 [i_2] [i_2] [i_2]) ? ((var_6 ? 17759780189159793929 : var_5)) : ((min(4294967295, -70)))))));
                        var_27 |= var_12;
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
                    {
                        var_28 = (((var_2 ? var_5 : (arr_6 [i_2] [i_1] [i_2]))));

                        for (int i_11 = 2; i_11 < 22;i_11 += 1)
                        {
                            var_29 = (((~4294967295) ? 4294967295 : (arr_32 [i_0] [i_1] [i_2] [i_0] [i_11])));
                            var_30 = (!var_8);
                            var_31 |= 36486;
                        }
                        var_32 = var_5;
                        var_33 = (min(var_33, ((((((var_0 ? var_11 : (arr_16 [i_0 - 3] [i_1] [i_2] [i_10])))) ? ((var_0 ? (arr_2 [i_0]) : (arr_0 [i_0 + 3]))) : (~var_12))))));
                        arr_35 [4] [i_2] [i_2] [i_2] [i_2] [i_2] = var_8;
                    }
                    for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
                    {
                        var_34 = (min(var_2, (min((arr_15 [i_0] [i_0 - 1] [i_2] [6]), 36469))));
                        var_35 = ((((!(arr_18 [13] [i_0 + 1])))));
                    }
                }
            }
        }
    }
    var_36 = var_14;
    var_37 = var_13;
    var_38 = max(var_0, var_3);
    #pragma endscop
}
