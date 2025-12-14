/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177174
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((~165) ? ((202 ? 116 : 224)) : (((((min(var_12, var_1))) && var_10)))));

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_20 -= (((((((min(224, 345932355639794758))) ? var_14 : ((0 * (arr_1 [0])))))) ? (min(65514, 5065630536057675874)) : ((((arr_2 [i_0 - 1]) * -0)))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_21 = (min(var_21, (((+((var_13 ? (arr_5 [i_1]) : 4294967295)))))));
            var_22 = (2147483647 >> (((arr_5 [i_1]) - 6811108370785481012)));
            var_23 *= (((((arr_0 [i_0] [i_1]) && (arr_0 [16] [i_1]))) && ((var_16 || (arr_4 [i_0 + 3] [i_1])))));
        }
        for (int i_2 = 1; i_2 < 23;i_2 += 1)
        {
            var_24 = (max(var_24, (((((max(345932355639794758, 22) < 3460236788)))))));
            var_25 = (((min(((3628127659409327048 ? var_14 : var_2)), (-1 & var_18)))) ? (((~(((arr_3 [i_0]) ? (arr_2 [i_0]) : var_1))))) : (((arr_7 [i_2] [i_0 + 3] [i_0 + 3]) | var_6)));
            var_26 = (~(min(var_13, ((-(arr_2 [i_2 + 1]))))));
        }
        arr_8 [i_0] [i_0] = (max((((((((arr_2 [i_0]) - (arr_2 [i_0 + 2])))) + (max((arr_7 [i_0] [i_0] [i_0]), (arr_4 [i_0] [i_0])))))), ((((min(18446744073709551610, 18100811718069756858))) ? var_9 : ((177 ? 345932355639794758 : -3628127659409327049))))));
        var_27 = var_5;
    }
    for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
    {
        var_28 -= (max(((var_6 ? (arr_3 [i_3]) : (arr_3 [i_3]))), ((-(arr_3 [i_3])))));
        var_29 = (((((18100811718069756855 || 54) || (arr_11 [i_3]))) && (((!18) || 229))));
    }
    for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
    {
        arr_16 [i_4] = (max(var_1, (arr_4 [i_4] [i_4])));
        var_30 = ((((min(345932355639794729, var_5))) ? 65506 : ((-1543952601 ? 177 : (arr_2 [i_4])))));
        arr_17 [i_4] [i_4] = (((((-(((var_1 > (arr_1 [i_4]))))))) | (max((((arr_11 [12]) / (arr_12 [i_4]))), ((max(109, (arr_14 [i_4]))))))));
        var_31 = (-3628127659409327049 / 254);
    }
    var_32 = ((var_11 ^ (((var_10 <= 35) % ((min(var_11, var_16)))))));
    #pragma endscop
}
