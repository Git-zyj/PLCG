/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153051
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0] = var_5;
                var_17 = 2980135548;
            }
        }
    }
    var_18 = var_3;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            {

                /* vectorizable */
                for (int i_4 = 3; i_4 < 22;i_4 += 1)
                {
                    var_19 = (var_9 / (arr_8 [i_2]));
                    var_20 = ((9879150472933349341 ? (arr_15 [i_3] [i_4 - 3] [i_4 - 1]) : (arr_15 [i_3] [i_4 - 3] [i_4 - 1])));
                    var_21 = 278158247;
                    arr_16 [i_3] [i_3] [i_4] = (((0 * 1314831748) | var_3));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                {
                    arr_20 [i_2] [19] [i_2] [i_3] = (!1096855301);
                    arr_21 [i_3] = (((((193409388 ? var_13 : 2980135548))) ? var_12 : (arr_19 [i_3])));
                }
                for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                {

                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        var_22 = var_4;
                        arr_26 [i_2] [i_3] [i_3] [i_6] [i_3] [i_2] = (max(((min((arr_22 [i_3]), var_13))), (((var_12 / 14586630694294478150) ? ((25370 ? (arr_18 [i_3] [i_3] [i_6]) : (arr_6 [i_2]))) : (((var_6 ? var_1 : (arr_25 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))))))));
                        var_23 = ((((min(var_5, (arr_6 [i_2])))) ? (((arr_7 [i_6]) ? (((0 ? (arr_12 [i_3]) : (arr_23 [i_7])))) : (arr_13 [i_2] [i_2] [i_7]))) : (((var_12 * ((var_1 >> (var_14 - 19998))))))));

                        for (int i_8 = 0; i_8 < 24;i_8 += 1) /* same iter space */
                        {
                            var_24 = (((min(((147 ? 35 : 139)), (arr_25 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))) / (((arr_17 [i_3] [i_3] [i_7] [i_8]) - var_14))));
                            var_25 = ((((((min(var_14, var_5))) ? (~278158247) : (arr_9 [i_3] [i_6] [1]))) / ((((max(1, var_15)))))));
                        }
                        for (int i_9 = 0; i_9 < 24;i_9 += 1) /* same iter space */
                        {
                            var_26 = 32713;
                            arr_33 [i_2] [i_3] [i_6] [i_7] [i_7] = ((((min(-2147483618, 1065353216))) || (((0 ? (arr_9 [i_3] [i_3] [i_3]) : 16355087866733833638)))));
                        }
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        var_27 = (arr_8 [i_10]);
                        var_28 = (((arr_17 [i_3] [i_10] [i_6] [i_10]) > (arr_17 [i_3] [i_3] [i_6] [i_10])));
                    }
                    for (int i_11 = 0; i_11 < 24;i_11 += 1)
                    {
                        var_29 ^= ((-(2 & var_15)));
                        arr_40 [i_3] [i_3] [i_6] [i_11] = (((-2147483647 - 1) ? var_16 : (((arr_36 [i_11] [i_3]) ? var_5 : var_1))));

                        for (int i_12 = 1; i_12 < 21;i_12 += 1)
                        {
                            var_30 = (((((arr_38 [i_3]) & (arr_8 [i_3]))) > var_12));
                            var_31 = ((((max(-var_14, var_0))) ? var_9 : (arr_31 [i_2] [i_6] [i_3] [11])));
                            var_32 = var_2;
                        }
                    }
                    arr_43 [i_2] [i_3] [i_3] [20] = ((((((((arr_13 [i_2] [i_3] [5]) || (arr_19 [i_3]))) ? ((var_1 ? 159 : 4016809048)) : ((((var_9 || (arr_42 [i_2] [i_2] [i_2] [i_3] [i_3] [i_2] [i_6])))))))) ? (min(((7551154423565698810 / (arr_34 [i_6]))), (arr_29 [i_2] [i_2] [i_2]))) : (min((arr_23 [i_6]), (-9223372036854775807 - 1)))));
                }
                var_33 = (max(var_33, (((2147483647 & ((-(arr_7 [0]))))))));
            }
        }
    }
    var_34 &= var_15;
    #pragma endscop
}
