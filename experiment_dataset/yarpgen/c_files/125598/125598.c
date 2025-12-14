/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125598
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_9;
    var_21 = var_6;

    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        var_22 += 14732;
        var_23 *= (min((((arr_1 [i_0 + 1] [i_0 + 1]) ? var_9 : -44)), (~-2147483631)));
        arr_2 [16] = (max((((var_1 || (((~(arr_0 [i_0]))))))), (((arr_0 [i_0]) ? (((arr_1 [i_0 + 1] [1]) ? (arr_0 [i_0]) : 947824231)) : (arr_0 [1])))));
        arr_3 [i_0 - 2] = ((31525197391593472 ? 1 : 1));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = -var_3;

        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            var_24 = (min((arr_0 [i_2]), (((arr_0 [i_1]) ? var_2 : (arr_0 [i_1])))));
            arr_11 [i_1] = ((+(((arr_0 [i_2]) ? ((var_4 ? var_17 : var_1)) : ((((arr_1 [i_2] [i_1]) ? -1620399355 : var_1)))))));
            var_25 = 7;
        }
        for (int i_3 = 1; i_3 < 21;i_3 += 1)
        {
            var_26 = (min((arr_4 [i_1] [i_1]), (arr_13 [i_1] [i_3 + 1] [i_3 + 1])));
            var_27 = ((-((25798 ? 126 : (arr_6 [i_1] [i_3])))));
        }
        var_28 &= (-((~(arr_15 [i_1]))));
    }
    for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
    {
        var_29 |= (var_17 / var_5);
        var_30 = (min(var_30, ((max((arr_14 [i_4] [i_4] [i_4]), (((arr_5 [i_4]) + var_5)))))));
    }

    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        arr_21 [i_5] = ((((((arr_1 [i_5] [i_5]) ? (arr_1 [i_5] [i_5]) : 520192))) ? (((~(arr_1 [i_5] [i_5])))) : (arr_1 [i_5] [i_5])));
        var_31 *= ((-(((!(arr_19 [i_5]))))));
        var_32 = 64486;
        arr_22 [i_5] |= (arr_13 [i_5] [2] [i_5]);
    }
    #pragma endscop
}
