/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104859
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_9;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_13 = ((var_2 / ((5609359543309773000 << (12837384530399778616 - 12837384530399778607)))));
                    var_14 -= arr_3 [i_0] [i_0] [i_0];
                    arr_8 [i_0] [i_1] [i_1] [i_0] = (min(((((arr_4 [i_2] [i_1]) < (arr_1 [i_0] [i_1])))), (arr_2 [i_0])));
                }
            }
        }
        arr_9 [i_0] [i_0] = (arr_1 [i_0] [i_0]);

        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            var_15 = (min(var_15, (max((arr_3 [i_0] [i_0] [i_3]), 1))));
            var_16 |= ((5609359543309772995 ? 32752 : 5101));
            arr_12 [i_0] [i_3] |= (arr_0 [i_0]);
        }
    }
    for (int i_4 = 1; i_4 < 22;i_4 += 1)
    {
        var_17 = (max(var_17, ((max((arr_15 [i_4]), (arr_15 [i_4 + 2]))))));
        var_18 |= (min((((((var_2 ? (arr_14 [i_4]) : (arr_15 [i_4])))) ? (max(var_0, (arr_15 [i_4]))) : (arr_13 [i_4] [i_4]))), ((min(25, (arr_15 [i_4]))))));
    }
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        var_19 = (arr_14 [i_5]);
        arr_20 [i_5] = arr_13 [i_5] [i_5];
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 23;i_7 += 1)
            {
                {
                    var_20 = (arr_18 [i_5] [i_6]);
                    arr_26 [i_7] [i_6] [i_7] = (arr_22 [i_7]);

                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        arr_30 [i_5] [i_7] [i_5] [i_7 - 1] = max((arr_19 [i_5]), ((((min((arr_22 [i_6]), var_11))) - (arr_29 [i_5] [i_6] [i_7] [i_7]))));
                        var_21 = arr_19 [i_6];
                    }
                    for (int i_9 = 0; i_9 < 0;i_9 += 1)
                    {
                        var_22 = (arr_23 [i_5] [i_5] [i_7]);
                        arr_33 [i_7] [i_6] = (arr_32 [i_5] [i_7] [i_7] [i_9] [i_6]);
                        arr_34 [i_7] [i_7] [i_7] = (((arr_16 [i_5] [i_5]) ? (min(12837384530399778626, (max(16642998272, -2096023118)))) : (arr_13 [i_5] [i_7])));
                        var_23 = var_2;
                    }
                }
            }
        }
        arr_35 [i_5] [i_5] = var_2;
        arr_36 [i_5] = (((max((arr_29 [i_5] [i_5] [i_5] [i_5]), (arr_29 [i_5] [i_5] [i_5] [i_5]))) != (((arr_29 [i_5] [i_5] [i_5] [i_5]) / (arr_29 [i_5] [i_5] [i_5] [i_5])))));
    }
    for (int i_10 = 0; i_10 < 17;i_10 += 1)
    {
        arr_39 [i_10] [i_10] = (((arr_0 [i_10]) ? (max((((arr_7 [i_10] [i_10]) ? var_3 : (arr_5 [i_10]))), (arr_23 [i_10] [i_10] [i_10]))) : var_0));
        arr_40 [i_10] [i_10] |= (min(var_10, (arr_15 [i_10])));
        var_24 = (arr_37 [i_10] [i_10]);
        var_25 += (((arr_17 [i_10] [i_10]) ? (arr_2 [i_10]) : var_6));
    }
    #pragma endscop
}
