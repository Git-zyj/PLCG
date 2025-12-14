/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100879
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_4 [i_0] = (min((var_0 == var_5), (max(var_8, var_0))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_10 *= var_4;
                    arr_10 [i_2] = ((var_2 ? (((((min(var_9, var_6)) + 2147483647)) << (var_1 & var_0))) : (min((var_5 % var_7), ((min(var_6, var_5)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_0] [i_2] = (((((var_9 - var_3) - var_4)) / var_6));
                                arr_17 [i_0] [i_1 - 1] [i_2] [i_3 + 2] [i_4 - 2] = var_9;
                            }
                        }
                    }
                    var_11 = min((min((var_5 & var_4), (min(var_6, var_2)))), (((var_5 && var_5) & (max(var_2, var_6)))));
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        arr_21 [i_5] [i_5] = (max((min(-22488, 5582141809697876304)), (22487 || 61904)));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 16;i_7 += 1)
            {
                {
                    var_12 = (min(var_12, var_2));
                    var_13 = var_7;
                    var_14 |= (min((min(var_9, var_5)), (((var_6 || var_3) / var_9))));
                }
            }
        }
        var_15 = (min(var_15, ((max(((min((var_9 % var_1), var_7))), (max(var_1, (var_4 & var_7))))))));
        var_16 = (min(var_16, ((((((var_4 ? (((min(var_8, var_6)))) : (var_2 * var_1)))) ? (((var_1 - var_0) ? var_3 : var_2)) : (((((min(var_5, var_5))) + var_1))))))));
        /* LoopNest 3 */
        for (int i_8 = 1; i_8 < 16;i_8 += 1)
        {
            for (int i_9 = 3; i_9 < 14;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 17;i_10 += 1)
                {
                    {

                        for (int i_11 = 3; i_11 < 15;i_11 += 1)
                        {
                            var_17 = ((((min(var_2, var_8))) ? ((((max(22492, -1))) ? var_9 : (min(var_2, var_2)))) : var_0));
                            var_18 *= (min(var_3, ((var_1 ? var_0 : var_7))));
                            arr_38 [i_9] [i_9] [i_9 - 3] [i_9 + 1] [i_9 - 3] = (min((max(((var_8 ? var_9 : var_5)), ((min(var_0, var_0))))), var_1));
                            var_19 = var_9;
                            arr_39 [i_8 - 1] [i_9 - 2] = ((((min(var_5, var_3))) & ((max(((min(var_0, var_6))), (min(var_0, var_3)))))));
                        }
                        for (int i_12 = 2; i_12 < 16;i_12 += 1)
                        {
                            var_20 |= var_3;
                            var_21 = (min(var_7, (max(var_3, var_1))));
                        }
                        arr_42 [i_5] [i_5] [i_8 + 1] [i_9 + 3] [i_9 + 2] [i_10] = ((var_0 << (((var_2 % 192391097) / var_9))));
                    }
                }
            }
        }
    }
    for (int i_13 = 0; i_13 < 13;i_13 += 1)
    {
        var_22 = (min(((((var_3 != var_8) || ((min(0, 3631)))))), ((var_9 ? (3631 || 0) : var_8))));
        var_23 = ((1859 ? 0 : -5336733351815757266));
        arr_46 [i_13] = var_2;
        arr_47 [i_13] [i_13] = min(((var_8 ? var_7 : var_1)), var_8);
        var_24 = var_0;
    }
    var_25 = (min((((min(var_6, var_2)) | var_0)), (min(((var_8 ? var_5 : var_2)), var_8))));
    var_26 = (min(var_5, ((((min(18446744073709551614, 1889197556404185368))) ? ((1 ? 15388798385960745391 : 192391105)) : (min(var_0, var_4))))));
    #pragma endscop
}
