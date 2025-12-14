/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134551
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= 18446744073709551615;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_20 = -325322092;

        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            arr_4 [i_0] [i_1] = (((arr_2 [i_0] [i_0] [i_1]) ? ((325322086 / (-2147483647 - 1))) : var_14));
            var_21 = (((arr_0 [i_0] [i_1 + 2]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_1 - 1])));
            arr_5 [i_0] [i_0] [i_0] = ((((((arr_3 [i_1] [i_0]) ? (arr_0 [i_0] [i_1]) : -325322097))) ? 193 : (arr_2 [i_1] [i_0] [i_0])));
        }
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            arr_11 [i_2] [10] = (((((~(((arr_7 [i_2]) ? var_7 : var_15))))) ? (arr_6 [i_2]) : var_13));
            var_22 = (min(var_22, (((((max((arr_8 [2] [2] [i_2]), var_15))) ? 0 : 8033339419689294629)))));
            arr_12 [i_2] [i_2] [i_2] = ((!((max((arr_10 [4] [i_3] [i_3]), (arr_10 [i_3] [i_2] [i_2]))))));
            arr_13 [i_2] [i_2] [13] = (((((var_5 / (((arr_6 [i_2]) >> (var_2 - 2054)))))) ? ((-1 ? var_14 : var_8)) : ((4 >> (179 - 149)))));
        }

        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            arr_16 [3] [i_2] [i_2] = ((((((!9824617183777213256) ? (arr_8 [i_2] [i_2] [i_4]) : (arr_9 [i_2] [i_2])))) ? ((325322091 ? ((193 ? (arr_14 [i_2] [i_2] [i_2]) : (arr_6 [2]))) : var_7)) : var_18));
            arr_17 [i_2] [15] = (arr_15 [8] [i_2] [i_2]);
            var_23 *= ((-(max((arr_6 [i_2]), (arr_6 [i_2])))));
            arr_18 [9] = (max((((-((-(arr_14 [i_4] [i_4] [i_2])))))), (max((var_10 - 1), (((arr_8 [i_4] [i_4] [i_4]) | (arr_6 [i_2])))))));
        }
        arr_19 [i_2] = (-325322087 / 12525);
        var_24 -= (((arr_9 [i_2] [i_2]) ^ (arr_6 [i_2])));
        var_25 = ((-17476 ? (!2772915449566831754) : 160));
    }
    var_26 = var_10;
    #pragma endscop
}
