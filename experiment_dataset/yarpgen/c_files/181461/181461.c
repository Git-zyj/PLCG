/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181461
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        var_20 = (min(((min(7, 255))), (arr_0 [i_0])));

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_21 = ((-((-(var_6 == 255)))));
            arr_4 [13] [i_1] = ((((((arr_3 [i_0 - 1] [i_0 - 1]) * (arr_3 [i_0 + 1] [i_0])))) - ((-(((arr_3 [i_1] [i_0]) ? var_17 : (arr_2 [13] [13] [i_0])))))));
        }
        for (int i_2 = 1; i_2 < 22;i_2 += 1)
        {
            arr_8 [i_2 + 2] [i_0] [i_0] = (((((arr_1 [i_0 - 3]) == (arr_1 [i_0 - 3]))) ? (arr_5 [i_0 + 3]) : (((var_19 ? var_15 : var_4)))));
            arr_9 [7] [i_0] [i_0 - 4] = (((243 && 2) ? (((arr_7 [i_0 - 3]) % (min((arr_3 [i_2] [i_0]), (arr_2 [i_2] [i_0 + 3] [i_0 - 1]))))) : (((((-(arr_5 [i_0])))) & var_19))));
            arr_10 [12] [13] = ((~((((arr_1 [i_0]) > (((1277484658082273428 > (arr_2 [4] [i_2] [i_2])))))))));
            arr_11 [i_2] = (((arr_0 [i_2 + 2]) || (((arr_1 [i_0 - 2]) || (arr_2 [6] [i_0 - 2] [i_0])))));
        }
    }
    for (int i_3 = 3; i_3 < 12;i_3 += 1)
    {
        arr_15 [13] [13] = (((((243 / (-127 - 1)))) | (min(var_11, (arr_2 [5] [i_3] [i_3])))));
        var_22 *= (min((!var_11), (~var_16)));
        var_23 = ((((~(var_7 | var_2))) * (arr_3 [i_3 + 1] [i_3 + 1])));
        arr_16 [i_3] = ((((((arr_14 [i_3]) > (arr_7 [i_3 + 2])))) == var_5));
        arr_17 [3] = ((var_7 ? -17 : ((3 ? ((((var_7 != (arr_2 [i_3] [i_3] [16]))))) : (arr_7 [i_3 + 2])))));
    }
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 23;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            {
                var_24 -= (min((max(65535, (!12))), 18));

                for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
                {

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        arr_29 [i_4 + 1] [i_6] [i_4] [i_4 + 1] [i_4] [i_4 - 1] = (((arr_28 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 + 2]) ? (arr_0 [i_4 + 2]) : var_8));
                        var_25 = (((~var_6) == (((9223372036854775807 ? (arr_0 [i_5]) : (arr_21 [i_4]))))));
                        var_26 += (arr_19 [i_4 + 1]);
                    }
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        arr_33 [i_6] [i_5] [i_6] = (arr_28 [3] [i_5] [i_5] [i_5]);
                        arr_34 [i_6] = var_10;
                        var_27 = ((!((min((arr_32 [0] [i_4 - 1] [i_4 - 1] [20] [i_4 - 1] [i_4]), (arr_31 [i_4 + 1] [i_4 + 1] [i_4 - 1]))))));
                        arr_35 [i_4] [i_6] = ((((min((arr_5 [i_6]), var_0))) ? ((var_9 ? (((arr_24 [i_5]) ? var_8 : (arr_27 [i_8] [i_6] [i_6] [i_4 - 1]))) : ((var_15 - (arr_3 [i_4] [i_4]))))) : (var_14 < var_15)));
                    }
                    var_28 = (var_7 == 49165);

                    for (int i_9 = 2; i_9 < 23;i_9 += 1)
                    {
                        arr_38 [i_6] [i_6] [i_5] [i_6] = (min((arr_32 [i_9 - 1] [i_9] [24] [i_9] [18] [24]), ((var_12 & (((arr_5 [i_9 + 1]) - var_14))))));
                        var_29 = (((arr_2 [i_6] [i_5] [1]) - (((max((arr_23 [i_4 + 2] [16]), var_14))))));
                    }
                    /* vectorizable */
                    for (int i_10 = 3; i_10 < 22;i_10 += 1)
                    {
                        var_30 = (min(var_30, var_13));
                        arr_42 [i_6] [i_5] [i_6] = (arr_5 [23]);
                        arr_43 [i_4] [10] [i_4] [i_6] [i_4 + 1] = (((((var_10 % (arr_31 [i_10 + 1] [i_6] [i_5]))) + 9223372036854775807)) << (var_7 - 106));
                    }
                    for (int i_11 = 0; i_11 < 25;i_11 += 1)
                    {
                        arr_46 [i_4 + 2] [i_4] [i_6] = ((min((min(var_10, (-127 - 1))), (((!(arr_18 [i_4])))))));
                        var_31 = (min(var_31, (((((!((min(var_5, var_7))))) ? (arr_0 [i_4]) : -var_17)))));
                    }
                }
                for (int i_12 = 0; i_12 < 25;i_12 += 1) /* same iter space */
                {
                    var_32 = ((-(arr_18 [i_12])));
                    var_33 = (-127 - 1);
                    var_34 = ((var_5 ? (arr_19 [i_12]) : ((-((837807371 ? 1661587450 : 9223372036854775807))))));
                }
                for (int i_13 = 0; i_13 < 25;i_13 += 1) /* same iter space */
                {
                    var_35 = ((((((!(arr_1 [i_4]))))) != (((arr_45 [i_5] [i_4 + 1] [i_4 + 1] [i_4]) | (((~(arr_32 [i_4] [i_4 - 1] [i_4] [i_4] [22] [0]))))))));
                    var_36 = (max(var_36, ((((((var_1 & (arr_32 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4 + 2])))) ? (~1) : ((((((arr_32 [24] [i_4] [18] [9] [i_4] [i_4 + 2]) + 2147483647)) << (((((arr_32 [i_4 - 1] [i_4] [i_4] [i_4 + 2] [i_4] [i_4 + 1]) + 26144)) - 6))))))))));
                }
            }
        }
    }
    var_37 = ((min(var_6, (min(var_6, var_5)))));
    var_38 = ((!(((var_18 ? var_0 : (((var_8 ? var_3 : var_15))))))));
    var_39 = (min(var_39, ((((((var_17 + var_0) && ((((var_15 + 2147483647) >> (var_4 + 24991)))))) ? (((var_2 && (((255 ? var_2 : var_10)))))) : var_4)))));
    #pragma endscop
}
