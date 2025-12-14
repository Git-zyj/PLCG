/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124523
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= (!var_6);
    var_15 = ((((((min(-2752975693513564275, 18446744073709551597)) || var_13)))));
    var_16 = ((var_2 == ((min(-2752975693513564276, 11268162418877919058)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            {
                var_17 = 4386274486507269228;
                var_18 ^= (min(11268162418877919066, var_6));

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    var_19 = var_3;
                    var_20 -= ((((max(4386274486507269228, -3349014480041583296))) ? (!8427630329818243511) : (((!((((arr_3 [i_1]) & var_5))))))));
                }
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    var_21 = (max(var_21, (arr_2 [i_0] [i_0])));

                    for (int i_4 = 3; i_4 < 23;i_4 += 1) /* same iter space */
                    {
                        arr_13 [7] [i_4] [i_4] [i_0] = ((!((max((arr_11 [i_1 - 1] [i_1]), var_13)))));
                        var_22 = var_4;
                        var_23 = (((arr_8 [i_0] [i_0] [i_3] [i_0]) & (arr_9 [i_4] [i_4 - 3] [i_0] [i_4])));
                    }
                    for (int i_5 = 3; i_5 < 23;i_5 += 1) /* same iter space */
                    {

                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            arr_19 [i_6] [i_6] [i_5] = var_6;
                            arr_20 [i_5] [i_1] [5] [i_5] [i_5] = arr_1 [1] [i_0];
                            arr_21 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = var_0;
                        }
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            arr_26 [i_1] [i_5] = max(7178581654831632567, 7178581654831632576);
                            var_24 = -2752975693513564275;
                        }
                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            var_25 = var_0;
                            var_26 *= max((min((((arr_14 [i_8] [i_1] [i_8]) ? (arr_18 [i_0] [i_5 - 1] [i_0] [i_1] [i_0]) : var_3)), 7178581654831632550)), ((var_3 & (arr_9 [i_0] [i_1 + 1] [i_5 + 1] [i_5]))));
                            var_27 = var_7;
                            var_28 = var_6;
                            arr_31 [i_5] = 4352030853787521789;
                        }
                        for (int i_9 = 0; i_9 < 24;i_9 += 1)
                        {
                            var_29 |= ((!(!662332270648015833)));
                            var_30 = var_13;
                            var_31 = (max(var_31, (max(((3 ? 3195476076598911921 : 14060469587202282375)), var_5))));
                            var_32 = (min(var_32, ((min((min((arr_14 [i_0] [i_1 - 2] [i_0]), (arr_14 [2] [i_1 - 3] [i_0]))), (arr_15 [i_0] [i_1 - 2] [i_1 - 2] [i_5 + 1]))))));
                            var_33 = arr_11 [i_1 + 1] [i_1 - 1];
                        }

                        for (int i_10 = 2; i_10 < 20;i_10 += 1) /* same iter space */
                        {
                            arr_37 [i_10] [i_5] [i_5] [17] = 7178581654831632565;
                            arr_38 [i_0] [i_0] [i_3] [i_5] [i_5] [i_10] = (arr_32 [9] [9] [i_10]);
                        }
                        /* vectorizable */
                        for (int i_11 = 2; i_11 < 20;i_11 += 1) /* same iter space */
                        {
                            var_34 += (var_12 ? var_5 : (var_3 % 15000058444030512441));
                            var_35 = (var_12 % var_1);
                            var_36 = (((arr_36 [i_5] [i_5 + 1] [i_5] [i_5] [i_11 + 3]) * var_13));
                            var_37 ^= (((arr_40 [i_5 + 1] [i_1 - 3] [i_1 - 1]) > (arr_40 [i_5 - 1] [i_1 - 3] [i_1 - 3])));
                            arr_42 [i_3] [i_1] [14] [i_1] [i_3] &= ((((arr_14 [i_1] [22] [i_0]) <= var_6)) ? var_8 : (arr_16 [i_5 - 3] [i_3] [i_3]));
                        }
                        arr_43 [i_5] [i_3] [i_5] [i_1 - 1] [i_5] = arr_29 [i_3] [i_5] [i_5] [i_5 - 3] [i_5 - 2] [i_5];
                    }
                    for (int i_12 = 3; i_12 < 23;i_12 += 1) /* same iter space */
                    {
                        arr_46 [20] [i_1] [i_3] [i_1] = (max((var_13 < 11245493806341128638), var_2));
                        arr_47 [i_0] |= ((((min((min(7178581654831632537, 11268162418877919049)), var_6))) || var_0));
                    }
                    var_38 ^= min(12641174736475911819, 18446744073709551615);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_13 = 0; i_13 < 20;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 20;i_14 += 1)
        {
            {
                arr_55 [i_13] [i_13] [i_13] = ((!((min((max(-273325258072706914, var_10)), (arr_7 [i_14] [i_14] [i_13]))))));
                var_39 = var_6;
                arr_56 [6] [i_13] [i_13] = var_10;
            }
        }
    }
    #pragma endscop
}
