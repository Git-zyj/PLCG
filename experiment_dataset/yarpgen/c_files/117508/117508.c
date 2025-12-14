/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117508
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            var_12 &= arr_7 [i_4] [i_2 + 3];
                            var_13 = 9223372036854775807;
                        }
                        for (int i_5 = 1; i_5 < 22;i_5 += 1)
                        {
                            var_14 &= var_9;
                            arr_14 [i_0] [i_1] [i_1] = ((((138 - var_8) ? (((5 ? -32742 : 116))) : ((15 ? var_4 : var_3)))));
                            arr_15 [i_0] [i_1] [i_2 + 1] [i_3] = (max(((((arr_10 [i_5 - 1] [i_5] [i_2 + 3]) << (var_5 - 2492133615)))), -32393));
                            var_15 = (((~18) ? ((4920 ? (~1) : -4294967288)) : ((((!(arr_7 [i_1] [i_1 + 1])))))));
                        }
                        for (int i_6 = 2; i_6 < 19;i_6 += 1)
                        {
                            arr_18 [i_3] [18] [i_1] [i_3] = (27 != 3033769292);
                            var_16 += 11;
                            var_17 = (arr_0 [i_6 - 1]);
                        }
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            var_18 |= ((!(arr_22 [i_0] [i_1 - 1] [i_2 + 2] [i_2 - 1] [7])));
                            var_19 |= var_10;
                            var_20 = (((((49163337 ? var_7 : (arr_3 [i_0] [i_0] [i_1]))) != (50236158 != 4294967294))));
                        }
                        var_21 = ((4294967281 ? (max(((var_2 ? var_4 : (arr_20 [i_0] [i_1 - 1] [i_1] [i_2] [18]))), (12305 * 1))) : 27));

                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            arr_26 [i_1] [i_1] [i_1] [i_3] [i_8] = (((~(arr_4 [i_1 + 1] [i_2 + 3]))));
                            arr_27 [i_8] [i_3] [i_1] [i_3] [i_8] = (-(min(var_9, 240)));
                            var_22 = (min(var_22, (max((max((arr_3 [i_0] [i_0] [i_8]), (((3450481321 ? var_10 : var_6))))), (((~18446744073709551588) / 38908))))));
                            arr_28 [i_1] [i_1] = ((((((max(39, 14457562977714791567)) <= (arr_3 [i_0] [i_1 + 1] [i_1])))) | ((min(1, 1)))));
                        }
                        for (int i_9 = 2; i_9 < 19;i_9 += 1)
                        {
                            var_23 = (min(var_23, var_8));
                            arr_31 [i_0] [i_1] [i_1] [i_1] [i_3] [i_3] [i_9] = 3450481339;
                        }
                    }
                    arr_32 [i_0] [i_0] [20] [i_1] = ((12 << (6900757829814228440 - 6900757829814228415)));
                    var_24 = ((((((!((min(18446744073709551613, 1))))))) >= (((var_5 ? (arr_9 [i_1] [i_1] [i_2] [i_2 + 1]) : (arr_0 [i_1]))))));
                }
            }
        }
    }

    for (int i_10 = 0; i_10 < 21;i_10 += 1)
    {
        arr_36 [i_10] = var_3;
        var_25 = (min(var_25, 12987393847428384627));
        var_26 = (((((1738305603 ? (arr_6 [i_10] [i_10] [i_10] [i_10]) : (arr_13 [i_10] [10])))) ? var_7 : ((max((arr_16 [i_10] [22] [i_10] [i_10] [i_10] [i_10] [6]), 8010111277556269747)))));
    }
    for (int i_11 = 1; i_11 < 22;i_11 += 1)
    {
        var_27 *= var_5;
        arr_40 [22] = (min((min((min(1589733828, 9)), (min(124, var_6)))), var_3));
        var_28 = ((((min((arr_38 [i_11 + 2]), 1))) ? var_5 : (arr_38 [i_11])));
    }

    for (int i_12 = 1; i_12 < 14;i_12 += 1)
    {
        arr_45 [i_12 + 2] = ((-((var_7 ? var_5 : 1))));
        var_29 &= ((var_1 ? (min(var_4, 15974789810109299431)) : (min(var_8, var_6))));
    }
    #pragma endscop
}
