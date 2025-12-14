/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15649
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((~((((max(var_2, var_9))) ? var_3 : (max(var_13, var_3))))));
    var_15 = (min(var_15, -253167082));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] = ((334853887 ? (((arr_0 [i_0]) ? var_1 : 18292701239841198744)) : (((((var_12 ? 0 : (arr_2 [i_0] [i_0])))) ? ((max(var_7, var_11))) : ((-(arr_1 [i_0] [3])))))));

        for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
        {

            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                arr_10 [i_0] [i_1] [i_1] [i_0] &= (((((((max(18446744073709551586, var_10))) ? (arr_7 [i_0] [i_1] [i_2]) : (arr_2 [i_0] [i_1])))) ? (~-1106757245) : ((~((var_12 ? 1896721918 : 2350330367314892703))))));
                arr_11 [i_1] [5] = var_9;
            }
            var_16 = (arr_4 [14]);
            arr_12 [i_0] [2] = ((!(((-(arr_5 [i_0] [i_0] [i_0]))))));
            var_17 = (max(var_17, ((((((var_1 ? (arr_4 [i_1]) : (arr_2 [i_0] [i_1])))) ? var_10 : (~-1730509810))))));
            arr_13 [i_0] = ((((max(((((((arr_5 [i_1] [i_1] [i_0]) + 2147483647)) << (((arr_1 [i_0] [i_1]) - 2939970933650074682))))), 14714141168463538230))) ? (((((var_10 << (((arr_1 [15] [i_0]) - 2939970933650074667))))) ? var_6 : 2147483640)) : ((((((!(arr_9 [i_0] [i_1] [i_0] [i_0])))) / var_12)))));
        }
        for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
        {
            var_18 = 1170283075;
            var_19 = (min(var_19, ((18446744073709551615 ? (arr_2 [i_0] [i_0]) : (((arr_2 [i_0] [i_3]) ? 18446744073709551601 : 2203725757459940886))))));
        }
    }
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        var_20 = (max(var_20, (!2147483647)));

        for (int i_5 = 2; i_5 < 12;i_5 += 1)
        {
            arr_21 [7] [7] = 18446744073709551615;
            var_21 = (min(var_21, ((((arr_14 [0]) ? var_13 : (((-1106757245 ? (var_7 < 14714141168463538230) : var_11))))))));
        }
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            arr_24 [i_4] = ((~(((arr_19 [i_4]) & (arr_19 [i_4])))));
            arr_25 [i_4] [i_4] [i_6] = var_7;
        }
        arr_26 [i_4] = (max(((-(max((arr_16 [i_4]), 7696937267331747299)))), -1650421868));
    }
    #pragma endscop
}
