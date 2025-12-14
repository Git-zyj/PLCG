/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171013
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    var_16 = ((((min(var_13, (!10959116588432475034)))) ? ((var_12 ? (min(var_6, 1131736947)) : var_3)) : (((((((arr_0 [i_0] [i_2]) ? var_0 : var_7))) ? 3542 : (arr_5 [i_1] [i_1]))))));
                    arr_6 [i_0] [i_1] [i_0] [i_0] |= var_10;
                    arr_7 [i_1] [i_1] [10] [i_1] = -2;
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_13 [i_1] [i_1] [i_1] [i_1] = (min(3163230366, ((-(arr_9 [i_4] [i_3 - 2] [i_2 - 1] [i_1] [i_0])))));
                                var_17 = ((((var_6 && (((var_12 ? var_9 : (arr_1 [i_4])))))) && (!-22655)));
                                arr_14 [9] [i_1] [i_1] [i_1] = (arr_11 [i_4] [i_3] [i_3] [i_2] [i_1] [i_0]);
                                arr_15 [i_0] [i_1] [i_2] [i_1] [i_4] = min(((~(arr_3 [i_0] [i_1]))), ((var_15 << (3515 - 3511))));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
    {
        var_18 = ((((((arr_0 [i_5] [i_5]) | ((((arr_17 [i_5] [i_5]) <= var_10)))))) >= (arr_12 [i_5] [i_5] [i_5] [i_5])));
        var_19 = (arr_2 [i_5]);
    }
    for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
    {
        var_20 = (max((((((var_15 ? var_6 : (arr_4 [i_6] [i_6] [24])))) ? (((((arr_16 [i_6]) + 2147483647)) >> (((arr_10 [i_6] [i_6] [i_6] [i_6] [i_6]) - 1088705834764956847)))) : (((arr_11 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]) ? var_9 : 22655)))), (arr_0 [i_6] [i_6])));
        arr_20 [i_6] [i_6] = ((-((((((arr_2 [i_6]) & 0))) ? (((~(arr_11 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])))) : (arr_12 [i_6] [i_6] [i_6] [i_6])))));
        var_21 = (arr_9 [i_6] [i_6] [i_6] [i_6] [i_6]);
    }
    for (int i_7 = 1; i_7 < 1;i_7 += 1)
    {
        var_22 = ((((arr_1 [i_7]) || var_8)) ? var_14 : (arr_9 [i_7] [i_7] [i_7] [i_7 - 1] [i_7]));
        arr_24 [i_7] [i_7] |= 134217728;
        var_23 = (max((min(2113929216, -955859451)), ((((1 ? (arr_23 [i_7]) : (arr_0 [i_7] [i_7]))) << (2113929216 - 2113929202)))));
    }
    var_24 = (max(var_12, ((-((-42 ? 5200 : -1))))));
    var_25 = -3;
    var_26 = (!var_8);
    #pragma endscop
}
