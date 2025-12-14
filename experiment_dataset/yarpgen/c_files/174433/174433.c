/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174433
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_7;

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_20 = (min((((arr_1 [i_0] [i_0]) < (arr_1 [i_0] [i_0]))), (!var_7)));
        var_21 = ((~(((var_10 >= 196) ? (arr_1 [i_0] [i_0]) : (arr_2 [i_0])))));
        var_22 = (~(arr_1 [i_0] [i_0]));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    {
                        var_23 = 117;
                        var_24 = var_4;
                        var_25 = (max(var_25, (((!(((~(min((arr_1 [i_1] [i_1]), 59))))))))));
                    }
                }
            }
        }

        for (int i_5 = 1; i_5 < 12;i_5 += 1)
        {
            var_26 |= var_8;
            var_27 = ((2022038974 >> (128 - 118)));
            var_28 ^= ((((((arr_11 [i_5 - 1]) ? (arr_11 [i_5 - 1]) : 209))) ? 107 : var_15));
            var_29 = (((min((arr_10 [i_5 + 1] [i_5 - 1] [i_5 + 1] [i_5 - 1]), (arr_10 [i_5 + 1] [2] [2] [i_5 - 1]))) > (arr_3 [i_1] [i_1])));
        }
    }
    for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
    {
        var_30 = ((((min((arr_11 [i_6]), (max(var_6, var_13))))) ? (((((arr_3 [i_6] [i_6]) < (max((arr_4 [i_6] [i_6]), (arr_10 [i_6] [i_6] [i_6] [i_6]))))))) : (max(((max((arr_16 [i_6]), (arr_12 [i_6] [i_6] [i_6])))), (~6482506232378716149)))));

        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            var_31 = (max((((var_2 / var_7) ? (((arr_11 [i_6]) ? var_4 : var_18)) : (arr_18 [i_6] [i_7]))), (((var_12 >> (var_1 - 19158))))));
            var_32 = (min(var_32, (max((arr_0 [2]), ((min((-6002733491946383595 ^ 65534), 2022038973)))))));
        }
        for (int i_8 = 0; i_8 < 13;i_8 += 1) /* same iter space */
        {
            var_33 = ((((16777212 % 15) || -2022038951)));

            for (int i_9 = 0; i_9 < 13;i_9 += 1)
            {
                var_34 = ((var_16 / (max(var_7, (arr_1 [i_6] [i_6])))));
                var_35 = ((((max(4307775795950941320, 80))) ? (((var_17 + 9223372036854775807) >> (((arr_13 [i_6] [i_8] [i_8] [i_9] [i_9]) - 17853)))) : (arr_13 [i_8] [i_8] [i_8] [i_6] [i_6])));
                var_36 ^= (((((6002733491946383597 ? 4294967285 : 18446744073709551615))) ? (((((((arr_27 [i_9] [i_9]) & (arr_5 [i_6])))) || ((((arr_23 [i_6] [i_6] [1]) ? var_6 : (arr_0 [i_9]))))))) : ((((var_17 <= var_17) == 754510248074700923)))));
            }
        }
        for (int i_10 = 0; i_10 < 13;i_10 += 1) /* same iter space */
        {

            for (int i_11 = 2; i_11 < 10;i_11 += 1)
            {
                /* LoopNest 2 */
                for (int i_12 = 3; i_12 < 11;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 13;i_13 += 1)
                    {
                        {
                            var_37 = (arr_22 [i_10] [i_10]);
                            var_38 += max((max(var_17, var_12)), (((29016 / ((1 << (22051 - 22023)))))));
                            var_39 = ((((((var_13 ? (arr_0 [i_6]) : (arr_39 [i_6] [i_6] [i_11 - 1] [i_12] [i_11 - 1] [i_12] [i_13]))) << var_16)) + (((~(arr_38 [i_6] [i_6] [i_11 + 3] [i_11 + 3] [i_11 + 3]))))));
                            var_40 = (((max(((var_13 ? var_14 : 65521)), ((max(var_9, var_2))))) << (((arr_21 [i_12 - 3] [i_11 - 1]) - 491))));
                            var_41 &= 22433;
                        }
                    }
                }
                var_42 = (((((-(arr_3 [i_11 + 1] [i_11 + 3])))) + (((arr_14 [i_6] [i_10]) / (~var_2)))));
            }
            var_43 = (~(~62397));
            var_44 |= (max(1125762467889152, 150));
        }
        for (int i_14 = 0; i_14 < 13;i_14 += 1) /* same iter space */
        {
            var_45 = max(22051, ((~(arr_11 [i_14]))));
            var_46 = ((~(((((var_7 ? (arr_12 [i_6] [i_6] [i_14]) : var_18)) <= var_10)))));
            var_47 = ((((arr_20 [i_6] [5]) != (((arr_10 [i_6] [i_6] [i_6] [1]) / var_18)))));
            var_48 = (max(var_48, ((((255 / ((var_8 ? (arr_21 [i_6] [i_14]) : 11729525662421384885)))) | ((max(30691, -7056070178741446058)))))));
        }
    }
    var_49 -= (((((var_2 >> (((((-23 + 2147483647) >> (var_17 + 6803047520538922096))) - 524287))))) ? var_9 : (((var_10 & var_0) * (!var_4)))));
    var_50 = var_7;
    #pragma endscop
}
