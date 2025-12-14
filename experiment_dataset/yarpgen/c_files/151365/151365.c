/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151365
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= ((min(var_12, (var_4 >= -26345))));

    for (int i_0 = 3; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_19 = 26342;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_20 = ((-((-26332 ? ((~(arr_4 [i_0] [i_1] [i_0] [i_2]))) : -15210))));
                    arr_6 [i_0] [i_0] = (((((((arr_0 [i_0]) ? (arr_4 [i_0] [i_1] [i_2] [i_2]) : (arr_2 [i_0] [i_0])))) && (((var_13 ? 1948924353495390016 : (arr_5 [i_0] [i_0] [i_0] [i_0 - 1])))))));
                }
            }
        }
        var_21 = (max(var_21, 899152314));
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 22;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    {
                        var_22 = (min((arr_0 [i_0]), ((((min((arr_12 [i_5] [i_0] [i_0] [i_0]), (arr_13 [i_0] [i_0] [i_0] [i_0])))) ? ((-(arr_8 [9] [6]))) : (342970364 <= var_8)))));
                        arr_15 [i_5] [i_5] [i_0] [i_5] = (2007 / var_3);
                        arr_16 [i_4] [i_4] [i_0] [i_4] [i_4] = ((+((max((!-2007), ((var_8 < (arr_2 [13] [i_0]))))))));
                        var_23 += (((((-9807 || ((min(0, 1983)))))) << (((min(16497819720214161607, 1976690357)) - 1976690350))));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_6 = 4; i_6 < 21;i_6 += 1)
        {
            for (int i_7 = 4; i_7 < 21;i_7 += 1)
            {
                for (int i_8 = 3; i_8 < 22;i_8 += 1)
                {
                    {
                        arr_27 [i_0] [i_6] [10] [i_0] = (((!-126) == (((arr_4 [i_0] [i_7 - 4] [i_7] [i_8 + 2]) ? 1 : var_11))));
                        arr_28 [i_8] [i_0] [i_0] [i_0] = (((arr_1 [i_0] [i_0]) | 26335));
                    }
                }
            }
        }
    }
    for (int i_9 = 3; i_9 < 23;i_9 += 1) /* same iter space */
    {
        var_24 = (max(var_6, (((arr_22 [i_9] [i_9 - 3] [i_9]) ? (((max(-26324, (arr_10 [i_9] [i_9] [i_9] [i_9]))))) : ((~(arr_7 [2] [i_9] [i_9])))))));
        var_25 = (min(var_25, (arr_20 [i_9 - 2])));
    }
    for (int i_10 = 3; i_10 < 23;i_10 += 1) /* same iter space */
    {
        arr_35 [i_10] [i_10] = (max((((max(65531, (arr_34 [i_10]))))), (-4276 | 16)));
        var_26 = (((min((arr_20 [i_10 - 3]), ((135 ? 23 : 1)))) / (32751 - -1996)));
    }
    for (int i_11 = 2; i_11 < 21;i_11 += 1)
    {
        var_27 -= (((((min(33, var_0)))) ? (arr_5 [i_11] [i_11] [23] [6]) : (max(((((arr_21 [i_11] [i_11]) ? (arr_10 [i_11] [i_11] [i_11] [i_11]) : (arr_10 [i_11] [i_11] [i_11] [i_11])))), 2233771933037993609))));
        var_28 = -2009;
        arr_39 [i_11] = var_13;
    }
    var_29 -= ((((min(var_10, var_10))) ? var_8 : var_8));
    #pragma endscop
}
