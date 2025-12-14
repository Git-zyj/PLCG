/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16763
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_1;
    var_14 = (min(var_14, var_10));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            arr_5 [i_0] [i_1] [i_0] = (max(((((arr_4 [i_0] [i_0] [i_0]) <= (arr_4 [i_0] [i_1 + 3] [i_0])))), (arr_4 [i_0] [i_0] [i_0])));
            var_15 = (((((min(2147483647, (arr_3 [i_0]))) | (((-2147483647 - 1) & (arr_1 [i_0] [i_0])))))) ? (max((arr_1 [i_1] [8]), (562949953388544 & 562949953388555))) : (((~(arr_0 [i_0])))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            arr_9 [i_0] = (arr_1 [8] [8]);
            var_16 = ((!(0 > 9007199254740928)));
            var_17 &= ((var_7 ? ((-9175121759392687951 - (-9223372036854775807 - 1))) : (arr_0 [i_2])));
            arr_10 [i_0] [i_2] [i_0] = 0;
        }
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            var_18 -= (((((((max(562949953388558, var_2))) ? var_3 : (arr_7 [i_3])))) ? (min((arr_4 [i_0] [i_3] [0]), (arr_3 [8]))) : (arr_6 [1])));
            arr_13 [i_3] [i_0] [i_3] = (min(var_12, (var_11 <= var_5)));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            arr_17 [i_0] = ((1 ? var_6 : var_2));
            var_19 = -1973548495391062862;
        }
        arr_18 [i_0] [i_0] = (((min((arr_7 [i_0]), var_10)) || ((min((arr_11 [i_0] [i_0]), var_4)))));
        arr_19 [i_0] [i_0] = ((-((-(min((arr_16 [i_0] [i_0]), var_2))))));
        var_20 = 161;
        var_21 = 2097148;
    }
    for (int i_5 = 2; i_5 < 16;i_5 += 1)
    {
        arr_22 [i_5] = ((-3768901353139985692 <= (arr_20 [i_5])));
        arr_23 [i_5] = (i_5 % 2 == 0) ? (((((((min(var_4, 1))) ? (arr_21 [i_5]) : (arr_21 [i_5]))) >> ((((var_3 | (arr_21 [i_5]))) + 1162043465459107382))))) : (((((((((min(var_4, 1))) ? (arr_21 [i_5]) : (arr_21 [i_5]))) + 9223372036854775807)) >> ((((((var_3 | (arr_21 [i_5]))) + 1162043465459107382)) + 576612348010166777)))));
    }
    var_22 = ((((((((var_3 ? 1923974674360753915 : var_12))) ? var_1 : ((min(var_10, var_6)))))) && ((min(((var_4 ? var_7 : var_0)), var_1)))));
    #pragma endscop
}
