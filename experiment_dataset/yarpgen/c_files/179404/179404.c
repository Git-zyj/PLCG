/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179404
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_11 = (min(var_11, (((!((min(93, 16578985329305360431))))))));
        var_12 = -32636;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_13 = -var_9;
        arr_5 [i_1] = (~var_2);
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 21;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            var_14 = ((var_1 & (!130816)));
                            var_15 += (((((var_9 ? var_8 : 3044350269))) ? 32636 : ((-32650 ? var_9 : var_7))));
                            arr_18 [i_1] [i_1] [i_4] [i_1] [i_1] [i_1] = var_9;
                        }
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_16 ^= var_8;
                            arr_23 [i_2] [i_4] [i_3] [i_4] [i_3] = (~(var_4 & var_9));
                            var_17 = -20778;
                        }
                        arr_24 [1] [i_2] [i_2] [1] [i_4] [i_2] = (((var_10 ? 3072 : var_1)));
                        var_18 = (max(var_18, (!-32668)));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 2; i_7 < 20;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 22;i_8 += 1)
            {
                {
                    var_19 = ((var_3 || (((var_9 ? var_2 : var_0)))));
                    var_20 = (((var_5 ? -13712 : var_5)));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 21;i_10 += 1)
                        {
                            {
                                var_21 = -var_3;
                                var_22 -= var_4;
                            }
                        }
                    }
                    var_23 = -var_6;
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 22;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 22;i_12 += 1)
                        {
                            {
                                arr_38 [i_7 + 2] [i_11] [i_8] [i_7 + 2] [i_1] = 0;
                                arr_39 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = -var_3;
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 22;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 22;i_14 += 1)
            {
                {
                    var_24 = (max(var_24, (((var_4 ? var_5 : var_2)))));
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 22;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 22;i_16 += 1)
                        {
                            {
                                var_25 ^= 2357749766;
                                arr_52 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = (!32675);
                                var_26 = var_0;
                            }
                        }
                    }
                    var_27 = (((-6883833928874374495 ? 1073737728 : 3849553679739816095)));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_17 = 0; i_17 < 18;i_17 += 1)
    {
        for (int i_18 = 2; i_18 < 16;i_18 += 1)
        {
            {
                var_28 = (((((min(var_3, var_9)))) ? -var_4 : 5));
                arr_59 [i_18] = var_9;
                var_29 = (min(var_29, ((((--32650) ? ((((((var_1 ? 32748 : var_4)) != var_9)))) : ((var_1 ? 5 : var_4)))))));
                /* LoopNest 3 */
                for (int i_19 = 0; i_19 < 18;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 18;i_20 += 1)
                    {
                        for (int i_21 = 0; i_21 < 18;i_21 += 1)
                        {
                            {
                                var_30 = (min(var_30, (((((((-32767 - 1) ? var_9 : (-9223372036854775807 - 1)))) ? -60 : (!63))))));
                                arr_69 [i_17] [i_17] [i_19] [i_17] [i_20] [i_17] [i_17] = ((max(var_0, var_1)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_31 = ((-32686 ? var_6 : (((max((-9223372036854775807 - 1), 32767))))));
    #pragma endscop
}
