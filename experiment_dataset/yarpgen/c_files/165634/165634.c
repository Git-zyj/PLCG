/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165634
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= var_5;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            var_13 = (min(((~((((arr_1 [i_1]) > var_4))))), ((((arr_3 [i_1]) <= (~-2219))))));
            var_14 = 1;
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            var_15 = (arr_2 [i_0] [i_2]);
            arr_9 [i_2] = var_4;
            var_16 = ((var_4 ? (arr_7 [i_0] [i_2]) : 225149599));
            arr_10 [i_2] [i_2] [i_0] = (arr_3 [23]);
        }
        var_17 = ((((min(var_7, ((var_7 ? var_9 : (arr_4 [i_0] [18])))))) || 94));

        /* vectorizable */
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                arr_16 [i_0] [i_3] [i_3] [i_4] = var_1;
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        {
                            var_18 = (min(var_18, 0));
                            var_19 = 1962625479;
                            var_20 = 124;
                            arr_22 [i_0] [i_3] [i_4] [i_3] [i_0] = (arr_2 [i_0] [i_3]);
                            arr_23 [i_3] [i_5] [i_4] [i_3] [12] [i_3] = ((~(arr_20 [i_0] [i_3] [i_4] [i_3] [i_6])));
                        }
                    }
                }
            }
            for (int i_7 = 1; i_7 < 1;i_7 += 1)
            {

                for (int i_8 = 0; i_8 < 24;i_8 += 1)
                {
                    arr_28 [i_0] [i_3] [i_7 - 1] [18] = (arr_15 [i_7 - 1] [i_8] [i_7 - 1] [9]);

                    for (int i_9 = 0; i_9 < 24;i_9 += 1)
                    {
                        arr_33 [i_3] [i_3] [i_3] = ((-(arr_24 [i_3] [i_7 - 1])));
                        var_21 *= var_6;
                        var_22 = (((arr_8 [i_7 - 1] [i_7] [14]) ? 0 : (arr_25 [i_7 - 1] [i_7 - 1] [i_9] [i_3])));
                        var_23 = (!(arr_14 [i_3]));
                    }
                    for (int i_10 = 2; i_10 < 23;i_10 += 1)
                    {
                        var_24 ^= ((-1783222937 >= (arr_26 [i_7] [4] [i_8] [i_7] [i_7 - 1])));
                        arr_37 [4] [i_8] [i_8] [i_3] [i_0] |= ((-6436 ? (arr_29 [i_8] [i_10 + 1] [i_8]) : var_5));
                    }
                    arr_38 [i_0] [i_3] [i_7 - 1] [i_8] &= (~2407570300);
                    var_25 = -672232284;
                    arr_39 [i_3] = var_5;
                }
                for (int i_11 = 1; i_11 < 23;i_11 += 1)
                {
                    var_26 = (1530710063 * 1);
                    arr_43 [i_0] [i_3] [i_3] [15] = 15698;
                }
                for (int i_12 = 0; i_12 < 0;i_12 += 1)
                {
                    arr_47 [i_12] [i_3] [i_3] [i_3] [i_12] = ((-(arr_1 [i_3])));

                    for (int i_13 = 0; i_13 < 24;i_13 += 1)
                    {
                        var_27 |= ((arr_42 [i_7] [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 - 1]) == (arr_17 [i_7 - 1] [17] [i_7] [i_12 + 1] [i_12 + 1] [i_13]));
                        var_28 = var_4;
                        var_29 = (~(arr_40 [i_7 - 1] [i_7] [i_7 - 1] [i_7] [i_7 - 1]));
                        var_30 = (max(var_30, 1));
                    }
                    for (int i_14 = 0; i_14 < 24;i_14 += 1)
                    {
                        var_31 = (arr_19 [i_0] [i_3] [i_3] [i_12] [i_0]);
                        var_32 = (((arr_15 [1] [11] [i_12] [i_12 + 1]) ? var_5 : 180));
                        var_33 = (max(var_33, (arr_17 [5] [i_3] [1] [i_12] [i_14] [i_0])));
                    }
                    for (int i_15 = 0; i_15 < 1;i_15 += 1)
                    {
                        var_34 = (var_9 < var_0);
                        arr_56 [i_0] [i_3] [i_7 - 1] [i_12 + 1] [i_15] = (((arr_24 [i_12 + 1] [i_12 + 1]) ? (arr_24 [i_12] [i_12 + 1]) : 90));
                        arr_57 [i_0] [12] [i_3] [i_3] [2] [i_12] [i_15] = 165;
                        arr_58 [i_0] [i_3] [i_3] [i_12 + 1] [i_0] [i_3] [0] = (arr_5 [i_12 + 1]);
                    }
                }
                var_35 -= (arr_36 [i_7 - 1] [i_7 - 1] [16] [i_7] [1]);

                for (int i_16 = 0; i_16 < 24;i_16 += 1)
                {

                    for (int i_17 = 0; i_17 < 24;i_17 += 1)
                    {
                        arr_63 [i_0] [i_3] = ((-166 ? ((97 ? 94 : 6428)) : ((var_5 ? (arr_51 [i_3]) : var_5))));
                        var_36 = 240;
                        var_37 = (-(((var_1 > (arr_46 [i_3] [i_16] [i_7] [i_3] [i_3])))));
                    }
                    for (int i_18 = 0; i_18 < 24;i_18 += 1)
                    {
                        var_38 = (arr_49 [1] [i_7 - 1] [i_7 - 1] [i_7] [i_3] [i_7] [4]);
                        var_39 -= (arr_59 [i_0] [i_3] [i_7] [i_16] [i_18] [i_16]);
                    }
                    var_40 = var_0;
                }
                for (int i_19 = 1; i_19 < 23;i_19 += 1)
                {
                    arr_69 [i_3] [i_3] [i_3] [i_19] = 94;
                    var_41 |= var_5;
                    var_42 = (var_11 % var_5);
                }
                arr_70 [i_3] [i_3] [i_7] = (arr_30 [i_0] [i_3] [i_7] [i_7 - 1] [i_7]);
                arr_71 [i_0] [i_3] [14] |= ((-((var_3 ? var_7 : var_7))));
            }
            arr_72 [i_3] [i_3] = (((arr_32 [i_3] [i_3]) < (arr_32 [i_0] [i_3])));
            var_43 = (max(var_43, (!var_0)));
            var_44 = 1;
        }
        for (int i_20 = 1; i_20 < 22;i_20 += 1)
        {
            /* LoopNest 2 */
            for (int i_21 = 0; i_21 < 24;i_21 += 1)
            {
                for (int i_22 = 3; i_22 < 22;i_22 += 1)
                {
                    {
                        var_45 = var_6;
                        var_46 = var_11;
                    }
                }
            }
            var_47 = var_3;
        }
    }
    var_48 &= (min(1, 1));
    var_49 = var_9;
    #pragma endscop
}
