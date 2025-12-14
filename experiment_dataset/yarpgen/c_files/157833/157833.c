/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157833
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        arr_9 [i_1] = var_0;

                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            var_10 = (arr_10 [i_3] [i_1]);
                            arr_13 [i_1] [i_0 - 1] [3] [i_3] [i_4] = ((65533 ? (((arr_3 [i_1] [i_4]) ? var_0 : var_4)) : var_5));
                        }
                        for (int i_5 = 3; i_5 < 10;i_5 += 1)
                        {
                            arr_16 [i_1] = (((arr_4 [i_1] [i_1] [i_1]) ? ((20779 - (arr_5 [i_0 + 1] [6] [i_1] [i_1]))) : var_2));
                            var_11 = (max(var_11, (((((var_7 ? 2 : var_2)) * (~-119))))));
                        }
                        var_12 = (((arr_1 [i_3]) ? var_7 : (arr_6 [i_1] [i_2] [i_3 - 1])));
                        arr_17 [i_0] [i_1] [i_2] [i_1] = ((~(((var_3 + 9223372036854775807) << (var_0 - 1098317216)))));
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        arr_21 [i_1] = (var_8 ? var_2 : var_2);
                        var_13 = (((arr_11 [i_6] [i_2] [i_1] [i_0]) ? var_5 : ((14537704058791977420 ? var_3 : var_6))));
                    }

                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        arr_25 [i_1] [i_2] [0] [2] [i_1] = (((((13184 ? 3 : var_1))) ? (arr_22 [10] [i_0] [i_1] [i_1] [i_7] [5]) : var_8));
                        var_14 = (min(var_14, (arr_23 [i_0 - 2] [i_0 - 1] [i_0 - 1])));
                    }
                    for (int i_8 = 3; i_8 < 10;i_8 += 1) /* same iter space */
                    {
                        var_15 = ((var_8 + (~var_2)));
                        var_16 += (((var_7 ? var_8 : var_8)));
                        var_17 = (((((var_1 ? 3909040014917574199 : 65534))) ? var_1 : (!var_7)));
                    }
                    for (int i_9 = 3; i_9 < 10;i_9 += 1) /* same iter space */
                    {
                        arr_31 [2] [i_1] [i_1] = var_5;

                        for (int i_10 = 0; i_10 < 11;i_10 += 1) /* same iter space */
                        {
                            var_18 += var_2;
                            arr_35 [i_10] [i_1] [10] [7] [i_1] [i_0 - 1] = ((arr_20 [i_0] [i_9] [i_9] [i_1]) ? (arr_7 [i_0 - 2] [i_0 - 1] [i_0 - 1] [i_1] [i_0 - 1]) : var_0);
                            var_19 = ((((var_7 - (arr_8 [i_0] [i_0 - 1] [i_1] [i_0]))) & -601716041));
                        }
                        for (int i_11 = 0; i_11 < 11;i_11 += 1) /* same iter space */
                        {
                            arr_40 [i_9] [9] [i_1] [i_9] [i_9 - 2] [1] = (arr_32 [i_1]);
                            var_20 = (max(var_20, ((((arr_4 [i_11] [i_0 + 1] [i_9 - 1]) || (arr_4 [i_11] [i_0 - 2] [i_9 - 1]))))));
                            arr_41 [i_0] [i_1] [i_2] [3] [3] [i_1] = (((arr_24 [i_0]) && (arr_6 [i_0] [10] [10])));
                            arr_42 [i_1] [i_1] = ((~(arr_18 [i_0 - 2] [i_1] [i_1] [i_1] [i_1])));
                            arr_43 [i_0] [i_0] [i_0] [i_1] [i_9 + 1] = var_3;
                        }
                    }

                    for (int i_12 = 2; i_12 < 8;i_12 += 1)
                    {
                        var_21 = -5;
                        arr_46 [i_1] [i_2] [i_0] [i_1] = -111;
                        var_22 = (var_7 > var_4);
                    }
                    for (int i_13 = 2; i_13 < 8;i_13 += 1)
                    {
                        var_23 = (!(((arr_11 [i_0] [i_0 + 1] [i_0] [8]) == (arr_19 [i_13 + 3] [i_2] [i_0]))));
                        var_24 = ((((arr_14 [i_1] [i_2] [i_13]) * 65518)));
                    }
                }
            }
        }
        arr_50 [i_0] [i_0] = (((arr_37 [i_0] [4] [i_0 + 1]) * var_0));
        arr_51 [i_0] = ((var_1 ? 118 : var_8));
        /* LoopNest 2 */
        for (int i_14 = 1; i_14 < 10;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 11;i_15 += 1)
            {
                {
                    var_25 = (((var_1 != 65527) ? ((var_6 ? var_3 : 0)) : var_2));
                    var_26 = -9;
                }
            }
        }
    }
    for (int i_16 = 0; i_16 < 1;i_16 += 1)
    {
        var_27 = 1;
        var_28 = (var_3 > var_1);
        arr_59 [i_16] = (((((var_6 || 12920276218860254756) ? (!0) : ((var_9 ? (arr_57 [i_16] [i_16]) : var_3))))) ? (((min((!8), ((var_8 || (arr_57 [i_16] [8]))))))) : ((((max(var_3, -7463950769583298646))) ? var_4 : var_5)));
    }
    for (int i_17 = 1; i_17 < 9;i_17 += 1)
    {
        var_29 = (-111435846 & var_6);
        arr_64 [3] [i_17] = ((((((var_3 < 255) - 0))) ? ((((((arr_62 [i_17]) ? var_5 : var_7))) ? ((~(arr_0 [i_17]))) : (((var_6 || (arr_45 [i_17] [i_17])))))) : (arr_54 [i_17] [6] [i_17] [i_17])));
    }
    var_30 = (((~var_5) & ((var_5 ? (min(var_8, var_2)) : (111435846 / var_7)))));
    #pragma endscop
}
