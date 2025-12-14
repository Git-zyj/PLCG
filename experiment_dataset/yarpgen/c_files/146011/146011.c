/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146011
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((0 ? -652615461 : -8018141714690805094));
    var_16 &= (var_6 - var_13);
    var_17 -= (min(1, 0));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                {
                    var_18 = (((min((!var_9), -var_4)) * (var_10 << 7)));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        arr_12 [i_0 - 1] [i_1] [i_1] [12] = ((!(arr_11 [i_2 - 1] [i_1] [i_0 - 1] [10])));
                        arr_13 [i_0 - 1] [i_1] = ((((((arr_7 [i_1]) ? (arr_10 [i_1] [i_1] [i_2 + 1] [i_3]) : var_3))) ? var_12 : var_13));
                        var_19 *= (arr_6 [0]);
                        var_20 = var_12;
                    }
                    for (int i_4 = 1; i_4 < 17;i_4 += 1)
                    {
                        var_21 = (((((((min(0, -103)))) % (arr_11 [2] [i_2] [i_2 - 1] [i_2]))) >= (((min(var_6, (arr_0 [i_1 - 2] [i_1])))))));
                        var_22 = ((~(((arr_6 [i_1]) ? (var_2 != 127) : (max(4294967160, 1415095958))))));
                        arr_17 [i_0 + 1] [4] [i_1] [8] = 36932;
                        var_23 = (min(var_23, ((((((arr_15 [i_0 - 1] [i_0 - 1] [i_2] [14]) ? (max(var_1, 2585650821233881945)) : ((max(54439, var_11))))) - 112)))));

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            arr_21 [i_0] [12] [12] [i_5] [i_5] [14] &= ((var_3 ? (arr_5 [i_5]) : var_6));
                            arr_22 [1] [17] [10] [i_4] [i_1] = var_13;
                            var_24 = (((arr_19 [i_1 + 1] [14] [1] [i_4 + 1] [5] [i_5]) || (arr_14 [i_1])));
                            var_25 = (min(var_25, (((var_14 < 0) ? (862 < 30211) : ((65535 ? (arr_4 [i_5] [i_5]) : (arr_6 [i_5])))))));
                        }
                    }
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        var_26 = var_1;
                        var_27 = (((var_7 - (arr_11 [i_2 + 2] [13] [i_2] [i_1 - 2]))));
                        arr_25 [15] [16] [i_1] [2] = ((-(((!15173) ? (arr_0 [3] [i_1 + 2]) : (arr_20 [i_6] [i_0 - 1])))));
                        var_28 = (arr_0 [i_0] [i_2]);
                    }
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        var_29 = var_8;
                        var_30 = (max((max((arr_24 [i_1] [i_0 + 1]), (((-(arr_11 [i_0] [i_1 + 2] [3] [i_7])))))), (((arr_27 [i_1] [i_1 + 1] [i_1] [i_1 - 1]) ? var_2 : var_14))));
                        arr_28 [i_1] [i_1 + 2] [2] [0] [i_0] [i_7] = (((((!((min(1484156431, var_10)))))) << (((min((~204), (((arr_18 [i_7] [i_2] [15] [12] [i_0]) ? var_9 : var_3)))) + 25576))));
                    }
                }
            }
        }
    }
    var_31 = 65472;
    #pragma endscop
}
