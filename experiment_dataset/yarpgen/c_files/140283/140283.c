/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140283
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_7;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [0] [i_0] = ((arr_0 [i_0]) * ((((7312922737875525270 ? (arr_0 [i_0]) : 0)) * (((max(-120, 100)))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_13 = (166882216 << (((max(var_11, (min((arr_3 [i_0] [i_0]), var_3)))) - 18121349108487921915)));
                    var_14 = var_11;
                }
            }
        }
        var_15 = ((((min(0, 29604))) ? (((arr_7 [11] [i_0] [i_0] [i_0]) - (arr_7 [12] [12] [12] [i_0]))) : (((-(((arr_5 [3] [i_0] [i_0]) - (arr_3 [16] [i_0]))))))));
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 21;i_4 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        var_16 = (((arr_10 [i_4 + 3] [i_5]) ? ((22802 ? (arr_4 [i_4] [i_4]) : (arr_5 [i_0] [i_3] [i_5]))) : (arr_5 [21] [21] [i_5])));
                        var_17 = (((arr_4 [i_4 + 1] [i_3 + 1]) ? 1 : (arr_4 [i_4 - 1] [i_3 - 3])));
                        arr_15 [i_3] [i_3 + 1] [1] [8] [i_0] = ((((((arr_10 [i_0] [i_0]) ? var_1 : (arr_7 [i_0] [1] [5] [6])))) ? -1376747269 : ((var_3 ? (arr_6 [i_3]) : (arr_3 [i_0] [6])))));
                    }
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        var_18 = (((((arr_10 [i_3 - 3] [i_3 - 2]) ? (arr_10 [i_3 - 2] [i_3 - 1]) : var_1))) ? (((arr_10 [i_3 + 1] [i_3 - 2]) ? (arr_10 [i_3 - 1] [i_3 - 2]) : var_2)) : (arr_10 [i_3 - 2] [i_3 - 3]));
                        var_19 = var_0;
                        var_20 = (min((arr_8 [15] [i_3] [i_3] [1]), ((min((arr_3 [i_3 - 1] [i_3 + 1]), (arr_3 [i_3 - 2] [i_3 - 2]))))));
                    }
                    for (int i_7 = 2; i_7 < 22;i_7 += 1)
                    {
                        var_21 ^= (arr_1 [i_7]);

                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            var_22 = (((((~1) + 2147483647)) >> (((arr_1 [i_3 - 2]) - 7515250429114497504))));
                            var_23 = ((!(arr_19 [i_3 - 2] [i_3 - 1])));
                            arr_24 [i_0] [18] [i_7] [i_7] [i_3] = (arr_23 [i_7] [i_7] [i_3] [i_4 - 1] [i_3] [8]);
                            var_24 += ((((((arr_19 [i_7] [i_8]) ? 0 : (arr_11 [i_0] [i_0] [i_7] [i_0])))) ? ((0 ? (arr_16 [i_4] [i_4] [i_4] [i_7] [i_8]) : (arr_22 [i_8] [1] [i_4 - 1] [9] [20] [i_0] [13]))) : (((arr_1 [1]) ? var_8 : var_2))));
                        }
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 24;i_9 += 1)
                        {
                            arr_29 [i_0] [i_3] = 225;
                            var_25 -= (arr_18 [i_7 + 1] [i_7 + 1]);
                        }
                        arr_30 [i_0] [i_3] [i_4] [21] = (arr_10 [i_0] [i_4]);
                    }
                    var_26 = (min(var_9, (arr_27 [i_4 + 3] [i_4 + 1] [i_4 + 2] [i_3 - 3])));
                    arr_31 [i_0] [i_3] [23] [17] = (((((!(arr_27 [i_3] [i_3] [i_3] [i_0]))) ? var_7 : 11133821335834026326)));
                }
            }
        }
    }
    for (int i_10 = 0; i_10 < 23;i_10 += 1)
    {
        arr_35 [13] = ((((-4966801957553306831 && (arr_23 [i_10] [4] [i_10] [i_10] [i_10] [4]))) ? var_4 : (!8563608475155422383)));
        var_27 = (max(var_27, (((((((arr_6 [i_10]) ? -15847 : 0))) && 55)))));
        arr_36 [i_10] [i_10] = ((((min(var_9, var_4))) ? (((!(arr_4 [i_10] [i_10])))) : ((min((arr_4 [i_10] [i_10]), (arr_4 [i_10] [i_10]))))));
    }
    var_28 += (((((-4966801957553306833 ? var_0 : var_6))) ? var_0 : var_8));
    #pragma endscop
}
