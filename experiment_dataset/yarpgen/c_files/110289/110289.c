/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110289
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= var_6;
    var_11 = (max(var_5, ((-((var_2 ? 9 : var_9))))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_5 [i_0] [i_1] [i_0] = (((arr_3 [i_0] [i_0]) & (arr_0 [i_0])));
            arr_6 [i_1] [i_0] [i_0] |= ((((min(21, -30))) | (max((arr_2 [i_0] [i_1]), (arr_2 [i_0] [i_1])))));
            var_12 = var_2;
            arr_7 [i_1] = (min(((max((((!(arr_2 [2] [2])))), 18446744073709551595))), ((17873942311515426095 ? ((18446744073709551604 ? var_4 : var_4)) : 1))));
            arr_8 [i_1] = arr_3 [i_0] [i_0];
        }
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            var_13 += (((var_1 & (arr_2 [i_0] [i_0]))));
            var_14 = (arr_1 [i_0] [i_2]);
        }
        arr_11 [i_0] [i_0] |= (((-23 < -1562409434029974195) & (arr_4 [i_0])));
        arr_12 [i_0] = ((~(~var_7)));
        arr_13 [i_0] &= ((((((var_7 / (arr_10 [i_0] [i_0] [i_0]))))) ? ((+(((arr_2 [i_0] [i_0]) * var_9)))) : (((var_4 / (min((arr_3 [i_0] [i_0]), (arr_10 [i_0] [i_0] [i_0]))))))));
        var_15 -= (((((~(arr_0 [i_0])))) ? ((((((!(arr_3 [i_0] [i_0]))) || ((min(var_2, var_4))))))) : (max((arr_3 [i_0] [i_0]), var_1))));
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
    {
        arr_16 [i_3] [i_3] = (arr_0 [i_3]);
        var_16 = (min(var_16, ((((((!(arr_3 [i_3] [i_3])))) >> (((!(arr_1 [i_3] [i_3])))))))));
        arr_17 [i_3] = var_6;
    }
    for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
    {
        var_17 = (min(var_17, ((((~(arr_2 [7] [i_4])))))));
        var_18 ^= (((-var_8 && ((((arr_1 [i_4] [i_4]) | (arr_3 [i_4] [i_4])))))) ? ((((((arr_1 [i_4] [6]) ? var_2 : 9191803904392945953))) ? (arr_2 [i_4] [i_4]) : -var_4)) : (((-1562409434029974208 ? 61677 : ((-8228095167337557659 ? 480 : 1))))));
        var_19 |= arr_19 [i_4];
    }
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        var_20 *= ((~(((!((min(18446744073709551595, (arr_22 [i_5] [i_5])))))))));
        var_21 += 21317;
        var_22 = (max((max(2, 2118268418880713928)), ((max(((var_0 ? 19542 : (arr_20 [i_5] [i_5]))), ((var_8 ? (arr_22 [i_5] [i_5]) : (arr_21 [i_5]))))))));
        var_23 *= ((~(((((var_6 & (arr_20 [i_5] [i_5])))) ? ((~(arr_21 [i_5]))) : 1))));
        arr_23 [i_5] = ((var_0 - (max(1, (((2635127978 ? 21327 : var_3)))))));
    }
    #pragma endscop
}
