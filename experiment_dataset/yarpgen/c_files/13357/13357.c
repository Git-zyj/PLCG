/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13357
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max((~16384), (1 || 16378)));
    var_15 = (min((((var_1 && 125) ? (((var_11 ? 134 : var_11))) : (min(1099478073344, var_11)))), (min(((var_4 ? var_5 : var_3)), var_1))));
    var_16 = ((!((((34479 / 1) ? (var_7 - var_11) : (~1))))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_17 = ((16 == (arr_1 [i_0 + 2] [i_0 - 2])));
        var_18 = var_8;
        arr_2 [i_0 + 1] = (((arr_0 [i_0 - 1]) + (arr_0 [i_0 - 1])));
        var_19 = ((8646800487733696951 > (-2147483647 - 1)));

        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            arr_6 [i_0] = 252;

            for (int i_2 = 4; i_2 < 16;i_2 += 1)
            {
                arr_9 [i_0] [i_1] [i_1] &= (((arr_0 [i_0 + 2]) ? (arr_0 [i_0 - 2]) : (arr_0 [i_0 + 2])));
                arr_10 [i_0] = (((var_5 / var_7) ? (arr_7 [i_2 - 1]) : -10727151824998141822));
                var_20 = (arr_4 [i_2 - 2]);
                var_21 = (arr_8 [i_0 + 1] [i_1 - 1] [i_0 + 1]);
            }
            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                var_22 -= arr_7 [i_0 - 2];
                var_23 = ((209 ? (arr_11 [i_0 - 2] [i_0 - 2] [i_1 - 1] [i_3 - 1]) : ((var_5 / (arr_11 [i_0] [i_1] [i_3] [0])))));
                var_24 = (arr_14 [i_0] [i_3 - 1] [i_0 + 1] [i_1 - 2]);
            }
            var_25 -= (((arr_13 [13] [i_0 - 1] [i_0 + 1]) ? (arr_13 [i_0 + 2] [i_0 - 1] [i_0 + 1]) : (arr_13 [i_0] [i_0 - 2] [i_0 + 1])));
            arr_15 [i_0] = (arr_5 [i_0 + 2] [i_1 - 2]);
        }
    }
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        var_26 = (max(var_26, 255));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 12;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    {
                        arr_25 [i_4] [i_5] [i_6] [i_5] [i_6] = (((((arr_24 [i_4] [i_5] [i_6] [i_7]) ? (arr_1 [i_5] [i_5]) : (arr_0 [2])))) ? (max(-124, (((arr_8 [i_4] [i_5] [i_5]) >> (-1 + 17))))) : ((((((arr_12 [i_4] [i_6] [i_7]) / var_0))) - (max(1, (arr_8 [i_4] [i_4] [i_7]))))));
                        arr_26 [4] [i_5] [i_5] [i_5] |= (max(((((!-976371424) > (min(var_2, (arr_13 [i_4] [i_6 + 1] [i_7])))))), var_10));
                        var_27 = (arr_16 [i_6]);
                    }
                }
            }
        }
        var_28 = ((arr_24 [i_4] [i_4] [i_4] [i_4]) ? (((((((arr_3 [i_4] [i_4]) ? (arr_13 [i_4] [i_4] [i_4]) : var_9))) || (var_7 || var_5)))) : (((((!(arr_7 [i_4]))) || var_5))));
    }
    #pragma endscop
}
