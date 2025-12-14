/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106989
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_0 [i_0]) ? ((var_1 ? (arr_0 [i_0]) : var_6)) : (((-(arr_0 [i_0]))))));
        arr_3 [i_0] = ((11180117927881969517 > (arr_1 [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 9;i_1 += 1) /* same iter space */
    {
        var_12 = (((((-(arr_4 [i_1])))) ? (arr_6 [i_1] [i_1 - 1]) : (arr_4 [i_1])));

        for (int i_2 = 3; i_2 < 10;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                var_13 += (arr_9 [i_3] [i_2 - 3]);
                arr_12 [i_1 + 1] [i_3] [i_2 + 1] [i_3] &= (arr_10 [i_1 - 1]);
                var_14 = (((arr_9 [i_1] [i_1 - 1]) ? (arr_9 [i_1] [i_2 - 2]) : var_2));
            }
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                var_15 = ((!(((var_9 << (456616526 - 456616526))))));
                var_16 |= ((~var_11) ? ((var_5 ? var_1 : (arr_15 [i_1 - 1] [i_2] [i_2 + 2] [i_4]))) : (((arr_15 [i_4] [i_2 + 2] [i_2 - 2] [i_1 + 3]) ? 1943 : (arr_9 [i_4] [i_2 - 2]))));
                var_17 = (min(var_17, var_11));
            }
            arr_17 [i_1] = var_1;
        }
        for (int i_5 = 3; i_5 < 11;i_5 += 1)
        {
            var_18 = 18358136324409710883;
            arr_20 [i_1 + 3] [0] [i_1] |= ((var_1 ? (arr_18 [i_1 + 2] [8] [i_5 + 1]) : (arr_9 [1] [i_5 - 3])));
            var_19 = ((var_1 ? (((arr_0 [i_1 + 2]) ? (arr_19 [i_1 + 2] [i_5 + 1]) : var_3)) : (arr_5 [i_1 + 2] [i_1])));
            var_20 |= (arr_11 [i_1] [i_5 - 3] [4] [i_5 - 2]);
        }
    }
    for (int i_6 = 1; i_6 < 9;i_6 += 1) /* same iter space */
    {
        var_21 = var_1;
        arr_24 [i_6] = (min((((arr_9 [i_6] [i_6]) ? (arr_10 [i_6 + 1]) : (arr_22 [i_6]))), (((!1439542089) ? (!var_5) : ((((arr_14 [i_6]) != 1)))))));
    }
    for (int i_7 = 1; i_7 < 9;i_7 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            var_22 = 1;
            var_23 = (arr_32 [i_7 + 3] [i_8]);
            var_24 = (max(var_24, (((~(arr_32 [i_8] [i_7 - 1]))))));
            arr_33 [i_8] [i_7 - 1] = (((((-6041053887945768521 ? 1439542089 : 2486452738995350496))) ? (((351528284 ? (arr_30 [i_7] [i_7 + 3]) : (arr_18 [i_8] [2] [i_7 + 1])))) : 15960291334714201115));
        }
        /* vectorizable */
        for (int i_9 = 3; i_9 < 11;i_9 += 1)
        {
            var_25 = (((((4294967295 ? var_1 : (arr_35 [i_9])))) ? (~var_5) : (((arr_34 [i_7 + 3] [i_9 + 1] [i_9]) ? (arr_19 [i_7] [i_9]) : 2486452738995350481))));
            var_26 = (min(var_26, (((arr_7 [i_7] [i_7 + 3]) ? -1438789567 : 0))));
        }
        for (int i_10 = 1; i_10 < 11;i_10 += 1)
        {
            var_27 = ((((min((min((arr_8 [i_10]), var_0)), (arr_13 [i_7 + 1] [i_10 - 1] [i_10 - 1])))) ? (arr_1 [i_7 - 1] [i_7 + 2]) : (((arr_23 [i_7 + 3]) ? (arr_18 [i_10 + 1] [i_10] [i_7 + 1]) : (!15960291334714201112)))));
            arr_39 [i_10] [i_10 + 1] = ((max((((var_5 ? var_4 : (arr_9 [i_10] [i_10])))), ((var_10 ? var_1 : (arr_26 [i_7]))))));
            arr_40 [i_7] [i_10] [i_10] = (255 && 16);
            arr_41 [i_10] [i_7] [i_10] = ((~((-(arr_14 [i_10])))));
        }

        for (int i_11 = 0; i_11 < 12;i_11 += 1)
        {
            var_28 = -70;
            var_29 = (min(-var_1, (arr_11 [i_7 + 3] [i_7 - 1] [i_11] [i_7 + 3])));
            var_30 = (min((((!(arr_7 [i_11] [i_7])))), var_4));
        }
    }
    var_31 = var_5;
    #pragma endscop
}
