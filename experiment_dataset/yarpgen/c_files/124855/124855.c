/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124855
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        var_10 = var_4;
        var_11 = min(((var_5 ? ((var_9 ? var_3 : var_7)) : (max(var_9, var_0)))), var_0);
        var_12 = (max(var_12, var_3));
        arr_3 [i_0] [2] |= var_3;

        for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
        {
            var_13 += var_8;
            arr_6 [i_0 + 1] [i_0] = ((((max(var_9, var_3))) ? var_9 : var_0));
            arr_7 [i_0] [i_0] = var_5;
        }
        for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 1; i_3 < 19;i_3 += 1)
            {
                arr_12 [i_0] [i_0] = var_2;
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 19;i_5 += 1)
                    {
                        {
                            arr_18 [i_0] [i_0] [i_3] [13] [i_0] = var_0;
                            var_14 = (min(var_14, var_2));
                            arr_19 [i_0] [i_4] [i_0] [i_2] [i_2] [i_0] = (var_9 ? var_2 : ((var_5 ? var_4 : ((var_1 ? var_9 : var_7)))));
                        }
                    }
                }
                arr_20 [i_0 - 2] [i_0] [i_3 + 1] = var_1;
                var_15 = var_3;
            }
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                arr_25 [i_6] [i_6] |= var_0;
                arr_26 [i_0] [i_2] [i_6] = var_7;
                var_16 = var_1;
            }
            for (int i_7 = 1; i_7 < 17;i_7 += 1)
            {
                arr_30 [i_0 + 1] [i_0] [i_7 + 3] [i_7 + 3] = var_1;
                var_17 ^= (min(((((min(-1042221648, 46))) ? 84 : var_4)), var_1));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        {
                            arr_37 [i_0] [i_2] [i_0] [i_8] [i_8] |= ((6227175382289484088 ? 8678407334264649139 : -33));
                            var_18 = var_4;
                            arr_38 [i_0] [i_0] [i_0] [i_0] [i_0] = var_9;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_10 = 2; i_10 < 16;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 20;i_11 += 1)
                    {
                        {
                            arr_44 [i_0 - 1] [i_2] [i_7] [i_10] [0] [i_0] [i_7] = var_8;
                            var_19 = (max(var_19, var_1));
                        }
                    }
                }
            }
            for (int i_12 = 4; i_12 < 17;i_12 += 1)
            {
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 20;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 20;i_14 += 1)
                    {
                        {
                            arr_53 [2] [11] [i_2] [i_12 + 3] [i_0] [i_14] = var_1;
                            var_20 = var_5;
                        }
                    }
                }
                arr_54 [i_0] [6] [6] [i_12 + 1] = (((((-45 ? 3765673210000815064 : 268369920))) ? var_5 : ((var_9 ? ((var_2 ? var_3 : var_8)) : (((var_8 ? var_2 : var_7)))))));
            }
            arr_55 [i_0] [i_2] [i_2] = var_1;
            /* LoopNest 3 */
            for (int i_15 = 0; i_15 < 1;i_15 += 1)
            {
                for (int i_16 = 2; i_16 < 16;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 1;i_17 += 1)
                    {
                        {
                            var_21 = (min(var_21, var_1));
                            arr_64 [i_16] [i_16] [i_15] [i_2] [i_16] |= (min(var_9, (((((8678407334264649136 ? 7363358180918473696 : 15680))) ? var_3 : var_4))));
                            var_22 ^= ((var_0 ? var_1 : var_1));
                        }
                    }
                }
            }
            arr_65 [12] |= var_5;
            arr_66 [i_0] [i_0] [i_0] = var_3;
        }
    }
    /* LoopNest 2 */
    for (int i_18 = 1; i_18 < 12;i_18 += 1)
    {
        for (int i_19 = 0; i_19 < 14;i_19 += 1)
        {
            {
                arr_72 [i_19] = var_8;

                for (int i_20 = 1; i_20 < 13;i_20 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_21 = 0; i_21 < 14;i_21 += 1)
                    {
                        for (int i_22 = 0; i_22 < 14;i_22 += 1)
                        {
                            {
                                arr_81 [i_18] [i_19] [i_20] [i_19] = var_2;
                                var_23 += var_9;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_23 = 0; i_23 < 14;i_23 += 1)
                    {
                        for (int i_24 = 1; i_24 < 13;i_24 += 1)
                        {
                            {
                                arr_89 [i_24 + 1] [i_23] [i_20] [i_19] [i_18] = min(var_4, var_8);
                                var_24 = ((-2 ? var_4 : (min(var_5, ((-12 ? -1010306257 : 656830317))))));
                            }
                        }
                    }
                    var_25 = (min(var_25, (((1 ? 21462 : -9031615222118402057)))));
                    arr_90 [i_18] [i_20] = (max((min((((var_6 ? -268369907 : -11))), 16821653089382401534)), -42));
                }
            }
        }
    }
    var_26 = ((((var_5 ? var_0 : ((min(var_5, var_2)))))) ? var_3 : (((((var_2 ? var_3 : var_2))) ? var_5 : var_4)));
    var_27 = var_8;
    #pragma endscop
}
