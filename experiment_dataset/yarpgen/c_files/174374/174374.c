/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174374
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        arr_11 [i_0] [i_0] = (max(((min(184, (max((-2147483647 - 1), 40))))), (((10797 < -40) ? (arr_0 [i_0]) : (arr_10 [i_0] [i_1 - 1] [i_0] [i_0] [i_0] [i_0])))));
                        arr_12 [i_0] [i_0] = -40;

                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            var_11 = (((((8443515727261429858 ? 20477617 : 3))) ? (min((arr_2 [i_0]), (arr_4 [i_1 - 1] [i_0]))) : (((arr_3 [i_0] [i_0]) ? (max(2146435072, 697552393)) : -41))));
                            var_12 = (min((max((min(6869584886674200056, 103)), ((min(42, 100))))), ((min(var_4, (~10))))));
                        }
                        for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
                        {
                            arr_19 [i_1] [i_3] [i_0] [i_1] [i_0] = (arr_18 [i_0] [i_1] [i_2] [i_1] [i_0]);
                            var_13 = (arr_4 [i_0] [i_0]);
                        }
                        for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
                        {
                            var_14 = ((((((arr_9 [i_0] [i_0] [i_0] [i_3] [15] [9]) ? 1 : 8601802175011994530)) == (((172 ? var_0 : 130))))));
                            var_15 = var_6;
                            arr_23 [i_0] [i_0] [i_0] [i_0] [i_3] [i_6] [i_6] = ((max(12, (arr_17 [i_1] [i_1] [i_1 - 1] [i_0] [i_6] [i_0 + 2] [i_1]))));
                        }
                        arr_24 [i_0] = ((var_10 >> (((-42 == (-127 - 1))))));
                        var_16 = ((117 >> (((arr_5 [i_0] [i_2] [i_3]) - 211))));
                    }
                    for (int i_7 = 2; i_7 < 24;i_7 += 1) /* same iter space */
                    {

                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 25;i_8 += 1)
                        {
                            arr_29 [i_0] [i_0] [i_2] [i_2] [i_0] [i_0] [20] = (!var_10);
                            var_17 = -112;
                            arr_30 [i_2] [i_2] [i_0] [i_2] = (((-4372844114108147375 ? var_2 : var_9)) <= (((arr_28 [9] [i_0] [9] [i_1] [19] [i_8] [i_0 - 3]) ? var_2 : -29361)));
                            var_18 = (arr_28 [i_0 - 3] [i_0 - 2] [i_0 - 3] [i_1 - 1] [i_7 + 1] [i_7 - 1] [i_7 - 2]);
                            arr_31 [i_0 - 3] [i_0 - 3] [i_2] [i_0] [i_7] [19] = var_4;
                        }
                        /* vectorizable */
                        for (int i_9 = 1; i_9 < 22;i_9 += 1)
                        {
                            var_19 = (arr_15 [i_9] [i_7] [i_0] [i_0] [3] [i_0 - 3]);
                            arr_34 [i_9] [i_7 - 2] [i_0] [i_1 - 1] [i_0 - 3] = -2;
                            arr_35 [i_0] [i_0] [i_2] [2] [i_9 + 1] = (-7781437050959868168 ? 4372844114108147376 : -36);
                            var_20 = ((var_9 ? (arr_21 [i_0] [i_1] [i_1 - 1] [2]) : (arr_25 [i_0 + 1] [i_1 - 1] [i_7 - 2] [i_0])));
                        }
                        var_21 = (((((-36 ? (min(var_4, var_2)) : (var_9 >= 133)))) ? ((((!28) ? (!var_0) : (arr_5 [i_0] [i_1] [i_1 - 1])))) : (arr_28 [i_7] [i_7 - 2] [15] [i_7 - 2] [i_1 - 1] [i_0 - 3] [i_0])));
                    }
                    /* vectorizable */
                    for (int i_10 = 2; i_10 < 24;i_10 += 1) /* same iter space */
                    {
                        arr_38 [i_0] [i_0] = var_3;
                        arr_39 [i_0 - 2] [i_0 - 2] [i_0 + 2] [i_0] = ((((((arr_8 [i_0 - 3] [5] [i_0] [18]) ? 112 : (arr_16 [i_0] [i_0] [6] [i_0] [i_0])))) * (arr_18 [i_0] [i_2] [i_2] [i_0] [i_0])));
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 0;i_11 += 1)
                    {
                        var_22 = ((4294967272 ? (arr_8 [22] [i_1] [i_0] [i_11 + 1]) : (arr_33 [i_0] [i_0] [i_0] [i_0 + 1] [i_1 - 1] [2] [i_1 - 1])));
                        arr_43 [i_0] [i_0] [i_2] [i_11] [1] = -28;
                    }
                    arr_44 [i_0] [i_0] [i_0] [i_0] = var_9;
                    var_23 = (arr_41 [i_0] [i_0] [17] [i_0]);
                }
            }
        }
    }
    var_24 = (min((min(-9223372036854775806, 260046848)), (min((((var_2 ? 153 : 51))), ((15 ? -4372844114108147375 : -30))))));
    var_25 = ((var_3 ? 4294967272 : ((((max(var_8, var_8)))))));
    #pragma endscop
}
