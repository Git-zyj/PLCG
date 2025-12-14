/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12635
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((17042430230528 ? 1 : (~var_11)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = var_9;
                arr_6 [i_0] = var_6;

                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    var_14 += (((arr_1 [i_1]) ? 255 : (min(var_8, (min(1, var_9))))));
                    arr_9 [i_0] = 1;
                    arr_10 [i_0] [i_1] [i_1] = (((arr_8 [i_0] [i_1] [i_0]) ? ((((((~(arr_2 [i_0] [i_1])))) && (arr_2 [i_0] [i_1])))) : (-127 - 1)));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    var_15 = arr_2 [i_1] [i_3];
                    arr_13 [i_0] [i_0] = var_0;
                    arr_14 [i_0] [i_1] [i_0] [i_0] = ((var_1 ? ((4294967278 ? var_3 : 403741881)) : (arr_12 [i_0] [i_1] [i_3] [i_1])));
                }

                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    var_16 = var_2;
                    var_17 = ((var_9 ? ((((arr_17 [i_0] [i_1] [i_4]) > 46))) : 1));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 14;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            {
                var_18 = (((((~(arr_22 [i_5 - 1])))) ? (arr_22 [i_5 - 1]) : ((max((arr_22 [i_5 - 1]), (arr_22 [i_5 - 1]))))));
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 14;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 14;i_8 += 1)
                    {
                        {
                            var_19 = (((((1 & (arr_15 [i_8] [i_7 + 1] [i_7] [i_8])))) ? (((arr_23 [i_5 + 1] [i_6] [i_7]) | 102)) : -var_8));
                            arr_29 [i_5] [i_5] [i_8] [i_5 - 1] = ((-((-(arr_18 [i_5 + 1] [i_5])))));

                            for (int i_9 = 0; i_9 < 15;i_9 += 1)
                            {
                                var_20 = 4930177320138251295;
                                arr_33 [i_8] [i_8] [i_7] [i_8 - 1] [i_6] [i_5 - 1] [i_7] = (var_6 || 2147483647);
                                var_21 = ((arr_1 [i_5]) / -102);
                            }
                            for (int i_10 = 1; i_10 < 13;i_10 += 1)
                            {
                                var_22 = (max(var_22, ((max(((min(1, (arr_1 [i_5 - 1])))), ((-(arr_1 [i_5 + 1]))))))));
                                var_23 = (((((arr_7 [i_5 + 1] [i_8 + 1] [i_7 - 1]) * (arr_7 [i_5 + 1] [i_8 + 1] [i_7 + 1]))) / (((max((arr_15 [i_8] [i_6] [i_6] [i_7]), (arr_4 [i_6] [i_7 + 1] [i_7 + 1])))))));
                            }
                        }
                    }
                }
                var_24 = (((((16263851988757829997 ? (arr_17 [i_5 - 1] [i_5 - 1] [i_5 + 1]) : (arr_17 [i_5 + 1] [i_5 + 1] [i_5 - 1])))) ? (((arr_17 [i_5 + 1] [i_5 + 1] [i_5 + 1]) ? var_3 : 549755805696)) : var_2));
                var_25 = min(-var_5, 451231466);
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 15;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        {
                            var_26 = (min((((var_9 > (arr_15 [i_11] [i_5 - 1] [i_5 - 1] [i_11])))), ((403741869 + (arr_36 [i_5 + 1])))));
                            var_27 = var_1;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
