/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135464
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (~7644466213167157431);
    var_17 = (((max(127, 10802277860542394184)) / 4294967284));
    var_18 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                var_19 = (((((1 / (arr_0 [i_1 - 3] [i_1 - 1])))) ? ((((((arr_0 [i_0] [i_0]) ? 0 : (arr_2 [1])))) ? (var_15 / 124) : 16399)) : (-127 - 1)));
                arr_5 [i_0] [14] [i_0] = arr_3 [i_0] [i_1];

                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    arr_9 [i_0] = (min(18822, 18822));
                    arr_10 [i_0] [i_0] [i_0] = (!((((var_10 / 4294967276) ? (((arr_3 [i_0] [i_0]) / var_8)) : (((arr_4 [i_0] [i_0]) ? 120 : 2807139682))))));

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 14;i_3 += 1) /* same iter space */
                    {
                        arr_14 [0] [i_1] [2] [i_3] &= (~2);
                        var_20 += ((1 ? -var_0 : -var_12));
                    }
                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 14;i_4 += 1) /* same iter space */
                    {
                        var_21 = (((!-31) ? 143 : (((!(arr_13 [i_0] [i_0] [i_2] [i_4]))))));
                        var_22 *= (16399 / 2088473250);
                        arr_18 [i_0] [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_0] = ((-18813 ? (arr_16 [i_0] [i_2] [i_0] [i_2]) : 7644466213167157432));
                        arr_19 [i_0] = 0;
                    }
                    var_23 = (min(var_23, 127));
                }
                /* vectorizable */
                for (int i_5 = 1; i_5 < 1;i_5 += 1)
                {
                    arr_22 [10] [i_0 + 1] |= ((arr_4 [i_0 - 1] [10]) / var_12);
                    arr_23 [i_0] = ((((10802277860542394170 ? 61671 : 254)) / (var_5 / var_5)));
                    var_24 = (((((arr_3 [i_0] [i_0]) / var_1)) / -5295139198794218981));
                    var_25 &= (var_12 ? (arr_6 [i_5 - 1] [i_0 + 1] [i_0]) : var_8);
                    arr_24 [i_0] [i_0] = (i_0 % 2 == zero) ? ((((((arr_21 [i_5 - 1] [1] [i_1] [i_0]) + 2147483647)) << (((arr_1 [i_0]) - 50621))))) : ((((((arr_21 [i_5 - 1] [1] [i_1] [i_0]) + 2147483647)) << (((((((arr_1 [i_0]) - 50621)) + 34384)) - 22)))));
                }
                for (int i_6 = 3; i_6 < 13;i_6 += 1)
                {
                    var_26 *= (((((var_14 ? (arr_1 [10]) : 3824218975))) / ((-(arr_6 [10] [i_1] [i_0 + 1])))));
                    var_27 = (var_12 * (((var_0 ? -114 : 0))));
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    arr_30 [i_0] [i_1] [i_1] = ((var_14 / (var_11 / var_12)));
                    arr_31 [i_0] = 15799211351964485804;
                    var_28 = ((-((0 ? var_0 : -5295139198794218981))));
                    arr_32 [i_0 + 1] [i_0] [i_7] [i_0] = (((arr_17 [i_0]) ? (arr_12 [i_0 - 1]) : (arr_2 [i_0 + 1])));
                }
                var_29 = ((~(max((~var_2), (max((arr_3 [i_0] [7]), var_8))))));
            }
        }
    }
    #pragma endscop
}
