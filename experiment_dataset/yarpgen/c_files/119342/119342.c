/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119342
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_12;

    for (int i_0 = 2; i_0 < 8;i_0 += 1) /* same iter space */
    {
        arr_2 [7] = var_1;
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_16 = 202;
                    var_17 = -2693828830223042338;

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        var_18 = (max((max(var_2, var_2)), (max((max(13, -24393)), (-127 - 1)))));
                        var_19 = (max(var_19, 7681155458897556582));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        arr_12 [i_0] [i_0] [1] [1] = ((((var_4 ? var_7 : var_0))) ? ((1757472149 ? 7681155458897556562 : 0)) : 1516071839566531915);

                        for (int i_5 = 0; i_5 < 0;i_5 += 1) /* same iter space */
                        {
                            var_20 = var_6;
                            var_21 = (min(var_21, (((0 ? var_13 : 7681155458897556596)))));
                            arr_15 [i_0 + 1] [1] [i_2] [i_4] [i_2] = 2458;
                        }
                        for (int i_6 = 0; i_6 < 0;i_6 += 1) /* same iter space */
                        {
                            var_22 = (min(var_22, var_0));
                            arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 + 2] = var_1;
                        }
                        for (int i_7 = 1; i_7 < 10;i_7 += 1)
                        {
                            var_23 = (max(var_23, var_1));
                            arr_23 [i_0] [i_1] = var_10;
                        }
                        for (int i_8 = 0; i_8 < 0;i_8 += 1)
                        {
                            var_24 = (min(var_24, var_11));
                            arr_28 [3] [i_1] [i_2] [i_2] [i_4] [i_8] = 7882769893397884597;
                            arr_29 [i_0 - 1] [i_0 - 1] [i_0] [i_0] [i_0] [3] = ((0 ? -5314992306076977664 : var_4));
                        }
                        var_25 = ((0 ? var_1 : -25214));
                    }
                    /* vectorizable */
                    for (int i_9 = 3; i_9 < 10;i_9 += 1) /* same iter space */
                    {
                        arr_32 [i_0] [i_9] [i_2] = var_4;
                        arr_33 [i_9] = 34;
                        var_26 += 255;
                        var_27 = ((var_7 ? 1 : -6550387069789412074));
                        var_28 = var_2;
                    }
                    for (int i_10 = 3; i_10 < 10;i_10 += 1) /* same iter space */
                    {
                        var_29 = (min(6550387069789412086, var_8));
                        var_30 = -25214;
                        var_31 ^= -7681155458897556582;
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_11 = 2; i_11 < 8;i_11 += 1) /* same iter space */
    {
        var_32 = var_4;
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 11;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                for (int i_14 = 3; i_14 < 10;i_14 += 1)
                {
                    {

                        for (int i_15 = 2; i_15 < 10;i_15 += 1)
                        {
                            arr_51 [i_11] [i_12] [i_13] [i_14] [i_15 - 2] = (var_4 ? var_5 : ((var_9 ? var_4 : 549755813887)));
                            var_33 ^= ((var_1 ? ((var_14 ? var_3 : 4248004467728850842)) : (((227847463803513126 ? 52 : 1322567518)))));
                            var_34 = var_7;
                            arr_52 [i_12] [1] [i_11] |= var_14;
                            arr_53 [i_13] = -549755813888;
                        }
                        arr_54 [i_11] [i_12] [i_13] = 2097151;
                        var_35 = var_5;
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_16 = 0; i_16 < 11;i_16 += 1)
        {
            for (int i_17 = 2; i_17 < 9;i_17 += 1)
            {
                {
                    var_36 *= var_4;
                    var_37 = var_5;
                }
            }
        }
    }
    #pragma endscop
}
