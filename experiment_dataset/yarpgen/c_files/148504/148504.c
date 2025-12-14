/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148504
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 7;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_2] [i_4] = var_15;
                                arr_12 [i_0] [i_0] [i_2] [i_0] [i_3] [i_4] = (max(-835410692, 4294967295));
                                var_20 = (max((((104 ? -19760 : 1816))), ((((-1805 ? (arr_2 [4]) : 46493)) | (((-19753 ? 27499 : 1)))))));
                                var_21 &= var_1;
                            }
                        }
                    }
                    var_22 = (min(var_22, -2801824896965512976));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 8;i_6 += 1)
                        {
                            {
                                arr_19 [i_0] [i_2] [i_2 + 2] [0] [9] = (min(((((((arr_14 [i_0] [i_1] [i_2] [i_5] [i_2] [i_6]) ? 1274839397 : 1))) ? -965796342913381577 : (~var_19))), var_11));
                                var_23 = ((~(var_14 - var_2)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 9;i_8 += 1)
                        {
                            {
                                arr_26 [i_2] [i_1] [i_7] = (arr_22 [i_0] [i_0] [i_1] [9] [6] [i_8 + 1]);
                                var_24 = var_3;
                                arr_27 [i_0] [i_2] [i_2] [i_7] [i_2] = (-((+(((arr_14 [i_8 - 1] [i_2] [i_2] [4] [i_2] [i_0]) - var_6)))));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_9 = 0; i_9 < 13;i_9 += 1)
    {
        var_25 += ((1 ? (~-19771) : (min(0, 4294967295))));
        var_26 = (max(var_26, 1));
    }
    for (int i_10 = 0; i_10 < 24;i_10 += 1)
    {
        var_27 *= ((!(arr_31 [i_10])));

        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            /* LoopNest 2 */
            for (int i_12 = 1; i_12 < 21;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 24;i_13 += 1)
                {
                    {
                        arr_39 [i_12] [i_10] [i_12] [19] [i_12] = ((-18186 > (((((1 & (-2147483647 - 1))) > (-6192 >= var_16))))));
                        arr_40 [i_12] [i_11] [23] = var_16;
                    }
                }
            }
            arr_41 [i_10] [i_10] [i_10] = (min(-1, 31762));
            var_28 ^= ((-((var_18 ? (max(var_6, (arr_31 [i_11]))) : var_18))));
            var_29 = (((((arr_34 [i_10]) && var_18)) ? (arr_38 [i_10] [16] [i_11] [i_11]) : var_18));
            arr_42 [9] [19] [i_11] &= 21920;
        }
        for (int i_14 = 0; i_14 < 24;i_14 += 1)
        {
            /* LoopNest 3 */
            for (int i_15 = 1; i_15 < 22;i_15 += 1)
            {
                for (int i_16 = 1; i_16 < 20;i_16 += 1)
                {
                    for (int i_17 = 2; i_17 < 22;i_17 += 1)
                    {
                        {
                            arr_53 [i_17] [i_14] [i_17] [i_17] [i_17] = (max(-27092, (min(1, ((min(30674, var_4)))))));
                            var_30 = ((min(var_9, (((arr_48 [i_17] [i_16] [i_10] [i_10]) ? var_9 : 1)))));
                            var_31 = var_5;
                        }
                    }
                }
            }
            arr_54 [i_14] [i_14] = ((((min(-21920, -12))) ? ((((max(var_0, var_13))) ? 1 : ((min(var_17, (arr_48 [i_10] [i_10] [i_14] [i_14])))))) : (min(18186, 351668703))));
        }
        /* vectorizable */
        for (int i_18 = 0; i_18 < 24;i_18 += 1)
        {
            arr_59 [i_18] [i_10] [i_10] = (arr_44 [12] [i_18] [i_10]);
            var_32 = (((var_1 >> (44007 - 43976))));
        }
    }
    var_33 = (min(var_33, (((((min((var_18 - var_1), var_16))) ? var_6 : (min((~6561925544023080335), (~-16))))))));
    #pragma endscop
}
