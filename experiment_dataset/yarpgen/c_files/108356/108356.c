/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108356
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (!4022119191);
    var_16 = 58173;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_17 = (arr_1 [17]);
        var_18 = (((arr_0 [i_0]) ? 10 : (arr_0 [i_0])));
        var_19 = ((var_5 ? (arr_0 [i_0]) : (arr_0 [i_0])));

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_20 = ((((((!(arr_4 [i_0] [i_0] [i_0]))))) != (arr_1 [i_1])));
            arr_6 [i_0] [i_0] = ((~(arr_5 [i_1] [i_1] [i_1])));
            var_21 = -255;
            var_22 = 11451092704359153989;
        }
        for (int i_2 = 2; i_2 < 23;i_2 += 1)
        {
            var_23 = 1040384;
            arr_9 [i_0] [i_0] [i_2] = ((((((arr_8 [i_0] [i_0]) / (arr_0 [i_0])))) ? 25379 : ((((arr_3 [i_0]) == (arr_7 [i_2] [9]))))));
            var_24 = ((-((-(arr_1 [i_0])))));
        }
    }
    for (int i_3 = 3; i_3 < 11;i_3 += 1)
    {
        var_25 = 3;
        var_26 = (max(0, 11451092704359153987));
        arr_13 [i_3] [i_3] = (((arr_1 [i_3]) >> (((max((arr_10 [i_3 + 1]), -300)) - 18446744073709551260))));
        var_27 = ((!(((((max(6995651369350397627, 22))) ? var_13 : (min((arr_1 [i_3]), (arr_11 [i_3] [3]))))))));
        var_28 = (max((max((-9223372036854775807 - 1), ((max((arr_12 [i_3]), (arr_7 [i_3] [i_3])))))), ((max(((var_11 ? (arr_2 [i_3] [i_3]) : var_4)), -867446619)))));
    }
    for (int i_4 = 3; i_4 < 12;i_4 += 1)
    {
        var_29 = ((((min(11451092704359153989, 5662504762910778649))) ? -309 : -13629));
        var_30 = (--3475601139671096352);
    }
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        var_31 = (min((((12906 ? -8801 : var_13))), ((11451092704359154015 ? 11451092704359153995 : 52815))));
        var_32 = (((arr_2 [i_5] [21]) ? (arr_16 [i_5]) : (((arr_2 [i_5] [i_5]) ? (((((arr_2 [i_5] [i_5]) + 2147483647)) >> (((arr_8 [3] [i_5]) - 23686)))) : (arr_16 [i_5])))));
        var_33 = (max(((max(127, 313))), (((((25192 ? 1 : -315))) ? (arr_3 [i_5]) : 4395630730456479024))));
        var_34 = (((arr_1 [i_5]) ? ((min((arr_1 [i_5]), (arr_1 [i_5])))) : (min(1, 11451092704359154028))));
        var_35 = (min(18446744073709551605, 11451092704359153997));
    }
    #pragma endscop
}
