/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181385
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_11;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_20 = ((((var_12 ? -116 : -96)) - (arr_2 [i_0])));
        var_21 = (((arr_1 [i_0]) - (((arr_3 [i_0]) ? var_13 : 89))));
        arr_4 [i_0] [i_0] = -66;
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_22 = ((47 - (arr_0 [i_1])));
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 12;i_3 += 1)
            {
                {
                    arr_12 [i_1] [i_1] [i_1] [i_1] = (max((((var_17 ? (arr_8 [i_1]) : var_16))), 11));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 13;i_5 += 1)
                        {
                            {
                                arr_20 [4] [4] [i_3] [6] [i_5] [i_5 + 2] [i_5 + 2] = ((((~(arr_5 [i_1]))) - -99));
                                arr_21 [i_5 - 1] [i_4] [i_3 - 1] [i_3] [i_2] [i_1] [i_1] = 159;
                                var_23 += ((((-(arr_10 [i_5] [i_2 + 3] [i_3]))) - (((arr_10 [i_1] [i_1] [i_1]) ? var_18 : (arr_10 [i_4] [i_2 + 1] [10])))));
                                var_24 = (max(var_24, (min((arr_5 [i_1]), -97))));
                                var_25 = 92;
                            }
                        }
                    }
                }
            }
        }
        arr_22 [0] = var_7;

        for (int i_6 = 2; i_6 < 14;i_6 += 1)
        {
            var_26 = 57;
            var_27 = var_1;
            arr_27 [i_6] = (max(((var_2 - (~-116))), (min(((var_18 ? var_6 : (arr_19 [i_1] [i_1] [i_1]))), ((min(var_4, 104)))))));
            arr_28 [3] [3] [i_6] = -71;
        }
    }
    for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
    {
        var_28 = (min(var_28, (((((((((arr_6 [i_7] [i_7]) - 185))) ? 104 : (arr_13 [i_7] [8] [i_7] [8] [i_7] [i_7]))) - (((arr_11 [i_7] [i_7] [i_7] [i_7]) - (!var_15))))))));
        var_29 = -120;
        arr_32 [i_7] = (min((min(39, (-112 - 104))), -104));
    }
    for (int i_8 = 0; i_8 < 15;i_8 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 15;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 15;i_10 += 1)
            {
                {
                    var_30 += ((((((arr_35 [i_9]) - 92))) ? -76 : ((64 ? 8 : -10))));
                    var_31 -= 85;
                    arr_39 [i_8] [i_8] [0] [4] = ((min(((116 - (arr_34 [i_8]))), ((~(arr_25 [i_8] [i_10]))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 15;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 15;i_12 += 1)
            {
                {
                    var_32 -= (((((var_9 ? var_14 : var_2))) ? (arr_26 [i_8] [i_11]) : 171));
                    var_33 = min(3, (!115));
                }
            }
        }
    }
    var_34 = (((min((var_7 - var_14), var_8)) - 110));
    var_35 = ((((((var_9 - -70) - ((var_6 ? var_10 : -49))))) ? var_18 : (((!var_6) ? var_5 : ((var_18 ? var_14 : var_2))))));
    #pragma endscop
}
