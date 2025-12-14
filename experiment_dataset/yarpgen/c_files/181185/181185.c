/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181185
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((852718503 | (var_12 / var_2)));
    var_15 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 12;i_3 += 1) /* same iter space */
                    {

                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            arr_13 [i_3] [i_1] [8] [i_3] [i_3] [i_4] = (((((1095534966574412103 ? -1095534966574412103 : (arr_3 [i_0 + 1])))) || var_13));
                            var_16 = (((arr_8 [i_1 + 1] [i_0 - 1]) != (((arr_3 [i_0 - 1]) - (arr_3 [i_0 - 1])))));
                        }
                        arr_14 [i_0 + 1] [i_0 + 2] [i_3] [i_0] = ((((((arr_2 [i_0 + 2]) / (arr_8 [i_0 + 2] [i_1 - 1])))) && (0 <= 1)));
                    }
                    for (int i_5 = 1; i_5 < 12;i_5 += 1) /* same iter space */
                    {
                        var_17 = -var_8;
                        var_18 = ((var_10 - 17351209107135139513) ? ((min((max((arr_2 [5]), (arr_10 [i_0 + 1] [4] [i_0 + 1] [i_0 + 1]))), var_5))) : var_2);
                        arr_19 [i_0] [8] [8] [i_2] [i_0] [i_0] = (2251799813619712 - var_4);

                        /* vectorizable */
                        for (int i_6 = 1; i_6 < 13;i_6 += 1)
                        {
                            var_19 = (var_6 ? (arr_18 [i_0 - 1] [i_1] [i_2] [i_2]) : 1);
                            var_20 = (~-1);
                            var_21 = var_2;
                        }

                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            arr_25 [i_0 - 1] [i_1] [i_2] [i_5] [i_7] = ((((((arr_6 [i_0 - 1] [i_1 + 1] [i_5 + 1]) <= (arr_6 [i_0 - 1] [i_1 + 1] [i_5 - 1])))) / ((7 ? (arr_4 [i_0 + 2]) : (arr_4 [i_5 + 2])))));
                            arr_26 [i_0] = (((arr_22 [i_0] [i_0] [i_2] [i_0] [i_7]) >= (var_8 + var_6)));
                        }
                    }
                    for (int i_8 = 1; i_8 < 12;i_8 += 1) /* same iter space */
                    {
                        var_22 = var_13;

                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            var_23 = (max(var_23, 20727073));
                            var_24 = ((((arr_6 [i_0 - 1] [i_1 + 1] [i_8 + 1]) / (arr_6 [i_0 - 1] [i_1 - 1] [i_8 + 1]))) / (((arr_6 [i_0 + 2] [i_1 - 1] [i_8 - 1]) / var_5)));
                        }
                        for (int i_10 = 0; i_10 < 14;i_10 += 1)
                        {
                            var_25 = (((var_5 ? var_8 : (arr_9 [i_0] [i_0 + 2] [i_1 - 1] [i_8 + 2] [i_10]))));
                            var_26 = arr_4 [i_0];
                            var_27 = (arr_29 [i_8 + 2] [i_8] [i_8] [i_8] [i_8 - 1] [i_8]);
                        }
                    }
                    var_28 = (((~1) != (~-var_5)));
                    /* LoopNest 2 */
                    for (int i_11 = 1; i_11 < 13;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            {
                                var_29 = (((((arr_8 [i_0 - 1] [i_1 - 1]) || 65531)) ? var_9 : (((((arr_8 [i_0 + 1] [i_1 - 1]) && (arr_8 [i_0 + 1] [i_1 - 1])))))));
                                var_30 += (((((var_1 && (~var_2)))) - var_13));
                                arr_39 [i_0] [i_0 - 1] [i_0] = -var_6;
                                var_31 += (((var_13 ? var_5 : var_8)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
