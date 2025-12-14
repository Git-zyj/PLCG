/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181838
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, (~var_2)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_11 = (!(((-(!var_6)))));
                                arr_13 [i_2] [i_2] [i_1] [i_3 - 1] [i_4] [i_4] [i_4] = var_4;
                                var_12 = (min(var_12, ((min((max((min(var_6, var_2)), var_0)), var_0)))));
                                var_13 -= (max((arr_12 [i_0] [i_0 + 1]), ((((arr_6 [11] [i_1] [i_1] [i_1]) ? 1 : 21459)))));
                                var_14 = ((((min(((max(var_3, 20633))), (max(var_4, (arr_3 [i_1] [i_1])))))) / (max(var_7, var_9))));
                            }
                        }
                    }
                }
                var_15 = var_8;
            }
        }
    }

    for (int i_5 = 1; i_5 < 1;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 17;i_7 += 1)
            {
                {
                    arr_24 [i_5 - 1] [5] [i_7] = ((((((arr_22 [i_6 - 1] [i_6] [i_6 - 1] [i_6 - 1]) ? (arr_22 [i_6] [i_6] [i_6] [i_6 - 1]) : 20632))) ? (((((min(var_8, 20635))) && var_6))) : ((-(((arr_20 [1] [9] [i_7] [i_7]) ? 36 : var_3))))));
                    arr_25 [i_7] = 1;

                    for (int i_8 = 2; i_8 < 15;i_8 += 1)
                    {
                        arr_28 [i_5] [i_5] [i_7] [i_8] [i_8] = 7740056347027396108;
                        var_16 = ((!((((arr_27 [i_8] [i_8] [i_7] [i_8 + 1] [i_7]) | (var_1 & var_1))))));
                        var_17 = var_1;
                    }
                    var_18 = ((max((((var_7 ? var_6 : var_7))), ((var_9 ? (arr_16 [i_6 - 1] [i_7 - 2]) : var_9)))));
                    var_19 = (min(-var_5, 162));
                }
            }
        }
        var_20 = (!32742);
    }
    for (int i_9 = 0; i_9 < 13;i_9 += 1)
    {

        for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
        {
            var_21 = ((+(((arr_12 [i_9] [i_9]) ? (~-20647) : (var_9 % var_9)))));
            arr_33 [5] [i_10] [i_9] = var_5;
        }
        for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
        {
            arr_37 [11] [i_11] = ((var_1 ? (((max(32767, 4191347965)) / (max(978866740, 32659)))) : (max(4191347965, 59943))));
            var_22 = (min(var_22, (((-((var_5 + (arr_36 [i_11] [i_9]))))))));
            var_23 = ((((var_4 > (arr_21 [i_11] [16] [16])))));
        }
        /* vectorizable */
        for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
        {
            var_24 = (!var_4);
            /* LoopNest 3 */
            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                for (int i_14 = 1; i_14 < 1;i_14 += 1)
                {
                    for (int i_15 = 1; i_15 < 1;i_15 += 1)
                    {
                        {
                            var_25 += (~var_3);
                            var_26 = (arr_45 [i_15] [i_15 - 1] [i_15] [i_14] [i_15]);
                            var_27 = (min(var_27, (arr_23 [i_14 - 1] [i_14 - 1] [i_14 - 1])));
                            var_28 &= var_6;
                        }
                    }
                }
            }
            var_29 = arr_2 [i_12] [i_9];
            /* LoopNest 2 */
            for (int i_16 = 1; i_16 < 10;i_16 += 1)
            {
                for (int i_17 = 2; i_17 < 11;i_17 += 1)
                {
                    {
                        arr_54 [i_9] [1] [i_16] [i_17] [i_17] = var_9;
                        var_30 = (max(var_30, (((var_7 % (arr_31 [i_9] [1] [i_16 + 3]))))));
                    }
                }
            }
        }
        var_31 = (max((((20635 ? 0 : 191))), (((((5593 ? 191 : 978866740))) ? ((var_5 ? (arr_42 [4] [i_9] [i_9] [i_9]) : var_4)) : (~var_4)))));
        var_32 = (arr_43 [i_9]);
    }
    #pragma endscop
}
